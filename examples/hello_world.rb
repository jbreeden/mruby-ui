UI.init(UI::InitOptions.new)

w = UI.newWindow("Hello", 320, 240, 0)
UI.windowSetMargined(w, 1)

UI.windowOnClosing(w) do
  UI.quit
end

b = UI.newVerticalBox()
UI.boxSetPadded(b, 1)
UI.windowSetChild(w, b)

e = UI.newMultilineEntry()
UI.multilineEntryAppend(e, "test\n")
UI.multilineEntryAppend(e, "test1\n")
UI.multilineEntryAppend(e, "test2\n")

UI.multilineEntryOnChanged(e) { puts "changed!" }

UI.multilineEntrySetReadOnly(e, 0)

btn = UI.newButton("Say something")
UI.boxAppend(b, btn, 0)
UI.buttonOnClicked(btn) do
    UI.multilineEntryAppend(e, "Saying something\n")
end

UI.boxAppend(b, e, 1)

UI.controlShow(w)
UI.main()


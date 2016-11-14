UI.init(UI::InitOptions.new)

w = UI::Window.new("Hello", 320, 240, 0)
w.setMargined(1)

w.onClosing do
  UI.quit
end

b = UI::Box.newVertical()
b.setPadded(1)
w.setChild(b)

e = UI::MultilineEntry.new()
e.append("test\n")
e.append("test1\n")
e.append("test2\n")

e.onChanged { puts "changed!" }

e.setReadOnly(0)

btn = UI::Button.new("Say something")
b.append(btn, 0)
btn.onClicked {
    e.append("Saying something\n")
}

b.append(e, 1)

w.show
UI.main


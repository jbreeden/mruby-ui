def make_destroy_panel
  hbox = UI::Box.newHorizontal
  hbox.setPadded(true)

  destroy_button = UI::Button.new("Destroy")
  hbox.append(destroy_button, true)

  hbox.append(UI::Separator.newVertical, false)

  other_button = UI::Button.new("Other")
  hbox.append(other_button, false)

  destroy_button.onClicked {
    hbox.delete(2)
    #other_button.setParent(nil)
    other_button.destroy
    #other_button.hide
  }

  hbox
end

options = UI::InitOptions.new
UI.init(options)

$mainwin = UI::Window.new("libui Control Gallery", 640, 480, 1)

$mainwin.onClosing {
  puts "On closing"
  UI.quit
  1
}

UI.onShouldQuit do
  puts "Should quit"
  UI.controlDestroy($mainwin)
  1
end

$mainwin.setChild(make_destroy_panel)
$mainwin.setMargined(true)

$mainwin.show
UI.main()

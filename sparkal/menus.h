// Function in module: Menus.obj
// FUNCTION: COPTER_D 0x0049e290
int32_t UserMenuWindow::GetSelectionIndex() {

	return this->nCurrentSelection;
}

// Function in module: Menus.obj
// FUNCTION: COPTER_D 0x0049e2b0
int32_t UserMenuWindow::GetSelectionValue() {

	return (this->myUserMenuWindowDescription.lSelectionBase + this->nCurrentSelection);
}


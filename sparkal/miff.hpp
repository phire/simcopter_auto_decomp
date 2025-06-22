// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004ac9c0
long MIFF::GetPresentRecordType() {

	return this->lPresentRecordType;
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004ac9e0
long MIFF::GetPresentRecordSize() {

	return this->lPresentRecordLength;
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004aca00
long MIFF::GetPresentRecordDataSize() {

	return (this->lPresentRecordLength - 0x8);
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004aca30
long MIFF::GetPresentRecordIndex() {

	return this->lPresentRecordIndex;
}


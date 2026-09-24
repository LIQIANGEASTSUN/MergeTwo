// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameStateSave.SaveAsync 0x113A964; GameStateSave::SaveAsync()
// Image base: 0x10000; Ghidra address: 0114a964; native size hint: 0x36C


int GameStateSave_SaveAsync_0113A964(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(iRam0114a9cc + 0x114a97c);
  if (*pcVar2 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam0114a9d0 + 0x114a990));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x00f6b3c4(**(undefined4 **)(iRam0114a9d4 + 0x114a9a4));
  func_0x030a53ec(iVar1,0);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 0x10) = param_2;
  return iVar1;
}


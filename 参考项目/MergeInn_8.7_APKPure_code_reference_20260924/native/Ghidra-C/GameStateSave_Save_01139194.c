// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameStateSave.Save 0x1139194; public void Save(bool forced = false) {
// Image base: 0x10000; Ghidra address: 01149194; native size hint: 0x80


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameStateSave_Save_01139194(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01149214 + 0x11491ac);
  if (*pcVar2 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_01149218 + 0x11491c0));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    return;
  }
  uVar1 = func_0x0114a964(param_1,param_2);
  if (*(int *)(**(int **)(_UNK_0114921c + 0x11491f0) + 0x74) == 0) {
    func_0x00f6b294();
  }
  uVar1 = func_0x02008194(uVar1,0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}


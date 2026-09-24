// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameStateSave.AddItem 0x1139020; GameStateSave::AddItem()
// Image base: 0x10000; Ghidra address: 01149020; native size hint: 0x174


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameStateSave_AddItem_01139020
               (int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  pcVar5 = (char *)(iRam01149180 + 0x1149050);
  if (*pcVar5 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam01149184 + 0x114907c));
    func_0x00f6b160(*(undefined4 *)(iRam01149188 + 0x1149088));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x00f6b3c4(**(undefined4 **)(iRam0114918c + 0x114909c));
  func_0x0114f264(iVar1,0);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  *(undefined1 *)(iVar1 + 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0x14) = param_5;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + 0x2c) = param_9;
  *(undefined4 *)(iVar1 + 0x28) = param_8;
  *(undefined4 *)(iVar1 + 0x1c) = param_6;
  iVar6 = *(int *)(param_1 + 0xc);
  *(undefined1 *)(iVar1 + 0x18) = param_11;
  *(undefined4 *)(iVar1 + 0x24) = param_7;
  *(undefined4 *)(iVar1 + 0x34) = param_12;
  *(undefined1 *)(iVar1 + 0x30) = param_10;
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  iVar4 = *(int *)(iVar6 + 8);
  uVar7 = *(uint *)(iVar6 + 0xc);
  piVar3 = *(int **)(iRam01149190 + 0x1149128);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  iVar8 = *piVar3;
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  if (uVar7 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(iVar6 + 0xc) = uVar7 + 1;
    *(int *)(iVar4 + uVar7 * 4 + 0x10) = iVar1;
  }
  else {
    func_0x02c02bbc(iVar6,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  pcVar5 = (char *)(_UNK_01149214 + 0x11491ac);
  if (*pcVar5 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_01149218 + 0x11491c0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    return;
  }
  uVar2 = func_0x0114a964(param_1,0);
  if (*(int *)(**(int **)(_UNK_0114921c + 0x11491f0) + 0x74) == 0) {
    func_0x00f6b294();
  }
  uVar2 = func_0x02008194(uVar2,0);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}


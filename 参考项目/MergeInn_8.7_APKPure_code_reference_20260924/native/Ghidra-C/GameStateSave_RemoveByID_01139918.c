// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameStateSave.RemoveByID 0x1139918; GameStateSave::RemoveByID()
// Image base: 0x10000; Ghidra address: 01149918; native size hint: 0x20C


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameStateSave_RemoveByID_01139918(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar3 = (char *)(iRam01149ae4 + 0x1149930);
  if (*pcVar3 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam01149ae8 + 0x1149944));
    func_0x00f6b160(*(undefined4 *)(iRam01149aec + 0x1149950));
    func_0x00f6b160(*(undefined4 *)(iRam01149af0 + 0x114995c));
    func_0x00f6b160(*(undefined4 *)(iRam01149af4 + 0x1149968));
    func_0x00f6b160(*(undefined4 *)(iRam01149af8 + 0x1149974));
    func_0x00f6b160(*(undefined4 *)(iRam01149afc + 0x1149980));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x00f6b3c4(**(undefined4 **)(iRam01149b00 + 0x1149994));
  func_0x030a53ec(iVar1,0);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  puVar5 = *(undefined4 **)(iRam01149b04 + 0x11499bc);
  iVar4 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 8) = param_2;
  uVar2 = func_0x00f6b3c4(*puVar5);
  func_0x01ddde88(uVar2,iVar1,**(undefined4 **)(iRam01149b08 + 0x11499e0),0);
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  puVar6 = *(undefined4 **)(iRam01149b0c + 0x1149a08);
  iVar4 = func_0x02c03288(iVar4,uVar2,*puVar6);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    iVar4 = *(int *)(iVar4 + 8);
    uVar2 = func_0x00f6b3c4(*puVar5);
    func_0x01ddde88(uVar2,iVar1,**(undefined4 **)(iRam01149b10 + 0x1149a74),0);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    iVar4 = func_0x02c03288(iVar4,uVar2,*puVar6);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x00f6b3d0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x00f6b3d0();
    }
    uVar2 = **(undefined4 **)(iRam01149b14 + 0x1149acc);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x00f6b3d0();
    }
    uVar2 = **(undefined4 **)(iRam01149b18 + 0x1149a38);
  }
  func_0x02c042ac(iVar1,iVar4,uVar2);
  pcVar3 = (char *)(_UNK_01149214 + 0x11491ac);
  if (*pcVar3 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_01149218 + 0x11491c0));
    *pcVar3 = '\x01';
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


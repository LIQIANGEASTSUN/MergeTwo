// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.Unlock 0x10D2960; public Item Unlock(Item item) {
// Image base: 0x10000; Ghidra address: 010e2960; native size hint: 0x284


void GameState_Unlock_010D2960(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  pcVar4 = (char *)(iRam010e2bb4 + 0x10e297c);
  if (*pcVar4 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010e2bb8 + 0x10e2990));
    func_0x00f6b160(*(undefined4 *)(iRam010e2bbc + 0x10e299c));
    func_0x00f6b160(*(undefined4 *)(iRam010e2bc0 + 0x10e29a8));
    func_0x00f6b160(*(undefined4 *)(iRam010e2bc4 + 0x10e29b4));
    func_0x00f6b160(*(undefined4 *)(iRam010e2bc8 + 0x10e29c0));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
    func_0x00f6b3d0();
  }
  if (*(char *)(param_2 + 0x38) == '\0') {
    uVar1 = func_0x01119ad0(param_2,0);
    uVar1 = func_0x02e99740(**(undefined4 **)(iRam010e2bcc + 0x10e2a00),uVar1,0);
    uVar2 = func_0x00f6b3c4(**(undefined4 **)(iRam010e2bd0 + 0x10e2a14));
    func_0x0152e284(uVar2,uVar1,0);
    if (*(int *)(**(int **)(iRam010e2bd4 + 0x10e2a34) + 0x74) == 0) {
      func_0x00f6b294();
    }
    func_0x0200818c(uVar2,0);
  }
  iVar3 = func_0x011198d8(param_2,0);
  if (iVar3 == 0) {
    uVar1 = func_0x00f6b3c4(**(undefined4 **)(iRam010e2bd8 + 0x10e2a7c));
    func_0x0309903c(uVar1,**(undefined4 **)(iRam010e2bdc + 0x10e2a94),0);
    if (*(int *)(**(int **)(iRam010e2be0 + 0x10e2aa8) + 0x74) == 0) {
      func_0x00f6b294();
    }
    func_0x0200818c(uVar1,0);
    iVar6 = *(int *)(param_2 + 0x10);
    func_0x00f6b3d0();
  }
  else {
    iVar6 = *(int *)(param_2 + 0x10);
  }
  iVar5 = *(int *)(iVar3 + 8);
  uVar1 = func_0x01119de8(iVar3,0);
  if (iVar5 == 0) {
    func_0x00f6b3d0();
  }
  iVar3 = func_0x010dd824(iVar5,uVar1);
  if (iVar3 == 0) {
    func_0x00f6b3d0();
  }
  iVar3 = *(int *)(iVar3 + 0x18);
  func_0x010f1108(param_1,param_2,0,0,0,0,0);
  func_0x010f2b14(param_1,iVar6);
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  func_0x010dcc80(iVar6,0);
  if (iVar3 == 0) {
    func_0x00f6b3d0();
  }
  GameState_AddItem_010D8708
            (param_1,iVar3,*(undefined1 *)(iVar3 + 0x1c),iVar6,1,*(undefined4 *)(param_1 + 0x44),0,0
             ,0,1,0xffffffff,0,0,0xffffffff,0);
  return;
}


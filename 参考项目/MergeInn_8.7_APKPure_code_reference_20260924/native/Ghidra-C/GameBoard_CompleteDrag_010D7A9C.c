// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameBoard.CompleteDrag 0x10D7A9C; GameBoard::<OnPointerUp>g__CompleteDrag|65_0()
// Image base: 0x10000; Ghidra address: 010e7a9c; native size hint: 0x224


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameBoard_CompleteDrag_010D7A9C(int param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(iRam010e7c9c + 0x10e7ab4);
  if (*pcVar2 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010e7ca0 + 0x10e7ac8));
    func_0x00f6b160(*(undefined4 *)(iRam010e7ca4 + 0x10e7ad4));
    func_0x00f6b160(*(undefined4 *)(iRam010e7ca8 + 0x10e7ae0));
    func_0x00f6b160(*(undefined4 *)(iRam010e7cac + 0x10e7aec));
    *pcVar2 = '\x01';
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    piVar5 = *(int **)(iRam010e7cb0 + 0x10e7b0c);
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x00f6b294();
    }
    iVar1 = func_0x01034b74(uVar3,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 0) {
        func_0x00f6b3d0();
      }
      uVar3 = *(undefined4 *)(iVar1 + 0x10);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar1 = func_0x01034b74(uVar3,0,0);
      if (iVar1 != 0) {
        uVar3 = *(undefined4 *)(param_2 + 4);
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x00f6b294();
        }
        iVar1 = func_0x01034b74(uVar3,0,0);
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0x40);
          if (iVar1 == 0) {
            func_0x00f6b3d0();
          }
          uVar3 = *(undefined4 *)(param_2 + 4);
          uVar4 = *(undefined4 *)(iVar1 + 0x10);
          if (*(int *)(*piVar5 + 0x74) == 0) {
            func_0x00f6b294();
          }
          iVar1 = func_0x01034b74(uVar4,uVar3,0);
          if ((iVar1 != 0) && (iVar1 = func_0x010e84d4(param_1), iVar1 == 0)) {
            uVar3 = func_0x00f6b3c4(**(undefined4 **)(iRam010e7cb4 + 0x10e7c08));
            func_0x0309903c(uVar3,**(undefined4 **)(iRam010e7cb8 + 0x10e7c20),0);
            if (*(int *)(**(int **)(iRam010e7cbc + 0x10e7c34) + 0x74) == 0) {
              func_0x00f6b294();
            }
            func_0x0200818c(uVar3,0);
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x0111cc08(*(int *)(param_1 + 0x40),0);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  func_0x010d7f4c(iVar1);
  pcVar2 = (char *)(_UNK_010e3258 + 0x10e31d0);
  if (*pcVar2 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_010e325c + 0x10e31e4));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e3260 + 0x10e31f0));
    *pcVar2 = '\x01';
  }
  func_0x015063cc(*(undefined4 *)(param_1 + 0x48),0,0);
  uVar3 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010e3264 + 0x10e3214));
  func_0x01590ef4(uVar3,param_1,**(undefined4 **)(_UNK_010e3268 + 0x10e3230),0,unaff_r4,unaff_r5,
                  unaff_r11,unaff_lr);
  uVar3 = func_0x01597488(0x40400000,uVar3,1,0);
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  return;
}


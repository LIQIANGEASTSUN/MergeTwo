// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameBoard.TryToPutBack 0x10D84D4; GameBoard::<OnPointerUp>g__TryToPutBack|65_3()
// Image base: 0x10000; Ghidra address: 010e84d4; native size hint: 0x1E8


int GameBoard_TryToPutBack_010D84D4(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  pcVar1 = (char *)(iRam010e8688 + 0x10e84e8);
  if (*pcVar1 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010e868c + 0x10e84fc));
    func_0x00f6b160(*(undefined4 *)(iRam010e8690 + 0x10e8508));
    func_0x00f6b160(*(undefined4 *)(iRam010e8694 + 0x10e8514));
    func_0x00f6b160(*(undefined4 *)(iRam010e8698 + 0x10e8520));
    func_0x00f6b160(*(undefined4 *)(iRam010e869c + 0x10e852c));
    func_0x00f6b160(*(undefined4 *)(iRam010e86a0 + 0x10e8538));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    func_0x00f6b3d0();
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x10);
  if (*(int *)(**(int **)(iRam010e86a4 + 0x10e855c) + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar2 = func_0x020081fc(uVar3,0);
  if (iVar2 == 0) {
    uVar3 = func_0x00f6b3c4(**(undefined4 **)(iRam010e86b0 + 0x10e8638));
    func_0x015334c8(uVar3,**(undefined4 **)(iRam010e86b4 + 0x10e8650),0);
    if (*(int *)(**(int **)(iRam010e86b8 + 0x10e8664) + 0x74) == 0) {
      func_0x00f6b294();
    }
    func_0x0200818c(uVar3,0);
  }
  else {
    piVar4 = *(int **)(param_1 + 0x40);
    if (piVar4 == (int *)0x0) {
      func_0x00f6b3d0();
    }
    (**(code **)(*piVar4 + 0x148))(piVar4,piVar4[4],0,*(undefined4 *)(*piVar4 + 0x14c));
    iVar5 = *(int *)(param_1 + 0x40);
    if (iVar5 == 0) {
      func_0x00f6b3d0();
    }
    func_0x010e417c(param_1,*(undefined4 *)(iVar5 + 0x10));
    piVar4 = *(int **)(iRam010e86a8 + 0x10e85dc);
    iVar5 = *piVar4;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x00f6b294();
      iVar5 = *piVar4;
    }
    uVar3 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x2c);
    if (*(int *)(**(int **)(iRam010e86ac + 0x10e85fc) + 0x74) == 0) {
      func_0x00f6b294(**(int **)(iRam010e86ac + 0x10e85fc));
    }
    func_0x011eea64(uVar3,0x3f800000,0);
  }
  return iVar2;
}


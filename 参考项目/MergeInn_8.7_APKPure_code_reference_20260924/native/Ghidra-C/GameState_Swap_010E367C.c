// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.Swap 0x10E367C; GameState::Swap()
// Image base: 0x10000; Ghidra address: 010f367c; native size hint: 0x2A0


undefined4 GameState_Swap_010E367C(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(iRam010f3900 + 0x10f3698);
  if (*pcVar2 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f3904 + 0x10f36ac));
    func_0x00f6b160(*(undefined4 *)(iRam010f3908 + 0x10f36b8));
    func_0x00f6b160(*(undefined4 *)(iRam010f390c + 0x10f36c4));
    *pcVar2 = '\x01';
  }
  piVar4 = *(int **)(iRam010f3910 + 0x10f36d8);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x00f6b294();
  }
  uVar5 = 0;
  iVar1 = func_0x02007e9c(param_3,0,0);
  if (iVar1 == 0) {
    if (param_3 == (int *)0x0) {
      func_0x00f6b3d0();
    }
    iVar1 = param_3[4];
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x00f6b294();
    }
    uVar5 = 0;
    iVar1 = func_0x02007e9c(iVar1,0,0);
    if (iVar1 == 0) {
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x00f6b294();
      }
      uVar5 = 0;
      iVar1 = func_0x02007e9c(param_2,0,0);
      if (iVar1 == 0) {
        if (param_2 == 0) {
          func_0x00f6b3d0();
        }
        uVar3 = *(undefined4 *)(param_2 + 0x24);
        if (*(int *)(*piVar4 + 0x74) == 0) {
          func_0x00f6b294();
        }
        uVar5 = 0;
        iVar1 = func_0x02007e9c(uVar3,0,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_2 + 0x24);
          if (iVar1 == 0) {
            func_0x00f6b3d0();
          }
          uVar5 = 0;
          iVar1 = func_0x0111947c(iVar1,0);
          if (iVar1 != 0) {
            iVar1 = param_3[4];
            piVar4 = *(int **)(param_2 + 0x24);
            (**(code **)(*param_3 + 0x108))(param_3,param_2,0,*(undefined4 *)(*param_3 + 0x10c));
            func_0x010dcc80(param_2,param_3);
            (**(code **)(*param_3 + 0x148))(param_3,param_2,0,*(undefined4 *)(*param_3 + 0x14c));
            if (piVar4 == (int *)0x0) {
              func_0x00f6b3d0();
            }
            (**(code **)(*piVar4 + 0x108))(piVar4,iVar1,0,*(undefined4 *)(*piVar4 + 0x10c));
            if (iVar1 == 0) {
              func_0x00f6b3d0();
            }
            func_0x010dcc80(iVar1,piVar4);
            (**(code **)(*piVar4 + 0x148))(piVar4,iVar1,0,*(undefined4 *)(*piVar4 + 0x14c));
            func_0x010e41b8(param_1,param_3);
            func_0x010e41b8(param_1,piVar4);
            piVar4 = *(int **)(iRam010f3914 + 0x10f38a8);
            iVar1 = *piVar4;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x00f6b294();
              iVar1 = *piVar4;
            }
            uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x2c);
            if (*(int *)(**(int **)(iRam010f3918 + 0x10f38c8) + 0x74) == 0) {
              func_0x00f6b294(**(int **)(iRam010f3918 + 0x10f38c8));
            }
            func_0x011eea64(uVar5,0x3f800000,0);
            uVar5 = 1;
          }
        }
      }
    }
  }
  return uVar5;
}


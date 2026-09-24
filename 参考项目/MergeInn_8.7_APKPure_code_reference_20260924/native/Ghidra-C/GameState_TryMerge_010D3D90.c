// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.TryMerge 0x10D3D90; public bool TryMerge(Cell targetCell, Item draggedItem) {
// Image base: 0x10000; Ghidra address: 010e3d90; native size hint: 0x3EC


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_TryMerge_010D3D90(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  pcVar7 = (char *)(iRam010e4120 + 0x10e3dac);
  if (*pcVar7 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010e4124 + 0x10e3dc0));
    func_0x00f6b160(*(undefined4 *)(iRam010e4128 + 0x10e3dcc));
    func_0x00f6b160(*(undefined4 *)(iRam010e412c + 0x10e3dd8));
    func_0x00f6b160(*(undefined4 *)(iRam010e4130 + 0x10e3de4));
    func_0x00f6b160(*(undefined4 *)(iRam010e4134 + 0x10e3df0));
    func_0x00f6b160(*(undefined4 *)(iRam010e4138 + 0x10e3dfc));
    func_0x00f6b160(*(undefined4 *)(iRam010e413c + 0x10e3e08));
    func_0x00f6b160(*(undefined4 *)(iRam010e4140 + 0x10e3e14));
    func_0x00f6b160(*(undefined4 *)(iRam010e4144 + 0x10e3e20));
    func_0x00f6b160(*(undefined4 *)(iRam010e4148 + 0x10e3e2c));
    func_0x00f6b160(*(undefined4 *)(iRam010e414c + 0x10e3e38));
    *pcVar7 = '\x01';
  }
  piVar3 = *(int **)(iRam010e4150 + 0x10e3e4c);
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar1 = func_0x02007e9c(param_2,0,0);
  if (iVar1 == 0) {
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x00f6b294();
    }
    iVar1 = func_0x02007e9c(param_3,0,0);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        func_0x00f6b3d0();
      }
      if (*(char *)(param_2 + 0x28) == '\0') {
        iVar1 = *(int *)(param_2 + 0x24);
        if (iVar1 == 0) {
          func_0x00f6b3d0();
        }
        iVar1 = *(int *)(iVar1 + 0x34);
        if (param_3 == (int *)0x0) {
          func_0x00f6b3d0();
        }
        if (iVar1 == param_3[0xd]) goto LAB_010e3f00;
      }
      else if (param_3 == (int *)0x0) {
        func_0x00f6b3d0();
      }
      if ((char)param_3[0xe] == '\0') {
        if (*(char *)(param_2 + 0x28) == '\0') {
          iVar1 = *(int *)(param_2 + 0x24);
          if (iVar1 == 0) {
            func_0x00f6b3d0();
          }
          iVar1 = *(int *)(iVar1 + 0x84);
          if (iVar1 == 0) {
            func_0x00f6b3d0();
          }
          if (*(int *)(iVar1 + 0x4c) == 5) goto LAB_010e3f00;
        }
        iVar1 = func_0x010f2c84(param_1,param_2,param_3);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = func_0x010f2ec4(param_1,param_2,param_3);
        if (iVar1 != 0) {
          iVar1 = *(int *)(*(int *)(**(int **)(iRam010e416c + 0x10e408c) + 0x5c) + 4);
          if (iVar1 == 0) {
            func_0x00f6b3d0();
          }
          func_0x0153e318(iVar1,0);
          iVar1 = **(int **)(**(int **)(iRam010e4170 + 0x10e40b8) + 0x5c);
          if (iVar1 == 0) {
            func_0x00f6b3d0();
          }
          if (*(int *)(iVar1 + 0x10c) != 0) {
            return 1;
          }
          if (*(int *)(**(int **)(iRam010e4174 + 0x10e40e4) + 0x74) == 0) {
            func_0x00f6b294();
          }
          func_0x0114e8ec(**(undefined4 **)(iRam010e4178 + 0x10e4104),0);
          return 1;
        }
        pcVar7 = (char *)(_UNK_010f3900 + 0x10f3698);
        if (*pcVar7 == '\0') {
          func_0x00f6b160(*(undefined4 *)(_UNK_010f3904 + 0x10f36ac));
          func_0x00f6b160(*(undefined4 *)(_UNK_010f3908 + 0x10f36b8));
          func_0x00f6b160(*(undefined4 *)(_UNK_010f390c + 0x10f36c4));
          *pcVar7 = '\x01';
        }
        piVar3 = *(int **)(_UNK_010f3910 + 0x10f36d8);
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x00f6b294();
        }
        uVar2 = 0;
        iVar1 = func_0x02007e9c(param_3,0,0);
        if (iVar1 == 0) {
          if (param_3 == (int *)0x0) {
            func_0x00f6b3d0();
          }
          iVar1 = param_3[4];
          if (*(int *)(*piVar3 + 0x74) == 0) {
            func_0x00f6b294();
          }
          uVar2 = 0;
          iVar1 = func_0x02007e9c(iVar1,0,0);
          if (iVar1 == 0) {
            if (*(int *)(*piVar3 + 0x74) == 0) {
              func_0x00f6b294();
            }
            uVar2 = 0;
            iVar1 = func_0x02007e9c(param_2,0,0);
            if (iVar1 == 0) {
              if (param_2 == 0) {
                func_0x00f6b3d0();
              }
              uVar5 = *(undefined4 *)(param_2 + 0x24);
              if (*(int *)(*piVar3 + 0x74) == 0) {
                func_0x00f6b294();
              }
              uVar2 = 0;
              iVar1 = func_0x02007e9c(uVar5,0,0);
              if (iVar1 == 0) {
                iVar1 = *(int *)(param_2 + 0x24);
                if (iVar1 == 0) {
                  func_0x00f6b3d0();
                }
                uVar2 = 0;
                iVar1 = func_0x0111947c(iVar1,0);
                if (iVar1 != 0) {
                  iVar1 = param_3[4];
                  piVar3 = *(int **)(param_2 + 0x24);
                  (**(code **)(*param_3 + 0x108))
                            (param_3,param_2,0,*(undefined4 *)(*param_3 + 0x10c));
                  func_0x010dcc80(param_2,param_3);
                  (**(code **)(*param_3 + 0x148))
                            (param_3,param_2,0,*(undefined4 *)(*param_3 + 0x14c));
                  if (piVar3 == (int *)0x0) {
                    func_0x00f6b3d0();
                  }
                  (**(code **)(*piVar3 + 0x108))(piVar3,iVar1,0,*(undefined4 *)(*piVar3 + 0x10c));
                  if (iVar1 == 0) {
                    func_0x00f6b3d0();
                  }
                  func_0x010dcc80(iVar1,piVar3);
                  (**(code **)(*piVar3 + 0x148))(piVar3,iVar1,0,*(undefined4 *)(*piVar3 + 0x14c));
                  func_0x010e41b8(param_1,param_3);
                  func_0x010e41b8(param_1,piVar3);
                  piVar3 = *(int **)(_UNK_010f3914 + 0x10f38a8);
                  iVar1 = *piVar3;
                  if (*(int *)(iVar1 + 0x74) == 0) {
                    func_0x00f6b294();
                    iVar1 = *piVar3;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x2c);
                  if (*(int *)(**(int **)(_UNK_010f3918 + 0x10f38c8) + 0x74) == 0) {
                    func_0x00f6b294(**(int **)(_UNK_010f3918 + 0x10f38c8));
                  }
                  func_0x011eea64(uVar2,0x3f800000,0);
                  uVar2 = 1;
                }
              }
            }
          }
        }
        return uVar2;
      }
    }
  }
LAB_010e3f00:
  iVar1 = func_0x00f6b3c4(**(undefined4 **)(iRam010e4154 + 0x10e3f0c));
  func_0x010fed9c(iVar1,0);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  iVar6 = *(int *)(param_1 + 0x3c);
  uVar2 = **(undefined4 **)(iRam010e4158 + 0x10e3f34);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  iVar6 = func_0x0113468c(iVar6,0);
  puVar4 = *(undefined4 **)(iRam010e415c + 0x10e3f68);
  uVar2 = func_0x00f6b3c4(*puVar4);
  func_0x025b6648(uVar2,iVar1,**(undefined4 **)(iRam010e4160 + 0x10e3f84),0);
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  puVar8 = *(undefined4 **)(iRam010e4164 + 0x10e3fac);
  func_0x02c03798(iVar6,uVar2,*puVar8);
  iVar6 = *(int *)(param_1 + 0x3c);
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  iVar6 = *(int *)(iVar6 + 0xc);
  uVar2 = func_0x00f6b3c4(*puVar4);
  func_0x025b6648(uVar2,iVar1,**(undefined4 **)(iRam010e4168 + 0x10e3fe8),0);
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  func_0x02c03798(iVar6,uVar2,*puVar8);
  return 0;
}


// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameBoard.FieldInteraction 0x10D7F24; GameBoard::<OnPointerUp>g__FieldInteraction|65_2()
// Image base: 0x10000; Ghidra address: 010e7f24; native size hint: 0x5B0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameBoard_FieldInteraction_010D7F24(int param_1,int param_2,int param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  float fStack_44;
  float fStack_40;
  
  pcVar4 = (char *)(iRam010e84a8 + 0x10e7f4c);
  if (*pcVar4 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010e84ac + 0x10e7f60));
    func_0x00f6b160(*(undefined4 *)(iRam010e84b0 + 0x10e7f6c));
    func_0x00f6b160(*(undefined4 *)(iRam010e84b4 + 0x10e7f78));
    func_0x00f6b160(*(undefined4 *)(iRam010e84b8 + 0x10e7f84));
    func_0x00f6b160(*(undefined4 *)(iRam010e84bc + 0x10e7f90));
    *pcVar4 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  iVar6 = func_0x010e3d90(iVar6,param_2,uVar5);
  if (iVar6 != 0) {
    func_0x010e2928(param_1);
    func_0x010e417c(param_1,param_2);
    piVar7 = *(int **)(param_1 + 0x40);
    if (piVar7 == (int *)0x0) {
      func_0x00f6b3d0();
    }
    iVar6 = func_0x02007eac(piVar7,0);
    if (iVar6 == 0) {
      func_0x00f6b3d0();
    }
    func_0x020081a4(&fStack_44,iVar6,0);
    fVar3 = fStack_40;
    fVar2 = fStack_44;
    if (param_2 == 0) {
      func_0x00f6b3d0();
    }
    iVar6 = func_0x02007eac(param_2,0);
    if (iVar6 == 0) {
      func_0x00f6b3d0();
    }
    func_0x020081a4(&fStack_44,iVar6,0);
    if (piVar7 == (int *)0x0) {
      func_0x00f6b3d0();
    }
    (**(code **)(*piVar7 + 0x130))
              (piVar7,0,fVar2 - fStack_44,fVar3 - fStack_40,*(undefined4 *)(*piVar7 + 0x134));
LAB_010e809c:
    GameBoard_CompleteDrag_010D7A9C(param_1,param_3);
    return;
  }
  iVar6 = *(int *)(param_1 + 0x40);
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  piVar7 = *(int **)(iRam010e84c0 + 0x10e80d4);
  uVar5 = *(undefined4 *)(iVar6 + 0x10);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar6 = func_0x020081fc(uVar5,0);
  if (iVar6 != 0) {
    iVar6 = func_0x010e84d4(param_1);
    if (iVar6 == 0) {
      uVar5 = func_0x00f6b3c4(**(undefined4 **)(iRam010e84c8 + 0x10e8118));
      func_0x015334c8(uVar5,**(undefined4 **)(iRam010e84cc + 0x10e8130),0);
      if (*(int *)(**(int **)(iRam010e84d0 + 0x10e8144) + 0x74) == 0) {
        func_0x00f6b294();
      }
      func_0x0200818c(uVar5,0);
    }
    if (param_2 == 0) {
      func_0x00f6b3d0();
    }
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    uVar8 = *(undefined4 *)(param_2 + 0x24);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x00f6b294();
    }
    iVar6 = func_0x01034b74(uVar8,uVar5,0);
    if ((iVar6 != 0) && (iVar6 = func_0x010dd230(param_2), iVar6 != 0)) {
      func_0x010e417c(param_1,param_2);
      piVar9 = *(int **)(param_1 + 0x40);
      cVar1 = *(char *)(param_1 + 0x30);
      if (piVar9 == (int *)0x0) {
        func_0x00f6b3d0();
      }
      iVar6 = func_0x02007eac(piVar9,0);
      if (iVar6 == 0) {
        func_0x00f6b3d0();
      }
      func_0x020081a4(&fStack_44,iVar6,0);
      fVar3 = fStack_40;
      fVar2 = fStack_44;
      iVar6 = func_0x02007eac(param_2,0);
      if (iVar6 == 0) {
        func_0x00f6b3d0();
      }
      func_0x020081a4(&fStack_44,iVar6,0);
      if (piVar9 == (int *)0x0) {
        func_0x00f6b3d0();
      }
      (**(code **)(*piVar9 + 0x130))
                (piVar9,cVar1 == '\0',fVar2 - fStack_44,fVar3 - fStack_40,
                 *(undefined4 *)(*piVar9 + 0x134));
    }
    uVar5 = *(undefined4 *)(param_2 + 0x24);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x00f6b294();
    }
    iVar6 = func_0x01034b74(uVar5,0,0);
    if ((iVar6 != 0) && (iVar6 = func_0x010dd230(param_2), iVar6 == 0)) {
      iVar6 = *(int *)(param_1 + 0x40);
      if (iVar6 == 0) {
        func_0x00f6b3d0();
      }
      *(undefined1 *)(iVar6 + 0x31) = 0;
      func_0x010e3018(param_1,1);
      iVar6 = *(int *)(param_1 + 0x54);
      if (iVar6 == 0) {
        func_0x00f6b3d0();
      }
      (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar6 + 0x20),0,*(undefined4 *)(iVar6 + 0x14));
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    goto LAB_010e809c;
  }
  if (param_2 == 0) {
    func_0x00f6b3d0();
  }
  iVar6 = *(int *)(param_2 + 0x24);
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  iVar6 = func_0x0111947c(iVar6,0);
  if (iVar6 != 0) {
    iVar6 = *(int *)(param_2 + 0x24);
    if (iVar6 == 0) {
      func_0x00f6b3d0();
    }
    iVar6 = *(int *)(iVar6 + 0x84);
    if (iVar6 == 0) {
      func_0x00f6b3d0();
    }
    iVar6 = *(int *)(iVar6 + 8);
    if (iVar6 == 0) {
      func_0x00f6b3d0();
    }
    iVar6 = func_0x02ea7244(*(undefined4 *)(iVar6 + 0x18),
                            **(undefined4 **)(iRam010e84c4 + 0x10e8384),0);
    if (iVar6 != 0) {
      iVar6 = *(int *)(param_2 + 0x24);
      if (iVar6 == 0) {
        func_0x00f6b3d0();
      }
      iVar6 = *(int *)(iVar6 + 0x84);
      if (iVar6 == 0) {
        func_0x00f6b3d0();
      }
      if (*(char *)(iVar6 + 0x74) == '\0') {
        func_0x010e2928(param_1);
        func_0x010e2be4(param_1,*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_1 + 0x3c),0);
        piVar7 = *(int **)(param_1 + 0x40);
        if (piVar7 == (int *)0x0) {
          func_0x00f6b3d0();
        }
        (**(code **)(*piVar7 + 0x108))(piVar7,param_2,0,*(undefined4 *)(*piVar7 + 0x10c));
        func_0x010dcc80(param_2,*(undefined4 *)(param_1 + 0x40));
        piVar7 = *(int **)(param_1 + 0x40);
        if (piVar7 == (int *)0x0) {
          func_0x00f6b3d0();
        }
        (**(code **)(*piVar7 + 0x148))(piVar7,param_2,0,*(undefined4 *)(*piVar7 + 0x14c));
        iVar6 = *(int *)(param_1 + 0x28);
        uVar5 = *(undefined4 *)(param_1 + 0x40);
        if (iVar6 == 0) {
          func_0x00f6b3d0();
        }
        iVar6 = func_0x010e41b8(iVar6,uVar5);
        if (iVar6 != 0) {
          func_0x010e417c(param_1,param_2);
        }
        goto code_r0x010e7a9c;
      }
    }
  }
  func_0x010e2be4(param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x3c),0);
code_r0x010e7a9c:
  pcVar4 = (char *)(iRam010e7c9c + 0x10e7ab4);
  if (*pcVar4 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010e7ca0 + 0x10e7ac8));
    func_0x00f6b160(*(undefined4 *)(iRam010e7ca4 + 0x10e7ad4));
    func_0x00f6b160(*(undefined4 *)(iRam010e7ca8 + 0x10e7ae0));
    func_0x00f6b160(*(undefined4 *)(iRam010e7cac + 0x10e7aec));
    *pcVar4 = '\x01';
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    piVar7 = *(int **)(iRam010e7cb0 + 0x10e7b0c);
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x00f6b294();
    }
    iVar6 = func_0x01034b74(uVar5,0,0);
    if (iVar6 != 0) {
      iVar6 = *(int *)(param_1 + 0x40);
      if (iVar6 == 0) {
        func_0x00f6b3d0();
      }
      uVar5 = *(undefined4 *)(iVar6 + 0x10);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar6 = func_0x01034b74(uVar5,0,0);
      if (iVar6 != 0) {
        uVar5 = *(undefined4 *)(param_3 + 4);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x00f6b294();
        }
        iVar6 = func_0x01034b74(uVar5,0,0);
        if (iVar6 != 0) {
          iVar6 = *(int *)(param_1 + 0x40);
          if (iVar6 == 0) {
            func_0x00f6b3d0();
          }
          uVar5 = *(undefined4 *)(param_3 + 4);
          uVar8 = *(undefined4 *)(iVar6 + 0x10);
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x00f6b294();
          }
          iVar6 = func_0x01034b74(uVar8,uVar5,0);
          if ((iVar6 != 0) && (iVar6 = func_0x010e84d4(param_1), iVar6 == 0)) {
            uVar5 = func_0x00f6b3c4(**(undefined4 **)(iRam010e7cb4 + 0x10e7c08));
            func_0x0309903c(uVar5,**(undefined4 **)(iRam010e7cb8 + 0x10e7c20),0);
            if (*(int *)(**(int **)(iRam010e7cbc + 0x10e7c34) + 0x74) == 0) {
              func_0x00f6b294();
            }
            func_0x0200818c(uVar5,0);
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
  iVar6 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (iVar6 == 0) {
    func_0x00f6b3d0();
  }
  func_0x010d7f4c(iVar6);
  pcVar4 = (char *)(_UNK_010e3258 + 0x10e31d0);
  if (*pcVar4 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_010e325c + 0x10e31e4));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e3260 + 0x10e31f0));
    *pcVar4 = '\x01';
  }
  func_0x015063cc(*(undefined4 *)(param_1 + 0x48),0,0);
  uVar5 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010e3264 + 0x10e3214));
  func_0x01590ef4(uVar5,param_1,**(undefined4 **)(_UNK_010e3268 + 0x10e3230),0);
  uVar5 = func_0x01597488(0x40400000,uVar5,1,0);
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  return;
}


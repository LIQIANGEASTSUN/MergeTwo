// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameBoard.OnPointerUp 0x10D72AC; private void OnPointerUp(Cell pointerUpCell, bool pauseBreak) {
// Image base: 0x10000; Ghidra address: 010e72ac; native size hint: 0x4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameBoard_OnPointerUp_010D72AC(int param_1,int *param_2,int param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  float fStack_44;
  float fStack_40;
  int iStack_38;
  int *piStack_34;
  
  pcVar6 = (char *)(_UNK_010e7954 + 0x10e72d0);
  if (*pcVar6 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_010e7958 + 0x10e72e4));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e795c + 0x10e72f0));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e7960 + 0x10e72fc));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e7964 + 0x10e7308));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e7968 + 0x10e7314));
    *pcVar6 = '\x01';
  }
  iStack_38 = param_1;
  piStack_34 = param_2;
  if (*(int *)(param_1 + 0x6c) != 0) {
    func_0x02007f68(param_1,*(int *)(param_1 + 0x6c),0);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    return;
  }
  piVar12 = *(int **)(_UNK_010e796c + 0x10e735c);
  uVar7 = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(*piVar12 + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar4 = func_0x020081fc(uVar7,0);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  if (*(char *)(iVar4 + 0x41) != '\0') {
    cVar1 = *(char *)(param_1 + 0x30);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      func_0x00f6b294();
    }
    iVar4 = func_0x020081fc(param_2,0);
    piVar13 = (int *)0x0;
    if (iVar4 != 0) {
      piVar13 = param_2;
    }
    if (cVar1 != '\0') {
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar4 = func_0x01034b74(piVar13,0,0);
      if (iVar4 != 0) {
LAB_010e7404:
        func_0x010e7f24(param_1,piVar13,&iStack_38);
        return;
      }
      iVar4 = *(int *)(param_1 + 0x40);
      if (iVar4 == 0) {
        func_0x00f6b3d0();
      }
      uVar7 = *(undefined4 *)(iVar4 + 0x10);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar4 = func_0x020081fc(uVar7,0);
      if (((iVar4 != 0) && (iVar4 = func_0x01303360(0), iVar4 == 0)) &&
         (iVar4 = func_0x010e84d4(param_1), iVar4 != 0)) goto LAB_010e793c;
LAB_010e783c:
      func_0x010e7cc0(param_1,&iStack_38);
      return;
    }
    iVar4 = *(int *)(param_1 + 0x40);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    uVar7 = *(undefined4 *)(iVar4 + 0x10);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      func_0x00f6b294();
    }
    iVar4 = func_0x01034b74(uVar7,0,0);
    iVar10 = *(int *)(param_1 + 0x40);
    if (iVar4 == 0) {
      if (iVar10 == 0) {
        func_0x00f6b3d0();
      }
      iVar4 = func_0x0111947c(iVar10,0);
      if ((iVar4 != 0) && (param_3 == 0)) {
        iVar4 = *(int *)(param_1 + 0x40);
        if (iVar4 == 0) {
          func_0x00f6b3d0();
        }
        uVar7 = *(undefined4 *)(iVar4 + 0x10);
        if (*(int *)(*piVar12 + 0x74) == 0) {
          func_0x00f6b294();
        }
        uVar11 = 0;
        iVar4 = func_0x02007e9c(uVar7,0,0);
        if (iVar4 != 0) {
          if (*(int *)(*piVar12 + 0x74) == 0) {
            func_0x00f6b294();
          }
          iVar4 = func_0x01034b74(piVar13,0,0);
          if (iVar4 != 0) {
            if (piVar13 == (int *)0x0) {
              func_0x00f6b3d0();
            }
            iVar4 = piVar13[9];
            if (*(int *)(*piVar12 + 0x74) == 0) {
              func_0x00f6b294();
            }
            iVar4 = func_0x02007e9c(iVar4,0,0);
            if (iVar4 != 0) goto LAB_010e7404;
          }
        }
        uVar7 = **(undefined4 **)(_UNK_010e7970 + 0x10e76e8);
        piVar12 = *(int **)(param_1 + 0x40);
        if (piVar12 != (int *)0x0) {
          uVar11 = (**(code **)(*piVar12 + 0xd8))(piVar12,*(undefined4 *)(*piVar12 + 0xdc));
        }
        uVar5 = 0;
        uVar9 = **(undefined4 **)(_UNK_010e7974 + 0x10e7720);
        if (piVar13 != (int *)0x0) {
          uVar5 = (**(code **)(*piVar13 + 0xd8))(piVar13,*(undefined4 *)(*piVar13 + 0xdc));
        }
        uVar7 = func_0x02ea998c(uVar7,uVar11,uVar9,uVar5,0);
        uVar11 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010e7978 + 0x10e7760));
        func_0x015334c8(uVar11,uVar7,0);
        if (*(int *)(**(int **)(_UNK_010e797c + 0x10e7780) + 0x74) == 0) {
          func_0x00f6b294();
        }
        func_0x0200818c(uVar11,0);
      }
    }
    else {
      if (iVar10 == 0) {
        func_0x00f6b3d0();
      }
      uVar7 = *(undefined4 *)(iVar10 + 0x10);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar4 = func_0x02007e9c(piVar13,uVar7,0);
      if (iVar4 != 0) {
        if (*(int *)(*piVar12 + 0x74) == 0) {
          func_0x00f6b294();
        }
        iVar4 = func_0x01034b74(piVar13,0,0);
        if (iVar4 != 0) {
          iVar4 = *(int *)(param_1 + 0x40);
          if (iVar4 == 0) {
            func_0x00f6b3d0();
          }
          func_0x010e417c(param_1,*(undefined4 *)(iVar4 + 0x10));
          piVar12 = *(int **)(param_1 + 0x40);
          if (piVar12 == (int *)0x0) {
            func_0x00f6b3d0();
          }
          iVar4 = func_0x02007eac(piVar12,0);
          if (iVar4 == 0) {
            func_0x00f6b3d0();
          }
          func_0x020081a4(&fStack_44,iVar4,0);
          fVar3 = fStack_40;
          fVar2 = fStack_44;
          if (piVar13 == (int *)0x0) {
            func_0x00f6b3d0();
          }
          iVar4 = func_0x02007eac(piVar13,0);
          if (iVar4 == 0) {
            func_0x00f6b3d0();
          }
          func_0x020081a4(&fStack_44,iVar4,0);
          if (piVar12 == (int *)0x0) {
            func_0x00f6b3d0();
          }
          (**(code **)(*piVar12 + 0x130))
                    (piVar12,1,fVar2 - fStack_44,fVar3 - fStack_40,*(undefined4 *)(*piVar12 + 0x134)
                    );
          goto LAB_010e793c;
        }
      }
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x00f6b294();
      }
      iVar4 = func_0x01034b74(piVar13,0,0);
      if (iVar4 == 0) goto LAB_010e783c;
      iVar4 = *(int *)(param_1 + 0x40);
      if (iVar4 == 0) {
        func_0x00f6b3d0();
      }
      iVar4 = *(int *)(iVar4 + 0x10);
      if (iVar4 == 0) {
        func_0x00f6b3d0();
      }
      iVar10 = *(int *)(iVar4 + 0x14);
      iVar4 = *(int *)(iVar4 + 0x18);
      if (piVar13 == (int *)0x0) {
        func_0x00f6b3d0();
      }
      iVar4 = iVar4 - piVar13[6];
      iVar8 = *(int *)(param_1 + 0x40);
      iVar10 = iVar10 - piVar13[5];
      if (iVar4 * iVar4 + iVar10 * iVar10 < 3) {
        if (iVar8 == 0) {
          func_0x00f6b3d0();
        }
        func_0x010e417c(param_1,*(undefined4 *)(iVar8 + 0x10));
        piVar12 = *(int **)(param_1 + 0x40);
        if (piVar12 == (int *)0x0) {
          func_0x00f6b3d0();
        }
        iVar4 = func_0x02007eac(piVar12,0);
        if (iVar4 == 0) {
          func_0x00f6b3d0();
        }
        func_0x020081a4(&fStack_44,iVar4,0);
        fVar3 = fStack_40;
        fVar2 = fStack_44;
        iVar4 = *(int *)(param_1 + 0x40);
        if (iVar4 == 0) {
          func_0x00f6b3d0();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x00f6b3d0();
        }
        iVar4 = func_0x02007eac(iVar4,0);
        if (iVar4 == 0) {
          func_0x00f6b3d0();
        }
        func_0x020081a4(&fStack_44,iVar4,0);
        if (piVar12 == (int *)0x0) {
          func_0x00f6b3d0();
        }
        (**(code **)(*piVar12 + 0x130))
                  (piVar12,1,fVar2 - fStack_44,fVar3 - fStack_40,*(undefined4 *)(*piVar12 + 0x134));
      }
      else {
        if (iVar8 == 0) {
          func_0x00f6b3d0();
        }
        func_0x0111947c(iVar8,0);
      }
    }
  }
LAB_010e793c:
  func_0x010e7a9c(param_1,&iStack_38);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bfa5c8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  bool bVar15;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_02bfacac + 0x2bfa5e0);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfacb0 + 0x2bfa5f4));
    func_0x01438628(*(undefined4 *)(_UNK_02bfacb4 + 0x2bfa600));
    func_0x01438628(*(undefined4 *)(_UNK_02bfacb8 + 0x2bfa60c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfacbc + 0x2bfa618));
    func_0x01438628(*(undefined4 *)(_UNK_02bfacc0 + 0x2bfa624));
    func_0x01438628(*(undefined4 *)(_UNK_02bfacc4 + 0x2bfa630));
    func_0x01438628(*(undefined4 *)(_UNK_02bfacc8 + 0x2bfa63c));
    func_0x01438628(*(undefined4 *)(_UNK_02bfaccc + 0x2bfa648));
    func_0x01438628(*(undefined4 *)(_UNK_02bfacd0 + 0x2bfa654));
    func_0x01438628(*(undefined4 *)(_UNK_02bfacd4 + 0x2bfa660));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5ee5,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5ee5,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_30 = 0;
    func_0x024f56c0(&iStack_48,0,0);
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&iStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&iStack_30,param_1,0);
    iVar10 = *(int *)(iVar3 + 8);
    uVar11 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar8 = 2;
    if (iVar3 == 0) {
      uVar8 = 1;
    }
    func_0x024f56d0(iVar10,uVar11,&iStack_30,uVar8,0,0);
    return;
  }
  iVar3 = 4;
  piVar13 = *(int **)(_UNK_02bfacd8 + 0x2bfa6c4);
  puVar14 = *(undefined4 **)(_UNK_02bfacdc + 0x2bfa6cc);
  iStack_34 = 0;
  iStack_40 = 0;
  iStack_38 = 0;
  iStack_30 = 0;
  iStack_3c = 0;
  iStack_2c = 0;
  do {
    iVar10 = *(int *)(param_1 + 0x44);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar12 = iVar3 - 4;
    if (*(int *)(iVar10 + 0xc) <= (int)uVar12) {
      return;
    }
    iVar10 = *(int *)(param_1 + 0x44);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar10 + 0xc) <= uVar12) {
      func_0x014388e8();
    }
    iVar10 = *(int *)(iVar10 + iVar3 * 4);
    if (*(int *)(**(int **)(_UNK_02bface0 + 0x2bfa740) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02bface4 + 0x2bfa760));
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iStack_28 = iVar10;
    uVar11 = func_0x02c3f4b4(iVar10,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x029a6fa8(iVar4,uVar11,0);
    iVar4 = iStack_30;
    iVar10 = iStack_2c;
    if (iVar5 != 0) {
      if (*(int *)(*piVar13 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar10 = func_0x014e9518(*puVar14);
      uVar11 = *(undefined4 *)(param_1 + 0x10);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      uVar6 = FUN_02bd114c(iVar10,uVar12,uVar11,0);
      if (*(int *)(**(int **)(_UNK_02bface8 + 0x2bfa804) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_02bfacec + 0x2bfa820));
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x02c4acc8(iVar10,iVar5,0);
      if ((uVar6 & uVar7) == 1) {
        FUN_02bf5408(param_1,uVar12,iVar5);
        func_0x02bfb4e0(param_1,uVar12);
      }
      if (*(int *)(*piVar13 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar10 = func_0x014e9518(*puVar14);
      iVar4 = *(int *)(param_1 + 0x44);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar12) {
        func_0x014388e8();
      }
      iVar4 = *(int *)(iVar4 + iVar3 * 4);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar11 = func_0x02c3f4b4(iVar4,0);
      iVar4 = *(int *)(param_1 + 0x10);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      uStack_44 = 0;
      iStack_48 = iVar4;
      FUN_02bd8f60(iVar10,uVar11,uVar12,iVar5);
      iVar5 = *(int *)(param_1 + 0x10);
      if (iVar5 == 0x12) {
        if (*(int *)(**(int **)(_UNK_02bfacf8 + 0x2bfa91c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x017d0b50(0);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x017d0f30(iVar10,0);
        iVar10 = iStack_2c;
        piVar13 = *(int **)(_UNK_02bfacfc + 0x2bfa964);
        puVar14 = *(undefined4 **)(_UNK_02bfad00 + 0x2bfa96c);
        if (iVar4 < 1) {
LAB_02bfa984:
          iVar4 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar4 + 0xc);
          if (iVar4 != 0) {
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x02c32b30(iVar4,0,0);
            iStack_3c = iVar4;
          }
        }
        else {
          cVar1 = *(char *)(param_1 + 200);
          bVar15 = cVar1 == '\0';
          if (bVar15) {
            cVar1 = *(char *)(param_1 + 0x84);
          }
          if (!bVar15 || cVar1 != '\0') goto LAB_02bfa984;
          iVar4 = *(int *)(param_1 + 0x50);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar5 = iStack_28;
          if (*(int *)(iVar4 + 0xc) != 0) goto LAB_02bfa984;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar5 + 0xc);
          if (iVar4 != 0) {
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x02c32b30(iVar4,1,0);
            iVar10 = iVar4;
          }
        }
        iVar5 = *(int *)(param_1 + 0x10);
      }
      else {
        piVar13 = *(int **)(_UNK_02bfacf0 + 0x2bfa9ec);
        puVar14 = *(undefined4 **)(_UNK_02bfacf4 + 0x2bfa9f4);
        iVar10 = iStack_2c;
      }
      iVar4 = iStack_30;
      if (iVar5 == 0x15) {
        if (*(int *)(**(int **)(_UNK_02bfad04 + 0x2bfaa04) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x032a3fc4(0);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x032a43a4(iVar4,0);
        if (0 < iVar4) {
          cVar1 = *(char *)(param_1 + 200);
          bVar15 = cVar1 == '\0';
          if (bVar15) {
            cVar1 = *(char *)(param_1 + 0x84);
          }
          if (bVar15 && cVar1 == '\0') {
            iVar4 = *(int *)(param_1 + 0x50);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar5 = iStack_28;
            if (*(int *)(iVar4 + 0xc) == 0) {
              if (iStack_28 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              iVar4 = iStack_30;
              if (iVar5 != 0) {
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                func_0x02c332d8(iVar5,1,0);
                iVar4 = iVar5;
              }
              goto LAB_02bfaab0;
            }
          }
        }
        iVar4 = iStack_28;
        if (iStack_28 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar4 + 0xc);
        iVar4 = iStack_30;
        if (iVar5 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x02c332d8(iVar5,0,0);
          iVar4 = iStack_30;
          iStack_38 = iVar5;
        }
      }
LAB_02bfaab0:
      if (*(int *)(param_1 + 0x10) == 0x18) {
        if (*(int *)(**(int **)(_UNK_02bfad08 + 0x2bfaac8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x018f5b04(0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x018f5ee4(iVar5,0);
        if (0 < iVar5) {
          cVar1 = *(char *)(param_1 + 200);
          bVar15 = cVar1 == '\0';
          if (bVar15) {
            cVar1 = *(char *)(param_1 + 0x84);
          }
          if (bVar15 && cVar1 == '\0') {
            iVar5 = *(int *)(param_1 + 0x50);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar2 = iStack_28;
            if (*(int *)(iVar5 + 0xc) == 0) {
              if (iStack_28 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar2 + 0xc);
              if (iVar5 != 0) {
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                func_0x02c33a80(iVar5,1,0);
                iStack_40 = iVar5;
              }
              goto LAB_02bfab68;
            }
          }
        }
        iVar5 = iStack_28;
        if (iStack_28 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar5 + 0xc);
        if (iVar5 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x02c33a80(iVar5,0,0);
          iStack_34 = iVar5;
        }
      }
    }
LAB_02bfab68:
    iStack_2c = iVar10;
    iStack_30 = iVar4;
    iVar3 = iVar3 + 1;
  } while( true );
}


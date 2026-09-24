
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032af3e4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_032af90c + 0x32af3fc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032af910 + 0x32af410));
    func_0x01438628(*(undefined4 *)(_UNK_032af914 + 0x32af41c));
    func_0x01438628(*(undefined4 *)(_UNK_032af918 + 0x32af428));
    func_0x01438628(*(undefined4 *)(_UNK_032af91c + 0x32af434));
    func_0x01438628(*(undefined4 *)(_UNK_032af920 + 0x32af440));
    func_0x01438628(*(undefined4 *)(_UNK_032af924 + 0x32af44c));
    func_0x01438628(*(undefined4 *)(_UNK_032af928 + 0x32af458));
    func_0x01438628(*(undefined4 *)(_UNK_032af92c + 0x32af464));
    func_0x01438628(*(undefined4 *)(_UNK_032af930 + 0x32af470));
    func_0x01438628(*(undefined4 *)(_UNK_032af934 + 0x32af47c));
    func_0x01438628(*(undefined4 *)(_UNK_032af938 + 0x32af488));
    func_0x01438628(*(undefined4 *)(_UNK_032af93c + 0x32af494));
    func_0x01438628(*(undefined4 *)(_UNK_032af940 + 0x32af4a0));
    *pcVar7 = '\x01';
  }
  uVar10 = 0;
  iVar1 = func_0x02953fd4(0x464,0);
  if (iVar1 == 0) {
    iVar1 = FUN_032a8ec4(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_032af944 + 0x32af514) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_032af948 + 0x32af530));
      iVar1 = iVar9;
      if (iVar9 == 0) {
        iVar1 = func_0x014388e4();
      }
      iVar9 = *(int *)(iVar9 + 0x20);
      if (iVar9 != 0) {
        iVar1 = *(int *)(iVar9 + 0xc);
      }
      if (iVar9 != 0 && iVar1 != 0) {
        iVar1 = FUN_032a7be8(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iStack_34 = *(int *)(iVar1 + 0x74);
        uVar11 = *(uint *)(iVar1 + 0x70);
        iVar2 = func_0x032af974(param_1);
        iVar1 = *(int *)(iVar9 + 0xc);
        if (iVar2 <= iVar1) {
          uVar10 = 0;
          iStack_38 = iVar1;
          do {
            iVar9 = func_0x032afa2c(param_1,iVar2);
            if (iVar9 != 0) {
              uVar3 = *(uint *)(iVar9 + 0xc);
              iVar4 = (int)uVar3 >> 0x1f;
              if ((int)(iStack_34 - (iVar4 + (uint)(uVar11 < uVar3))) < 0 !=
                  (SBORROW4(iStack_34,iVar4) != SBORROW4(iStack_34 - iVar4,(uint)(uVar11 < uVar3))))
              {
                return uVar10;
              }
              iVar4 = FUN_032a7be8(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x7c);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x046b50c0(iVar4,iVar2,**(undefined4 **)(_UNK_032af94c + 0x32af610));
              if (iVar4 == 0) {
                if (iVar2 + 1 <= iVar1) {
                  iVar1 = FUN_032a7be8(param_1);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar3 = *(uint *)(iVar9 + 0xc);
                  func_0x026eecb8(iVar1,*(int *)(iVar1 + 0x74),*(uint *)(iVar1 + 0x70) - uVar3,
                                  *(int *)(iVar1 + 0x74) -
                                  (((int)uVar3 >> 0x1f) + (uint)(*(uint *)(iVar1 + 0x70) < uVar3)),0
                                 );
                  func_0x032afcc4(param_1,iVar2 + 1);
                }
                iVar1 = FUN_032a7be8(param_1);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = *(int *)(iVar1 + 0x7c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                func_0x03b70700(iVar1,iVar2,1,**(undefined4 **)(_UNK_032af950 + 0x32af6ac));
                uVar10 = *(undefined4 *)(iVar9 + 0x10);
                uVar6 = *(undefined4 *)(iVar9 + 0x14);
                if (*(int *)(**(int **)(_UNK_032af954 + 0x32af6c0) + 0x74) == 0) {
                  func_0x014387a4();
                }
                uVar10 = func_0x02af43a8(uVar10,uVar6,0);
                if (*(int *)(**(int **)(_UNK_032af958 + 0x32af6f8) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar1 = func_0x0202346c(0);
                piVar8 = *(int **)(iVar9 + 0x10);
                if (piVar8 == (int *)0x0) {
                  func_0x014388e4();
                }
                uVar6 = (**(code **)(*piVar8 + 0xd8))(piVar8,*(undefined4 *)(*piVar8 + 0xdc));
                piVar8 = *(int **)(iVar9 + 0x14);
                if (piVar8 == (int *)0x0) {
                  func_0x014388e4();
                }
                uVar5 = (**(code **)(*piVar8 + 0xd8))(piVar8,*(undefined4 *)(*piVar8 + 0xdc));
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                uStack_48 = 0;
                uStack_44 = 0;
                iStack_40 = 0;
                func_0x020257a4(iVar1,0x220,uVar6,uVar5,0,0,0);
                iVar1 = **(int **)(**(int **)(_UNK_032af95c + 0x32af7b0) + 0x5c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                uStack_48 = 1;
                uStack_44 = 0;
                func_0x02e66ffc(iVar1,uVar10,0x95,0,0,0,0,0,0,0);
                iStack_28 = iVar2;
                uVar10 = func_0x014387ac(**(undefined4 **)(_UNK_032af960 + 0x32af80c),&iStack_28);
                iStack_2c = iStack_34;
                uStack_30 = uVar11;
                uVar6 = func_0x014387ac(**(undefined4 **)(_UNK_032af964 + 0x32af828),&uStack_30);
                uVar10 = func_0x04f6b974(**(undefined4 **)(_UNK_032af968 + 0x32af854),uVar10,uVar6,0
                                        );
                iVar4 = **(int **)(_UNK_032af96c + 0x32af868);
                iVar9 = *(int *)(iVar4 + 0x1c);
                if (iVar9 == 0) {
                  func_0x014909d8(iVar4);
                  iVar9 = *(int *)(iVar4 + 0x1c);
                }
                iVar1 = iStack_38;
                iVar9 = *(int *)(iVar9 + 8);
                if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
                  iVar9 = func_0x0149097c();
                }
                if (*(int *)(iVar9 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar9 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
                if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
                  iVar9 = func_0x0149097c();
                }
                uVar6 = **(undefined4 **)(iVar9 + 0x5c);
                if (*(int *)(**(int **)(_UNK_032af970 + 0x32af8cc) + 0x74) == 0) {
                  func_0x014387a4(**(int **)(_UNK_032af970 + 0x32af8cc));
                }
                func_0x026794a8(uVar10,uVar6,0);
                uVar10 = 1;
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 <= iVar1);
        }
      }
    }
    return uVar10;
  }
  iVar1 = func_0x029540a4(0x464,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iStack_28 = iStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar9 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  func_0x024f56d0(iVar9,uVar10,&uStack_30,uVar6,0,0);
  uVar10 = func_0x024f56e0(&uStack_30,0,0);
  return uVar10;
}


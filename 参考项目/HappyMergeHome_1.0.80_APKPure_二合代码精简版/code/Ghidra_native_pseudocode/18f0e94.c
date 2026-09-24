
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01900e94(undefined4 param_1,uint param_2)

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
  int iStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  iVar1 = func_0x02953fd4(0x46d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x46d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&iStack_38,param_1,0);
    func_0x01523a2c(&iStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x024f56d0(iVar9,uVar10,&iStack_38,uVar6,0,0);
    uVar10 = func_0x024f56e0(&iStack_38,0,0);
    return uVar10;
  }
  iVar1 = FUN_018f9728(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x026eecb8(iVar1,*(int *)(iVar1 + 0x74),*(uint *)(iVar1 + 0x70) + param_2,
                  *(int *)(iVar1 + 0x74) + ((int)param_2 >> 0x1f) +
                  (uint)CARRY4(*(uint *)(iVar1 + 0x70),param_2));
  pcVar7 = (char *)(_UNK_0190145c + 0x1900f4c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01901460 + 0x1900f60));
    func_0x01438628(*(undefined4 *)(_UNK_01901464 + 0x1900f6c));
    func_0x01438628(*(undefined4 *)(_UNK_01901468 + 0x1900f78));
    func_0x01438628(*(undefined4 *)(_UNK_0190146c + 0x1900f84));
    func_0x01438628(*(undefined4 *)(_UNK_01901470 + 0x1900f90));
    func_0x01438628(*(undefined4 *)(_UNK_01901474 + 0x1900f9c));
    func_0x01438628(*(undefined4 *)(_UNK_01901478 + 0x1900fa8));
    func_0x01438628(*(undefined4 *)(_UNK_0190147c + 0x1900fb4));
    func_0x01438628(*(undefined4 *)(_UNK_01901480 + 0x1900fc0));
    func_0x01438628(*(undefined4 *)(_UNK_01901484 + 0x1900fcc));
    func_0x01438628(*(undefined4 *)(_UNK_01901488 + 0x1900fd8));
    func_0x01438628(*(undefined4 *)(_UNK_0190148c + 0x1900fe4));
    func_0x01438628(*(undefined4 *)(_UNK_01901490 + 0x1900ff0));
    *pcVar7 = '\x01';
  }
  uVar10 = 0;
  iVar1 = func_0x02953fd4(0x46e,0);
  if (iVar1 == 0) {
    iVar1 = FUN_018faa04(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01901494 + 0x1901064) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_01901498 + 0x1901080));
      iVar1 = iVar9;
      if (iVar9 == 0) {
        iVar1 = func_0x014388e4();
      }
      iVar9 = *(int *)(iVar9 + 0x20);
      if (iVar9 != 0) {
        iVar1 = *(int *)(iVar9 + 0xc);
      }
      if (iVar9 != 0 && iVar1 != 0) {
        iVar1 = FUN_018f9728(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iStack_34 = *(int *)(iVar1 + 0x74);
        uVar11 = *(uint *)(iVar1 + 0x70);
        iVar2 = func_0x019014c4(param_1);
        iVar1 = *(int *)(iVar9 + 0xc);
        if (iVar2 <= iVar1) {
          uVar10 = 0;
          iStack_38 = iVar1;
          do {
            iVar9 = func_0x0190157c(param_1,iVar2);
            if (iVar9 != 0) {
              uVar3 = *(uint *)(iVar9 + 0xc);
              iVar4 = (int)uVar3 >> 0x1f;
              if ((int)(iStack_34 - (iVar4 + (uint)(uVar11 < uVar3))) < 0 !=
                  (SBORROW4(iStack_34,iVar4) != SBORROW4(iStack_34 - iVar4,(uint)(uVar11 < uVar3))))
              {
                return uVar10;
              }
              iVar4 = FUN_018f9728(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x7c);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x024f1110(iVar4,iVar2,**(undefined4 **)(_UNK_0190149c + 0x1901160));
              if (iVar4 == 0) {
                if (iVar2 + 1 <= iVar1) {
                  iVar1 = FUN_018f9728(param_1);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar3 = *(uint *)(iVar9 + 0xc);
                  func_0x026eecb8(iVar1,*(int *)(iVar1 + 0x74),*(uint *)(iVar1 + 0x70) - uVar3,
                                  *(int *)(iVar1 + 0x74) -
                                  (((int)uVar3 >> 0x1f) + (uint)(*(uint *)(iVar1 + 0x70) < uVar3)),0
                                 );
                  func_0x01901814(param_1,iVar2 + 1);
                }
                iVar1 = FUN_018f9728(param_1);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = *(int *)(iVar1 + 0x7c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                func_0x024f1120(iVar1,iVar2,1,**(undefined4 **)(_UNK_019014a0 + 0x19011fc));
                uVar10 = *(undefined4 *)(iVar9 + 0x10);
                uVar6 = *(undefined4 *)(iVar9 + 0x14);
                if (*(int *)(**(int **)(_UNK_019014a4 + 0x1901210) + 0x74) == 0) {
                  func_0x014387a4();
                }
                uVar10 = func_0x02af43a8(uVar10,uVar6,0);
                if (*(int *)(**(int **)(_UNK_019014a8 + 0x1901248) + 0x74) == 0) {
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
                iStack_50 = 0;
                uStack_4c = 0;
                uStack_48 = 0;
                uStack_44 = 0;
                iStack_40 = 0;
                func_0x020257a4(iVar1,0x220,uVar6,uVar5,0,0,0);
                iVar1 = **(int **)(**(int **)(_UNK_019014ac + 0x1901300) + 0x5c);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                uStack_48 = 1;
                iStack_50 = 0;
                uStack_4c = 0;
                uStack_44 = 0;
                func_0x02e66ffc(iVar1,uVar10,0xa2,0,0,0,0,0);
                iStack_28 = iVar2;
                uVar10 = func_0x014387ac(**(undefined4 **)(_UNK_019014b0 + 0x190135c),&iStack_28);
                iStack_2c = iStack_34;
                uStack_30 = uVar11;
                uVar6 = func_0x014387ac(**(undefined4 **)(_UNK_019014b4 + 0x1901378),&uStack_30);
                uVar10 = func_0x014e95b8(**(undefined4 **)(_UNK_019014b8 + 0x19013a4),uVar10,uVar6,0
                                        );
                iVar4 = **(int **)(_UNK_019014bc + 0x19013b8);
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
                if (*(int *)(**(int **)(_UNK_019014c0 + 0x190141c) + 0x74) == 0) {
                  func_0x014387a4(**(int **)(_UNK_019014c0 + 0x190141c));
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
  iVar1 = func_0x029540a4(0x46e,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iStack_28 = iStack_40;
  uStack_24 = uStack_3c;
  iStack_20 = iStack_38;
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
  iStack_50 = 0;
  uStack_4c = 0;
  func_0x024f56d0(iVar9,uVar10,&uStack_30,uVar6);
  uVar10 = func_0x024f56e0(&uStack_30,0,0);
  return uVar10;
}


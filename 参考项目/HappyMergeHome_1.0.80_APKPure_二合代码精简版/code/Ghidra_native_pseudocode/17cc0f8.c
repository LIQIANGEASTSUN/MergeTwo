
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017dc0f8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_017dc610 + 0x17dc110);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017dc614 + 0x17dc124));
    func_0x01438628(*(undefined4 *)(_UNK_017dc618 + 0x17dc130));
    func_0x01438628(*(undefined4 *)(_UNK_017dc61c + 0x17dc13c));
    func_0x01438628(*(undefined4 *)(_UNK_017dc620 + 0x17dc148));
    func_0x01438628(*(undefined4 *)(_UNK_017dc624 + 0x17dc154));
    func_0x01438628(*(undefined4 *)(_UNK_017dc628 + 0x17dc160));
    func_0x01438628(*(undefined4 *)(_UNK_017dc62c + 0x17dc16c));
    func_0x01438628(*(undefined4 *)(_UNK_017dc630 + 0x17dc178));
    func_0x01438628(*(undefined4 *)(_UNK_017dc634 + 0x17dc184));
    func_0x01438628(*(undefined4 *)(_UNK_017dc638 + 0x17dc190));
    func_0x01438628(*(undefined4 *)(_UNK_017dc63c + 0x17dc19c));
    func_0x01438628(*(undefined4 *)(_UNK_017dc640 + 0x17dc1a8));
    func_0x01438628(*(undefined4 *)(_UNK_017dc644 + 0x17dc1b4));
    *pcVar6 = '\x01';
  }
  uVar9 = 0;
  iVar1 = func_0x02953fd4(0x45a,0);
  if (iVar1 == 0) {
    iVar1 = FUN_017d5bc8(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_017dc648 + 0x17dc228) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_017dc64c + 0x17dc244));
      iVar1 = iVar8;
      if (iVar8 == 0) {
        iVar1 = func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x20);
      if (iVar8 != 0) {
        iVar1 = *(int *)(iVar8 + 0xc);
      }
      if (iVar8 != 0 && iVar1 != 0) {
        iVar1 = FUN_017d48ec(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iStack_34 = *(int *)(iVar1 + 0x74);
        uVar10 = *(uint *)(iVar1 + 0x70);
        iVar1 = func_0x017dc678(param_1);
        iVar8 = *(int *)(iVar8 + 0xc);
        if (iVar1 <= iVar8) {
          uVar9 = 0;
          do {
            iVar2 = func_0x017dc730(param_1,iVar1);
            if (iVar2 != 0) {
              uVar3 = *(uint *)(iVar2 + 0xc);
              iVar4 = (int)uVar3 >> 0x1f;
              if ((int)(iStack_34 - (iVar4 + (uint)(uVar10 < uVar3))) < 0 !=
                  (SBORROW4(iStack_34,iVar4) != SBORROW4(iStack_34 - iVar4,(uint)(uVar10 < uVar3))))
              {
                return uVar9;
              }
              iVar4 = FUN_017d48ec(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x7c);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x024f1110(iVar4,iVar1,**(undefined4 **)(_UNK_017dc650 + 0x17dc320));
              if (iVar4 == 0) {
                if (iVar1 + 1 <= iVar8) {
                  iVar4 = FUN_017d48ec(param_1);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  uVar3 = *(uint *)(iVar2 + 0xc);
                  func_0x026ed874(iVar4,*(int *)(iVar4 + 0x74),*(uint *)(iVar4 + 0x70) - uVar3,
                                  *(int *)(iVar4 + 0x74) -
                                  (((int)uVar3 >> 0x1f) + (uint)(*(uint *)(iVar4 + 0x70) < uVar3)),0
                                 );
                  func_0x017dc9c8(param_1,iVar1 + 1);
                }
                iVar4 = FUN_017d48ec(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = *(int *)(iVar4 + 0x7c);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                func_0x024f1120(iVar4,iVar1,1,**(undefined4 **)(_UNK_017dc654 + 0x17dc3b8));
                uVar9 = *(undefined4 *)(iVar2 + 0x10);
                uVar5 = *(undefined4 *)(iVar2 + 0x14);
                if (*(int *)(**(int **)(_UNK_017dc658 + 0x17dc3cc) + 0x74) == 0) {
                  func_0x014387a4();
                }
                uVar9 = func_0x02af43a8(uVar9,uVar5,0);
                iVar4 = **(int **)(**(int **)(_UNK_017dc65c + 0x17dc404) + 0x5c);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iStack_40 = 1;
                uStack_48 = 0;
                uStack_44 = 0;
                uStack_3c = 0;
                func_0x02e66ffc(iVar4,uVar9,0x83,0,0,0,0,0);
                if (*(int *)(**(int **)(_UNK_017dc660 + 0x17dc45c) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar4 = func_0x0202346c(0);
                piVar7 = *(int **)(iVar2 + 0x10);
                if (piVar7 == (int *)0x0) {
                  func_0x014388e4();
                }
                uVar9 = (**(code **)(*piVar7 + 0xd8))(piVar7,*(undefined4 *)(*piVar7 + 0xdc));
                piVar7 = *(int **)(iVar2 + 0x14);
                if (piVar7 == (int *)0x0) {
                  func_0x014388e4();
                }
                uVar5 = (**(code **)(*piVar7 + 0xd8))(piVar7,*(undefined4 *)(*piVar7 + 0xdc));
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                uStack_48 = 0;
                uStack_44 = 0;
                iStack_40 = 0;
                uStack_3c = 0;
                uStack_38 = 0;
                func_0x020257a4(iVar4,0x220,uVar9,uVar5,0,0,0);
                iStack_28 = iVar1;
                uVar9 = func_0x014387ac(**(undefined4 **)(_UNK_017dc664 + 0x17dc518),&iStack_28);
                iStack_2c = iStack_34;
                uStack_30 = uVar10;
                uVar5 = func_0x014387ac(**(undefined4 **)(_UNK_017dc668 + 0x17dc530),&uStack_30);
                uVar9 = func_0x014e95b8(**(undefined4 **)(_UNK_017dc66c + 0x17dc55c),uVar9,uVar5,0);
                iVar4 = **(int **)(_UNK_017dc670 + 0x17dc570);
                iVar2 = *(int *)(iVar4 + 0x1c);
                if (iVar2 == 0) {
                  func_0x014909d8(iVar4);
                  iVar2 = *(int *)(iVar4 + 0x1c);
                }
                iVar2 = *(int *)(iVar2 + 8);
                if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                  iVar2 = func_0x0149097c();
                }
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar2 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
                if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                  iVar2 = func_0x0149097c();
                }
                uVar5 = **(undefined4 **)(iVar2 + 0x5c);
                if (*(int *)(**(int **)(_UNK_017dc674 + 0x17dc5d0) + 0x74) == 0) {
                  func_0x014387a4(**(int **)(_UNK_017dc674 + 0x17dc5d0));
                }
                func_0x026794a8(uVar9,uVar5,0);
                uVar9 = 1;
              }
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 <= iVar8);
        }
      }
    }
    return uVar9;
  }
  iVar1 = func_0x029540a4(0x45a,0);
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
  iVar8 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar5,0,0);
  uVar9 = func_0x024f56e0(&uStack_30,0,0);
  return uVar9;
}


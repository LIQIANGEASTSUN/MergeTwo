
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c0747c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02c07c5c + 0x2c07498);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c07c60 + 0x2c074ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c64 + 0x2c074b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c68 + 0x2c074c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c6c + 0x2c074d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c70 + 0x2c074dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c74 + 0x2c074e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c78 + 0x2c074f4));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c7c + 0x2c07500));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c80 + 0x2c0750c));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c84 + 0x2c07518));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c88 + 0x2c07524));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c8c + 0x2c07530));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c90 + 0x2c0753c));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c94 + 0x2c07548));
    func_0x01438628(*(undefined4 *)(_UNK_02c07c98 + 0x2c07554));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ea8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ea8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar8,&uStack_38,uVar4,0,0);
    uVar8 = func_0x024f56e0(&uStack_38,0,0);
    return uVar8;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c07c9c + 0x2c075b4));
  func_0x02c44780(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 8) = param_1;
  func_0x014385cc((int *)(iVar1 + 8),param_1);
  piVar2 = *(int **)(_UNK_02c07ca0 + 0x2c075f0);
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c07ca4 + 0x2c07610));
  iVar7 = *(int *)(param_1 + 0x44);
  uVar9 = *(uint *)(param_1 + 0xb0);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar7 + 0xc) <= uVar9) {
    func_0x014388e8();
  }
  iVar7 = *(int *)(iVar7 + uVar9 * 4 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02c3f4b4(iVar7,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x02c4c678(iVar5,uVar8,0);
  if (iVar5 == 0) {
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_02c07ca8 + 0x2c07694) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c07cac + 0x2c076b0);
  iVar5 = func_0x014e9518(*puVar12);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = FUN_02bd1400(iVar5,uVar8,uVar4,0);
  if (*(int *)(**(int **)(_UNK_02c07cb0 + 0x2c076f0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02c07cb4 + 0x2c0770c));
  iVar11 = *(int *)(param_1 + 0x44);
  uVar9 = *(uint *)(iVar1 + 0xc);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar11 + 0xc) <= uVar9) {
    func_0x014388e8();
  }
  iVar11 = *(int *)(iVar11 + uVar9 * 4 + 0x10);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02c3f4b4(iVar11,0);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x029a6fa8(iVar7,uVar8,0);
  if ((iVar5 == 0 && iVar7 != 0) && (*(int *)(iVar7 + 0x4c) != -1)) {
    if (*(int *)(**(int **)(_UNK_02c07cb8 + 0x2c077a4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(*puVar12);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = FUN_02bd158c(iVar5,uVar8,uVar4,0);
    if (iVar5 == 0) {
      if (*(int *)(**(int **)(_UNK_02c07cbc + 0x2c077fc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(*puVar12);
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      uVar8 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = FUN_02bad168(iVar5,uVar8,uVar4,0);
      if (iVar5 == 0) {
        if (*(int *)(**(int **)(_UNK_02c07cc0 + 0x2c07854) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c07cc4 + 0x2c07870));
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x02c4bba8(iVar5,iVar7,0);
        if (iVar5 == 0) {
          if (*(int *)(**(int **)(_UNK_02c07cc8 + 0x2c078a8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c07ccc + 0x2c078c4));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x02c4cb48(iVar5,iVar7,0);
          if (iVar5 != 0) {
            if (*(int *)(**(int **)(_UNK_02c07cd0 + 0x2c078fc) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c07cd4 + 0x2c07918));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x02c4a6ec(iVar5,iVar7,0);
            if (iVar5 == 0) {
              uVar8 = *(undefined4 *)(iVar7 + 0x4c);
              iVar5 = **(int **)(_UNK_02c07cd8 + 0x2c079a4);
              *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0xb0);
              *(undefined4 *)(iVar1 + 0x14) = uVar8;
              if (*(int *)(iVar5 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c07cdc + 0x2c079d0));
              uVar8 = *(undefined4 *)(iVar1 + 0x14);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x029a6fa8(iVar5,uVar8,0);
              if (iVar5 != 0) {
                if (*(int *)(**(int **)(_UNK_02c07ce0 + 0x2c07a0c) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c07ce4 + 0x2c07a28));
                piVar2 = *(int **)(_UNK_02c07ce8 + 0x2c07a3c);
                iVar7 = *piVar2;
                if (*(int *)(iVar7 + 0x74) == 0) {
                  func_0x014387a4();
                  iVar7 = *piVar2;
                }
                iVar10 = **(int **)(_UNK_02c07cec + 0x2c07a5c);
                iVar11 = *(int *)(iVar10 + 0x1c);
                uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x1f0);
                if (iVar11 == 0) {
                  func_0x014909d8(iVar10);
                  iVar11 = *(int *)(iVar10 + 0x1c);
                }
                iVar7 = *(int *)(iVar11 + 8);
                if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
                  iVar7 = func_0x0149097c();
                }
                if (*(int *)(iVar7 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar7 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
                if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
                  iVar7 = func_0x0149097c();
                }
                uVar4 = **(undefined4 **)(iVar7 + 0x5c);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                piVar3 = (int *)func_0x02b0c90c(iVar5,uVar8,uVar4,0);
                piVar2 = (int *)0x0;
                if (piVar3 != (int *)0x0) {
                  uVar9 = (uint)*(byte *)(**(int **)(_UNK_02c07cf0 + 0x2c07af8) + 0xb8);
                  if ((uVar9 <= *(byte *)(*piVar3 + 0xb8)) &&
                     (piVar2 = piVar3,
                     *(int *)(*(int *)(*piVar3 + 100) + uVar9 * 4 + -4) !=
                     **(int **)(_UNK_02c07cf0 + 0x2c07af8))) {
                    piVar2 = (int *)0x0;
                  }
                }
                iVar5 = *(int *)(param_1 + 0x44);
                uVar9 = *(uint *)(iVar1 + 0xc);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar5 + 0xc) <= uVar9) {
                  func_0x014388e8();
                }
                iVar5 = *(int *)(iVar5 + uVar9 * 4 + 0x10);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                uVar8 = func_0x02c3f4b4(iVar5,0);
                iVar5 = *(int *)(param_1 + 0x44);
                uVar9 = *(uint *)(param_1 + 0xb0);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar5 + 0xc) <= uVar9) {
                  func_0x014388e8();
                }
                iVar5 = *(int *)(iVar5 + uVar9 * 4 + 0x10);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                uVar4 = func_0x02c3f4b4(iVar5,0);
                if (piVar2 == (int *)0x0) {
                  func_0x014388e4();
                }
                func_0x02c79824(piVar2,uVar8,uVar4,0);
                puVar12 = *(undefined4 **)(_UNK_02c07cf4 + 0x2c07be0);
                iVar5 = func_0x014388d4(*puVar12);
                func_0x0152e3ec(iVar5,iVar1,**(undefined4 **)(_UNK_02c07cf8 + 0x2c07bfc),0);
                if (piVar2 == (int *)0x0) {
                  func_0x014388e4();
                }
                piVar2[0x12] = iVar5;
                func_0x014385cc(piVar2 + 0x12,iVar5);
                iVar5 = func_0x014388d4(*puVar12);
                func_0x0152e3ec(iVar5,iVar1,**(undefined4 **)(_UNK_02c07cfc + 0x2c07c40),0);
                piVar2[0x13] = iVar5;
                func_0x014385cc(piVar2 + 0x13,iVar5);
                return 1;
              }
              goto LAB_02c0794c;
            }
          }
        }
      }
    }
  }
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0xc);
    iVar5 = FUN_02bfb30c(param_1);
    if (iVar5 != 0) {
      FUN_02c071a4(param_1,*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(iVar1 + 0xc));
      return 1;
    }
    return 1;
  }
LAB_02c0794c:
  FUN_02c04cf8(param_1,*(undefined4 *)(param_1 + 0xb0));
  return 1;
}


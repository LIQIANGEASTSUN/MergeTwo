
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c08710(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02c09090 + 0x2c0872c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c09094 + 0x2c08740));
    func_0x01438628(*(undefined4 *)(_UNK_02c09098 + 0x2c0874c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0909c + 0x2c08758));
    func_0x01438628(*(undefined4 *)(_UNK_02c090a0 + 0x2c08764));
    func_0x01438628(*(undefined4 *)(_UNK_02c090a4 + 0x2c08770));
    func_0x01438628(*(undefined4 *)(_UNK_02c090a8 + 0x2c0877c));
    func_0x01438628(*(undefined4 *)(_UNK_02c090ac + 0x2c08788));
    func_0x01438628(*(undefined4 *)(_UNK_02c090b0 + 0x2c08794));
    func_0x01438628(*(undefined4 *)(_UNK_02c090b4 + 0x2c087a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c090b8 + 0x2c087ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c090bc + 0x2c087b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c090c0 + 0x2c087c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c090c4 + 0x2c087d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c090c8 + 0x2c087dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c090cc + 0x2c087e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c090d0 + 0x2c087f4));
    func_0x01438628(*(undefined4 *)(_UNK_02c090d4 + 0x2c08800));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5eb4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5eb4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&iStack_38,param_1,0);
    func_0x01523a2c(&iStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar7,&iStack_38,uVar3,0,0);
    uVar7 = func_0x024f56e0(&iStack_38,0,0);
    return uVar7;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c090d8 + 0x2c08860));
  func_0x02c45560(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 0xc) = param_1;
  func_0x014385cc((int *)(iVar1 + 0xc),param_1);
  piVar11 = *(int **)(_UNK_02c090dc + 0x2c0889c);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c090e0 + 0x2c088bc));
  iVar6 = *(int *)(param_1 + 0x44);
  uVar8 = *(uint *)(param_1 + 0xb0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar6 + 0xc) <= uVar8) {
    func_0x014388e8();
  }
  iVar6 = *(int *)(iVar6 + uVar8 * 4 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02c3f4b4(iVar6,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x02c4c780(iVar4,uVar7,0);
  if (iVar4 == 0) {
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_02c090e4 + 0x2c08940) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c090e8 + 0x2c0895c));
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iStack_3c = FUN_02bd1400(iVar4,uVar7,uVar3,0);
  if (*(int *)(**(int **)(_UNK_02c090ec + 0x2c0899c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c090f0 + 0x2c089b8));
  iVar6 = *(int *)(param_1 + 0x44);
  uVar8 = *(uint *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar6 + 0xc) <= uVar8) {
    func_0x014388e8();
  }
  iVar6 = *(int *)(iVar6 + uVar8 * 4 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02c3f4b4(iVar6,0);
  puVar12 = *(undefined4 **)(_UNK_02c090f4 + 0x2c08a18);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iStack_34 = func_0x029a6fa8(iVar4,uVar7,0);
  iVar4 = func_0x014e9518(*puVar12);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = FUN_02bd114c(iVar4,uVar7,uVar3,0);
  iVar6 = func_0x014e9518(*puVar12);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uStack_48 = 0;
  iStack_38 = FUN_02bdd790(iVar6,1,uVar7,0);
  puVar12 = *(undefined4 **)(_UNK_02c090f8 + 0x2c08abc);
  if (((iStack_34 != 0) && (iStack_3c == 0 && iVar4 == 1)) && (iStack_38 != -1)) {
    if (*(int *)(**(int **)(_UNK_02c090fc + 0x2c08ae8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02c09100 + 0x2c08b04));
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = *(undefined4 *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = FUN_02bad168(iVar6,uVar7,uVar3,0);
    if (iVar6 == 0) {
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(*puVar12);
      iVar10 = *(int *)(param_1 + 0x44);
      uVar8 = *(uint *)(iVar1 + 0x10);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar10 + 0xc) <= uVar8) {
        func_0x014388e8();
      }
      iVar10 = *(int *)(iVar10 + uVar8 * 4 + 0x10);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x02c3f4b4(iVar10,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x02c4cbd0(iVar6,uVar7,0);
      if (iVar6 != 0) {
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x014e9518(*puVar12);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x02c4bba8(iVar6,iStack_34,0);
        if (iVar6 == 0) {
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(*puVar12);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x02c4a6ec(iVar6,iStack_34,0);
          if (iVar6 == 0) {
            uVar7 = *(undefined4 *)(iStack_34 + 0x48);
            iVar4 = *(int *)(**(int **)(_UNK_02c0910c + 0x2c08ddc) + 0x74);
            *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0xb0);
            if (iVar4 == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c09110 + 0x2c08e08));
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = func_0x029a6fa8(iVar4,uVar7,0);
            if (iVar4 != 0) {
              if (*(int *)(**(int **)(_UNK_02c09114 + 0x2c08e40) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c09118 + 0x2c08e5c));
              piVar11 = *(int **)(_UNK_02c0911c + 0x2c08e70);
              iVar6 = *piVar11;
              if (*(int *)(iVar6 + 0x74) == 0) {
                func_0x014387a4();
                iVar6 = *piVar11;
              }
              iVar9 = **(int **)(_UNK_02c09120 + 0x2c08e90);
              iVar10 = *(int *)(iVar9 + 0x1c);
              uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 500);
              if (iVar10 == 0) {
                func_0x014909d8(iVar9);
                iVar10 = *(int *)(iVar9 + 0x1c);
              }
              iVar6 = *(int *)(iVar10 + 8);
              if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
                iVar6 = func_0x0149097c();
              }
              if (*(int *)(iVar6 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
              if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
                iVar6 = func_0x0149097c();
              }
              uVar3 = **(undefined4 **)(iVar6 + 0x5c);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              piVar2 = (int *)func_0x02b0c90c(iVar4,uVar7,uVar3,0);
              piVar11 = (int *)0x0;
              if (piVar2 != (int *)0x0) {
                uVar8 = (uint)*(byte *)(**(int **)(_UNK_02c09124 + 0x2c08f2c) + 0xb8);
                if ((uVar8 <= *(byte *)(*piVar2 + 0xb8)) &&
                   (piVar11 = piVar2,
                   *(int *)(*(int *)(*piVar2 + 100) + uVar8 * 4 + -4) !=
                   **(int **)(_UNK_02c09124 + 0x2c08f2c))) {
                  piVar11 = (int *)0x0;
                }
              }
              iVar4 = *(int *)(param_1 + 0x44);
              uVar8 = *(uint *)(iVar1 + 0x10);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar4 + 0xc) <= uVar8) {
                func_0x014388e8();
              }
              iVar4 = *(int *)(iVar4 + uVar8 * 4 + 0x10);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x02c3f4b4(iVar4,0);
              iVar4 = *(int *)(param_1 + 0x44);
              uVar8 = *(uint *)(param_1 + 0xb0);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar4 + 0xc) <= uVar8) {
                func_0x014388e8();
              }
              iVar4 = *(int *)(iVar4 + uVar8 * 4 + 0x10);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              uVar3 = func_0x02c3f4b4(iVar4,0);
              if (piVar11 == (int *)0x0) {
                func_0x014388e4();
              }
              func_0x02c86780(piVar11,uVar7,uVar3,0);
              puVar12 = *(undefined4 **)(_UNK_02c09128 + 0x2c09014);
              iVar4 = func_0x014388d4(*puVar12);
              func_0x0152e3ec(iVar4,iVar1,**(undefined4 **)(_UNK_02c0912c + 0x2c09030),0);
              if (piVar11 == (int *)0x0) {
                func_0x014388e4();
              }
              piVar11[0x12] = iVar4;
              func_0x014385cc(piVar11 + 0x12,iVar4);
              iVar4 = func_0x014388d4(*puVar12);
              func_0x0152e3ec(iVar4,iVar1,**(undefined4 **)(_UNK_02c09130 + 0x2c09074),0);
              piVar11[0x13] = iVar4;
              func_0x014385cc(piVar11 + 0x13,iVar4);
              return 1;
            }
            goto LAB_02c08d84;
          }
        }
      }
    }
  }
  if (iStack_34 == 0) {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0x10);
    iVar4 = FUN_02bfb30c(param_1);
    if (iVar4 != 0) {
      FUN_02c071a4(param_1,*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(iVar1 + 0x10));
      return 1;
    }
    return 1;
  }
  if (iVar4 != 0) {
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(*puVar12);
    iVar6 = *(int *)(param_1 + 0x44);
    uVar8 = *(uint *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar8) {
      func_0x014388e8();
    }
    iVar6 = *(int *)(iVar6 + uVar8 * 4 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar7 = func_0x02c3f4b4(iVar6,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x02c4cbd0(iVar4,uVar7,0);
    if ((iStack_38 == -1) && (iVar4 != 0)) {
      if (*(int *)(**(int **)(_UNK_02c09104 + 0x2c08d18) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c09108 + 0x2c08d34));
      FUN_02bed744(&uStack_30,param_1,*(undefined4 *)(iVar1 + 0x10));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uStack_48 = 0x3f800000;
      uStack_44 = 0;
      func_0x02c39590(iVar4,uStack_30,uStack_2c,uStack_28);
    }
  }
LAB_02c08d84:
  FUN_02c04cf8(param_1,*(undefined4 *)(param_1 + 0xb0));
  return 1;
}


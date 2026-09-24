
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c07d00(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
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
  
  pcVar7 = (char *)(_UNK_02c0865c + 0x2c07d1c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c08660 + 0x2c07d30));
    func_0x01438628(*(undefined4 *)(_UNK_02c08664 + 0x2c07d3c));
    func_0x01438628(*(undefined4 *)(_UNK_02c08668 + 0x2c07d48));
    func_0x01438628(*(undefined4 *)(_UNK_02c0866c + 0x2c07d54));
    func_0x01438628(*(undefined4 *)(_UNK_02c08670 + 0x2c07d60));
    func_0x01438628(*(undefined4 *)(_UNK_02c08674 + 0x2c07d6c));
    func_0x01438628(*(undefined4 *)(_UNK_02c08678 + 0x2c07d78));
    func_0x01438628(*(undefined4 *)(_UNK_02c0867c + 0x2c07d84));
    func_0x01438628(*(undefined4 *)(_UNK_02c08680 + 0x2c07d90));
    func_0x01438628(*(undefined4 *)(_UNK_02c08684 + 0x2c07d9c));
    func_0x01438628(*(undefined4 *)(_UNK_02c08688 + 0x2c07da8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0868c + 0x2c07db4));
    func_0x01438628(*(undefined4 *)(_UNK_02c08690 + 0x2c07dc0));
    func_0x01438628(*(undefined4 *)(_UNK_02c08694 + 0x2c07dcc));
    func_0x01438628(*(undefined4 *)(_UNK_02c08698 + 0x2c07dd8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0869c + 0x2c07de4));
    func_0x01438628(*(undefined4 *)(_UNK_02c086a0 + 0x2c07df0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5eaf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5eaf,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar6,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x024f56e0(&uStack_38,0,0);
    return uVar9;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c086a4 + 0x2c07e50));
  func_0x02c44eac(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 8) = param_1;
  func_0x014385cc((int *)(iVar1 + 8),param_1);
  piVar2 = *(int **)(_UNK_02c086a8 + 0x2c07e8c);
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02c086ac + 0x2c07eac));
  iVar8 = *(int *)(param_1 + 0x44);
  uVar10 = *(uint *)(param_1 + 0xb0);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar8 + 0xc) <= uVar10) {
    func_0x014388e8();
  }
  iVar8 = *(int *)(iVar8 + uVar10 * 4 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x02c3f4b4(iVar8,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x02c4c570(iVar6,uVar9,0);
  if (iVar6 == 0) {
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_02c086b0 + 0x2c07f30) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c086b4 + 0x2c07f4c);
  iVar6 = func_0x014e9518(*puVar12);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = FUN_02bd1400(iVar6,uVar9,uVar5,0);
  iVar8 = func_0x014e9518(*puVar12);
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uStack_38 = 0;
  uVar9 = FUN_02bdd790(iVar8,1,uVar9,0);
  uVar5 = *puVar12;
  *(undefined4 *)(iVar1 + 0x10) = uVar9;
  iVar8 = func_0x014e9518(uVar5);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  iVar8 = FUN_02bd114c(iVar8,uVar9,uVar5,0);
  if (*(int *)(**(int **)(_UNK_02c086b8 + 0x2c08004) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c086bc + 0x2c08020));
  iVar11 = *(int *)(param_1 + 0x44);
  uVar10 = *(uint *)(iVar1 + 0xc);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar11 + 0xc) <= uVar10) {
    func_0x014388e8();
  }
  iVar11 = *(int *)(iVar11 + uVar10 * 4 + 0x10);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x02c3f4b4(iVar11,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x029a6fa8(iVar3,uVar9,0);
  piVar2 = (int *)(iVar1 + 0x14);
  *piVar2 = iVar3;
  func_0x014385cc(piVar2,iVar3);
  if ((iVar6 == 0) && (*(int *)(iVar1 + 0x10) != -1)) {
    if (*piVar2 == 0) goto LAB_02c083c0;
    if (*(int *)(**(int **)(_UNK_02c086c0 + 0x2c080cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(*puVar12);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = FUN_02bd158c(iVar6,uVar9,uVar5,0);
    if (iVar6 == 0) {
      if (*(int *)(**(int **)(_UNK_02c086c4 + 0x2c08124) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(*puVar12);
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      uVar9 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = FUN_02bad168(iVar6,uVar9,uVar5,0);
      if (iVar6 == 0) {
        if (*(int *)(**(int **)(_UNK_02c086c8 + 0x2c0817c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02c086cc + 0x2c08198));
        iVar3 = *piVar2;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x02c4bba8(iVar6,iVar3,0);
        if (iVar6 == 0) {
          if (*(int *)(**(int **)(_UNK_02c086d0 + 0x2c081d4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02c086d4 + 0x2c081f0));
          iVar3 = *piVar2;
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x02c4cb48(iVar6,iVar3,0);
          if (iVar6 != 0) {
            if (*(int *)(**(int **)(_UNK_02c086d8 + 0x2c0822c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02c086dc + 0x2c08248));
            iVar3 = *piVar2;
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x02c4a6ec(iVar6,iVar3,0);
            if (iVar6 == 0) {
              piVar2 = *(int **)(_UNK_02c086f0 + 0x2c08404);
              *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0xb0);
              if (*(int *)(*piVar2 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02c086f4 + 0x2c08428));
              piVar2 = *(int **)(_UNK_02c086f8 + 0x2c0843c);
              iVar8 = *piVar2;
              if (*(int *)(iVar8 + 0x74) == 0) {
                func_0x014387a4();
                iVar8 = *piVar2;
              }
              iVar11 = **(int **)(_UNK_02c086fc + 0x2c0845c);
              iVar3 = *(int *)(iVar11 + 0x1c);
              uVar9 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x1ec);
              if (iVar3 == 0) {
                func_0x014909d8(iVar11);
                iVar3 = *(int *)(iVar11 + 0x1c);
              }
              iVar8 = *(int *)(iVar3 + 8);
              if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
                iVar8 = func_0x0149097c();
              }
              if (*(int *)(iVar8 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar8 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
              if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
                iVar8 = func_0x0149097c();
              }
              uVar5 = **(undefined4 **)(iVar8 + 0x5c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              piVar4 = (int *)func_0x02b0c90c(iVar6,uVar9,uVar5,0);
              piVar2 = (int *)0x0;
              if (piVar4 != (int *)0x0) {
                uVar10 = (uint)*(byte *)(**(int **)(_UNK_02c08700 + 0x2c084f8) + 0xb8);
                if ((uVar10 <= *(byte *)(*piVar4 + 0xb8)) &&
                   (piVar2 = piVar4,
                   *(int *)(*(int *)(*piVar4 + 100) + uVar10 * 4 + -4) !=
                   **(int **)(_UNK_02c08700 + 0x2c084f8))) {
                  piVar2 = (int *)0x0;
                }
              }
              iVar6 = *(int *)(param_1 + 0x44);
              uVar10 = *(uint *)(iVar1 + 0xc);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar6 + 0xc) <= uVar10) {
                func_0x014388e8();
              }
              iVar6 = *(int *)(iVar6 + uVar10 * 4 + 0x10);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar9 = func_0x02c3f4b4(iVar6,0);
              iVar6 = *(int *)(param_1 + 0x44);
              uVar10 = *(uint *)(param_1 + 0xb0);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar6 + 0xc) <= uVar10) {
                func_0x014388e8();
              }
              iVar6 = *(int *)(iVar6 + uVar10 * 4 + 0x10);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar5 = func_0x02c3f4b4(iVar6,0);
              if (piVar2 == (int *)0x0) {
                func_0x014388e4();
              }
              func_0x02c85d20(piVar2,uVar9,uVar5,0);
              puVar12 = *(undefined4 **)(_UNK_02c08704 + 0x2c085e0);
              iVar6 = func_0x014388d4(*puVar12);
              func_0x0152e3ec(iVar6,iVar1,**(undefined4 **)(_UNK_02c08708 + 0x2c085fc),0);
              if (piVar2 == (int *)0x0) {
                func_0x014388e4();
              }
              piVar2[0x12] = iVar6;
              func_0x014385cc(piVar2 + 0x12,iVar6);
              iVar6 = func_0x014388d4(*puVar12);
              func_0x0152e3ec(iVar6,iVar1,**(undefined4 **)(_UNK_02c0870c + 0x2c08640),0);
              piVar2[0x13] = iVar6;
              func_0x014385cc(piVar2 + 0x13,iVar6);
              return 1;
            }
          }
        }
      }
    }
  }
  if (*piVar2 != 0) {
    if (iVar8 != 0) {
      if (*(int *)(**(int **)(_UNK_02c086e0 + 0x2c08298) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02c086e4 + 0x2c082b4));
      iVar8 = *(int *)(param_1 + 0x44);
      uVar10 = *(uint *)(param_1 + 0xb0);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar8 + 0xc) <= uVar10) {
        func_0x014388e8();
      }
      iVar8 = *(int *)(iVar8 + uVar10 * 4 + 0x10);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x02c3f4b4(iVar8,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x02c4c570(iVar6,uVar9,0);
      if ((iVar6 != 0) && (*(int *)(iVar1 + 0x10) == -1)) {
        if (*(int *)(**(int **)(_UNK_02c086e8 + 0x2c08340) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02c086ec + 0x2c0835c));
        FUN_02bed744(&uStack_30,param_1,*(undefined4 *)(iVar1 + 0xc));
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uStack_38 = 0x3f800000;
        uStack_34 = 0;
        func_0x02c39590(iVar6,uStack_30,uStack_2c,uStack_28);
      }
    }
    FUN_02c04cf8(param_1,*(undefined4 *)(param_1 + 0xb0));
    return 1;
  }
LAB_02c083c0:
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0xc);
  iVar6 = FUN_02bfb30c(param_1);
  if (iVar6 != 0) {
    FUN_02c071a4(param_1,*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(iVar1 + 0xc));
  }
  return 1;
}


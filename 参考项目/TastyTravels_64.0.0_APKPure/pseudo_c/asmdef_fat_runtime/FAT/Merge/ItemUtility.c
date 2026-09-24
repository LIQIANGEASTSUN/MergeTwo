/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemUtility$$GetItemLevel RVA 0x2147e88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02157e88(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02157fc8 + 0x2157e9c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02157fcc + 0x2157eb0));
    func_0x01384978(*(undefined4 *)(_UNK_02157fd0 + 0x2157ebc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x888,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x888,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02157fd4 + 0x2157f2c)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x118);
        goto LAB_02157f74;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02157fd4 + 0x2157f2c),0xb);
LAB_02157f74:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0364c54c(iVar1,param_1,**(undefined4 **)(_UNK_02157fd8 + 0x2157fb0));
    return iVar1 + 1;
  }
  return 0;
}



// ===== FAT.Merge.ItemUtility$$StackToTarget RVA 0x21545c0 =====

/* WARNING: Possible PIC construction at 0x02133d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02133d90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021645c0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_1c [3];
  
  pcVar8 = (char *)(_UNK_02164694 + 0x21645d8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02164698 + 0x21645ec));
    *pcVar8 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x9e9d,0);
  if (iVar4 == 0) {
    iVar4 = func_0x021646a0(param_1,param_2);
    if (iVar4 == 0) {
      return 0;
    }
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x02feb4f8(param_1,0,**(undefined4 **)(_UNK_0216469c + 0x216466c));
    if (param_1 == 0) {
      return 0;
    }
    pcVar8 = (char *)(_UNK_02134080 + 0x2133cf8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02134084 + 0x2133d0c),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02134088 + 0x2133d18));
      func_0x01384978(*(undefined4 *)(_UNK_0213408c + 0x2133d24));
      func_0x01384978(*(undefined4 *)(_UNK_02134090 + 0x2133d30));
      func_0x01384978(*(undefined4 *)(_UNK_02134094 + 0x2133d3c));
      *pcVar8 = '\x01';
    }
    uVar5 = 0;
    aiStack_1c[0] = 0;
    iVar4 = func_0x0229f06c(0x9e9e,0);
    if (iVar4 == 0) {
      uVar1 = FUN_0212f4e4(param_1);
      if ((uVar1 | 4) == 7) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x02feb690(param_2,aiStack_1c,0,**(undefined4 **)(_UNK_02134098 + 0x2133dcc));
        if ((aiStack_1c[0] == 0 || iVar4 == 0) ||
           (iVar6 = FUN_02132bec(), iVar4 = aiStack_1c[0], iVar6 == 0)) {
          piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0213409c + 0x2133df8),2);
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          uStack_20 = FUN_0210e2d4(param_2,0);
          puVar10 = *(undefined4 **)(_UNK_021340a0 + 0x2133e28);
          iVar4 = func_0x01384abc(*puVar10,&uStack_20);
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar4 != 0) &&
             (iVar6 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar2 + 0x20)), iVar6 == 0)) {
            uVar9 = func_0x01384c10();
            func_0x01384aa0(uVar9,0);
          }
          if (piVar2[3] == 0) {
            func_0x01384bf4();
          }
          piVar2[4] = iVar4;
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          uStack_24 = FUN_0210e5f4(param_2,0);
          iVar4 = func_0x01384abc(*puVar10,&uStack_24);
          if ((iVar4 != 0) &&
             (iVar6 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar2 + 0x20)), iVar6 == 0)) {
            uVar9 = func_0x01384c10();
            func_0x01384aa0(uVar9,0);
          }
          if ((uint)piVar2[3] < 2) {
            func_0x01384bf4();
          }
          piVar2[5] = iVar4;
          if (*(int *)(**(int **)(_UNK_021340a4 + 0x2133f00) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2f28(**(undefined4 **)(_UNK_021340a8 + 0x2133f28),piVar2,0);
          return 0;
        }
        if (aiStack_1c[0] == 0) {
          func_0x01384bf0();
        }
        iVar6 = FUN_021328ac(iVar4);
        iVar4 = aiStack_1c[0];
        if (aiStack_1c[0] == 0) {
          func_0x01384bf0();
        }
        iVar3 = FUN_02132b18(iVar4);
        iVar4 = aiStack_1c[0];
        if (iVar3 <= iVar6) {
          return 0;
        }
        uVar9 = *(undefined4 *)(param_1 + 0x18);
        if (aiStack_1c[0] == 0) {
          func_0x01384bf0();
        }
        iVar4 = FUN_02132c64(iVar4,uVar9);
        *(int *)(param_1 + 0x18) = iVar4;
        if (iVar4 < 1) {
          iVar4 = FUN_02123568(param_1);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = FUN_0210cd28(iVar4,0);
          uVar9 = FUN_02123568(param_1);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          FUN_020dd560(iVar4,uVar9,4,0);
          uVar5 = 1;
          uVar1 = 1;
        }
        else {
          uVar1 = 1;
          uVar5 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
      if ((uVar5 & uVar1) != 0) {
        iVar4 = FUN_02123568(param_1);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = FUN_0210cd28(iVar4,0);
        uVar9 = FUN_02123568(param_1);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        FUN_020dd560(iVar4,uVar9,4,0);
      }
      return uVar1;
    }
    iVar4 = func_0x0229f13c(0x9e9e,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2133d90;
    unaff_r4 = param_1;
    unaff_r5 = param_2;
    unaff_r6 = iVar4;
    register0x00000054 = (BADSPACEBASE *)auStack_28;
  }
  else {
    iVar4 = func_0x0229f13c(0x9e9d,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar6 = *(int *)(iVar4 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar6 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar6,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar6 = *(int *)(iVar4 + 8);
  uVar9 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar4 == 0) {
    uVar7 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar9,(undefined1 *)((int)register0x00000054 + -0x38),uVar7);
  uVar5 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar5;
}



// ===== FAT.Merge.ItemUtility$$CanStack RVA 0x21546a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021646a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_02164a38 + 0x21646bc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02164a3c + 0x21646d0));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iStack_24 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x9e5b,0);
  if (iVar1 == 0) {
    if (param_1 != param_2) {
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = 0;
      iVar1 = FUN_0210e2d4(param_1,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_0210e2d4(param_2,0);
      if (iVar1 == iVar2) {
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 0;
        iVar1 = FUN_02116a8c(param_1,0);
        if (iVar1 == 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          uVar5 = 0;
          iVar1 = FUN_02116a8c(param_2,0);
          if (iVar1 == 0) {
            if (param_1 == 0) {
              func_0x01384bf0();
            }
            uVar5 = 0;
            iVar1 = FUN_02116ae0(param_1,0);
            if (iVar1 != 0) {
              if (param_2 == 0) {
                func_0x01384bf0();
                iVar1 = FUN_02116ae0(0,0);
                if (iVar1 == 0) {
                  return 0;
                }
                func_0x01384bf0();
                iVar1 = FUN_0211015c(0,0);
                if (iVar1 != 0) {
                  return 0;
                }
                func_0x01384bf0();
              }
              else {
                iVar1 = FUN_02116ae0(param_2,0);
                if (iVar1 == 0) {
                  return 0;
                }
                iVar1 = FUN_0211015c(param_2,0);
                if (iVar1 != 0) {
                  return 0;
                }
              }
              uVar5 = 0;
              iVar1 = FUN_02116b64(param_2,0);
              if (iVar1 == 0) {
                if (param_1 == 0) {
                  func_0x01384bf0();
                }
                uVar5 = 0;
                iVar1 = FUN_0210e250(param_1,6,0,0);
                if (iVar1 == 0) {
                  if (param_2 == 0) {
                    func_0x01384bf0();
                    iVar1 = FUN_0210e250(0,6,0,0);
                    if (iVar1 != 0) {
                      return 0;
                    }
                    func_0x01384bf0();
                    iVar1 = FUN_0210cd28(0,0);
                    func_0x01384bf0();
                  }
                  else {
                    iVar1 = FUN_0210e250(param_2,6,0,0);
                    if (iVar1 != 0) {
                      return 0;
                    }
                    iVar1 = FUN_0210cd28(param_2,0);
                  }
                  FUN_0210cd7c(&uStack_30,param_2,0);
                  if (param_2 == 0) {
                    func_0x01384bf0();
                  }
                  uVar5 = 0;
                  FUN_0210cd7c(&uStack_30,param_2,0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = FUN_020dbcf8(iVar1,uStack_30,uStack_2c,0);
                  if (iVar1 < 1) {
                    if (param_1 == 0) {
                      func_0x01384bf0();
                    }
                    uVar5 = 0;
                    puVar6 = *(undefined4 **)(_UNK_02164a40 + 0x21649a0);
                    func_0x02feb690(param_1,&iStack_24,0,*puVar6);
                    if (param_2 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x02feb690(param_2,&iStack_28,0,*puVar6);
                    iVar1 = extraout_r1;
                    if (iStack_24 != 0) {
                      iVar1 = iStack_28;
                    }
                    if (iStack_24 != 0 && iVar1 != 0) {
                      uVar5 = 0;
                      iVar2 = FUN_0212f4e4(iStack_24,0);
                      iVar1 = iStack_28;
                      if (iStack_28 == 0) {
                        func_0x01384bf0();
                      }
                      iVar3 = FUN_0212f4e4(iVar1,0);
                      iVar1 = iStack_24;
                      if (iVar2 == iVar3) {
                        if (iStack_24 == 0) {
                          func_0x01384bf0();
                        }
                        uVar5 = FUN_02132bec(iVar1,0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e5b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar5;
}



// ===== FAT.Merge.ItemUtility$$CanMerge RVA 0x2154a44 =====

uint FUN_02164a44(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x5ba2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ba2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = func_0x02164ab0(param_1,param_2);
  return (uint)(iVar1 == 0);
}



// ===== FAT.Merge.ItemUtility$$GetMergeState RVA 0x2154ab0 =====

int FUN_02164ab0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
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
  
  iVar1 = func_0x0229f06c(0x5ba3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ba3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  if (param_1 != param_2) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02119be0(param_1,0,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = 0;
    iVar4 = FUN_02119be0(param_2,0,0);
    uVar5 = 0;
    if (iVar1 != 0 || iVar4 != 0) {
      if (iVar1 != 0) {
        iVar6 = FUN_0211e720(iVar1,0);
      }
      uVar7 = 0;
      iVar8 = 0;
      if (iVar4 != 0) {
        iVar8 = FUN_0211e720(iVar4,0);
      }
      if (iVar1 != 0) {
        uVar7 = FUN_0211e780(iVar1,0);
      }
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0211e780(iVar4,0);
      }
      uVar5 = 1;
      if ((iVar8 != 0 || iVar6 != 0) || (uVar2 & uVar7) != 0) {
        return 1;
      }
    }
    if (param_2 == 0) {
      func_0x01384bf0(uVar5);
      iVar1 = FUN_0210cd28(0,0);
      func_0x01384bf0();
    }
    else {
      iVar1 = FUN_0210cd28(param_2,0);
    }
    FUN_0210cd7c(&uStack_30,param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_30,param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_020dbcf8(iVar1,uStack_30,uStack_2c,0);
    if (0 < iVar1) {
      return 3;
    }
    if (param_1 == 0) {
      func_0x01384bf0(3);
    }
    iVar1 = FUN_02119d28(param_1,0,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = FUN_02119d28(param_2,0,0);
    iVar4 = iVar6;
    if (iVar1 != 0) {
      iVar8 = FUN_021326c4(iVar1,0);
      iVar4 = 1;
      if (iVar8 != 0) {
        return 1;
      }
    }
    if (iVar6 != 0) {
      iVar6 = FUN_021326c4(iVar6,0);
      iVar4 = 1;
      if (iVar6 != 0) {
        return 1;
      }
    }
    if (param_1 == 0) {
      func_0x01384bf0(iVar4);
    }
    iVar4 = FUN_02119c84(param_1,0,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = FUN_02119c84(param_2,0,0);
    if (iVar4 != 0) {
      iVar1 = iVar6;
    }
    if (iVar4 != 0 && iVar6 != 0) {
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = FUN_02116a8c(param_1,0);
      if (iVar6 == 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar6 = FUN_02116a8c(param_2,0);
        if (iVar6 == 0) {
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          iVar6 = FUN_02116ae0(param_1,0);
          if (iVar6 != 0) {
            if (param_2 == 0) {
              func_0x01384bf0();
              iVar6 = FUN_0211015c(0,0);
              if (iVar6 == 0) {
                func_0x01384bf0();
                goto LAB_02164df4;
              }
            }
            else {
              iVar6 = FUN_0211015c(param_2,0);
              if (iVar6 == 0) {
LAB_02164df4:
                iVar6 = FUN_02116b64(param_2,0);
                if (iVar6 != 0) {
                  return 4;
                }
                iVar1 = FUN_0212f278(iVar1,iVar4,0);
                return (uint)(iVar1 < 1) << 2;
              }
            }
          }
        }
      }
    }
  }
  return 4;
}



// ===== FAT.Merge.ItemUtility$$MayHaveMergeResult RVA 0x2154e30 =====

undefined4
FUN_02164e30(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0x5b9f,0);
  if (iVar1 == 0) {
    if (param_1 != 0 && param_3 != 0) {
      uVar2 = 0;
      iVar1 = FUN_0212f430(param_3,param_2,param_4,param_5,param_6,0);
      if (0 < iVar1) {
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b9f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02233e5c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemUtility$$GetGridMatchId RVA 0x2154ee4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02164ee4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
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
  
  pcVar7 = (char *)(_UNK_02165078 + 0x2164efc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216507c + 0x2164f10));
    func_0x01384978(*(undefined4 *)(_UNK_02165080 + 0x2164f1c));
    func_0x01384978(*(undefined4 *)(_UNK_02165084 + 0x2164f28));
    *pcVar7 = '\x01';
  }
  iVar8 = 0;
  iVar1 = func_0x0229f06c(0x149d,0);
  if (iVar1 != 0) {
    iVar8 = func_0x0229f13c(0x149d,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar1 = *(int *)(iVar8 + 8);
    uVar9 = *(undefined4 *)(iVar8 + 0xc);
    iVar8 = *(int *)(iVar8 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar8 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar1,uVar9,&uStack_38,uVar6,0,0);
    iVar8 = func_0x0245498c(&uStack_38,0,0);
    return iVar8;
  }
  if (param_1 != 0) {
    iVar8 = -1;
  }
  if (param_1 != 0 && param_2 != 0) {
    piVar2 = (int *)FUN_021566f4();
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_02165088 + 0x2164fb8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x108);
          goto LAB_02165000;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02165088 + 0x2164fb8),9);
LAB_02165000:
    iVar1 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar1 + 0x4c);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar10 + 0xc) != 0) {
      iVar8 = *(int *)(iVar1 + 0x4c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x0364bc1c(iVar8,param_1,**(undefined4 **)(_UNK_0216508c + 0x2165060));
      if (iVar8 == 0) {
        param_1 = -1;
      }
      return param_1;
    }
  }
  return iVar8;
}



// ===== FAT.Merge.ItemUtility$$CanItemInGridByTid RVA 0x2155090 =====

uint FUN_02165090(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x149c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x149c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = FUN_02164ee4(param_1,param_2);
  return (uint)(iVar1 == param_1);
}



// ===== FAT.Merge.ItemUtility$$CanSourceOutputInGrid RVA 0x2155100 =====

/* WARNING: Removing unreachable block (ram,0x02165318) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02165100(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02165420 + 0x216511c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02165424 + 0x2165130));
    func_0x01384978(*(undefined4 *)(_UNK_02165428 + 0x216513c));
    func_0x01384978(*(undefined4 *)(_UNK_0216542c + 0x2165148));
    func_0x01384978(*(undefined4 *)(_UNK_02165430 + 0x2165154));
    func_0x01384978(*(undefined4 *)(_UNK_02165434 + 0x2165160));
    func_0x01384978(*(undefined4 *)(_UNK_02165438 + 0x216516c));
    func_0x01384978(*(undefined4 *)(_UNK_0216543c + 0x2165178));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_1c = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x149e,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      uVar2 = 1;
    }
    else {
      piVar4 = *(int **)(_UNK_02165440 + 0x21651fc);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      iVar1 = **(int **)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_28,iVar1,&iStack_1c,**(undefined4 **)(_UNK_02165444 + 0x2165238));
      if (param_2 != (int *)0x0) {
        uVar2 = (uint)*(byte *)(**(int **)(_UNK_02165448 + 0x2165254) + 0xb8);
        if ((uVar2 <= *(byte *)(*param_2 + 0xb8)) &&
           (*(int *)(*(int *)(*param_2 + 100) + uVar2 * 4 + -4) ==
            **(int **)(_UNK_02165448 + 0x2165254))) {
          FUN_02135284(param_2,iStack_1c,0);
        }
      }
      iVar1 = iStack_1c;
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      func_0x0325a3b4(&uStack_48,iVar1,**(undefined4 **)(_UNK_0216544c + 0x21652a8));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      puVar5 = *(undefined4 **)(_UNK_02165450 + 0x21652cc);
      do {
        uVar2 = func_0x03f597e0(&uStack_38,*puVar5);
        if (uVar2 == 0) break;
        iVar1 = FUN_02165090(param_1,uStack_2c);
      } while (iVar1 != 0);
      uVar2 = uVar2 ^ 1;
      func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_02165454 + 0x2165308));
      func_0x028c98a0(&uStack_28,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x149e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021928b8(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemUtility$$IsItemInNormalState RVA 0x215545c =====

uint FUN_0216545c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x5e8c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e8c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_02116a8c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02116ae0(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = FUN_02116a8c(param_1,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_02116ae0(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_02119be0(param_1,0,0);
  return (uint)(iVar1 == 0);
}



// ===== FAT.Merge.ItemUtility$$CanUnlock RVA 0x2155540 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02165540(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0x883c,0);
  if (iVar3 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
      iVar3 = FUN_02116a8c(0,0);
      if (iVar3 != 0) {
        return 0;
      }
      func_0x01384bf0();
      iVar3 = FUN_0211015c(0,0);
      if (iVar3 == 0) {
        return 0;
      }
      func_0x01384bf0();
      iVar3 = FUN_02116b64(0,0);
      if (iVar3 != 0) {
        return 0;
      }
      func_0x01384bf0();
    }
    else {
      iVar3 = FUN_02116a8c(param_1,0);
      if (iVar3 != 0) {
        return 0;
      }
      iVar3 = FUN_0211015c(param_1,0);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_02116b64(param_1,0);
      if (iVar3 != 0) {
        return 0;
      }
    }
    pcVar7 = (char *)(_UNK_02116e3c + 0x2116cf0);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02116e40 + 0x2116d04),0);
      func_0x01384978(*(undefined4 *)(_UNK_02116e44 + 0x2116d10));
      *pcVar7 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x1609,0);
    if (iVar3 == 0) {
      uVar9 = 1;
      if (*(int *)(param_1 + 0x18) == 4) {
        iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_02116e48 + 0x2116d78));
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar9 = 0;
        iVar3 = func_0x01ddc484(iVar3,0);
        if (iVar3 == 0) {
          piVar1 = (int *)FUN_021566f4(0);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar1;
          uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar5[-1] == **(int **)(_UNK_02116e4c + 0x2116dcc)) {
                puVar2 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0x1b0);
                goto LAB_02116e14;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_02116e4c + 0x2116dcc),0x1e);
LAB_02116e14:
          iVar3 = (*(code *)*puVar2)(piVar1,puVar2[1]);
          uVar9 = 0;
          if (*(int *)(param_1 + 0x1c) <= iVar3) {
            uVar9 = 1;
          }
        }
      }
      return uVar9;
    }
    iVar3 = func_0x0229f13c(0x1609,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x883c,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar8 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar3 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
  uVar9 = func_0x0245496c(&uStack_30,0,0);
  return uVar9;
}



// ===== FAT.Merge.ItemUtility$$SetItemShowInCategory RVA 0x2155638 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02165638(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02165730 + 0x216564c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02165734 + 0x2165660));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1626,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1626,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    return;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02165738 + 0x21656d0)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xf0);
        goto LAB_02165718;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02165738 + 0x21656d0),6);
LAB_02165718:
                    /* WARNING: Could not recover jumptable at 0x0216572c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  return;
}



// ===== FAT.Merge.ItemUtility$$CheckSourceCanJumpCD RVA 0x215573c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0216573c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_02165838 + 0x2165754);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216583c + 0x2165768));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5f26,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02feb690(param_1,&iStack_14,0,**(undefined4 **)(_UNK_02165840 + 0x21657dc));
    iVar1 = iStack_14;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02123058(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = (uint)(*(char *)(iVar1 + 0x31) != '\0');
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5f26,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemUtility$$CheckSourceCanTokenMulti RVA 0x2155844 =====

/* WARNING: Removing unreachable block (ram,0x02165b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02165844(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_02165c28 + 0x2165860);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02165c2c + 0x2165874));
    func_0x01384978(*(undefined4 *)(_UNK_02165c30 + 0x2165880));
    func_0x01384978(*(undefined4 *)(_UNK_02165c34 + 0x216588c));
    func_0x01384978(*(undefined4 *)(_UNK_02165c38 + 0x2165898));
    func_0x01384978(*(undefined4 *)(_UNK_02165c3c + 0x21658a4));
    *pcVar8 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x5f36,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = 0;
    iVar2 = func_0x02feb690(param_2,&iStack_24,0,**(undefined4 **)(_UNK_02165c40 + 0x2165924));
    if (iVar2 != 0) {
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_021378d4(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = iStack_24;
      iVar7 = *(int *)(iVar1 + 0x24);
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      iVar1 = 0;
      iVar2 = FUN_0210ccb4(iVar2,0);
      if (iVar2 != 0) {
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)func_0x0364c2b4(iVar7,**(undefined4 **)(_UNK_02165c44 + 0x21659a0));
        piVar10 = *(int **)(_UNK_02165c48 + 0x21659b8);
        piVar9 = *(int **)(_UNK_02165c4c + 0x21659c0);
        do {
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar10) {
                puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto LAB_02165a18;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0);
LAB_02165a18:
          iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if (iVar1 == 0) {
            iVar1 = 0;
            break;
          }
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar9) {
                puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
                goto LAB_02165a90;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar9,0);
LAB_02165a90:
          iVar7 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          iVar2 = iStack_24;
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
        } while (*(int *)(iVar2 + 0x14) != iVar7);
        if (piVar3 != (int *)0x0) {
          iVar2 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar9[-1] == **(int **)(_UNK_02165c50 + 0x2165ae8)) {
                puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
                goto LAB_02165b30;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02165c50 + 0x2165ae8),0);
LAB_02165b30:
          (*(code *)*puVar4)(piVar3,puVar4[1]);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5f36,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return iVar1;
}



// ===== FAT.Merge.ItemUtility$$CheckTokenCanMulti RVA 0x2155c58 =====

/* WARNING: Removing unreachable block (ram,0x02165ed0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02165c58(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
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
  
  pcVar7 = (char *)(_UNK_02165fa8 + 0x2165c70);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02165fac + 0x2165c84));
    func_0x01384978(*(undefined4 *)(_UNK_02165fb0 + 0x2165c90));
    func_0x01384978(*(undefined4 *)(_UNK_02165fb4 + 0x2165c9c));
    func_0x01384978(*(undefined4 *)(_UNK_02165fb8 + 0x2165ca8));
    *pcVar7 = '\x01';
  }
  iVar8 = 0;
  iVar1 = func_0x0229f06c(0x6e2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6e2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    iVar1 = func_0x0245496c(&uStack_38,0,0);
    return iVar1;
  }
  if ((param_1 != 0) && (0 < param_2)) {
    iVar8 = 0;
    iVar1 = FUN_021378d4(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x24) != 0) {
      piVar2 = (int *)func_0x0364c2b4(*(int *)(iVar1 + 0x24),
                                      **(undefined4 **)(_UNK_02165fbc + 0x2165d44));
      piVar11 = *(int **)(_UNK_02165fc0 + 0x2165d58);
      piVar10 = *(int **)(_UNK_02165fc4 + 0x2165d60);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar11) {
              puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto LAB_02165db8;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_02165db8:
        iVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar8 == 0) {
          iVar8 = 0;
          break;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar10) {
              puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto LAB_02165e30;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_02165e30:
        iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      } while (iVar1 != param_2);
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_02165fc8 + 0x2165e70)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
              goto LAB_02165eb8;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02165fc8 + 0x2165e70),0);
LAB_02165eb8:
        (*(code *)*puVar3)(piVar2,puVar3[1]);
      }
    }
  }
  return iVar8;
}



// ===== FAT.Merge.ItemUtility$$CanConsumeAny RVA 0x2155fd0 =====

undefined4 FUN_02165fd0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0xb51f,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    *param_4 = 0;
    if (((param_1 != param_2) && (iVar1 = FUN_0216545c(param_1), iVar1 != 0)) &&
       (iVar1 = FUN_0216545c(param_2), iVar1 != 0)) {
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02119dcc(param_1,0,0);
      if ((iVar1 == 0) || (iVar1 = FUN_021238b8(iVar1,param_2,0), iVar1 == 0)) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_02119dcc(param_2,0,0);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = FUN_021238b8(iVar1,param_1,0);
        if (iVar1 == 0) {
          return 0;
        }
        *param_3 = param_1;
        *param_4 = param_2;
      }
      else {
        *param_3 = param_2;
        *param_4 = param_1;
      }
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb51f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0229e6ec(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemUtility$$CanConsume RVA 0x2156108 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02166108(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
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
  
  iVar5 = func_0x0229f06c(0x5e8b,0);
  if (iVar5 != 0) {
    iVar6 = func_0x0229f13c(0x5e8b,0);
    iVar5 = param_1;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
SUB_021734d8:
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar6 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar6 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar5,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar6 + 8);
    uVar12 = *(undefined4 *)(iVar6 + 0xc);
    iVar5 = *(int *)(iVar6 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar5 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_38,uVar9,0,0);
    uVar7 = func_0x0245496c(&uStack_38,0,0);
    return uVar7;
  }
  if (((param_1 != param_2) && (iVar5 = FUN_0216545c(param_1), iVar5 != 0)) &&
     (iVar5 = FUN_0216545c(param_2), iVar5 != 0)) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_02119dcc(param_2,0,0);
    if (iVar5 != 0) {
      pcVar10 = (char *)(_UNK_02123ab8 + 0x21238d4);
      if (*pcVar10 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02123abc + 0x21238e8),param_1,0);
        func_0x01384978(*(undefined4 *)(_UNK_02123ac0 + 0x21238f4));
        func_0x01384978(*(undefined4 *)(_UNK_02123ac4 + 0x2123900));
        *pcVar10 = '\x01';
      }
      iVar6 = func_0x0229f06c(0x5b9d,0);
      if (iVar6 == 0) {
        iVar6 = FUN_02122ab0(iVar5);
        if (iVar6 < 1) {
          iVar6 = 0;
          piVar13 = *(int **)(_UNK_02123ac8 + 0x2123984);
          while( true ) {
            iVar11 = FUN_02123058(iVar5);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0x18);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0xc);
            if (iVar11 <= iVar6) break;
            iVar1 = FUN_02123058(iVar5);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x18);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar12 = func_0x0364c9b8(iVar1,iVar6,**(undefined4 **)(_UNK_02123acc + 0x21239f8));
            piVar2 = (int *)FUN_021566f4(0);
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar2;
            uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar8[-1] == *piVar13) {
                  puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x1e0);
                  goto LAB_02123a6c;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar13,0x24);
LAB_02123a6c:
            iVar1 = (*(code *)*puVar3)(piVar2,uVar12,puVar3[1]);
            if (iVar1 != 0) {
              iVar1 = *(int *)(iVar1 + 0x14);
              if (param_1 == 0) {
                func_0x01384bf0();
              }
              iVar4 = FUN_0210e2d4(param_1,0);
              if (iVar1 == iVar4) {
                return (uint)(iVar6 < iVar11);
              }
            }
            iVar6 = iVar6 + 1;
          }
        }
        return 0;
      }
      iVar6 = func_0x0229f13c(0x5b9d,0);
      param_2 = param_1;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      goto SUB_021734d8;
    }
  }
  return 0;
}



// ===== FAT.Merge.ItemUtility$$CanMix RVA 0x21561c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021661c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_02166300 + 0x21661dc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02166304 + 0x21661f0));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9e6e,0);
  if (iVar1 == 0) {
    if (((param_1 != param_2) && (iVar1 = FUN_0216545c(param_1), iVar1 != 0)) &&
       (iVar1 = FUN_0216545c(param_2), iVar1 != 0)) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 0;
      iVar2 = func_0x02feb690(param_2,&iStack_14,0,**(undefined4 **)(_UNK_02166308 + 0x2166298));
      iVar1 = iStack_14;
      if (iVar2 != 0) {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 0;
        iVar2 = FUN_0212ff04(iVar1,0);
        iVar1 = iStack_14;
        if (iVar2 != 0) {
          if (iStack_14 == 0) {
            func_0x01384bf0();
          }
          uVar4 = FUN_02130618(iVar1,param_1,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e6e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar4;
}



// ===== FAT.Merge.ItemUtility$$CanFeed RVA 0x215630c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216630c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_02166440 + 0x2166328);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02166444 + 0x216633c));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9e60,0);
  if (iVar1 == 0) {
    if (((param_1 != param_2) && (iVar1 = FUN_0216545c(param_1), iVar1 != 0)) &&
       (iVar1 = FUN_0216545c(param_2), iVar1 != 0)) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 0;
      iVar2 = func_0x02feb690(param_2,&iStack_14,0,**(undefined4 **)(_UNK_02166448 + 0x21663e4));
      iVar1 = iStack_14;
      if (iVar2 != 0) {
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uVar4 = FUN_0210e2d4(param_1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar4 = FUN_0212b3bc(iVar1,uVar4,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e60,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar4;
}



// ===== FAT.Merge.ItemUtility$$FeedItem RVA 0x215644c =====

undefined4 FUN_0216644c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x9e8b,0);
  if (iVar1 == 0) {
    uStack_14 = 1;
    iVar1 = func_0x021664d4(param_1,param_2,&uStack_14);
    if (iVar1 != 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e8b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02288c10(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.Merge.ItemUtility$$_FeedItemImp RVA 0x21564d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021664d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_0216693c + 0x21664f4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02166940 + 0x2166508));
    func_0x01384978(*(undefined4 *)(_UNK_02166944 + 0x2166514));
    func_0x01384978(*(undefined4 *)(_UNK_02166948 + 0x2166520));
    func_0x01384978(*(undefined4 *)(_UNK_0216694c + 0x216652c));
    func_0x01384978(*(undefined4 *)(_UNK_02166950 + 0x2166538));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x9e8c,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x9e8c,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x02288af4(iVar3,param_1,param_2,param_3,0);
    return uVar4;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = FUN_0210cd28(param_1,0);
  if (iVar3 == 0) {
    piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02166954 + 0x2166614),2);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = FUN_0210e5f4(param_1,0);
    puVar7 = *(undefined4 **)(_UNK_02166958 + 0x2166644);
    iVar3 = func_0x01384abc(*puVar7,&uStack_1c);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar3 != 0) && (iVar1 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar1 == 0)
       ) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if (piVar5[3] == 0) {
      func_0x01384bf4();
    }
    piVar5[4] = iVar3;
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = FUN_0210e2d4(param_1,0);
    iVar3 = func_0x01384abc(*puVar7,&uStack_20);
    if ((iVar3 != 0) && (iVar1 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar1 == 0)
       ) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if ((uint)piVar5[3] < 2) {
      func_0x01384bf4();
    }
    piVar5[5] = iVar3;
    if (*(int *)(**(int **)(_UNK_0216695c + 0x216671c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar7 = *(undefined4 **)(_UNK_02166960 + 0x2166738);
  }
  else {
    iVar3 = FUN_0216545c(param_2);
    if (iVar3 != 0) {
      if (param_1 == 0) {
        func_0x01384bf0();
        iVar3 = FUN_0210e250(0,0xd,0,0);
        func_0x01384bf0();
        if (iVar3 != 0) goto LAB_021668ac;
        iVar3 = FUN_0210e250(0,0xe,0,0);
        if (iVar3 == 0) {
          return 0;
        }
        func_0x01384bf0();
      }
      else {
        iVar3 = FUN_0210e250(param_1,0xd,0,0);
        if (iVar3 != 0) {
LAB_021668ac:
          iVar3 = FUN_0210cd28(param_1,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          pcVar6 = (char *)(_UNK_020e005c + 0x20dfeec);
          if (*pcVar6 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_020e0060 + 0x20dff00),param_1,param_2,0);
            func_0x01384978(*(undefined4 *)(_UNK_020e0064 + 0x20dff0c));
            func_0x01384978(*(undefined4 *)(_UNK_020e0068 + 0x20dff18));
            *pcVar6 = '\x01';
          }
          iVar1 = func_0x0229f06c(0x9e8d,0);
          if (iVar1 == 0) {
            if (param_1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x02feb4f8(param_1,0,**(undefined4 **)(_UNK_020e006c + 0x20dff8c));
            if ((iVar1 == 0) || (iVar1 = FUN_0212de24(iVar1,param_2,0), iVar1 == 0)) {
              uVar2 = 0;
              uVar4 = func_0x0244f690(**(undefined4 **)(_UNK_020e0070 + 0x20e0020),param_1,param_2,0
                                     );
              if (*(int *)(**(int **)(_UNK_020e0074 + 0x20e0034) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x028c2874(uVar4,0);
            }
            else {
              FUN_020dd73c(iVar3,param_2,0,4);
              FUN_020dd8f4(iVar3,param_2,param_1,4);
              iVar3 = *(int *)(iVar3 + 0x10);
              uVar2 = 1;
              if (iVar3 != 0) {
                (**(code **)(iVar3 + 0xc))
                          (*(undefined4 *)(iVar3 + 0x20),param_1,param_2,
                           *(undefined4 *)(iVar3 + 0x14));
              }
            }
          }
          else {
            iVar1 = func_0x0229f13c(0x9e8d,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_20 = 0;
            uVar2 = func_0x02174cb0(iVar1,iVar3,param_1,param_2);
          }
          return uVar2;
        }
        iVar3 = FUN_0210e250(param_1,0xe,0,0);
        if (iVar3 == 0) {
          return 0;
        }
      }
      iVar3 = FUN_0210cd28(param_1,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      pcVar6 = (char *)(_UNK_020e0208 + 0x20e0098);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_020e020c + 0x20e00ac),param_1,param_2,0);
        func_0x01384978(*(undefined4 *)(_UNK_020e0210 + 0x20e00b8));
        func_0x01384978(*(undefined4 *)(_UNK_020e0214 + 0x20e00c4));
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x9e97,0);
      if (iVar1 == 0) {
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02feb4f8(param_1,0,**(undefined4 **)(_UNK_020e0218 + 0x20e0138));
        if ((iVar1 == 0) || (iVar1 = FUN_0212b15c(iVar1,param_2,0), iVar1 == 0)) {
          uVar2 = 0;
          uVar4 = func_0x0244f690(**(undefined4 **)(_UNK_020e021c + 0x20e01cc),param_1,param_2,0);
          if (*(int *)(**(int **)(_UNK_020e0220 + 0x20e01e0) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2874(uVar4,0);
        }
        else {
          FUN_020dd73c(iVar3,param_2,0,4);
          FUN_020dd8f4(iVar3,param_2,param_1,4);
          iVar3 = *(int *)(iVar3 + 0x10);
          uVar2 = 1;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + 0xc))
                      (*(undefined4 *)(iVar3 + 0x20),param_1,param_2,*(undefined4 *)(iVar3 + 0x14));
          }
        }
      }
      else {
        iVar1 = func_0x0229f13c(0x9e97,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        uVar2 = func_0x02174cb0(iVar1,iVar3,param_1,param_2);
      }
      return uVar2;
    }
    piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02166964 + 0x2166748),2);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = FUN_0210e5f4(param_1,0);
    puVar7 = *(undefined4 **)(_UNK_02166968 + 0x2166778);
    iVar3 = func_0x01384abc(*puVar7,&uStack_1c);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar3 != 0) && (iVar1 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar1 == 0)
       ) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if (piVar5[3] == 0) {
      func_0x01384bf4();
    }
    piVar5[4] = iVar3;
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = FUN_0210e2d4(param_1,0);
    iVar3 = func_0x01384abc(*puVar7,&uStack_20);
    if ((iVar3 != 0) && (iVar1 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar1 == 0)
       ) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if ((uint)piVar5[3] < 2) {
      func_0x01384bf4();
    }
    piVar5[5] = iVar3;
    if (*(int *)(**(int **)(_UNK_0216696c + 0x2166850) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar7 = *(undefined4 **)(_UNK_02166970 + 0x216686c);
  }
  func_0x028c23bc(*puVar7,piVar5,0);
  return 0;
}



// ===== FAT.Merge.ItemUtility$$IsUseForTarget RVA 0x2156974 =====

undefined4 FUN_02166974(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb520,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb520,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x282,0,0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02119a3c(param_1,0xb,0);
    uVar4 = 0;
    if (iVar1 != 0) {
      uVar4 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x282,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar4 = func_0x02181680(iVar1,param_1,0xb,0);
  }
  return uVar4;
}



// ===== FAT.Merge.ItemUtility$$CanUseForTarget RVA 0x21569e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021669e4(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  char cVar10;
  char *pcVar11;
  undefined8 uVar12;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  int aiStack_24 [3];
  
  pcVar11 = (char *)(_UNK_02166ac8 + 0x2166a04);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02166acc + 0x2166a18));
    *pcVar11 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x9e56,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x9e56,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    aiStack_24[1] = 0;
    uVar8 = func_0x02287cd0(iVar7,param_1,param_2,param_3);
    return uVar8;
  }
  *param_3 = 0;
  param_3[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_3[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_3[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x02feb4f8(param_1,0,**(undefined4 **)(_UNK_02166ad0 + 0x2166a94));
  if (iVar7 == 0) {
    return 0;
  }
  pcVar11 = (char *)(_UNK_02133c0c + 0x21333c0);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02133c10 + 0x21333d4),param_2,param_3,0);
    func_0x01384978(*(undefined4 *)(_UNK_02133c14 + 0x21333e0));
    func_0x01384978(*(undefined4 *)(_UNK_02133c18 + 0x21333ec));
    func_0x01384978(*(undefined4 *)(_UNK_02133c1c + 0x21333f8));
    *pcVar11 = '\x01';
  }
  aiStack_24[0] = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = 0;
  iStack_38 = 0;
  iStack_3c = 0;
  iVar1 = func_0x0229f06c(0x9e57,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e57,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x02287cd0(iVar1,iVar7,param_2,param_3,0);
    return uVar8;
  }
  *param_3 = 0;
  param_3[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_3[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_3[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_0211015c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_0210cd28(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02116a8c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = FUN_0211015c(param_2,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_0210cd28(param_2,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_02116a8c(param_2,0);
    if (iVar1 != 0) {
      return 0;
    }
  }
  iVar1 = FUN_02116b64(param_2,0);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = func_0x02168930(param_2,0);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_02123568(iVar7);
  iVar1 = FUN_02164a44(uVar2,param_2,0);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_0212f4e4(iVar7);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar8 = FUN_02116a38(param_2,0);
  if (iVar1 == 5) {
    return uVar8;
  }
  if ((uVar8 != 0) && (iVar1 = FUN_0212f4e4(iVar7), iVar1 != 7)) {
    return 0;
  }
  uVar2 = FUN_0212f4e4(iVar7);
  uVar8 = 0;
  switch(uVar2) {
  case 1:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 0;
    iVar1 = func_0x02feb690(param_2,aiStack_24,0,**(undefined4 **)(&UNK_0213363c + _UNK_02133c20));
    iVar7 = aiStack_24[0];
    if (iVar1 != 0) {
      if (aiStack_24[0] == 0) {
        func_0x01384bf0();
      }
      uVar8 = FUN_02122810(iVar7);
      uVar8 = uVar8 ^ 1;
    }
    break;
  case 2:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar8 = FUN_0210e250(param_2,2,0,0);
    break;
  case 3:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar7 = FUN_02116ae0(param_2,0);
    if (iVar7 == 0) {
      return 0;
    }
    piVar3 = (int *)FUN_021566f4(0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_0210e2d4(param_2,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(&UNK_021336f8 + _UNK_02133c24)) {
          puVar4 = (undefined4 *)(iVar7 + *piVar9 * 8 + 0x108);
          goto code_r0x02133ba4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(&UNK_021336f8 + _UNK_02133c24),9);
code_r0x02133ba4:
    iVar7 = (*(code *)*puVar4)(piVar3,uVar2,puVar4[1]);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    cVar10 = *(char *)(iVar7 + 0x3c);
    goto code_r0x02133bcc;
  case 7:
    piVar3 = (int *)FUN_021566f4(0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_0210e2d4(param_2,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(&UNK_02133778 + _UNK_02133c28)) {
          puVar4 = (undefined4 *)(iVar7 + *piVar9 * 8 + 0x108);
          goto code_r0x02133b6c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(&UNK_02133778 + _UNK_02133c28),9);
code_r0x02133b6c:
    iVar7 = (*(code *)*puVar4)(piVar3,uVar2,puVar4[1]);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    cVar10 = *(char *)(iVar7 + 0x40);
    goto code_r0x02133bcc;
  case 8:
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar1 = FUN_02116ae0(0,0);
      if (iVar1 == 0) {
        return 0;
      }
      func_0x01384bf0();
      iVar1 = FUN_0210e250(0,6,0,0);
      if (iVar1 != 0) {
        return 0;
      }
      iStack_2c = 0;
      uStack_30 = 0;
      func_0x01384bf0();
    }
    else {
      iVar1 = FUN_02116ae0(param_2,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_0210e250(param_2,6,0,0);
      if (iVar1 != 0) {
        return 0;
      }
      iStack_2c = 0;
      uStack_30 = 0;
    }
    iVar5 = func_0x02feb690(param_2,&iStack_34,0,**(undefined4 **)(&UNK_021338cc + _UNK_02133c30));
    iVar1 = iStack_34;
    if (iVar5 != 0) {
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      iVar5 = FUN_02122f9c(iVar1);
      iVar1 = iStack_34;
      if (iVar5 < 1) {
        if (iStack_34 == 0) {
          func_0x01384bf0();
        }
        iVar5 = FUN_02122cc0(iVar1);
        iVar1 = iStack_34;
        if (iVar5 != 0) {
          if (iStack_34 == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_02123058(iVar1);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar5 = iStack_34;
          iVar1 = *(int *)(iVar1 + 0x44);
          if (iStack_34 == 0) {
            func_0x01384bf0();
          }
          iVar5 = FUN_02122c6c(iVar5);
          iVar5 = iVar1 * 1000 - iVar5;
          FUN_02133c3c(iVar7,&uStack_30,iVar5,iVar5 >> 0x1f);
        }
        iVar1 = iStack_34;
        if (iStack_34 == 0) {
          func_0x01384bf0();
        }
        iVar5 = FUN_02122da4(iVar1);
        iVar1 = iStack_34;
        if (iVar5 != 0) {
          if (iStack_34 == 0) {
            func_0x01384bf0();
          }
          iVar5 = FUN_02122e38(iVar1);
          iVar1 = iStack_34;
          if (iStack_34 == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_02123004(iVar1);
          FUN_02133c3c(iVar7,&uStack_30,iVar5 - iVar1,iVar5 - iVar1 >> 0x1f);
        }
      }
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x02feb690(param_2,&iStack_38,0,**(undefined4 **)(&UNK_02133a04 + _UNK_02133c34));
    iVar1 = iStack_38;
    if (iVar5 != 0) {
      if (iStack_38 == 0) {
        func_0x01384bf0();
      }
      iVar5 = FUN_0211bf58(iVar1,0);
      iVar1 = iStack_38;
      if (iVar5 != 0) {
        if (iStack_38 == 0) {
          func_0x01384bf0();
        }
        uVar12 = FUN_0211bfcc(iVar1,0);
        iVar1 = iStack_38;
        if (iStack_38 == 0) {
          func_0x01384bf0();
        }
        uVar8 = FUN_0211be60(iVar1,0);
        FUN_02133c3c(iVar7,&uStack_30,(uint)uVar12 - uVar8,
                     (int)((ulonglong)uVar12 >> 0x20) -
                     (((int)uVar8 >> 0x1f) + (uint)((uint)uVar12 < uVar8)));
      }
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x02feb690(param_2,&iStack_3c,0,**(undefined4 **)(&UNK_02133aac + _UNK_02133c38));
    iVar1 = iStack_3c;
    if (iVar5 != 0) {
      if (iStack_3c == 0) {
        func_0x01384bf0();
      }
      iVar5 = FUN_0211f8ec(iVar1,0);
      iVar1 = iStack_3c;
      if (iVar5 != 0) {
        if (iStack_3c == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_0211fa9c(iVar1,0);
        FUN_02133c3c(iVar7,&uStack_30,iVar1,iVar1 >> 0x1f);
        *param_3 = 1;
      }
    }
    iVar1 = iStack_2c;
    uVar8 = uStack_30;
    if (iStack_2c < 0) {
      uStack_30 = 0;
      iStack_2c = 0;
    }
    else {
      iVar5 = FUN_02132670(iVar7);
      uVar6 = iVar5 * 1000;
      iVar5 = (int)uVar6 >> 0x1f;
      if ((int)(iVar5 - (iVar1 + (uint)(uVar6 < uVar8))) < 0 !=
          (SBORROW4(iVar5,iVar1) != SBORROW4(iVar5 - iVar1,(uint)(uVar6 < uVar8)))) {
        iVar7 = FUN_02132670(iVar7,uVar6 - uVar8);
        uStack_30 = iVar7 * 1000;
        iStack_2c = (int)uStack_30 >> 0x1f;
      }
    }
    param_3[2] = uStack_30;
    param_3[3] = iStack_2c;
    uVar8 = (uint)((int)-(iStack_2c + (uint)(uStack_30 != 0)) < 0 !=
                  (SBORROW4(0,iStack_2c) != SBORROW4(-iStack_2c,(uint)(uStack_30 != 0))));
    break;
  case 9:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb690(param_2,&iStack_28,0,**(undefined4 **)(&UNK_02133828 + _UNK_02133c2c));
    iVar7 = iStack_28;
    if (iVar1 == 0) {
      return 0;
    }
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    iVar7 = FUN_02123058(iVar7);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    cVar10 = *(char *)(iVar7 + 0x2d);
code_r0x02133bcc:
    uVar8 = (uint)(cVar10 != '\0');
  }
  return uVar8;
}



// ===== FAT.Merge.ItemUtility$$UseForTarget RVA 0x2156ad4 =====

/* WARNING: Possible PIC construction at 0x02134634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02134638) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02166ad4(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int unaff_r4;
  int unaff_r5;
  uint uVar10;
  uint unaff_r6;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int aiStack_28 [4];
  
  pcVar11 = (char *)(_UNK_02166b94 + 0x2166aec);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02166b98 + 0x2166b00));
    *pcVar11 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x9e80,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x9e80,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
SUB_021734d8:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
    *(uint *)((int)register0x00000054 + -0x18) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x34) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
    iVar7 = *(int *)(iVar5 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x38) =
         *(undefined4 *)((int)register0x00000054 + -0x50);
    *(undefined4 *)((int)register0x00000054 + -0x34) =
         *(undefined4 *)((int)register0x00000054 + -0x4c);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((int)register0x00000054 + -0x48);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((int)register0x00000054 + -0x44);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((int)register0x00000054 + -0x40);
    if (iVar7 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar7,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
    iVar7 = *(int *)(iVar5 + 8);
    uVar12 = *(undefined4 *)(iVar5 + 0xc);
    iVar5 = *(int *)(iVar5 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar5 == 0) {
      uVar9 = 2;
    }
    *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
    func_0x0245495c(iVar7,uVar12,(undefined1 *)((int)register0x00000054 + -0x38),uVar9);
    uVar6 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
    return uVar6;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  param_1 = func_0x02feb4f8(param_1,0,**(undefined4 **)(_UNK_02166b9c + 0x2166b6c));
  if (param_1 == 0) {
    return 0;
  }
  pcVar11 = (char *)(_UNK_02135014 + 0x2134580);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02135018 + 0x2134594),param_2,0);
    func_0x01384978(*(undefined4 *)(_UNK_0213501c + 0x21345a0));
    func_0x01384978(*(undefined4 *)(_UNK_02135020 + 0x21345ac));
    func_0x01384978(*(undefined4 *)(_UNK_02135024 + 0x21345b8));
    func_0x01384978(*(undefined4 *)(_UNK_02135028 + 0x21345c4));
    func_0x01384978(*(undefined4 *)(_UNK_0213502c + 0x21345d0));
    *pcVar11 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  unaff_r6 = 0;
  aiStack_28[0] = 0;
  iStack_40 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  iVar5 = func_0x0229f06c(0x9e81,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x9e81,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2134638;
    unaff_r4 = iVar5;
    unaff_r5 = param_2;
    unaff_r9 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_58;
    goto SUB_021734d8;
  }
  uVar12 = FUN_0212f4e4(param_1);
  uVar6 = 1;
  switch(uVar12) {
  case 1:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    unaff_r6 = 0;
    iVar7 = func_0x02feb690(param_2,aiStack_28,0,**(undefined4 **)(&UNK_021346ac + _UNK_02135030));
    iVar5 = aiStack_28[0];
    if (iVar7 == 0) goto LAB_02134f54;
    if (aiStack_28[0] == 0) {
      func_0x01384bf0();
    }
    iVar7 = FUN_02122810(iVar5);
    iVar5 = aiStack_28[0];
    if (iVar7 != 0) goto LAB_02134f54;
    piVar3 = (int *)FUN_02124bc4(param_1);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(&UNK_02134708 + _UNK_02135034)) {
          puVar4 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xc0);
          goto code_r0x02134f1c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(&UNK_02134708 + _UNK_02135034),0);
code_r0x02134f1c:
    uVar12 = (*(code *)*puVar4)(piVar3,0,puVar4[1]);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    FUN_02124c28(iVar5,uVar12);
    break;
  case 2:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    unaff_r6 = 0;
    iVar7 = func_0x02feb690(param_2,&iStack_2c,0,**(undefined4 **)(&UNK_02134768 + _UNK_02135038));
    iVar5 = iStack_2c;
    if (iVar7 == 0) goto LAB_02134f54;
    piVar3 = (int *)FUN_02124bc4(param_1);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(&UNK_021347a4 + _UNK_0213503c)) {
          puVar4 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xc0);
          goto code_r0x02134e9c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(&UNK_021347a4 + _UNK_0213503c),0);
code_r0x02134e9c:
    uVar12 = (*(code *)*puVar4)(piVar3,0,puVar4[1]);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    FUN_0212532c(iVar5,uVar12);
    break;
  case 3:
    piVar3 = (int *)FUN_021566f4(0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar12 = FUN_0210e2d4(param_2,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar5 = *piVar3;
    uVar10 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(&UNK_02134824 + _UNK_02135040)) {
          puVar4 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0x118);
          goto code_r0x02134a78;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(&UNK_02134824 + _UNK_02135040),0xb);
code_r0x02134a78:
    iVar5 = (*(code *)*puVar4)(piVar3,uVar12,puVar4[1]);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar5 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    unaff_r6 = 0;
    uVar12 = FUN_0210e2d4(param_2,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x0364c54c(iVar7,uVar12,**(undefined4 **)(&UNK_02134adc + _UNK_02135044));
    if (iVar7 < 1) goto LAB_02134f54;
    iVar5 = *(int *)(iVar5 + 0x44);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar12 = func_0x0364c9b8(iVar5,iVar7 + -1,**(undefined4 **)(&UNK_02134b10 + _UNK_02135048));
    iVar5 = *(int *)(param_1 + 0x18) + -1;
    *(int *)(param_1 + 0x18) = iVar5;
    if (iVar5 < 1) {
      iVar5 = FUN_02123568(param_1);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = FUN_0210cd28(iVar5,0);
      uVar9 = FUN_02123568(param_1);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      FUN_020dd560(iVar5,uVar9,4,0);
    }
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar5 = FUN_0210cd28(0,0);
      func_0x01384bf0();
    }
    else {
      iVar5 = FUN_0210cd28(param_2,0);
    }
    FUN_0210cd7c(&uStack_48,param_2,0);
    iVar7 = FUN_02123568(param_1);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = FUN_0210cd28(iVar7,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    FUN_020dd560(iVar7,param_2,4,0);
    uVar9 = FUN_020d80e4(9,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_58 = uStack_44;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uVar9 = FUN_020ded9c(iVar5,uVar12,uVar9,uStack_48);
    iVar7 = FUN_020d8024(uVar9,9,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 0;
    uStack_58 = uStack_44;
    goto code_r0x02134e54;
  default:
    goto LAB_02134f54;
  case 5:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_0210cd28(param_2,0);
    if (iVar5 != 0) {
      FUN_020eb26c(iVar5,param_2,0);
    }
    break;
  case 7:
    piVar3 = (int *)FUN_021566f4(0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar12 = FUN_0210e2d4(param_2,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar5 = *piVar3;
    uVar10 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(&UNK_021348d4 + _UNK_02135054)) {
          puVar4 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0x118);
          goto code_r0x02134bac;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(&UNK_021348d4 + _UNK_02135054),0xb);
code_r0x02134bac:
    iVar5 = (*(code *)*puVar4)(piVar3,uVar12,puVar4[1]);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar5 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar12 = FUN_0210e2d4(param_2,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x0364c54c(iVar7,uVar12,**(undefined4 **)(&UNK_02134c0c + _UNK_02135058));
    iVar2 = *(int *)(iVar5 + 0x44);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_r6 = 0;
    if (*(int *)(iVar2 + 0xc) + -1 <= iVar7) goto LAB_02134f54;
    iVar5 = *(int *)(iVar5 + 0x44);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar12 = func_0x0364c9b8(iVar5,iVar7 + 1,**(undefined4 **)(&UNK_02134c5c + _UNK_0213505c));
    iVar5 = *(int *)(param_1 + 0x18) + -1;
    *(int *)(param_1 + 0x18) = iVar5;
    uVar6 = (uint)(iVar5 < 1);
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar5 = FUN_0210cd28(0,0);
      func_0x01384bf0();
    }
    else {
      iVar5 = FUN_0210cd28(param_2,0);
    }
    FUN_0210cd7c(&uStack_48,param_2,0);
    iVar7 = FUN_02123568(param_1);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = FUN_0210cd28(iVar7,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    FUN_020dd560(iVar7,param_2,4,0);
    iVar7 = FUN_020d80e4(0xc,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar7 + 0xc) = param_2;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_58 = uStack_44;
code_r0x02134e54:
    uStack_4c = 0;
    uStack_50 = 0;
    uStack_54 = 0;
    FUN_020ded9c(iVar5,uVar12,iVar7,uStack_48);
    goto code_r0x02134f50;
  case 8:
    iVar2 = FUN_021333a0(param_1,param_2,&iStack_40);
    iVar7 = iStack_34;
    uVar10 = uStack_38;
    iVar5 = iStack_40;
    if (iVar2 != 0) {
      lVar1 = (longlong)*(int *)(param_1 + 0x14) * 1000;
      uVar6 = (uint)lVar1;
      uVar6 = func_0x01458584(uVar6 - uStack_38,
                              (int)((ulonglong)lVar1 >> 0x20) -
                              (iStack_34 + (uint)(uVar6 < uStack_38)),1000,0);
      *(uint *)(param_1 + 0x14) = uVar6 & ~((int)uVar6 >> 0x1f);
      if (iVar5 == 1) {
        if ((int)-(iVar7 + (uint)(0x3ffffffe < uVar10)) < 0 !=
            (SBORROW4(0,iVar7) != SBORROW4(-iVar7,(uint)(0x3ffffffe < uVar10)))) {
          uVar10 = 0x3fffffff;
        }
        if (param_2 == 0) {
          func_0x01384bf0();
          FUN_0211a5d0(0,uVar10,0);
          func_0x01384bf0();
        }
        else {
          FUN_0211a5d0(param_2,uVar10,0);
        }
        iVar5 = FUN_0210cd28(param_2,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        FUN_020eda20(iVar5,uVar10,0);
      }
      else if (iVar5 == 0) {
        if ((int)-(iVar7 + (uint)(0x3ffffffe < uVar10)) < 0 !=
            (SBORROW4(0,iVar7) != SBORROW4(-iVar7,(uint)(0x3ffffffe < uVar10)))) {
          uVar10 = 0x3fffffff;
        }
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        FUN_0211a5d0(param_2,uVar10,0);
      }
      FUN_02135060(param_1);
      unaff_r6 = 1;
      uVar6 = 0;
    }
    goto LAB_02134f54;
  case 9:
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    unaff_r6 = 0;
    iVar7 = func_0x02feb690(param_2,&iStack_30,0,**(undefined4 **)(&UNK_021349c0 + _UNK_0213504c));
    iVar5 = iStack_30;
    if (iVar7 == 0) goto LAB_02134f54;
    if (iStack_30 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_02123058(iVar5);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar7 = iStack_30;
    if (*(char *)(iVar5 + 0x2d) == '\0') goto LAB_02134f54;
    piVar3 = (int *)FUN_02132544(param_1);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar5 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(&UNK_02134a30 + _UNK_02135050)) {
          puVar4 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
          goto code_r0x02134edc;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(&UNK_02134a30 + _UNK_02135050),0);
code_r0x02134edc:
    uVar12 = (*(code *)*puVar4)(piVar3,0,puVar4[1]);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    FUN_02123b38(iVar7,uVar12);
  }
  uVar6 = 1;
code_r0x02134f50:
  unaff_r6 = 1;
LAB_02134f54:
  if ((uVar6 & unaff_r6) != 0) {
    iVar5 = FUN_02123568(param_1);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_0210cd28(iVar5,0);
    uVar12 = FUN_02123568(param_1);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    FUN_020dd560(iVar5,uVar12,4,0);
  }
  return unaff_r6;
}



// ===== FAT.Merge.ItemUtility$$CanUseInTracer RVA 0x2156ba0 =====

uint FUN_02166ba0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xf42,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xf42,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_02116a8c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02116ae0(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = FUN_02116a8c(param_1,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_02116ae0(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_0210e250(param_1,6,0,0);
  return uVar2 ^ 1;
}



// ===== FAT.Merge.ItemUtility$$CanUseInOrder RVA 0x2156c84 =====

uint FUN_02166c84(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x146a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x146a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_0210cd28(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02116a8c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02116ae0(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = FUN_0210cd28(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_02116a8c(param_1,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_02116ae0(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_0210e250(param_1,6,0,0);
  return uVar2 ^ 1;
}



// ===== FAT.Merge.ItemUtility$$CanUseInOrderAllowInventory RVA 0x2156d9c =====

uint FUN_02166d9c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x146e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x146e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_02116a8c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02116ae0(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = FUN_02116a8c(param_1,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_02116ae0(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_0210e250(param_1,6,0,0);
  return uVar2 ^ 1;
}



// ===== FAT.Merge.ItemUtility$$IsNeededByTopBarOrder RVA 0x2156e80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02166e80(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02166f78 + 0x2166e94);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02166f7c + 0x2166ea8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb521,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb521,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02166f80 + 0x2166f18)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
        goto LAB_02166f60;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02166f80 + 0x2166f18),3);
LAB_02166f60:
                    /* WARNING: Could not recover jumptable at 0x02166f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  return;
}



// ===== FAT.Merge.ItemUtility$$IsExpItem RVA 0x2156f84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02166f84(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar8 = (char *)(_UNK_021670d4 + 0x2166f98);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021670d8 + 0x2166fac));
    func_0x01384978(*(undefined4 *)(_UNK_021670dc + 0x2166fb8));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb522,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb522,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_021670e0 + 0x2167028)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x118);
        goto LAB_02167070;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021670e0 + 0x2167028),0xb);
LAB_02167070:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar4 = (undefined *)func_0x0364c9b8(iVar1,0,**(undefined4 **)(_UNK_021670e4 + 0x21670ac));
    return (uint)(puVar4 == &UNK_00b71b01);
  }
  return 0;
}



// ===== FAT.Merge.ItemUtility$$IsCoinItem RVA 0x21570e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021670e8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar8 = (char *)(_UNK_02167238 + 0x21670fc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216723c + 0x2167110));
    func_0x01384978(*(undefined4 *)(_UNK_02167240 + 0x216711c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb523,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb523,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_02167244 + 0x216718c)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x118);
        goto LAB_021671d4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02167244 + 0x216718c),0xb);
LAB_021671d4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar4 = (undefined *)func_0x0364c9b8(iVar1,0,**(undefined4 **)(_UNK_02167248 + 0x2167210));
    return (uint)(puVar4 == &UNK_00b71e17);
  }
  return 0;
}



// ===== FAT.Merge.ItemUtility$$IsLoginGiftItem RVA 0x215724c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216724c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_021673a4 + 0x2167260);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021673a8 + 0x2167274));
    func_0x01384978(*(undefined4 *)(_UNK_021673ac + 0x2167280));
    func_0x01384978(*(undefined4 *)(_UNK_021673b0 + 0x216728c));
    func_0x01384978(*(undefined4 *)(_UNK_021673b4 + 0x2167298));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x93b9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x93b9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if (param_1 != 0) {
    uVar4 = 0;
    iVar1 = FUN_0210e2d4(param_1,0);
    if (0 < iVar1) {
      uVar4 = 0;
      uVar2 = FUN_0210e2d4(param_1,0);
      if (*(int *)(**(int **)(_UNK_021673b8 + 0x2167328) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x036a1750(uVar2,**(undefined4 **)(_UNK_021673bc + 0x2167344));
      if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x14), 0 < iVar1)) {
        if (*(int *)(**(int **)(_UNK_021673c0 + 0x216736c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x036a1750(iVar1,**(undefined4 **)(_UNK_021673c4 + 0x2167388));
        uVar4 = 0;
        if (iVar1 != 0) {
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}



// ===== FAT.Merge.ItemUtility$$GetSellCoin RVA 0x21573c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021673c8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar8 = (char *)(_UNK_02167564 + 0x21673dc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02167568 + 0x21673f0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb524,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb524,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
    uVar10 = func_0x0245498c(&uStack_30,0,0);
    return uVar10;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar11 = *(int **)(_UNK_0216756c + 0x2167460);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar9 = *piVar11;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar9) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x108);
        goto LAB_021674a8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar9,9);
LAB_021674a8:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar9 = *piVar2;
  iVar4 = *piVar11;
  uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar9 + *piVar11 * 8 + 0x200);
        goto LAB_02167524;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0x28);
LAB_02167524:
  iVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 0;
  if ((*(int *)(iVar1 + 0x68) <= iVar9) && (*(char *)(iVar1 + 0x44) != '\0')) {
    uVar10 = *(undefined4 *)(iVar1 + 100);
  }
  return uVar10;
}



// ===== FAT.Merge.ItemUtility$$GetSellReward RVA 0x2157570 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02167570(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar11 = (char *)(_UNK_021677c4 + 0x216758c);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021677c8 + 0x21675a0));
    func_0x01384978(*(undefined4 *)(_UNK_021677cc + 0x21675ac));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x761f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x761f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022091a0(&uStack_20,iVar1,param_2,0);
    *param_1 = uStack_20;
    param_1[1] = uStack_1c;
    return;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar12 = *(int **)(_UNK_021677d0 + 0x2167628);
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar4 = *piVar12;
  if (uVar7 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0x108);
        goto LAB_02167670;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,9);
LAB_02167670:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = *piVar2;
  iVar5 = *piVar12;
  uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar12[-1] == iVar5) {
        puVar3 = (undefined4 *)(iVar4 + *piVar12 * 8 + 0x200);
        goto LAB_021676ec;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar5,0x28);
LAB_021676ec:
  iVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (iVar4 < *(int *)(iVar1 + 0x68)) {
    uVar6 = 0;
    uVar8 = 0;
    puVar3 = *(undefined4 **)(_UNK_021677d4 + 0x216772c);
  }
  else {
    if (*(char *)(iVar1 + 0x44) != '\0') {
      iVar4 = func_0x01c24918(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x44);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x01c9e5bc(iVar4,2,0);
      uVar8 = *(undefined4 *)(iVar1 + 100);
      puVar3 = *(undefined4 **)(_UNK_021677d8 + 0x2167788);
      *param_1 = 0;
      param_1[1] = 0;
      uVar10 = *puVar3;
      goto LAB_021677b4;
    }
    uVar6 = 0x1f;
    puVar3 = *(undefined4 **)(_UNK_021677dc + 0x21677a4);
    uVar8 = *(undefined4 *)(iVar1 + 100);
  }
  uVar10 = *puVar3;
  *param_1 = 0;
  param_1[1] = 0;
LAB_021677b4:
  func_0x038fd264(param_1,uVar6,uVar8,uVar10);
  return;
}



// ===== FAT.Merge.ItemUtility$$IsItemMaxLevel RVA 0x21577e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021677e0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02167958 + 0x21677f4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216795c + 0x2167808));
    func_0x01384978(*(undefined4 *)(_UNK_02167960 + 0x2167814));
    func_0x01384978(*(undefined4 *)(_UNK_02167964 + 0x2167820));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7632,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7632,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02167968 + 0x2167890)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x118);
        goto LAB_021678d8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02167968 + 0x2167890),0xb);
LAB_021678d8:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar8 = *(int *)(iVar1 + 0x44);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar8 + 0xc)) {
      iVar1 = *(int *)(iVar1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0364c9b8(iVar1,*(int *)(iVar1 + 0xc) + -1,
                              **(undefined4 **)(_UNK_0216796c + 0x2167934));
      uVar4 = (uint)(iVar1 == param_1);
    }
  }
  return uVar4;
}



// ===== FAT.Merge.ItemUtility$$GetNextItem RVA 0x2157970 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02167970(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_r2;
  int *piVar6;
  undefined4 uVar7;
  int extraout_r3;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar8 = (char *)(_UNK_02167ba0 + 0x2167984);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02167ba4 + 0x2167998));
    func_0x01384978(*(undefined4 *)(_UNK_02167ba8 + 0x21679a4));
    func_0x01384978(*(undefined4 *)(_UNK_02167bac + 0x21679b0));
    func_0x01384978(*(undefined4 *)(_UNK_02167bb0 + 0x21679bc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x28b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x28b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar12 = *(int **)(_UNK_02167bb4 + 0x2167a2c);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar9 = *piVar12;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar9) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x118);
        goto LAB_02167a74;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar9,0xb);
LAB_02167a74:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x34) == 0)) {
    iVar9 = *(int *)(iVar1 + 0x44);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x0364c54c(iVar9,param_1,**(undefined4 **)(_UNK_02167bb8 + 0x2167ac0));
    iVar11 = *(int *)(iVar1 + 0x44);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar5 = iVar9 + 1;
    if ((int)uVar5 < *(int *)(iVar11 + 0xc)) {
      iVar1 = *(int *)(iVar1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = **(undefined4 **)(_UNK_02167bbc + 0x2167b0c);
      if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(iVar1 + 0xc))) {
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar5) {
          func_0x02457d5c();
        }
        return *(int *)(iVar1 + uVar5 * 4 + 0x10);
      }
      func_0x02457d6c(*(undefined4 *)(iRam0364ca44 + 0x364ca10));
      uVar7 = func_0x02457d58();
      uVar4 = func_0x02457d6c(*(undefined4 *)(iRam0364ca48 + 0x364ca24));
      func_0x047901e8(uVar7,uVar4,0);
      func_0x02457d90(uVar7,uVar10);
      lVar13 = func_0x02457d94();
      uVar5 = (uint)((ulonglong)lVar13 >> 0x20);
      pcVar8 = (char *)(iRam0364cb28 + 0x364ca68);
      uStack_28 = uVar10;
      uStack_24 = uVar7;
      if (*pcVar8 == '\0') {
        func_0x02457d54(*(undefined4 *)(iRam0364cb2c + 0x364ca80));
        *pcVar8 = '\x01';
      }
      if ((-1 < lVar13) && ((int)uVar5 < *(int *)((int)lVar13 + 0xc))) {
        func_0x03031db0(extraout_r2,**(undefined4 **)(iRam0364cb30 + 0x364cab0),
                        *(undefined4 *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x80));
        iVar1 = *(int *)((int)lVar13 + 8);
        if (iVar1 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar5) {
          func_0x02457d5c();
        }
        iVar1 = iVar1 + uVar5 * 4;
        *(undefined4 *)(iVar1 + 0x10) = extraout_r2;
        return iVar1;
      }
      func_0x02457d6c(*(undefined4 *)(iRam0364cb34 + 0x364caf4));
      uVar10 = func_0x02457d58();
      uVar7 = func_0x02457d6c(*(undefined4 *)(iRam0364cb38 + 0x364cb08));
      func_0x047901e8(uVar10,uVar7,0);
      func_0x02457d90(uVar10,extraout_r3);
      func_0x02457d94();
      return 0;
    }
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  iVar9 = *piVar12;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar12[-1] == iVar9) {
        puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0x138);
        goto LAB_02167b7c;
      }
      uVar5 = uVar5 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar9,0xf);
LAB_02167b7c:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return iVar1;
}



// ===== FAT.Merge.ItemUtility$$GetMergeItem RVA 0x2157bc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02167bc0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_r2;
  int *piVar6;
  undefined4 uVar7;
  int extraout_r3;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_14;
  
  iVar3 = func_0x0229f06c(0x9732,0);
  if (iVar3 == 0) {
    pcVar8 = (char *)(_UNK_02167ba0 + 0x2167984);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02167ba4 + 0x2167998));
      func_0x01384978(*(undefined4 *)(_UNK_02167ba8 + 0x21679a4));
      func_0x01384978(*(undefined4 *)(_UNK_02167bac + 0x21679b0));
      func_0x01384978(*(undefined4 *)(_UNK_02167bb0 + 0x21679bc));
      *pcVar8 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x28b,0);
    if (iVar3 == 0) {
      piVar1 = (int *)FUN_021566f4();
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar1;
      piVar12 = *(int **)(_UNK_02167bb4 + 0x2167a2c);
      uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
      iVar9 = *piVar12;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar9) {
            puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0x118);
            goto LAB_02167a74;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar1,iVar9,0xb);
LAB_02167a74:
      iVar3 = (*(code *)*puVar2)(piVar1,param_1,puVar2[1]);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x34) == 0)) {
        iVar9 = *(int *)(iVar3 + 0x44);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar9 = func_0x0364c54c(iVar9,param_1,**(undefined4 **)(_UNK_02167bb8 + 0x2167ac0));
        iVar11 = *(int *)(iVar3 + 0x44);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        uVar5 = iVar9 + 1;
        if ((int)uVar5 < *(int *)(iVar11 + 0xc)) {
          iVar3 = *(int *)(iVar3 + 0x44);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar10 = **(undefined4 **)(_UNK_02167bbc + 0x2167b0c);
          if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(iVar3 + 0xc))) {
            iVar3 = *(int *)(iVar3 + 8);
            if (iVar3 == 0) {
              func_0x02457d50();
            }
            if (*(uint *)(iVar3 + 0xc) <= uVar5) {
              func_0x02457d5c();
            }
            return *(int *)(iVar3 + uVar5 * 4 + 0x10);
          }
          func_0x02457d6c(*(undefined4 *)(iRam0364ca44 + 0x364ca10));
          uVar7 = func_0x02457d58();
          uVar4 = func_0x02457d6c(*(undefined4 *)(iRam0364ca48 + 0x364ca24));
          func_0x047901e8(uVar7,uVar4,0);
          func_0x02457d90(uVar7,uVar10);
          lVar13 = func_0x02457d94();
          uVar5 = (uint)((ulonglong)lVar13 >> 0x20);
          uStack_14 = 0x364ca44;
          pcVar8 = (char *)(iRam0364cb28 + 0x364ca68);
          uStack_28 = uVar10;
          uStack_24 = uVar7;
          if (*pcVar8 == '\0') {
            func_0x02457d54(*(undefined4 *)(iRam0364cb2c + 0x364ca80));
            *pcVar8 = '\x01';
          }
          if ((-1 < lVar13) && ((int)uVar5 < *(int *)((int)lVar13 + 0xc))) {
            func_0x03031db0(extraout_r2,**(undefined4 **)(iRam0364cb30 + 0x364cab0),
                            *(undefined4 *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x80));
            iVar3 = *(int *)((int)lVar13 + 8);
            if (iVar3 == 0) {
              func_0x02457d50();
            }
            if (*(uint *)(iVar3 + 0xc) <= uVar5) {
              func_0x02457d5c();
            }
            iVar3 = iVar3 + uVar5 * 4;
            *(undefined4 *)(iVar3 + 0x10) = extraout_r2;
            return iVar3;
          }
          func_0x02457d6c(*(undefined4 *)(iRam0364cb34 + 0x364caf4));
          uVar10 = func_0x02457d58();
          uVar7 = func_0x02457d6c(*(undefined4 *)(iRam0364cb38 + 0x364cb08));
          func_0x047901e8(uVar10,uVar7,0);
          func_0x02457d90(uVar10,extraout_r3);
          func_0x02457d94();
          return 0;
        }
      }
      piVar1 = (int *)FUN_021566f4();
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar1;
      iVar9 = *piVar12;
      uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar12[-1] == iVar9) {
            puVar2 = (undefined4 *)(iVar3 + *piVar12 * 8 + 0x138);
            goto LAB_02167b7c;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar1,iVar9,0xf);
LAB_02167b7c:
      iVar3 = (*(code *)*puVar2)(piVar1,param_1,puVar2[1]);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x14);
      }
      return iVar3;
    }
    iVar3 = func_0x0229f13c(0x28b,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x9732,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485238(&uStack_30,param_1,0);
  iVar9 = *(int *)(iVar3 + 8);
  uVar10 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar3 == 0) {
    uVar7 = 1;
  }
  func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
  iVar3 = func_0x0245498c(&uStack_30,0,0);
  return iVar3;
}



// ===== FAT.Merge.ItemUtility$$GetBoxOutputs RVA 0x2157c18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02167c18(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int unaff_r7;
  int iVar10;
  int unaff_r10;
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
  
  pcVar8 = (char *)(_UNK_02167e40 + 0x2167c34);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02167e44 + 0x2167c48));
    func_0x01384978(*(undefined4 *)(_UNK_02167e48 + 0x2167c54));
    func_0x01384978(*(undefined4 *)(_UNK_02167e4c + 0x2167c60));
    func_0x01384978(*(undefined4 *)(_UNK_02167e50 + 0x2167c6c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb377,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb377,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      unaff_r7 = piVar5[-1];
      if (unaff_r7 == **(int **)(_UNK_02167e54 + 0x2167ce4)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_02167d2c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02167e54 + 0x2167ce4),10);
LAB_02167d2c:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  if (iVar1 != 0) {
    unaff_r7 = *(int *)(iVar1 + 0x1c);
    unaff_r10 = iVar1;
  }
  if (iVar1 != 0 && unaff_r7 != 0) {
    iVar1 = 0;
    piVar2 = *(int **)(_UNK_02167e58 + 0x2167d6c);
    while( true ) {
      if (unaff_r7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(unaff_r7 + 0x18);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar7 + 0xc) <= iVar1) break;
      iVar7 = *(int *)(unaff_r10 + 0x1c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar7 + 0x18);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x0364c9b8(iVar7,iVar1,**(undefined4 **)(_UNK_02167e5c + 0x2167dc0));
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(param_2 + 8);
      uVar4 = *(uint *)(param_2 + 0xc);
      iVar10 = *piVar2;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (uVar4 < *(uint *)(iVar7 + 0xc)) {
        *(uint *)(param_2 + 0xc) = uVar4 + 1;
        *(undefined4 *)(iVar7 + uVar4 * 4 + 0x10) = uVar9;
      }
      else {
        func_0x0325970c(param_2,uVar9,
                        *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
      }
      unaff_r7 = *(int *)(unaff_r10 + 0x1c);
      iVar1 = iVar1 + 1;
    }
  }
  return;
}



// ===== FAT.Merge.ItemUtility$$GetEatSourceOutputs RVA 0x2157e60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02167e60(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
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
  
  pcVar7 = (char *)(_UNK_0216807c + 0x2167e7c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02168080 + 0x2167e90));
    func_0x01384978(*(undefined4 *)(_UNK_02168084 + 0x2167e9c));
    func_0x01384978(*(undefined4 *)(_UNK_02168088 + 0x2167ea8));
    func_0x01384978(*(undefined4 *)(_UNK_0216808c + 0x2167eb4));
    func_0x01384978(*(undefined4 *)(_UNK_02168090 + 0x2167ec0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3dc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3dc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02168094 + 0x2167f38)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_02167f80;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02168094 + 0x2167f38),10);
LAB_02167f80:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  if (iVar1 != 0) {
    pcVar7 = *(char **)(iVar1 + 0x18);
    param_1 = iVar1;
  }
  if (iVar1 != 0 && pcVar7 != (char *)0x0) {
    iVar1 = 0;
    puVar3 = *(undefined4 **)(_UNK_02168098 + 0x2167fc0);
    puVar10 = *(undefined4 **)(_UNK_0216809c + 0x2167fc8);
    puVar11 = *(undefined4 **)(_UNK_021680a0 + 0x2167fd0);
    while( true ) {
      if (pcVar7 == (char *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(pcVar7 + 0x30);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar1) break;
      iVar8 = *(int *)(param_1 + 0x18);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x30);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x0364c9b8(iVar8,iVar1,*puVar3);
      iVar8 = *(int *)(param_1 + 0x18);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x03003b84(*(undefined4 *)(iVar8 + 0x3c),iVar1,1,*puVar10);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d7c(param_2,uVar9,uVar6,*puVar11);
      pcVar7 = *(char **)(param_1 + 0x18);
      iVar1 = iVar1 + 1;
    }
  }
  return;
}



// ===== FAT.Merge.ItemUtility$$GetClickSourceOutputs RVA 0x21580a4 =====

/* WARNING: Removing unreachable block (ram,0x021684b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021680a4(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
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
  
  pcVar10 = (char *)(_UNK_0216858c + 0x21680c0);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02168590 + 0x21680d4));
    func_0x01384978(*(undefined4 *)(_UNK_02168594 + 0x21680e0));
    func_0x01384978(*(undefined4 *)(_UNK_02168598 + 0x21680ec));
    func_0x01384978(*(undefined4 *)(_UNK_0216859c + 0x21680f8));
    func_0x01384978(*(undefined4 *)(_UNK_021685a0 + 0x2168104));
    func_0x01384978(*(undefined4 *)(_UNK_021685a4 + 0x2168110));
    func_0x01384978(*(undefined4 *)(_UNK_021685a8 + 0x216811c));
    func_0x01384978(*(undefined4 *)(_UNK_021685ac + 0x2168128));
    func_0x01384978(*(undefined4 *)(_UNK_021685b0 + 0x2168134));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2ebe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2ebe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar8,0,0);
    return;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar12 = *(int **)(_UNK_021685b4 + 0x21681ac);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar9 = *piVar12;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar9) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x110);
        goto LAB_021681f4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar9,10);
LAB_021681f4:
  piVar6 = (int *)(*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  iVar1 = 0;
  if (piVar6 != (int *)0x0) {
    iVar1 = piVar6[8];
    piVar2 = piVar6;
  }
  if (piVar6 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  piVar6 = (int *)FUN_021566f4();
  iVar1 = piVar2[8];
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar11 = func_0x0364c9b8(iVar1,0,**(undefined4 **)(_UNK_021685b8 + 0x216825c));
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  iVar9 = *piVar12;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar2[-1] == iVar9) {
        puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0x1e0);
        goto LAB_021682c4;
      }
      uVar5 = uVar5 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar6,iVar9,0x24);
LAB_021682c4:
  iVar1 = (*(code *)*puVar3)(piVar6,uVar11,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0345f9b0(iVar1,**(undefined4 **)(_UNK_021685bc + 0x2168304));
  piVar12 = *(int **)(_UNK_021685c0 + 0x2168320);
  piVar6 = *(int **)(_UNK_021685c4 + 0x2168328);
  puVar3 = *(undefined4 **)(_UNK_021685c8 + 0x2168330);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar12) {
          puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_02168388;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_02168388:
    iVar1 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar6) {
          puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_021683fc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,*piVar6,0);
LAB_021683fc:
    (*(code *)*puVar4)(&uStack_30,piVar2,puVar4[1]);
    uVar8 = uStack_2c;
    uVar11 = uStack_30;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d7c(param_2,uVar11,uVar8,*puVar3);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_021685cc + 0x2168458)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
          goto LAB_021684a0;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021685cc + 0x2168458),0);
LAB_021684a0:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  return;
}



// ===== FAT.Merge.ItemUtility$$GetAutoSourceOutputs RVA 0x21585d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021685d4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
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
  
  pcVar7 = (char *)(_UNK_021687f0 + 0x21685f0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021687f4 + 0x2168604));
    func_0x01384978(*(undefined4 *)(_UNK_021687f8 + 0x2168610));
    func_0x01384978(*(undefined4 *)(_UNK_021687fc + 0x216861c));
    func_0x01384978(*(undefined4 *)(_UNK_02168800 + 0x2168628));
    func_0x01384978(*(undefined4 *)(_UNK_02168804 + 0x2168634));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2ebf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2ebf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02168808 + 0x21686ac)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_021686f4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02168808 + 0x21686ac),10);
LAB_021686f4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  if (iVar1 != 0) {
    pcVar7 = *(char **)(iVar1 + 8);
    param_1 = iVar1;
  }
  if (iVar1 != 0 && pcVar7 != (char *)0x0) {
    iVar1 = 0;
    puVar3 = *(undefined4 **)(_UNK_0216880c + 0x2168734);
    puVar10 = *(undefined4 **)(_UNK_02168810 + 0x216873c);
    puVar11 = *(undefined4 **)(_UNK_02168814 + 0x2168744);
    while( true ) {
      if (pcVar7 == (char *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(pcVar7 + 0x34);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar1) break;
      iVar8 = *(int *)(param_1 + 8);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x34);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x0364c9b8(iVar8,iVar1,*puVar3);
      iVar8 = *(int *)(param_1 + 8);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x03003b84(*(undefined4 *)(iVar8 + 0x44),iVar1,1,*puVar10);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d7c(param_2,uVar9,uVar6,*puVar11);
      pcVar7 = *(char **)(param_1 + 8);
      iVar1 = iVar1 + 1;
    }
  }
  return;
}



// ===== FAT.Merge.ItemUtility$$IsCardPack RVA 0x2158818 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02168818(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint auStack_1c [3];
  
  iVar1 = func_0x0229f06c(0x14b3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_01cd24d8 + 0x1cd241c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd24dc + 0x1cd2430),param_1,0x4000,0);
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x343,0);
  if (iVar4 == 0) {
    iVar1 = *(int *)(iVar1 + 0x48);
    auStack_1c[0] = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450590(iVar1,param_1,auStack_1c,**(undefined4 **)(_UNK_01cd24e0 + 0x1cd24b4));
    uVar2 = (uint)((auStack_1c[0] & 0x4000) == 0x4000);
  }
  else {
    iVar4 = func_0x0229f13c(0x343,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar2 = func_0x021855fc(iVar4,iVar1,param_1,0x4000);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemUtility$$IsMergeItem RVA 0x21588a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021688a4(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint auStack_1c [3];
  
  iVar1 = func_0x0229f06c(0xb525,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb525,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_01cd24d8 + 0x1cd241c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd24dc + 0x1cd2430),param_1,0x2000,0);
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x343,0);
  if (iVar4 == 0) {
    iVar1 = *(int *)(iVar1 + 0x48);
    auStack_1c[0] = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450590(iVar1,param_1,auStack_1c,**(undefined4 **)(_UNK_01cd24e0 + 0x1cd24b4));
    uVar2 = (uint)((auStack_1c[0] & 0x2000) == 0x2000);
  }
  else {
    iVar4 = func_0x0229f13c(0x343,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar2 = func_0x021855fc(iVar4,iVar1,param_1,0x2000);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemUtility$$HasBubbleComponent RVA 0x2158930 =====

uint FUN_02168930(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x9341,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9341,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02119be0(param_1,0,0);
  return (uint)(iVar1 != 0);
}



// ===== FAT.Merge.ItemUtility$$IsBubbleItem RVA 0x21589a4 =====

uint FUN_021689a4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x9348,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_02119be0(param_1,0,0);
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x1621,0);
    if (iVar1 == 0) {
      return (uint)(*(int *)(param_1 + 0x10) == 1);
    }
    iVar1 = func_0x0229f13c(0x1621,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9348,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.Merge.ItemUtility$$IsFrozenItem RVA 0x2158a28 =====

uint FUN_02168a28(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x93a6,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_02119be0(param_1,0,0);
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x1628,0);
    if (iVar1 == 0) {
      return (uint)(*(int *)(param_1 + 0x10) == 2);
    }
    iVar1 = func_0x0229f13c(0x1628,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x93a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.Merge.ItemUtility$$IsChest RVA 0x2158aac =====

uint FUN_02168aac(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb526,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb526,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02119f14(param_1,0,0);
  return (uint)(iVar1 != 0);
}



// ===== FAT.Merge.ItemUtility$$IsClickSourceInCD RVA 0x2158b20 =====

uint FUN_02168b20(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb527,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb527,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_02122810(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02122f9c(0,0);
    if (0 < iVar1) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02122cc0(0,0);
    if (iVar1 != 0) {
      return 1;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = FUN_02122810(param_1,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_02122f9c(param_1,0);
    if (0 < iVar1) {
      return 0;
    }
    iVar1 = FUN_02122cc0(param_1,0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  iVar1 = FUN_02122da4(param_1,0);
  return (uint)(iVar1 != 0);
}



// ===== FAT.Merge.ItemUtility$$IsClickSourceReviving RVA 0x2158c38 =====

uint FUN_02168c38(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x94da,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94da,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_02122810(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02122f9c(0,0);
    if (iVar1 < 1) {
      func_0x01384bf0();
      iVar1 = FUN_02122cc0(0,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
        goto LAB_02168d2c;
      }
    }
  }
  else {
    iVar1 = FUN_02122810(param_1,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_02122f9c(param_1,0);
    if ((iVar1 < 1) && (iVar1 = FUN_02122cc0(param_1,0), iVar1 == 0)) {
LAB_02168d2c:
      iVar1 = FUN_02122da4(param_1,0);
      return (uint)(iVar1 != 0);
    }
  }
  return 0;
}



// ===== FAT.Merge.ItemUtility$$GetUnfrozenPrice RVA 0x2158d48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02168d48(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar8 = (char *)(_UNK_02168e30 + 0x2168d5c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02168e34 + 0x2168d70));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb313,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
      iVar1 = func_0x02feb4f8(0,0,**(undefined4 **)(_UNK_02168e38 + 0x2168dfc));
      if (iVar1 == 0) {
        func_0x01384bf0();
        goto LAB_02168e1c;
      }
    }
    else {
      iVar1 = func_0x02feb4f8(param_1,0,**(undefined4 **)(_UNK_02168e3c + 0x2168dd4));
      if (iVar1 == 0) {
LAB_02168e1c:
        uVar10 = FUN_0210e2d4(param_1,0);
        pcVar8 = (char *)(_UNK_02168f44 + 0x2168e54);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02168f48 + 0x2168e68));
          *pcVar8 = '\x01';
        }
        iVar1 = func_0x0229f06c(0xb315,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0xb315,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_30 = 0;
          uStack_20 = 0;
          func_0x0245494c(&uStack_48,0,0);
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          uStack_24 = uStack_3c;
          uStack_20 = uStack_38;
          if (*(int *)(iVar1 + 0x10) != 0) {
            func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
          }
          func_0x01485238(&uStack_30,uVar10,0);
          iVar2 = *(int *)(iVar1 + 8);
          uVar10 = *(undefined4 *)(iVar1 + 0xc);
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar7 = 2;
          if (iVar1 == 0) {
            uVar7 = 1;
          }
          func_0x0245495c(iVar2,uVar10,&uStack_30,uVar7,0,0);
          uVar10 = func_0x0245498c(&uStack_30,0,0);
          return uVar10;
        }
        piVar3 = (int *)FUN_021566f4();
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_02168f4c + 0x2168ed8)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x108);
              goto LAB_02168f20;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02168f4c + 0x2168ed8),9);
LAB_02168f20:
        iVar1 = (*(code *)*puVar4)(piVar3,uVar10,puVar4[1]);
        if (iVar1 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(iVar1 + 0x70);
        }
        return uVar10;
      }
    }
    iVar2 = func_0x0229f06c(0xb314,0);
    if (iVar2 == 0) {
      return *(undefined4 *)(iVar1 + 0x10);
    }
    iVar2 = func_0x0229f13c(0xb314,0);
    param_1 = iVar1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb313,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar9 = *(int *)(iVar2 + 8);
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
  uVar10 = func_0x0245498c(&uStack_30,0,0);
  return uVar10;
}



// ===== FAT.Merge.ItemUtility$$_GetUnfrozenPrice RVA 0x2158e40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02168e40(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02168f44 + 0x2168e54);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02168f48 + 0x2168e68));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb315,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb315,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    uVar9 = func_0x0245498c(&uStack_30,0,0);
    return uVar9;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02168f4c + 0x2168ed8)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x108);
        goto LAB_02168f20;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02168f4c + 0x2168ed8),9);
LAB_02168f20:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  if (iVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)(iVar1 + 0x70);
  }
  return uVar9;
}



// ===== FAT.Merge.ItemUtility$$GetBubbleDeadItemId RVA 0x2158f50 =====

/* WARNING: Removing unreachable block (ram,0x021694c8) */
/* WARNING: Removing unreachable block (ram,0x021693e8) */
/* WARNING: Removing unreachable block (ram,0x021693f4) */
/* WARNING: Removing unreachable block (ram,0x021693f8) */
/* WARNING: Removing unreachable block (ram,0x021694d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02168f50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_0216975c + 0x2168f68);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02169760 + 0x2168f7c));
    func_0x01384978(*(undefined4 *)(_UNK_02169764 + 0x2168f88));
    func_0x01384978(*(undefined4 *)(_UNK_02169768 + 0x2168f94));
    func_0x01384978(*(undefined4 *)(_UNK_0216976c + 0x2168fa0));
    func_0x01384978(*(undefined4 *)(_UNK_02169770 + 0x2168fac));
    func_0x01384978(*(undefined4 *)(_UNK_02169774 + 0x2168fb8));
    func_0x01384978(*(undefined4 *)(_UNK_02169778 + 0x2168fc4));
    func_0x01384978(*(undefined4 *)(_UNK_0216977c + 0x2168fd0));
    func_0x01384978(*(undefined4 *)(_UNK_02169780 + 0x2168fdc));
    func_0x01384978(*(undefined4 *)(_UNK_02169784 + 0x2168fe8));
    func_0x01384978(*(undefined4 *)(_UNK_02169788 + 0x2168ff4));
    func_0x01384978(*(undefined4 *)(_UNK_0216978c + 0x2169000));
    func_0x01384978(*(undefined4 *)(_UNK_02169790 + 0x216900c));
    func_0x01384978(*(undefined4 *)(_UNK_02169794 + 0x2169018));
    *pcVar9 = '\x01';
  }
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_48 = 0;
  iStack_38 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0xb30c,0);
  if (iVar1 == 0) {
    piVar3 = (int *)FUN_021566f4();
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02169798 + 0x21690ac)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xf8);
          goto LAB_021690f4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02169798 + 0x21690ac),7);
LAB_021690f4:
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = 600;
    if (param_1 == 1) {
      iVar6 = 0x1b8;
    }
    piVar3 = *(int **)(_UNK_0216979c + 0x216912c);
    iVar6 = *(int *)(iVar1 + iVar6);
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar1,&iStack_28,**(undefined4 **)(_UNK_021697a0 + 0x216916c));
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar6,**(undefined4 **)(_UNK_021697a4 + 0x216918c));
    iVar1 = 0;
LAB_0216919c:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_021697b8 + 0x21691b8)) {
          puVar4 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
          goto LAB_02169200;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_021697b8 + 0x21691b8),0);
LAB_02169200:
    iVar6 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar6 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_021697a8 + 0x2169234)) {
            puVar4 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
            goto LAB_0216927c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_021697a8 + 0x2169234),0);
LAB_0216927c:
      uVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (*(int *)(**(int **)(_UNK_021697ac + 0x216929c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&uStack_60,uVar2,0);
      iVar5 = iStack_28;
      iVar6 = iStack_5c;
      uVar2 = uStack_60;
      iVar1 = iStack_5c + iVar1;
      iStack_5c = 0;
      uStack_60 = 0;
      func_0x038fd264(&uStack_60,uVar2,iVar6,**(undefined4 **)(_UNK_021697b0 + 0x21692d4));
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar6 = iStack_5c;
      uVar2 = uStack_60;
      iVar11 = *(int *)(iVar5 + 8);
      uVar7 = *(uint *)(iVar5 + 0xc);
      piVar8 = *(int **)(_UNK_021697b4 + 0x216931c);
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
      iVar10 = *piVar8;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (uVar7 < *(uint *)(iVar11 + 0xc)) {
        *(uint *)(iVar5 + 0xc) = uVar7 + 1;
        iVar11 = iVar11 + uVar7 * 8;
        *(undefined4 *)(iVar11 + 0x10) = uVar2;
        *(int *)(iVar11 + 0x14) = iVar6;
      }
      else {
        func_0x024501b4(iVar5,uVar2,iVar6,
                        *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_0216919c;
    }
    if (piVar3 != (int *)0x0) {
      iVar6 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_021697bc + 0x2169388)) {
            puVar4 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
            goto LAB_021693d0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_021697bc + 0x2169388),0);
LAB_021693d0:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    iVar6 = func_0x02450284(1,iVar1 + 1,0);
    iVar1 = iStack_28;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    func_0x024505e0(&uStack_60,iVar1,**(undefined4 **)(_UNK_021697c0 + 0x2169430));
    iVar1 = 0;
    iStack_38 = iStack_50;
    uStack_48 = uStack_60;
    iStack_44 = iStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    puVar4 = *(undefined4 **)(_UNK_021697c4 + 0x2169468);
    do {
      iVar5 = func_0x03f4aab0(&uStack_48,*puVar4);
      if (iVar5 == 0) {
        iVar1 = 0xb;
        uVar2 = 0;
        goto LAB_021694ac;
      }
      iVar1 = iVar1 + iStack_38;
    } while (iVar1 < iVar6);
    iVar1 = 10;
    uVar2 = uStack_3c;
LAB_021694ac:
    func_0x03f4aaac(&uStack_48,**(undefined4 **)(_UNK_021697cc + 0x21694b8));
    func_0x028c98a0(&uStack_30,0);
    if (iVar1 == 0xb || iVar1 == 0) {
      piVar3 = (int *)FUN_021566f4();
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_021697d4 + 0x2169524)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xf8);
            goto LAB_0216956c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_021697d4 + 0x2169524),7);
LAB_0216956c:
      iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = *(undefined4 *)(iVar1 + 0x1b4);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb30c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0229bbe0(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemUtility$$CanItemInInventory RVA 0x21597d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021697d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_02169b48 + 0x21697f0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02169b4c + 0x2169804));
    *pcVar6 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x75ea,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75ea,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
    return uVar2;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_02116f08(0,0);
    func_0x01384bf0();
  }
  else {
    iVar1 = FUN_02116f08(param_1,0);
  }
  iVar3 = func_0x02feb690(param_1,&iStack_1c,0,**(undefined4 **)(_UNK_02169b50 + 0x21698a4));
  iVar4 = iStack_1c;
  uVar2 = 1;
  if (iVar3 != 0) {
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    iVar4 = FUN_0212f4e4(iVar4,0);
    uVar2 = 0;
    if (iVar4 != 9) {
      uVar2 = 1;
    }
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = FUN_0210e5f4(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02141acc(iVar1,0);
  if (iVar4 != iVar1) {
    if (param_1 == 0) {
      func_0x01384bf0();
      iVar1 = FUN_0210e250(0,6,0,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
        iVar1 = FUN_0210e250(0,0x11,0,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
          iVar1 = FUN_0210e250(0,0x12,0,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
            iVar1 = FUN_0210e250(0,0x19,0,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
              goto LAB_02169b30;
            }
          }
        }
      }
    }
    else {
      iVar1 = FUN_0210e250(param_1,6,0,0);
      if ((((iVar1 == 0) && (iVar1 = FUN_0210e250(param_1,0x11,0,0), iVar1 == 0)) &&
          (iVar1 = FUN_0210e250(param_1,0x12,0,0), iVar1 == 0)) &&
         (iVar1 = FUN_0210e250(param_1,0x19,0,0), iVar1 == 0)) {
LAB_02169b30:
        iVar1 = FUN_02116ae0(param_1,0);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        goto LAB_02169a18;
      }
    }
  }
  uVar2 = 0;
LAB_02169a18:
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cc0100(iVar1,0x98,0);
  uVar5 = uVar2;
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = FUN_0210e2d4(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01c946b8(iVar1,uVar5,0);
    uVar5 = 0;
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = FUN_0210e2d4(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01ca4f6c(iVar1,uVar5,0);
      uVar5 = 0;
      if (iVar1 == 0) {
        uVar5 = uVar2;
      }
    }
  }
  return uVar5;
}



// ===== FAT.Merge.ItemUtility$$GetItemShortName RVA 0x2159b54 =====

/* WARNING: Possible PIC construction at 0x028c1238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c123c) */
/* WARNING: Removing unreachable block (ram,0x028c124c) */
/* WARNING: Removing unreachable block (ram,0x028c1250) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02169b54(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int unaff_r4;
  undefined1 *unaff_r5;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *unaff_r6;
  undefined4 uVar10;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int *unaff_r9;
  char *unaff_r10;
  uint unaff_r11;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  ulonglong uVar18;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_14;
  
  pcVar7 = (char *)(_UNK_02169cb4 + 0x2169b70);
  uStack_14 = param_1;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02169cb8 + 0x2169b84));
    func_0x01384978(*(undefined4 *)(_UNK_02169cbc + 0x2169b90));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7621,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7621,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_02173b0c + 0x2173a2c);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173b10 + 0x2173a40),param_1,0);
      *pcVar7 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar6,0,0);
    uVar10 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173b14 + 0x2173afc));
    return uVar10;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02169cc0 + 0x2169c04)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x100);
        goto LAB_02169c4c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02169cc0 + 0x2169c04),8);
LAB_02169c4c:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  if (iVar1 == 0) {
    uVar10 = func_0x014867c8(&uStack_14,0);
    return uVar10;
  }
  uVar4 = *(uint *)(iVar1 + 0x24);
  if (*(int *)(**(int **)(_UNK_02169cc4 + 0x2169c74) + 0x74) == 0) {
    func_0x01384ab4(**(int **)(_UNK_02169cc4 + 0x2169c74));
  }
  uVar18 = (ulonglong)uVar4;
  puVar12 = (undefined1 *)register0x00000054;
SUB_028c1350:
  pcVar7 = (char *)uVar18;
  *(undefined4 *)(puVar12 + -4) = unaff_lr;
  *(uint *)(puVar12 + -8) = unaff_r11;
  *(undefined1 **)(puVar12 + -0xc) = unaff_r5;
  piVar2 = (int *)(puVar12 + -0x10);
  *piVar2 = unaff_r4;
  pcVar9 = (char *)(_UNK_028c13f0 + 0x28c1364);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c13f4 + 0x28c1378),(int)(uVar18 >> 0x20));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xbb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xbb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar2;
    uVar10 = *(undefined4 *)(puVar12 + -0xc);
    *(undefined4 *)(puVar12 + -4) = *(undefined4 *)(puVar12 + -4);
    *(undefined4 **)(puVar12 + -8) = unaff_r8;
    *(undefined4 *)(puVar12 + -0xc) = unaff_r7;
    *piVar2 = (int)unaff_r6;
    *(undefined4 *)(puVar12 + -0x14) = uVar10;
    *(int *)(puVar12 + -0x18) = iVar8;
    pcVar9 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),pcVar7,0);
      *pcVar9 = '\x01';
    }
    *(undefined4 *)(puVar12 + -0x30) = 0;
    *(undefined4 *)(puVar12 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(puVar12 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(puVar12 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)(puVar12 + -0x20) = 0;
    func_0x0245494c(puVar12 + -0x48,0);
    iVar8 = *(int *)(iVar1 + 0x10);
    *(undefined4 *)(puVar12 + -0x30) = *(undefined4 *)(puVar12 + -0x48);
    *(undefined4 *)(puVar12 + -0x2c) = *(undefined4 *)(puVar12 + -0x44);
    *(undefined4 *)(puVar12 + -0x28) = *(undefined4 *)(puVar12 + -0x40);
    *(undefined4 *)(puVar12 + -0x24) = *(undefined4 *)(puVar12 + -0x3c);
    *(undefined4 *)(puVar12 + -0x20) = *(undefined4 *)(puVar12 + -0x38);
    if (iVar8 != 0) {
      func_0x01485278(puVar12 + -0x30,iVar8,0);
    }
    func_0x01485278(puVar12 + -0x30,pcVar7,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    *(undefined4 *)(puVar12 + -0x50) = 0;
    *(undefined4 *)(puVar12 + -0x4c) = 0;
    func_0x0245495c(iVar8,uVar10,puVar12 + -0x30,uVar6);
    uVar10 = func_0x02f5db90(puVar12 + -0x30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar10;
  }
  if (*(int *)(**(int **)(_UNK_028c13f8 + 0x28c13d0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  unaff_r4 = *piVar2;
  unaff_r11 = *(uint *)(puVar12 + -8);
  uVar10 = *(undefined4 *)(puVar12 + -4);
  iVar1 = *(int *)(puVar12 + -0xc);
  pcVar9 = unaff_r10;
  puVar11 = puVar12;
  do {
    unaff_r10 = pcVar7;
    *(undefined4 *)(puVar11 + -4) = uVar10;
    *(char **)(puVar11 + -8) = pcVar9;
    *(int **)(puVar11 + -0xc) = unaff_r9;
    *(undefined4 **)(puVar11 + -0x10) = unaff_r8;
    *(undefined4 *)(puVar11 + -0x14) = unaff_r7;
    *(char **)(puVar11 + -0x18) = unaff_r6;
    *(int *)(puVar11 + -0x1c) = iVar1;
    *(int *)(puVar11 + -0x20) = unaff_r4;
    unaff_r5 = (undefined1 *)0x1;
    unaff_r6 = (char *)(iRam028c1308 + 0x28c0e50);
    if (*unaff_r6 == '\0') {
      func_0x01384978(*(undefined4 *)(iRam028c130c + 0x28c0e64));
      func_0x01384978(*(undefined4 *)(iRam028c1310 + 0x28c0e70));
      func_0x01384978(*(undefined4 *)(iRam028c1314 + 0x28c0e7c));
      func_0x01384978(*(undefined4 *)(iRam028c1318 + 0x28c0e88));
      func_0x01384978(*(undefined4 *)(iRam028c131c + 0x28c0e94));
      func_0x01384978(*(undefined4 *)(iRam028c1320 + 0x28c0ea0));
      func_0x01384978(*(undefined4 *)(iRam028c1324 + 0x28c0eac));
      *unaff_r6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xc,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0xc,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = func_0x02173c38(iVar1,unaff_r10,1,0);
      return uVar10;
    }
    unaff_r8 = *(undefined4 **)(iRam028c1328 + 0x28c0f0c);
    *(undefined4 *)(puVar11 + -0x24) = *unaff_r8;
    iVar1 = func_0x0467229c(unaff_r10,0);
    if (iVar1 != 0) {
      return *unaff_r8;
    }
    unaff_r9 = *(int **)(iRam028c132c + 0x28c0f34);
    iVar1 = *unaff_r9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *unaff_r9;
    }
    iVar8 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
    if (iVar8 == 0) goto LAB_028c125c;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar8 = *(int *)(*(int *)(*unaff_r9 + 0x5c) + 8);
      bVar14 = iVar8 == 0;
      bVar13 = true;
      if (bVar14) break;
    }
    iVar1 = *(int *)(iVar8 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03e1fee8(iVar1,**(undefined4 **)(iRam028c1330 + 0x28c0f98));
    if (0 < iVar1) {
      iVar1 = *unaff_r9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *unaff_r9;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar11 + -0x24,
                              **(undefined4 **)(iRam028c1334 + 0x28c0ff8));
      if (iVar1 != 0) goto LAB_028c125c;
    }
    iVar1 = *unaff_r9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *unaff_r9;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x14) == 0) {
LAB_028c10a0:
      iVar1 = *unaff_r9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *unaff_r9;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0x10) != 0) {
        iVar1 = *unaff_r9;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *unaff_r9;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar11 + -0x24,
                                **(undefined4 **)(iRam028c133c + 0x28c1128));
        if (iVar1 != 0) goto LAB_028c1138;
      }
    }
    else {
      iVar1 = *unaff_r9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *unaff_r9;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar11 + -0x24,
                              **(undefined4 **)(iRam028c1338 + 0x28c1090));
      if (iVar1 == 0) goto LAB_028c10a0;
LAB_028c1138:
      iVar1 = func_0x0467229c(*(undefined4 *)(puVar11 + -0x24),0);
      if (iVar1 == 0) goto LAB_028c12f8;
    }
    if (unaff_r10 == (char *)0x0) {
      func_0x01384bf0();
      iVar1 = func_0x04677604(0,**(undefined4 **)(iRam028c1340 + 0x28c11a4),0);
      if (iVar1 < 0) {
LAB_028c125c:
        uVar10 = func_0x046604e4(**(undefined4 **)(iRam028c134c + 0x28c127c),unaff_r10,0);
        return uVar10;
      }
      func_0x01384bf0();
      iVar1 = func_0x04676d38(0,0x2c,0);
      if (iVar1 < 0) goto LAB_028c125c;
      func_0x01384bf0();
    }
    else {
      iVar1 = func_0x04677604(unaff_r10,**(undefined4 **)(iRam028c1344 + 0x28c1164),0);
      if ((iVar1 < 0) || (iVar1 = func_0x04676d38(unaff_r10,0x2c,0), iVar1 < 0)) goto LAB_028c125c;
    }
    unaff_r7 = 0;
    unaff_r4 = func_0x04674540(unaff_r10,0x2c,0,0);
    if (unaff_r4 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(unaff_r4 + 0xc) < 1) {
      uVar10 = func_0x04672b68(*unaff_r8,unaff_r4,0);
      iVar1 = *unaff_r9;
      *(undefined4 *)(puVar11 + -0x24) = uVar10;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *unaff_r9;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      uVar10 = *(undefined4 *)(puVar11 + -0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03e201a8(iVar1,unaff_r10,uVar10,**(undefined4 **)(iRam028c1348 + 0x28c12f0));
LAB_028c12f8:
      return *(undefined4 *)(puVar11 + -0x24);
    }
    if (*(int *)(unaff_r4 + 0xc) == 0) {
      func_0x01384bf4();
    }
    unaff_r6 = *(char **)(unaff_r4 + 0x10);
    if (*(int *)(*unaff_r9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar10 = 0x28c123c;
    pcVar7 = unaff_r6;
    iVar1 = unaff_r4;
    pcVar9 = unaff_r10;
    puVar11 = puVar11 + -0x28;
  } while( true );
  unaff_lr = 0x28c1308;
  uVar18 = func_0x01384bf0();
  bVar16 = bVar13;
  if (bVar14) {
    unaff_r10 = (char *)0x43fa;
    bVar16 = 0x28000000 < unaff_r11 || unaff_r11 + 0xd8000000 < (uint)bVar13;
  }
  bVar14 = bVar14 && unaff_r11 == !bVar13 + 0x28000000;
  bVar13 = bVar16;
  if (bVar14) {
    bVar13 = &__DT_REL[0x5d26].r_info < puVar11 + -0x28 ||
             puVar11 + -0x70028 < (undefined1 *)(uint)bVar16;
  }
  bVar14 = bVar14 && puVar11 + -0x28 == (undefined1 *)(!bVar16 + 0x70000);
  bVar16 = bVar13;
  if (bVar14) {
    bVar16 = 0xc000000 < unaff_r11 || unaff_r11 + 0xf4000000 < (uint)bVar13;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14 && unaff_r11 == !bVar13 + 0xc000000) {
    bVar17 = (undefined1 *)0x2b0 < puVar11 + -0x28 || puVar11 + -0x2d8 < (undefined1 *)(uint)bVar16;
    unaff_r5 = puVar11 + (-0x28 - (!bVar16 + 0x2b0));
    bVar15 = unaff_r5 == (undefined1 *)0x0;
  }
  bVar14 = false;
  bVar13 = bVar17;
  if (bVar15) {
    bVar13 = (undefined1 *)0x48000000 < puVar11 + -0x28 ||
             puVar11 + -0x48000028 < (undefined1 *)(uint)bVar17;
    unaff_r8 = (undefined4 *)(puVar11 + (-0x28 - (!bVar17 + 0x48000000)));
    bVar14 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar16 = bVar13;
  if (bVar14) {
    bVar16 = 0x428c1325 < bVar13;
  }
  bVar14 = bVar14 && !bVar13 == 0x428c1325;
  bVar13 = bVar16;
  if (bVar14) {
    bVar13 = 0x90000003 < unaff_r11 || unaff_r11 + 0x6ffffffd < (uint)bVar16;
  }
  bVar14 = bVar14 && unaff_r11 == !bVar16 + 0x90000003;
  bVar16 = bVar13;
  if (bVar14) {
    bVar16 = 0x10000002 < unaff_r11 || unaff_r11 + 0xeffffffe < (uint)bVar13;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14 && unaff_r11 == !bVar13 + 0x10000002) {
    bVar17 = puVar11 != (undefined1 *)0x28 || puVar11 + -0x28 < (undefined1 *)(uint)bVar16;
    unaff_r5 = puVar11 + (-0x28 - (uint)!bVar16);
    bVar15 = unaff_r5 == (undefined1 *)0x0;
  }
  bVar14 = bVar17;
  if (bVar15) {
    bVar14 = &UNK_03d00000 < puVar11 + -0x28 || puVar11 + -0x3d00028 < (undefined1 *)(uint)bVar17;
  }
  bVar13 = bVar14;
  if (bVar15 && puVar11 + -0x28 == &UNK_03d00000 + !bVar17) {
    bVar13 = 0x40000009 < unaff_r11 || unaff_r11 + 0xbffffff7 < (uint)bVar14;
  }
  bVar16 = (bVar15 && puVar11 + -0x28 == &UNK_03d00000 + !bVar17) &&
           unaff_r11 == !bVar14 + 0x40000009;
  bVar14 = bVar13;
  if (bVar16) {
    bVar14 = 0x3f < unaff_r11 || unaff_r11 - 0x3f < (uint)bVar13;
  }
  bVar16 = bVar16 && unaff_r11 == !bVar13 + 0x3f;
  bVar13 = bVar14;
  if (bVar16) {
    bVar13 = 0x19 < unaff_r11 || unaff_r11 - 0x19 < (uint)bVar14;
  }
  bVar15 = false;
  bVar17 = bVar13;
  if (bVar16 && unaff_r11 == !bVar14 + 0x19) {
    bVar17 = (undefined1 *)0xe < puVar11 + -0x28 || puVar11 + -0x36 < (undefined1 *)(uint)bVar13;
    unaff_r8 = (undefined4 *)(puVar11 + (-0x28 - (!bVar13 + 0xe)));
    bVar15 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar14 = false;
  bVar13 = bVar17;
  if (bVar15) {
    bVar13 = (undefined1 *)0x1e < puVar11 + -0x28 || puVar11 + -0x46 < (undefined1 *)(uint)bVar17;
    unaff_r8 = (undefined4 *)(puVar11 + (-0x28 - (!bVar17 + 0x1e)));
    bVar14 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar16 = false;
  if (bVar14) {
    unaff_r11 = unaff_r11 - (!bVar13 + 0x260);
    bVar16 = unaff_r11 == 0;
  }
  puVar12 = puVar11 + -0x28;
  if (bVar16) {
    puVar12 = puVar11 + -0x28;
  }
  goto SUB_028c1350;
}



// ===== FAT.Merge.ItemUtility$$GetSourceSpawnSound RVA 0x2159cc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02169cc8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_02169ec4 + 0x2169ce4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02169ec8 + 0x2169cf8));
    func_0x01384978(*(undefined4 *)(_UNK_02169ecc + 0x2169d04));
    func_0x01384978(*(undefined4 *)(_UNK_02169ed0 + 0x2169d10));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9faf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9faf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0228b2c4(&uStack_20,iVar1,param_2,0);
    *param_1 = uStack_20;
    param_1[1] = uStack_1c;
    return;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02169ed4 + 0x2169d8c)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_02169dd4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02169ed4 + 0x2169d8c),10);
LAB_02169dd4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0x50) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar8 = **(undefined4 **)(_UNK_02169ed8 + 0x2169e20);
  if (*(int *)(iVar1 + 0x20) == 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        uVar6 = 0;
        goto LAB_02169e5c;
      }
      puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x18) + 0x40);
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(iVar1 + 8) + 0x48);
    }
  }
  else {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x20) + 0x5c);
  }
  uVar6 = *puVar3;
LAB_02169e5c:
  uVar9 = 0;
  iVar1 = func_0x01489db8(uVar6,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02169edc + 0x2169e80) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x025550ec(uVar6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
  }
  *param_1 = uVar8;
  param_1[1] = uVar9;
  return;
}



// ===== FAT.Merge.ItemUtility$$GetItemLongName RVA 0x2159ee0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02169ee0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_02169fa4 + 0x2169ef4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02169fa8 + 0x2169f08));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb528,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb528,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02173b0c + 0x2173a2c);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173b10 + 0x2173a40),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173b14 + 0x2173afc));
    return uVar5;
  }
  iVar1 = FUN_02157e88(param_1);
  uVar5 = FUN_02169b54(param_1);
  if (0 < iVar1) {
    uVar2 = func_0x02169fb0(param_1);
    uVar5 = (*(code *)&SUB_046719a8)(uVar5,**(undefined4 **)(_UNK_02169fac + 0x2169f90),uVar2,0);
    return uVar5;
  }
  return uVar5;
}



// ===== FAT.Merge.ItemUtility$$GetItemLevelStr RVA 0x2159fb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02169fb0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_0216a124 + 0x2169fc8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216a128 + 0x2169fdc));
    func_0x01384978(*(undefined4 *)(_UNK_0216a12c + 0x2169fe8));
    func_0x01384978(*(undefined4 *)(_UNK_0216a130 + 0x2169ff4));
    func_0x01384978(*(undefined4 *)(_UNK_0216a134 + 0x216a000));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb529,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb529,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02173b0c + 0x2173a2c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173b10 + 0x2173a40),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173b14 + 0x2173afc));
    return;
  }
  iStack_14 = FUN_02157e88(param_1);
  if (iStack_14 < 2) {
    iStack_14 = 1;
  }
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216a138 + 0x216a078),1);
  iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_0216a13c + 0x216a090),&iStack_14);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0))
  {
    uVar6 = func_0x01384c10();
    func_0x01384aa0(uVar6,0);
  }
  if (piVar2[3] == 0) {
    func_0x01384bf4();
  }
  piVar2[4] = iVar1;
  if (*(int *)(**(int **)(_UNK_0216a140 + 0x216a0f4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c1688(**(undefined4 **)(_UNK_0216a144 + 0x216a118),piVar2,0);
  return;
}



// ===== FAT.Merge.ItemUtility$$GetItemRuntimeShortName RVA 0x215a148 =====

/* WARNING: Possible PIC construction at 0x028c1238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c123c) */
/* WARNING: Removing unreachable block (ram,0x028c124c) */
/* WARNING: Removing unreachable block (ram,0x028c1250) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216a148(char *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int unaff_r4;
  undefined1 *unaff_r5;
  char *unaff_r6;
  char *pcVar8;
  undefined4 uVar9;
  int unaff_r7;
  undefined4 *unaff_r8;
  int *unaff_r9;
  char *unaff_r10;
  uint unaff_r11;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int unaff_lr;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_14;
  
  piVar1 = (int *)&stack0xfffffff0;
  iVar3 = func_0x0229f06c(0x7620,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x7620,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
SUB_02173e78:
    piVar1[3] = unaff_lr;
    piVar1[2] = (int)unaff_r8;
    piVar1[1] = unaff_r7;
    *piVar1 = (int)unaff_r6;
    piVar1[-1] = (int)unaff_r5;
    piVar1[-2] = unaff_r4;
    pcVar8 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar8 = '\x01';
    }
    piVar1[-8] = 0;
    piVar1[-7] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piVar1[-6] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piVar1[-5] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piVar1[-4] = 0;
    func_0x0245494c(piVar1 + -0xe,0);
    iVar4 = *(int *)(iVar3 + 0x10);
    piVar1[-8] = piVar1[-0xe];
    piVar1[-7] = piVar1[-0xd];
    piVar1[-6] = piVar1[-0xc];
    piVar1[-5] = piVar1[-0xb];
    piVar1[-4] = piVar1[-10];
    if (iVar4 != 0) {
      func_0x01485278(piVar1 + -8,iVar4,0);
    }
    func_0x01485278(piVar1 + -8,param_1,0);
    iVar4 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar3 == 0) {
      uVar7 = 1;
    }
    piVar1[-0x10] = 0;
    piVar1[-0xf] = 0;
    func_0x0245495c(iVar4,uVar9,piVar1 + -8,uVar7);
    uVar9 = func_0x02f5db90(piVar1 + -8,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar9;
  }
  if (param_1 == (char *)0x0) {
    func_0x01384bf0();
  }
  uVar9 = FUN_0210e2d4(param_1,0);
  pcVar8 = (char *)(_UNK_02169cb4 + 0x2169b70);
  uStack_14 = uVar9;
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02169cb8 + 0x2169b84));
    func_0x01384978(*(undefined4 *)(_UNK_02169cbc + 0x2169b90));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x7621,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x7621,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02173b0c + 0x2173a2c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173b10 + 0x2173a40),uVar9,0);
      *pcVar8 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485238(&uStack_30,uVar9,0);
    iVar4 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar3 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar4,uVar9,&uStack_30,uVar7,0,0);
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173b14 + 0x2173afc));
    return uVar9;
  }
  piVar1 = (int *)FUN_021566f4();
  if (piVar1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar1;
  uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_02169cc0 + 0x2169c04)) {
        puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0x100);
        goto LAB_02169c4c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_02169cc0 + 0x2169c04),8);
LAB_02169c4c:
  iVar3 = (*(code *)*puVar2)(piVar1,uVar9,puVar2[1]);
  if (iVar3 == 0) {
    uVar9 = func_0x014867c8(&uStack_14,0);
    return uVar9;
  }
  uVar5 = *(uint *)(iVar3 + 0x24);
  if (*(int *)(**(int **)(_UNK_02169cc4 + 0x2169c74) + 0x74) == 0) {
    func_0x01384ab4(**(int **)(_UNK_02169cc4 + 0x2169c74));
  }
  uVar17 = (ulonglong)uVar5;
  puVar11 = (undefined1 *)register0x00000054;
SUB_028c1350:
  param_1 = (char *)uVar17;
  *(int *)(puVar11 + -4) = unaff_lr;
  *(uint *)(puVar11 + -8) = unaff_r11;
  *(undefined1 **)(puVar11 + -0xc) = unaff_r5;
  piVar1 = (int *)(puVar11 + -0x10);
  *piVar1 = unaff_r4;
  pcVar8 = (char *)(_UNK_028c13f0 + 0x28c1364);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c13f4 + 0x28c1378),(int)(uVar17 >> 0x20));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xbb,0);
  if (iVar3 == 0) {
    if (*(int *)(**(int **)(_UNK_028c13f8 + 0x28c13d0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_r4 = *piVar1;
    unaff_r11 = *(uint *)(puVar11 + -8);
    uVar9 = *(undefined4 *)(puVar11 + -4);
    iVar3 = *(int *)(puVar11 + -0xc);
    pcVar8 = unaff_r10;
    puVar10 = puVar11;
    do {
      unaff_r10 = param_1;
      *(undefined4 *)(puVar10 + -4) = uVar9;
      *(char **)(puVar10 + -8) = pcVar8;
      *(int **)(puVar10 + -0xc) = unaff_r9;
      *(undefined4 **)(puVar10 + -0x10) = unaff_r8;
      *(int *)(puVar10 + -0x14) = unaff_r7;
      *(char **)(puVar10 + -0x18) = unaff_r6;
      *(int *)(puVar10 + -0x1c) = iVar3;
      *(int *)(puVar10 + -0x20) = unaff_r4;
      unaff_r5 = (undefined1 *)0x1;
      unaff_r6 = (char *)(iRam028c1308 + 0x28c0e50);
      if (*unaff_r6 == '\0') {
        func_0x01384978(*(undefined4 *)(iRam028c130c + 0x28c0e64));
        func_0x01384978(*(undefined4 *)(iRam028c1310 + 0x28c0e70));
        func_0x01384978(*(undefined4 *)(iRam028c1314 + 0x28c0e7c));
        func_0x01384978(*(undefined4 *)(iRam028c1318 + 0x28c0e88));
        func_0x01384978(*(undefined4 *)(iRam028c131c + 0x28c0e94));
        func_0x01384978(*(undefined4 *)(iRam028c1320 + 0x28c0ea0));
        func_0x01384978(*(undefined4 *)(iRam028c1324 + 0x28c0eac));
        *unaff_r6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0xc,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0xc,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar9 = func_0x02173c38(iVar3,unaff_r10,1,0);
        return uVar9;
      }
      unaff_r8 = *(undefined4 **)(iRam028c1328 + 0x28c0f0c);
      *(undefined4 *)(puVar10 + -0x24) = *unaff_r8;
      iVar3 = func_0x0467229c(unaff_r10,0);
      if (iVar3 != 0) {
        return *unaff_r8;
      }
      unaff_r9 = *(int **)(iRam028c132c + 0x28c0f34);
      iVar3 = *unaff_r9;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *unaff_r9;
      }
      iVar4 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
      if (iVar4 == 0) goto LAB_028c125c;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *(int *)(*(int *)(*unaff_r9 + 0x5c) + 8);
        bVar13 = iVar4 == 0;
        bVar12 = true;
        if (bVar13) goto LAB_028c1304;
      }
      iVar3 = *(int *)(iVar4 + 0x18);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x03e1fee8(iVar3,**(undefined4 **)(iRam028c1330 + 0x28c0f98));
      if (0 < iVar3) {
        iVar3 = *unaff_r9;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *unaff_r9;
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x18);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x03e220bc(iVar3,unaff_r10,puVar10 + -0x24,
                                **(undefined4 **)(iRam028c1334 + 0x28c0ff8));
        if (iVar3 != 0) goto LAB_028c125c;
      }
      iVar3 = *unaff_r9;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *unaff_r9;
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar3 + 0x14) == 0) {
LAB_028c10a0:
        iVar3 = *unaff_r9;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *unaff_r9;
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar3 + 0x10) != 0) {
          iVar3 = *unaff_r9;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *unaff_r9;
          }
          iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x03e220bc(iVar3,unaff_r10,puVar10 + -0x24,
                                  **(undefined4 **)(iRam028c133c + 0x28c1128));
          if (iVar3 != 0) goto LAB_028c1138;
        }
      }
      else {
        iVar3 = *unaff_r9;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *unaff_r9;
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x03e220bc(iVar3,unaff_r10,puVar10 + -0x24,
                                **(undefined4 **)(iRam028c1338 + 0x28c1090));
        if (iVar3 == 0) goto LAB_028c10a0;
LAB_028c1138:
        iVar3 = func_0x0467229c(*(undefined4 *)(puVar10 + -0x24),0);
        if (iVar3 == 0) goto LAB_028c12f8;
      }
      if (unaff_r10 == (char *)0x0) {
        func_0x01384bf0();
        iVar3 = func_0x04677604(0,**(undefined4 **)(iRam028c1340 + 0x28c11a4),0);
        if (iVar3 < 0) {
LAB_028c125c:
          uVar9 = func_0x046604e4(**(undefined4 **)(iRam028c134c + 0x28c127c),unaff_r10,0);
          return uVar9;
        }
        func_0x01384bf0();
        iVar3 = func_0x04676d38(0,0x2c,0);
        if (iVar3 < 0) goto LAB_028c125c;
        func_0x01384bf0();
      }
      else {
        iVar3 = func_0x04677604(unaff_r10,**(undefined4 **)(iRam028c1344 + 0x28c1164),0);
        if ((iVar3 < 0) || (iVar3 = func_0x04676d38(unaff_r10,0x2c,0), iVar3 < 0))
        goto LAB_028c125c;
      }
      unaff_r7 = 0;
      unaff_r4 = func_0x04674540(unaff_r10,0x2c,0,0);
      if (unaff_r4 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(unaff_r4 + 0xc) < 1) {
        uVar9 = func_0x04672b68(*unaff_r8,unaff_r4,0);
        iVar3 = *unaff_r9;
        *(undefined4 *)(puVar10 + -0x24) = uVar9;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *unaff_r9;
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x10);
        uVar9 = *(undefined4 *)(puVar10 + -0x24);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x03e201a8(iVar3,unaff_r10,uVar9,**(undefined4 **)(iRam028c1348 + 0x28c12f0));
LAB_028c12f8:
        return *(undefined4 *)(puVar10 + -0x24);
      }
      if (*(int *)(unaff_r4 + 0xc) == 0) {
        func_0x01384bf4();
      }
      unaff_r6 = *(char **)(unaff_r4 + 0x10);
      if (*(int *)(*unaff_r9 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar9 = 0x28c123c;
      param_1 = unaff_r6;
      iVar3 = unaff_r4;
      pcVar8 = unaff_r10;
      puVar10 = puVar10 + -0x28;
    } while( true );
  }
  iVar3 = func_0x0229f13c(0xbb,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *piVar1;
  unaff_r5 = *(undefined1 **)(puVar11 + -0xc);
  unaff_lr = *(int *)(puVar11 + -4);
  goto SUB_02173e78;
LAB_028c1304:
  unaff_lr = 0x28c1308;
  uVar17 = func_0x01384bf0();
  bVar15 = bVar12;
  if (bVar13) {
    unaff_r10 = (char *)0x43fa;
    bVar15 = 0x28000000 < unaff_r11 || unaff_r11 + 0xd8000000 < (uint)bVar12;
  }
  bVar13 = bVar13 && unaff_r11 == !bVar12 + 0x28000000;
  bVar12 = bVar15;
  if (bVar13) {
    bVar12 = &__DT_REL[0x5d26].r_info < puVar10 + -0x28 ||
             puVar10 + -0x70028 < (undefined1 *)(uint)bVar15;
  }
  bVar13 = bVar13 && puVar10 + -0x28 == (undefined1 *)(!bVar15 + 0x70000);
  bVar15 = bVar12;
  if (bVar13) {
    bVar15 = 0xc000000 < unaff_r11 || unaff_r11 + 0xf4000000 < (uint)bVar12;
  }
  bVar14 = false;
  bVar16 = bVar15;
  if (bVar13 && unaff_r11 == !bVar12 + 0xc000000) {
    bVar16 = (undefined1 *)0x2b0 < puVar10 + -0x28 || puVar10 + -0x2d8 < (undefined1 *)(uint)bVar15;
    unaff_r5 = puVar10 + (-0x28 - (!bVar15 + 0x2b0));
    bVar14 = unaff_r5 == (undefined1 *)0x0;
  }
  bVar13 = false;
  bVar12 = bVar16;
  if (bVar14) {
    bVar12 = (undefined1 *)0x48000000 < puVar10 + -0x28 ||
             puVar10 + -0x48000028 < (undefined1 *)(uint)bVar16;
    unaff_r8 = (undefined4 *)(puVar10 + (-0x28 - (!bVar16 + 0x48000000)));
    bVar13 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar15 = bVar12;
  if (bVar13) {
    bVar15 = 0x428c1325 < bVar12;
  }
  bVar13 = bVar13 && !bVar12 == 0x428c1325;
  bVar12 = bVar15;
  if (bVar13) {
    bVar12 = 0x90000003 < unaff_r11 || unaff_r11 + 0x6ffffffd < (uint)bVar15;
  }
  bVar13 = bVar13 && unaff_r11 == !bVar15 + 0x90000003;
  bVar15 = bVar12;
  if (bVar13) {
    bVar15 = 0x10000002 < unaff_r11 || unaff_r11 + 0xeffffffe < (uint)bVar12;
  }
  bVar14 = false;
  bVar16 = bVar15;
  if (bVar13 && unaff_r11 == !bVar12 + 0x10000002) {
    bVar16 = puVar10 != (undefined1 *)0x28 || puVar10 + -0x28 < (undefined1 *)(uint)bVar15;
    unaff_r5 = puVar10 + (-0x28 - (uint)!bVar15);
    bVar14 = unaff_r5 == (undefined1 *)0x0;
  }
  bVar13 = bVar16;
  if (bVar14) {
    bVar13 = &UNK_03d00000 < puVar10 + -0x28 || puVar10 + -0x3d00028 < (undefined1 *)(uint)bVar16;
  }
  bVar12 = bVar13;
  if (bVar14 && puVar10 + -0x28 == &UNK_03d00000 + !bVar16) {
    bVar12 = 0x40000009 < unaff_r11 || unaff_r11 + 0xbffffff7 < (uint)bVar13;
  }
  bVar15 = (bVar14 && puVar10 + -0x28 == &UNK_03d00000 + !bVar16) &&
           unaff_r11 == !bVar13 + 0x40000009;
  bVar13 = bVar12;
  if (bVar15) {
    bVar13 = 0x3f < unaff_r11 || unaff_r11 - 0x3f < (uint)bVar12;
  }
  bVar15 = bVar15 && unaff_r11 == !bVar12 + 0x3f;
  bVar12 = bVar13;
  if (bVar15) {
    bVar12 = 0x19 < unaff_r11 || unaff_r11 - 0x19 < (uint)bVar13;
  }
  bVar14 = false;
  bVar16 = bVar12;
  if (bVar15 && unaff_r11 == !bVar13 + 0x19) {
    bVar16 = (undefined1 *)0xe < puVar10 + -0x28 || puVar10 + -0x36 < (undefined1 *)(uint)bVar12;
    unaff_r8 = (undefined4 *)(puVar10 + (-0x28 - (!bVar12 + 0xe)));
    bVar14 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar13 = false;
  bVar12 = bVar16;
  if (bVar14) {
    bVar12 = (undefined1 *)0x1e < puVar10 + -0x28 || puVar10 + -0x46 < (undefined1 *)(uint)bVar16;
    unaff_r8 = (undefined4 *)(puVar10 + (-0x28 - (!bVar16 + 0x1e)));
    bVar13 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar15 = false;
  if (bVar13) {
    unaff_r11 = unaff_r11 - (!bVar12 + 0x260);
    bVar15 = unaff_r11 == 0;
  }
  puVar11 = puVar10 + -0x28;
  if (bVar15) {
    puVar11 = puVar10 + -0x28;
  }
  goto SUB_028c1350;
}



// ===== FAT.Merge.ItemUtility$$_StringJoin RVA 0x215a1b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216a1b4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_0216a2b8 + 0x216a1cc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216a2bc + 0x216a1e0));
    func_0x01384978(*(undefined4 *)(_UNK_0216a2c0 + 0x216a1ec));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7631,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01489db8(param_1,0);
    uVar5 = param_2;
    if ((iVar1 == 0) && (iVar1 = func_0x01489db8(param_2,0), uVar5 = param_1, iVar1 == 0)) {
      if (*(int *)(**(int **)(_UNK_0216a2c4 + 0x216a27c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar5 = func_0x028c1350(**(undefined4 **)(_UNK_0216a2c8 + 0x216a29c),0);
      uVar5 = (*(code *)&SUB_046719a8)(param_1,uVar5,param_2,0);
      return uVar5;
    }
    return uVar5;
  }
  iVar1 = func_0x0229f13c(0x7631,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_02173e6c + 0x2173d78);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02173e70 + 0x2173d8c),param_1,param_2,0);
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
  uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02173e74 + 0x2173e5c));
  return uVar5;
}



// ===== FAT.Merge.ItemUtility$$TapCostItemList RVA 0x215a2cc =====

/* WARNING: Removing unreachable block (ram,0x0216a764) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216a2cc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_0216a850 + 0x216a2e8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216a854 + 0x216a2fc));
    func_0x01384978(*(undefined4 *)(_UNK_0216a858 + 0x216a308));
    func_0x01384978(*(undefined4 *)(_UNK_0216a85c + 0x216a314));
    func_0x01384978(*(undefined4 *)(_UNK_0216a860 + 0x216a320));
    func_0x01384978(*(undefined4 *)(_UNK_0216a864 + 0x216a32c));
    func_0x01384978(*(undefined4 *)(_UNK_0216a868 + 0x216a338));
    func_0x01384978(*(undefined4 *)(_UNK_0216a86c + 0x216a344));
    func_0x01384978(*(undefined4 *)(_UNK_0216a870 + 0x216a350));
    *pcVar8 = '\x01';
  }
  uVar9 = 0;
  iVar1 = func_0x0229f06c(0x7657,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7657,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar10,uVar9,&uStack_38,uVar7,0,0);
    uVar9 = func_0x0245496c(&uStack_38,0,0);
    return uVar9;
  }
  if (param_1 != 0) {
    uVar9 = 0;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x60) != 0) {
      uVar9 = 0;
      iVar1 = func_0x01cc0100(*(int *)(iVar1 + 0x60),0xa3,0);
      if (iVar1 != 0) {
        if (param_2 != 0) {
          *(undefined4 *)(param_2 + 0xc) = 0;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        }
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x50);
        uVar7 = *(undefined4 *)(param_1 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar9 = 0;
        iVar1 = func_0x01db5714(iVar1,uVar7,0);
        if (iVar1 != 0) {
          iVar10 = *(int *)(iVar1 + 0x20);
          if (iVar10 != 0) {
            iVar1 = *(int *)(iVar10 + 0x18);
          }
          if ((iVar10 != 0 && iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar10 = *(int *)(iVar10 + 0x18);
            iVar1 = *(int *)(iVar1 + 0x38);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            piVar2 = (int *)func_0x0364c2b4(iVar10,**(undefined4 **)(_UNK_0216a874 + 0x216a4b4));
            piVar12 = *(int **)(_UNK_0216a878 + 0x216a4d0);
            piVar13 = *(int **)(_UNK_0216a87c + 0x216a4d8);
            uVar7 = 0;
LAB_0216a4d8:
            uVar9 = uVar7;
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar10 = *piVar2;
            uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
              do {
                if (piVar6[-1] == *piVar12) {
                  puVar3 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
                  goto LAB_0216a534;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 2;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_0216a534:
            iVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
            if (iVar10 != 0) {
              if (piVar2 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar10 = *piVar2;
              uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
                do {
                  if (piVar6[-1] == *piVar13) {
                    puVar3 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
                    goto LAB_0216a5a8;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 2;
                } while (uVar5 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar13,0);
LAB_0216a5a8:
              uVar7 = (*(code *)*puVar3)(piVar2,puVar3[1]);
              iVar10 = func_0x01c24918(0);
              if (iVar10 == 0) {
                func_0x01384bf0();
              }
              iVar10 = *(int *)(iVar10 + 0x50);
              if (iVar10 == 0) {
                func_0x01384bf0();
              }
              iVar10 = func_0x01db6254(iVar10,uVar7,0);
              uVar7 = uVar9;
              if (((iVar10 != 0) && (iVar10 = *(int *)(iVar10 + 0x14), 0 < iVar10)) &&
                 (iVar10 != 0x1f)) {
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar4 = func_0x01cd23fc(iVar1,iVar10,0x2000,0);
                if (((iVar4 != 0) && (uVar11 = 1, uVar7 = uVar11, param_2 != 0)) &&
                   (iVar4 = func_0x03259a6c(param_2,iVar10,
                                            **(undefined4 **)(_UNK_0216a880 + 0x216a650)),
                   uVar7 = uVar9, iVar4 == 0)) {
                  uStack_2c = *(uint *)(param_2 + 0xc);
                  iStack_28 = *(int *)(param_2 + 8);
                  piVar6 = *(int **)(_UNK_0216a884 + 0x216a688);
                  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
                  iStack_30 = *piVar6;
                  if (iStack_28 == 0) {
                    func_0x01384bf0();
                  }
                  if (uStack_2c < *(uint *)(iStack_28 + 0xc)) {
                    *(uint *)(param_2 + 0xc) = uStack_2c + 1;
                    *(int *)(iStack_28 + uStack_2c * 4 + 0x10) = iVar10;
                    uVar7 = uVar11;
                  }
                  else {
                    func_0x0325970c(param_2,iVar10,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(iStack_30 + 0x10) + 0x60) + 0x38));
                    uVar7 = uVar11;
                  }
                }
              }
              goto LAB_0216a4d8;
            }
            if (piVar2 != (int *)0x0) {
              iVar1 = *piVar2;
              uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar5 != 0) {
                piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar12[-1] == **(int **)(_UNK_0216a888 + 0x216a704)) {
                    puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
                    goto LAB_0216a74c;
                  }
                  uVar5 = uVar5 - 1;
                  piVar12 = piVar12 + 2;
                } while (uVar5 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0216a888 + 0x216a704),0)
              ;
LAB_0216a74c:
              (*(code *)*puVar3)(piVar2,puVar3[1]);
            }
          }
        }
      }
    }
  }
  return uVar9;
}



// ===== FAT.Merge.ItemUtility$$GetBoardItemInfo RVA 0x215a890 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216a890(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar8 = (char *)(_UNK_0216b554 + 0x216a8a8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216b558 + 0x216a8bc));
    func_0x01384978(*(undefined4 *)(_UNK_0216b55c + 0x216a8c8));
    func_0x01384978(*(undefined4 *)(_UNK_0216b560 + 0x216a8d4));
    func_0x01384978(*(undefined4 *)(_UNK_0216b564 + 0x216a8e0));
    func_0x01384978(*(undefined4 *)(_UNK_0216b568 + 0x216a8ec));
    func_0x01384978(*(undefined4 *)(_UNK_0216b56c + 0x216a8f8));
    func_0x01384978(*(undefined4 *)(_UNK_0216b570 + 0x216a904));
    func_0x01384978(*(undefined4 *)(_UNK_0216b574 + 0x216a910));
    func_0x01384978(*(undefined4 *)(_UNK_0216b578 + 0x216a91c));
    func_0x01384978(*(undefined4 *)(_UNK_0216b57c + 0x216a928));
    func_0x01384978(*(undefined4 *)(_UNK_0216b580 + 0x216a934));
    func_0x01384978(*(undefined4 *)(_UNK_0216b584 + 0x216a940));
    func_0x01384978(*(undefined4 *)(_UNK_0216b588 + 0x216a94c));
    func_0x01384978(*(undefined4 *)(_UNK_0216b58c + 0x216a958));
    func_0x01384978(*(undefined4 *)(_UNK_0216b590 + 0x216a964));
    func_0x01384978(*(undefined4 *)(_UNK_0216b594 + 0x216a970));
    func_0x01384978(*(undefined4 *)(_UNK_0216b598 + 0x216a97c));
    func_0x01384978(*(undefined4 *)(_UNK_0216b59c + 0x216a988));
    func_0x01384978(*(undefined4 *)(_UNK_0216b5a0 + 0x216a994));
    func_0x01384978(*(undefined4 *)(_UNK_0216b5a4 + 0x216a9a0));
    func_0x01384978(*(undefined4 *)(_UNK_0216b5a8 + 0x216a9ac));
    func_0x01384978(*(undefined4 *)(_UNK_0216b5ac + 0x216a9b8));
    func_0x01384978(*(undefined4 *)(_UNK_0216b5b0 + 0x216a9c4));
    func_0x01384978(*(undefined4 *)(_UNK_0216b5b4 + 0x216a9d0));
    func_0x01384978(*(undefined4 *)(_UNK_0216b5b8 + 0x216a9dc));
    func_0x01384978(*(undefined4 *)(_UNK_0216b5bc + 0x216a9e8));
    func_0x01384978(*(undefined4 *)(_UNK_0216b5c0 + 0x216a9f4));
    func_0x01384978(*(undefined4 *)(_UNK_0216b5c4 + 0x216aa00));
    *pcVar8 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iStack_24 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x7630,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7630,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02173e78(iVar1,param_1,0);
    return uVar2;
  }
  uVar2 = **(undefined4 **)(**(int **)(_UNK_0216b5c8 + 0x216aa70) + 0x5c);
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_0211015c(0,0);
    func_0x01384bf0();
    if (iVar1 != 0) goto LAB_0216ab64;
    iVar1 = func_0x02feb690(0,&iStack_1c,0,**(undefined4 **)(_UNK_0216b5f8 + 0x216ac88));
    if (iVar1 != 0) goto LAB_0216ac98;
    func_0x01384bf0();
    iVar1 = FUN_0210e250(0,0x11,0,0);
    if (iVar1 != 0) goto LAB_0216ad68;
    func_0x01384bf0();
    iVar1 = FUN_0210e250(0,0x12,0,0);
    if (iVar1 != 0) goto LAB_0216adb0;
    func_0x01384bf0();
    iVar1 = FUN_0210e250(0,0x19,0,0);
    if (iVar1 != 0) goto LAB_0216adf8;
    func_0x01384bf0();
    iVar1 = func_0x02feb690(0,&iStack_20,0,**(undefined4 **)(_UNK_0216b614 + 0x216ae38));
    if (iVar1 != 0) goto LAB_0216ae48;
    func_0x01384bf0();
    iVar1 = FUN_02116ae0(0,0);
    if (iVar1 != 0) {
      func_0x01384bf0();
      goto LAB_0216aefc;
    }
LAB_0216b498:
    func_0x01384bf0();
    iVar1 = FUN_02116990(param_1,0);
    if (iVar1 == 0) {
      return uVar2;
    }
LAB_0216b4b0:
    func_0x01384bf0();
  }
  else {
    iVar1 = FUN_0211015c(param_1,0);
    if (iVar1 != 0) {
LAB_0216ab64:
      iVar1 = FUN_02116cdc(param_1,0);
      if (iVar1 == 0) {
        piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216b5d8 + 0x216abb0),1);
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uStack_2c = FUN_02116e50(param_1,0);
        iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_0216b5dc + 0x216abdc),&uStack_2c);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar1 != 0) &&
           (iVar3 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
          uVar2 = func_0x01384c10();
          func_0x01384aa0(uVar2,0);
        }
        if (piVar4[3] == 0) {
          func_0x01384bf4();
        }
        piVar4[4] = iVar1;
        if (*(int *)(**(int **)(_UNK_0216b5e0 + 0x216ac48) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar2 = func_0x028c1688(**(undefined4 **)(_UNK_0216b5e4 + 0x216ac6c),piVar4,0);
        return uVar2;
      }
      if (*(int *)(**(int **)(_UNK_0216b5e8 + 0x216ab84) + 0x74) == 0) {
        func_0x01384ab4();
      }
      puVar7 = *(undefined4 **)(_UNK_0216b5ec + 0x216aba0);
LAB_0216b14c:
      uVar2 = func_0x028c1350(*puVar7,0);
      return uVar2;
    }
    iVar1 = func_0x02feb690(param_1,&iStack_1c,0,**(undefined4 **)(_UNK_0216b5cc + 0x216aaa4));
    if (iVar1 != 0) {
LAB_0216ac98:
      iVar1 = iStack_1c;
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      iVar3 = FUN_0211e720(iVar1,0);
      iVar1 = iStack_1c;
      if (iVar3 == 0) {
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_0211e780(iVar1,0);
        if (iVar1 == 0) {
          return uVar2;
        }
        if (*(int *)(**(int **)(_UNK_0216b5f0 + 0x216ad14) + 0x74) == 0) {
          func_0x01384ab4();
        }
        puVar7 = *(undefined4 **)(_UNK_0216b5f4 + 0x216ad30);
      }
      else {
        if (*(int *)(**(int **)(_UNK_0216b5d0 + 0x216acc8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        puVar7 = *(undefined4 **)(_UNK_0216b5d4 + 0x216ace4);
      }
      goto LAB_0216ad2c;
    }
    iVar1 = FUN_0210e250(param_1,0x11,0,0);
    if (iVar1 != 0) {
LAB_0216ad68:
      if (*(int *)(**(int **)(_UNK_0216b604 + 0x216ad74) + 0x74) == 0) {
        func_0x01384ab4();
      }
      puVar7 = *(undefined4 **)(_UNK_0216b608 + 0x216ad90);
      goto LAB_0216b14c;
    }
    iVar1 = FUN_0210e250(param_1,0x12,0,0);
    if (iVar1 != 0) {
LAB_0216adb0:
      if (*(int *)(**(int **)(_UNK_0216b5fc + 0x216adbc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      puVar7 = *(undefined4 **)(_UNK_0216b600 + 0x216add8);
      goto LAB_0216b14c;
    }
    iVar1 = FUN_0210e250(param_1,0x19,0,0);
    if (iVar1 != 0) {
LAB_0216adf8:
      if (*(int *)(**(int **)(_UNK_0216b60c + 0x216ae04) + 0x74) == 0) {
        func_0x01384ab4();
      }
      puVar7 = *(undefined4 **)(_UNK_0216b610 + 0x216ae20);
      goto LAB_0216b14c;
    }
    iVar1 = func_0x02feb690(param_1,&iStack_20,0,**(undefined4 **)(_UNK_0216b630 + 0x216ab1c));
    if (iVar1 != 0) {
LAB_0216ae48:
      iVar1 = iStack_20;
      if (iStack_20 == 0) {
        func_0x01384bf0();
      }
      iVar3 = FUN_0212f4e4(iVar1,0);
      iVar1 = iStack_20;
      if (iVar3 == 7) {
        if (*(int *)(**(int **)(_UNK_0216b618 + 0x216ae78) + 0x74) == 0) {
          func_0x01384ab4();
        }
        puVar7 = *(undefined4 **)(_UNK_0216b61c + 0x216ae94);
      }
      else {
        if (iStack_20 == 0) {
          func_0x01384bf0();
        }
        iVar3 = FUN_0212f4e4(iVar1,0);
        iVar1 = iStack_20;
        if (iVar3 == 3) {
          if (*(int *)(**(int **)(_UNK_0216b620 + 0x216aec4) + 0x74) == 0) {
            func_0x01384ab4();
          }
          puVar7 = *(undefined4 **)(_UNK_0216b624 + 0x216aee0);
        }
        else {
          if (iStack_20 == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_0212f4e4(iVar1,0);
          if (iVar1 != 9) {
            return uVar2;
          }
          if (*(int *)(**(int **)(_UNK_0216b628 + 0x216b134) + 0x74) == 0) {
            func_0x01384ab4();
          }
          puVar7 = *(undefined4 **)(_UNK_0216b62c + 0x216b150);
        }
      }
      goto LAB_0216b14c;
    }
    iVar1 = FUN_02116ae0(param_1,0);
    if (iVar1 != 0) {
LAB_0216aefc:
      iVar1 = func_0x02feb690(param_1,&iStack_24,0,**(undefined4 **)(_UNK_0216b634 + 0x216af10));
      if ((iStack_24 == 0 || iVar1 == 0) || (iVar1 = FUN_0211dc48(iStack_24,0), iVar1 == 0)) {
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02feb690(param_1,&iStack_28,0,**(undefined4 **)(_UNK_0216b658 + 0x216af4c));
        if (iVar1 != 0) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x4c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x01dbb000(iVar1,0);
          iVar1 = iStack_28;
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_0211fcd4(iVar1,0);
          if (iVar1 == 0) {
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar1 = FUN_02141acc(iVar3,0);
            if (iVar1 < 1) {
              piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216b65c + 0x216b340),1);
              iVar1 = iStack_28;
              if (iStack_28 == 0) {
                func_0x01384bf0();
              }
              iVar1 = FUN_0211fb6c(iVar1,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = *(int *)(iVar1 + 0x34);
              if (*(int *)(**(int **)(_UNK_0216b660 + 0x216b380) + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar1 = func_0x02084abc(iVar1,iVar1 >> 0x1f,1,0);
              if (piVar4 == (int *)0x0) {
                func_0x01384bf0();
              }
              if ((iVar1 != 0) &&
                 (iVar3 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
                uVar6 = func_0x01384c10();
                func_0x01384aa0(uVar6,0);
              }
              if (piVar4[3] == 0) {
                func_0x01384bf4();
              }
              piVar4[4] = iVar1;
              if (*(int *)(**(int **)(_UNK_0216b664 + 0x216b404) + 0x74) == 0) {
                func_0x01384ab4();
              }
              puVar7 = *(undefined4 **)(_UNK_0216b668 + 0x216b420);
            }
            else {
              if (param_1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = FUN_0210e5f4(param_1,0);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              iVar3 = FUN_02141acc(iVar3,0);
              if (iVar1 != iVar3) {
                if (*(int *)(**(int **)(_UNK_0216b66c + 0x216b43c) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                puVar7 = *(undefined4 **)(_UNK_0216b670 + 0x216b458);
                goto LAB_0216b454;
              }
              piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216b674 + 0x216b024),1);
              iVar1 = iStack_28;
              if (iStack_28 == 0) {
                func_0x01384bf0();
              }
              iVar1 = FUN_0211fa9c(iVar1,0);
              if (*(int *)(**(int **)(_UNK_0216b678 + 0x216b058) + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar1 = func_0x02084abc(iVar1 / 1000,iVar1 / 1000 >> 0x1f,0,0);
              if (piVar4 == (int *)0x0) {
                func_0x01384bf0();
              }
              if ((iVar1 != 0) &&
                 (iVar3 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
                uVar6 = func_0x01384c10();
                func_0x01384aa0(uVar6,0);
              }
              if (piVar4[3] == 0) {
                func_0x01384bf4();
              }
              piVar4[4] = iVar1;
              if (*(int *)(**(int **)(_UNK_0216b67c + 0x216b0e8) + 0x74) == 0) {
                func_0x01384ab4();
              }
              puVar7 = *(undefined4 **)(_UNK_0216b680 + 0x216b104);
            }
            goto LAB_0216b41c;
          }
        }
      }
      else {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = iStack_24;
        iVar1 = *(int *)(iVar1 + 0x44);
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        uVar6 = FUN_0211d680(iVar3,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x01c9e630(iVar1,uVar6,0);
        iVar1 = iStack_24;
        if (iVar3 == 0) {
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          uStack_2c = FUN_0211d6e4(iVar1,0);
          uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_0216b640 + 0x216b228),&uStack_2c);
          iVar1 = iStack_24;
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          uVar5 = FUN_0211d680(iVar1,0);
          if (*(int *)(**(int **)(_UNK_0216b644 + 0x216b268) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar5 = func_0x0206c2d8(uVar5,0);
          iVar1 = func_0x0244f690(**(undefined4 **)(_UNK_0216b648 + 0x216b29c),uVar6,uVar5,0);
          piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216b64c + 0x216b2b4),1);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar1 != 0) &&
             (iVar3 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
            uVar6 = func_0x01384c10();
            func_0x01384aa0(uVar6,0);
          }
          if (piVar4[3] == 0) {
            func_0x01384bf4();
          }
          piVar4[4] = iVar1;
          if (*(int *)(**(int **)(_UNK_0216b650 + 0x216b314) + 0x74) == 0) {
            func_0x01384ab4();
          }
          puVar7 = *(undefined4 **)(_UNK_0216b654 + 0x216b330);
LAB_0216b41c:
          uVar6 = func_0x028c1688(*puVar7,piVar4,0);
        }
        else {
          if (*(int *)(**(int **)(_UNK_0216b638 + 0x216b1e4) + 0x74) == 0) {
            func_0x01384ab4();
          }
          puVar7 = *(undefined4 **)(_UNK_0216b63c + 0x216b200);
LAB_0216b454:
          uVar6 = func_0x028c1350(*puVar7,0);
        }
        uVar2 = FUN_0216a1b4(uVar2,uVar6);
      }
      if (param_1 == 0) goto LAB_0216b498;
    }
    iVar1 = FUN_02116990(param_1,0);
    if (iVar1 == 0) {
      return uVar2;
    }
    if (param_1 == 0) goto LAB_0216b4b0;
  }
  iVar1 = FUN_02116990(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x58);
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  if (iVar1 < 1) {
    uVar6 = FUN_0210e2d4(param_1,0);
  }
  else {
    iVar1 = FUN_02116990();
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0x58);
  }
  iVar1 = FUN_021677e0(uVar6);
  if (*(int *)(**(int **)(_UNK_0216b684 + 0x216b524) + 0x74) == 0) {
    func_0x01384ab4();
  }
  if (iVar1 == 0) {
    puVar7 = *(undefined4 **)(&UNK_0216b554 + _UNK_0216b68c);
  }
  else {
    puVar7 = *(undefined4 **)(_UNK_0216b688 + 0x216b548);
  }
LAB_0216ad2c:
  uVar6 = func_0x028c1350(*puVar7,0);
  uVar2 = FUN_0216a1b4(uVar2,uVar6);
  return uVar2;
}



// ===== FAT.Merge.ItemUtility$$_TryAddToolCount RVA 0x215b690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0216b690(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0216b7f0 + 0x216b6b0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216b7f4 + 0x216b6c4));
    func_0x01384978(*(undefined4 *)(_UNK_0216b7f8 + 0x216b6d0));
    func_0x01384978(*(undefined4 *)(_UNK_0216b7fc + 0x216b6dc));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e16,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
      iVar1 = func_0x03d59fc8(0,param_2,**(undefined4 **)(_UNK_0216b800 + 0x216b790));
      if (iVar1 != 0) {
        func_0x01384bf0();
        iVar1 = func_0x03d59cc4(0,param_2,**(undefined4 **)(_UNK_0216b804 + 0x216b7b4));
        func_0x01384bf0();
        goto LAB_0216b7c4;
      }
    }
    else {
      iVar1 = func_0x03d59fc8(param_1,param_2,**(undefined4 **)(_UNK_0216b808 + 0x216b74c));
      if (iVar1 != 0) {
        iVar1 = func_0x03d59cc4(param_1,param_2,**(undefined4 **)(_UNK_0216b80c + 0x216b76c));
LAB_0216b7c4:
        func_0x03d5a8e0(param_1,param_2,iVar1 + param_3,1,
                        *(undefined4 *)
                         (*(int *)(*(int *)(**(int **)(_UNK_0216b810 + 0x216b7d8) + 0x10) + 0x60) +
                         0x88));
        return;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e16,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemUtility$$_SortCostInfo RVA 0x215b814 =====

int FUN_0216b814(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9e17,0);
  if (iVar1 == 0) {
    if (param_5 == param_2) {
      param_1 = param_1 - param_4;
    }
    else {
      param_1 = param_5 - param_2;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e17,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x02286910(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return param_1;
}



// ===== FAT.Merge.ItemUtility$$TrySpawnTool RVA 0x215b898 =====

/* WARNING: Removing unreachable block (ram,0x0216cad4) */
/* WARNING: Removing unreachable block (ram,0x0216cad0) */
/* WARNING: Removing unreachable block (ram,0x0216c55c) */
/* WARNING: Removing unreachable block (ram,0x0216c34c) */
/* WARNING: Removing unreachable block (ram,0x0216c340) */
/* WARNING: Removing unreachable block (ram,0x0216bdd0) */
/* WARNING: Removing unreachable block (ram,0x0216bdc4) */
/* WARNING: Removing unreachable block (ram,0x0216c04c) */
/* WARNING: Removing unreachable block (ram,0x0216c058) */
/* WARNING: Removing unreachable block (ram,0x0216c478) */
/* WARNING: Removing unreachable block (ram,0x0216c488) */
/* WARNING: Removing unreachable block (ram,0x0216cac4) */
/* WARNING: Removing unreachable block (ram,0x0216cc18) */
/* WARNING: Removing unreachable block (ram,0x0216c568) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216b898(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_r1;
  int extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 uVar14;
  int *piVar15;
  int iVar16;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  int aiStack_34 [4];
  
  pcVar12 = (char *)(_UNK_0216c868 + 0x216b8b8);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216c86c + 0x216b8cc));
    func_0x01384978(*(undefined4 *)(_UNK_0216c870 + 0x216b8d8));
    func_0x01384978(*(undefined4 *)(_UNK_0216c874 + 0x216b8e4));
    func_0x01384978(*(undefined4 *)(_UNK_0216c878 + 0x216b8f0));
    func_0x01384978(*(undefined4 *)(_UNK_0216c87c + 0x216b8fc));
    func_0x01384978(*(undefined4 *)(_UNK_0216c900 + 0x216b908));
    func_0x01384978(*(undefined4 *)(_UNK_0216c904 + 0x216b914));
    func_0x01384978(*(undefined4 *)(_UNK_0216c908 + 0x216b920));
    func_0x01384978(*(undefined4 *)(_UNK_0216c90c + 0x216b92c));
    func_0x01384978(*(undefined4 *)(_UNK_0216c910 + 0x216b938));
    func_0x01384978(*(undefined4 *)(_UNK_0216c914 + 0x216b944));
    func_0x01384978(*(undefined4 *)(_UNK_0216c918 + 0x216b950));
    func_0x01384978(*(undefined4 *)(_UNK_0216c91c + 0x216b95c));
    func_0x01384978(*(undefined4 *)(_UNK_0216c920 + 0x216b968));
    func_0x01384978(*(undefined4 *)(_UNK_0216c924 + 0x216b974));
    func_0x01384978(*(undefined4 *)(_UNK_0216c928 + 0x216b980));
    func_0x01384978(*(undefined4 *)(_UNK_0216c92c + 0x216b98c));
    func_0x01384978(*(undefined4 *)(_UNK_0216c930 + 0x216b998));
    func_0x01384978(*(undefined4 *)(_UNK_0216c934 + 0x216b9a4));
    func_0x01384978(*(undefined4 *)(_UNK_0216c938 + 0x216b9b0));
    func_0x01384978(*(undefined4 *)(_UNK_0216c93c + 0x216b9bc));
    func_0x01384978(*(undefined4 *)(_UNK_0216c940 + 0x216b9c8));
    func_0x01384978(*(undefined4 *)(_UNK_0216c944 + 0x216b9d4));
    func_0x01384978(*(undefined4 *)(_UNK_0216c948 + 0x216b9e0));
    func_0x01384978(*(undefined4 *)(_UNK_0216c9e4 + 0x216b9ec));
    func_0x01384978(*(undefined4 *)(_UNK_0216c9e8 + 0x216b9f8));
    func_0x01384978(*(undefined4 *)(_UNK_0216c9ec + 0x216ba04));
    func_0x01384978(*(undefined4 *)(_UNK_0216c9f0 + 0x216ba10));
    func_0x01384978(*(undefined4 *)(_UNK_0216ca10 + 0x216ba1c));
    func_0x01384978(*(undefined4 *)(_UNK_0216ca14 + 0x216ba28));
    func_0x01384978(*(undefined4 *)(_UNK_0216ca18 + 0x216ba34));
    func_0x01384978(*(undefined4 *)(_UNK_0216ca1c + 0x216ba40));
    func_0x01384978(*(undefined4 *)(_UNK_0216ca20 + 0x216ba4c));
    *pcVar12 = '\x01';
  }
  iStack_54 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  aiStack_34[3] = 0;
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  iStack_3c = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  iStack_5c = 0;
  uStack_60 = 0;
  iVar1 = func_0x0229f06c(0x9e15,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e15,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cc06c(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  piVar13 = *(int **)(_UNK_0216ca88 + 0x216baf0);
  iVar1 = *piVar13;
  *param_2 = 0;
  *param_3 = 0;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar13;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0359c380(aiStack_34 + 1,iVar1,aiStack_34 + 3,**(undefined4 **)(_UNK_0216ca8c + 0x216bb34));
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar13 = (int *)func_0x01dd1420(iVar1,0);
  if (piVar13 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar13;
  uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_0216ca90 + 0x216bb98)) {
        puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
        goto LAB_0216bbe0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(_UNK_0216ca90 + 0x216bb98),0);
LAB_0216bbe0:
  piVar9 = (int *)(*(code *)*puVar4)(piVar13,puVar4[1]);
  piVar15 = *(int **)(_UNK_0216ca94 + 0x216bc0c);
  puVar4 = *(undefined4 **)(_UNK_0216ca98 + 0x216bc14);
LAB_0216bc10:
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar9;
  uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar10[-1] == *piVar15) {
        puVar5 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
        goto LAB_0216bc6c;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar9,*piVar15,0);
LAB_0216bc6c:
  iVar3 = (*(code *)*puVar5)(piVar9,puVar5[1]);
  if (iVar3 != 0) {
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0216cc98 + 0x216bca0)) {
          puVar5 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
          goto LAB_0216bce8;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_0216cc98 + 0x216bca0),0);
LAB_0216bce8:
    (*(code *)*puVar5)(&uStack_78,piVar9,puVar5[1]);
    iVar3 = iStack_74;
    uVar2 = uStack_78;
    if (iStack_74 == 0) {
      func_0x01384bf0();
    }
    iVar6 = aiStack_34[3];
    if (*(char *)(iVar3 + 0x18) != '\0') {
      if (aiStack_34[3] == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar6,uVar2,0,*puVar4);
    }
    goto LAB_0216bc10;
  }
  if (piVar9 != (int *)0x0) {
    iVar3 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0216cd5c + 0x216bd64)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
          goto LAB_0216bdac;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_0216cd5c + 0x216bd64),0);
LAB_0216bdac:
    (*(code *)*puVar4)(piVar9,puVar4[1]);
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = FUN_02116f08(param_1,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x2c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  piVar9 = (int *)FUN_0214dafc(iVar3,0);
  if (piVar9 != (int *)0x0) {
    iVar3 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0216cde4 + 0x216be3c)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
          goto LAB_0216be84;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_0216cde4 + 0x216be3c),0);
LAB_0216be84:
    piVar9 = (int *)(*(code *)*puVar4)(piVar9,puVar4[1]);
    piVar10 = *(int **)(_UNK_0216ce98 + 0x216bea8);
LAB_0216bea4:
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar11[-1] == *piVar15) {
          puVar4 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xc0);
          goto LAB_0216bf00;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar9,*piVar15,0);
LAB_0216bf00:
    iVar3 = (*(code *)*puVar4)(piVar9,puVar4[1]);
    if (iVar3 != 0) {
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar9;
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar11[-1] == *piVar10) {
            puVar4 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xc0);
            goto LAB_0216bf74;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar9,*piVar10,0);
LAB_0216bf74:
      (*(code *)*puVar4)(&uStack_78,piVar9,puVar4[1]);
      iVar3 = iStack_74;
      uVar2 = uStack_78;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x01dd151c(iVar1,uVar2,0);
      if (iVar6 != 0) {
        FUN_0216b690(aiStack_34[3],*(undefined4 *)(iVar6 + 0x14),*(int *)(iVar6 + 0x18) * iVar3);
      }
      goto LAB_0216bea4;
    }
    if (piVar9 != (int *)0x0) {
      iVar1 = *piVar9;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_0216cf98 + 0x216bfec)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_0216c034;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_0216cf98 + 0x216bfec),0);
LAB_0216c034:
      (*(code *)*puVar4)(piVar9,puVar4[1]);
    }
  }
  if (piVar13 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar13;
  uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_0216d06c + 0x216c080)) {
        puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
        goto LAB_0216c0c8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(_UNK_0216d06c + 0x216c080),0);
LAB_0216c0c8:
  piVar9 = (int *)(*(code *)*puVar4)(piVar13,puVar4[1]);
  do {
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == *piVar15) {
          puVar4 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_0216c140;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar9,*piVar15,0);
LAB_0216c140:
    iVar1 = (*(code *)*puVar4)(piVar9,puVar4[1]);
    if (iVar1 == 0) break;
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0216d130 + 0x216c174)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_0216c1bc;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_0216d130 + 0x216c174),0);
LAB_0216c1bc:
    (*(code *)*puVar4)(&uStack_78,piVar9,puVar4[1]);
    iVar1 = iStack_74;
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01c9e4e4(iVar3,uVar2,0);
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x01c9d24c(&uStack_78,iVar3,uVar2,0);
    iVar3 = iStack_74;
    uVar2 = uStack_78;
    func_0x02555fe4(&uStack_78,extraout_r1,*(int *)(iVar1 + 0x20),*(int *)(iVar1 + 0x20) >> 0x1f,0);
    func_0x02555da4(&uStack_78,iStack_74,uVar2,iVar3,uStack_78,iStack_74,0);
    iVar3 = aiStack_34[3];
    uVar14 = *(undefined4 *)(iVar1 + 0xc);
    uVar2 = func_0x02556068(uStack_78,iStack_74,0);
    FUN_0216b690(iVar3,uVar14,uVar2);
  } while( true );
  if (piVar9 != (int *)0x0) {
    iVar1 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0216d23c + 0x216c2e0)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_0216c328;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_0216d23c + 0x216c2e0),0);
LAB_0216c328:
    (*(code *)*puVar4)(piVar9,puVar4[1]);
  }
  piVar9 = *(int **)(_UNK_0216d240 + 0x216c360);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    puVar4 = *(undefined4 **)(_UNK_0216d248 + 0x216c388);
    iVar1 = *piVar9;
  }
  else {
    puVar4 = *(undefined4 **)(_UNK_0216d244 + 0x216c378);
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0359c380(&uStack_78,iVar1,aiStack_34,*puVar4);
  iVar1 = aiStack_34[3];
  iStack_3c = iStack_74;
  uStack_40 = uStack_78;
  if (aiStack_34[3] == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a200(&uStack_78,iVar1,**(undefined4 **)(_UNK_0216d24c + 0x216c3dc));
  uStack_58 = uStack_78;
  iStack_54 = iStack_74;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  uStack_48 = uStack_68;
  puVar4 = *(undefined4 **)(_UNK_0216d250 + 0x216c410);
  puVar5 = *(undefined4 **)(_UNK_0216d254 + 0x216c418);
  while (iVar3 = func_0x03f9975c(&uStack_58,*puVar4), iVar1 = aiStack_34[0], uVar2 = uStack_4c,
        iVar3 != 0) {
    uVar14 = (undefined4)uStack_48;
    if (aiStack_34[0] == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d7c(iVar1,uVar2,uVar14,*puVar5);
  }
  func_0x03f9989c(&uStack_58,**(undefined4 **)(_UNK_0216d25c + 0x216c468));
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = aiStack_34[0];
  iVar1 = *(int *)(iVar1 + 0xe4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01d799c0(iVar1,iVar3,1,0);
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0216d260 + 0x216c4f4));
  func_0x03c732cc(uVar2,0,**(undefined4 **)(_UNK_0216d264 + 0x216c50c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245492c(iVar1,uVar2,**(undefined4 **)(_UNK_0216d268 + 0x216c534));
  func_0x028c98a0(&uStack_40,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0xc);
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x314);
  if (iVar6 < iVar3) {
    iVar3 = iVar6;
  }
  if (iVar3 < 1) {
    piVar9 = *(int **)(_UNK_0216d270 + 0x216c6bc);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar9;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_78,iVar1,&iStack_5c,**(undefined4 **)(_UNK_0216d274 + 0x216c6f0));
    iStack_3c = iStack_74;
    uStack_40 = uStack_78;
    if (piVar13 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar13;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0216d278 + 0x216c734)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_0216c7fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(_UNK_0216d278 + 0x216c734),0);
LAB_0216c7fc:
    piVar13 = (int *)(*(code *)*puVar4)(piVar13,puVar4[1]);
LAB_0216c814:
    if (piVar13 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar13;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar15) {
          puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_0216c890;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar13,*piVar15,0);
LAB_0216c890:
    iVar1 = (*(code *)*puVar4)(piVar13,puVar4[1]);
    if (iVar1 != 0) {
      if (piVar13 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar13;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_0216d27c + 0x216c8c4)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_0216c958;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(_UNK_0216d27c + 0x216c8c4),0);
LAB_0216c958:
      (*(code *)*puVar4)(&uStack_78,piVar13,puVar4[1]);
      iVar1 = iStack_74;
      if (iStack_74 == 0) {
        func_0x01384bf0();
      }
      iVar3 = iStack_5c;
      if (*(char *)(iVar1 + 0x18) != '\0') {
        if (iStack_5c == 0) {
          func_0x01384bf0();
        }
        iVar16 = *(int *)(iVar3 + 8);
        uVar8 = *(uint *)(iVar3 + 0xc);
        piVar9 = *(int **)(_UNK_0216d280 + 0x216c9b8);
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        iVar6 = *piVar9;
        if (iVar16 == 0) {
          func_0x01384bf0();
        }
        if (uVar8 < *(uint *)(iVar16 + 0xc)) {
          *(uint *)(iVar3 + 0xc) = uVar8 + 1;
          *(int *)(iVar16 + uVar8 * 4 + 0x10) = iVar1;
        }
        else {
          func_0x0328f170(iVar3,iVar1,
                          *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
        }
      }
      goto LAB_0216c814;
    }
    if (piVar13 != (int *)0x0) {
      iVar1 = *piVar13;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_0216d284 + 0x216ca48)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_0216caac;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(_UNK_0216d284 + 0x216ca48),0);
LAB_0216caac:
      (*(code *)*puVar4)(piVar13,puVar4[1]);
    }
    iVar1 = iStack_5c;
    if (iStack_5c == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02450284(0,*(undefined4 *)(iVar1 + 0xc),0);
    iVar1 = iStack_5c;
    if (iStack_5c == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0328eea8(iVar1,uVar2,**(undefined4 **)(_UNK_0216d288 + 0x216cb1c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = iStack_5c;
    *param_2 = *(undefined4 *)(iVar1 + 0xc);
    *param_3 = 0;
    if (iStack_5c == 0) {
      func_0x01384bf0();
    }
    uStack_78 = *(undefined4 *)(iVar3 + 0xc);
    puVar4 = *(undefined4 **)(_UNK_0216d28c + 0x216cb6c);
    uVar14 = func_0x01384abc(*puVar4,&uStack_78);
    uStack_7c = uVar2;
    uVar2 = func_0x01384abc(*puVar4,&uStack_7c);
    uStack_80 = *param_2;
    uVar7 = func_0x01384abc(*puVar4,&uStack_80);
    uVar2 = func_0x02450228(**(undefined4 **)(_UNK_0216d290 + 0x216cbb8),uVar14,uVar2,uVar7,0);
    if (*(int *)(**(int **)(_UNK_0216d294 + 0x216cbe0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar2,0);
    func_0x028c98a0(&uStack_40,0);
  }
  else {
    uVar2 = func_0x02450284(0,iVar3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar4 = *(undefined4 **)(_UNK_0216d29c + 0x216c600);
    func_0x0245493c(&uStack_78,iVar1,uVar2,*puVar4);
    iVar3 = aiStack_34[3];
    uVar14 = uStack_78;
    *param_2 = uStack_78;
    if (aiStack_34[3] == 0) {
      func_0x01384bf0();
    }
    func_0x03d5bb20(iVar3,uVar14,&uStack_60,**(undefined4 **)(_UNK_0216d2a0 + 0x216c63c));
    uVar14 = *param_2;
    if (piVar13 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar13;
    uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0216d2a4 + 0x216c674)) {
          puVar5 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
          goto LAB_0216c77c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(_UNK_0216d2a4 + 0x216c674),0);
LAB_0216c77c:
    iVar3 = (*(code *)*puVar5)(piVar13,uVar14,puVar5[1]);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245493c(&uStack_78,iVar1,uVar2,*puVar4);
    func_0x01458344(uStack_60,iVar3);
    func_0x01458344(iStack_74 * iVar3 - extraout_r1_00,iVar3);
    *param_3 = extraout_r1_01;
  }
  func_0x028c98a0(aiStack_34 + 1,0);
  return 1;
}



// ===== FAT.Merge.ItemUtility$$ProcessItemUseState RVA 0x215d2a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0216d2a8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_0216d7a4 + 0x216d2c4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216d7a8 + 0x216d2d8));
    func_0x01384978(*(undefined4 *)(_UNK_0216d7ac + 0x216d2e4));
    func_0x01384978(*(undefined4 *)(_UNK_0216d7b0 + 0x216d2f0));
    func_0x01384978(*(undefined4 *)(_UNK_0216d7b4 + 0x216d2fc));
    func_0x01384978(*(undefined4 *)(_UNK_0216d7b8 + 0x216d308));
    func_0x01384978(*(undefined4 *)(_UNK_0216d7bc + 0x216d314));
    func_0x01384978(*(undefined4 *)(_UNK_0216d7c0 + 0x216d320));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e49,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e49,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  switch(param_2) {
  case 2:
    if (*(int *)(**(int **)(&UNK_0216d4f0 + _UNK_0216d7c4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(&UNK_0216d50c + _UNK_0216d7c8));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349eb38(iVar1,param_1,**(undefined4 **)(&UNK_0216d530 + _UNK_0216d7cc));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_24,param_1,0);
    uVar3 = uStack_20;
    uVar6 = uStack_24;
    if (*(int *)(**(int **)(&UNK_0216d57c + _UNK_0216d7d0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dd876c(&uStack_24,uVar6,uVar3,0);
    iVar7 = **(int **)(&UNK_0216d5b4 + _UNK_0216d7d4);
    iVar4 = *(int *)(iVar7 + 0x1c);
    if (iVar4 == 0) {
      func_0x0140024c(iVar7);
      iVar4 = *(int *)(iVar7 + 0x1c);
    }
    iVar4 = *(int *)(iVar4 + 8);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x014001f0();
    }
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x014001f0();
    }
    uVar6 = **(undefined4 **)(iVar4 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    uStack_30 = uStack_1c;
    uStack_2c = uVar6;
    func_0x01ca1770(iVar1,0x1d,uStack_24,uStack_20);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(&UNK_0216d67c + _UNK_0216d7d8);
    break;
  case 3:
  case 4:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_24,param_1,0);
    uVar3 = uStack_20;
    uVar6 = uStack_24;
    if (*(int *)(**(int **)(&UNK_0216d3e4 + _UNK_0216d7e4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dd876c(&uStack_24,uVar6,uVar3,0);
    iVar7 = **(int **)(&UNK_0216d41c + _UNK_0216d7e8);
    iVar4 = *(int *)(iVar7 + 0x1c);
    if (iVar4 == 0) {
      func_0x0140024c(iVar7);
      iVar4 = *(int *)(iVar7 + 0x1c);
    }
    iVar4 = *(int *)(iVar4 + 8);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x014001f0();
    }
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x014001f0();
    }
    uVar6 = **(undefined4 **)(iVar4 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    uStack_30 = uStack_1c;
    uStack_2c = uVar6;
    func_0x01ca1770(iVar1,1,uStack_24,uStack_20);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(&UNK_0216d4e4 + _UNK_0216d7ec);
    break;
  default:
    goto LAB_0216d79c;
  case 6:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_24,param_1,0);
    uVar3 = uStack_20;
    uVar6 = uStack_24;
    if (*(int *)(**(int **)(&UNK_0216d6d0 + _UNK_0216d7dc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dd876c(&uStack_24,uVar6,uVar3,0);
    iVar7 = **(int **)(&UNK_0216d708 + _UNK_0216d7e0);
    iVar4 = *(int *)(iVar7 + 0x1c);
    if (iVar4 == 0) {
      func_0x0140024c(iVar7);
      iVar4 = *(int *)(iVar7 + 0x1c);
    }
    iVar4 = *(int *)(iVar4 + 8);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x014001f0();
    }
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x014001f0();
    }
    uVar6 = **(undefined4 **)(iVar4 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    uStack_30 = uStack_1c;
    uStack_2c = uVar6;
    func_0x01ca1770(iVar1,0x22,uStack_24,uStack_20);
    goto LAB_0216d79c;
  }
  func_0x01bf3284(iVar1,*puVar2,0);
LAB_0216d79c:
  return;
}



// ===== FAT.Merge.ItemUtility$$get_lastUserItemOper RVA 0x215d7f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216d7f0(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_0216d874 + 0x216d800);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216d878 + 0x216d814));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb52a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb52a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar3,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  return **(undefined4 **)(**(int **)(_UNK_0216d87c + 0x216d868) + 0x5c);
}



// ===== FAT.Merge.ItemUtility$$UseItem RVA 0x215d880 =====

undefined4 FUN_0216d880(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x9dda,0);
  if (iVar1 == 0) {
    uStack_14 = 1;
    iVar1 = func_0x0216d908(param_1,param_2,&uStack_14);
    if (iVar1 != 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9dda,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02287658(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.Merge.ItemUtility$$_UseItemImp RVA 0x215d908 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0216d908(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  int iStack_20;
  int iStack_1c;
  
  pcVar8 = (char *)(_UNK_0216e8b8 + 0x216d928);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216e8bc + 0x216d93c));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8c0 + 0x216d948));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8c4 + 0x216d954));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8c8 + 0x216d960));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8cc + 0x216d96c));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8d0 + 0x216d978));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8d4 + 0x216d984));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8d8 + 0x216d990));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8dc + 0x216d99c));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8e0 + 0x216d9a8));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8e4 + 0x216d9b4));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8e8 + 0x216d9c0));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8ec + 0x216d9cc));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8f0 + 0x216d9d8));
    func_0x01384978(*(undefined4 *)(_UNK_0216e8f4 + 0x216d9e4));
    *pcVar8 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iStack_34 = 0;
  iVar2 = func_0x0229f06c(0x9ddb,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9ddb,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0228753c(iVar2,param_1,param_2,param_3,0);
    return uVar3;
  }
  **(undefined4 **)(**(int **)(_UNK_0216ea24 + 0x216da6c) + 0x5c) = param_2;
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar2 = FUN_0210cd28(0,0);
    if (iVar2 != 0) {
      func_0x01384bf0();
      iVar2 = FUN_02116a8c(0,0);
      if (iVar2 != 0) {
        piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216ea40 + 0x216dafc),2);
        func_0x01384bf0();
        goto LAB_0216db08;
      }
      func_0x01384bf0();
      iVar2 = FUN_02116ae0(0,0);
      if (iVar2 == 0) {
        piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216ea50 + 0x216df64),2);
        func_0x01384bf0();
        goto LAB_0216df70;
      }
      func_0x01384bf0();
      goto LAB_0216ddac;
    }
    piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216ea28 + 0x216dc74),2);
    func_0x01384bf0();
  }
  else {
    iVar2 = FUN_0210cd28(param_1,0);
    if (iVar2 != 0) {
      iVar2 = FUN_02116a8c(param_1,0);
      if (iVar2 != 0) {
        piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216ea3c + 0x216dab0),2);
LAB_0216db08:
        uVar5 = FUN_0210e5f4(param_1,0);
        puVar9 = *(undefined4 **)(_UNK_0216ea44 + 0x216db24);
        uStack_48 = CONCAT44(uStack_48._4_4_,uVar5);
        iVar2 = func_0x01384abc(*puVar9,&uStack_48);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar2 != 0) &&
           (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if (piVar4[3] == 0) {
          func_0x01384bf4();
        }
        piVar4[4] = iVar2;
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = FUN_0210e2d4(param_1,0);
        iVar2 = func_0x01384abc(*puVar9,&uStack_38);
        if ((iVar2 != 0) &&
           (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if ((uint)piVar4[3] < 2) {
          func_0x01384bf4();
        }
        piVar4[5] = iVar2;
        if (*(int *)(**(int **)(_UNK_0216ea48 + 0x216dbfc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        puVar9 = *(undefined4 **)(_UNK_0216ea4c + 0x216dc18);
        goto LAB_0216e07c;
      }
      iVar2 = FUN_02116ae0(param_1,0);
      if (iVar2 == 0) {
        piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216ea54 + 0x216dc58),2);
LAB_0216df70:
        uVar5 = FUN_0210e5f4(param_1,0);
        puVar9 = *(undefined4 **)(_UNK_0216ea58 + 0x216df8c);
        uStack_48 = CONCAT44(uStack_48._4_4_,uVar5);
        iVar2 = func_0x01384abc(*puVar9,&uStack_48);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar2 != 0) &&
           (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if (piVar4[3] == 0) {
          func_0x01384bf4();
        }
        piVar4[4] = iVar2;
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = FUN_0210e2d4(param_1,0);
        iVar2 = func_0x01384abc(*puVar9,&uStack_38);
        if ((iVar2 != 0) &&
           (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if ((uint)piVar4[3] < 2) {
          func_0x01384bf4();
        }
        piVar4[5] = iVar2;
        if (*(int *)(**(int **)(_UNK_0216ea5c + 0x216e064) + 0x74) == 0) {
          func_0x01384ab4();
        }
        puVar9 = *(undefined4 **)(_UNK_0216ea60 + 0x216e080);
        goto LAB_0216e07c;
      }
LAB_0216ddac:
      iVar2 = func_0x02feb690(param_1,&iStack_1c,0,**(undefined4 **)(_UNK_0216ea64 + 0x216ddc0));
      if ((iStack_1c != 0 && iVar2 != 0) && (iVar2 = FUN_0211dc48(iStack_1c,0), iVar2 != 0)) {
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_0210cd28(param_1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar3 = FUN_020e6d84(iVar2,param_1,0);
        return uVar3;
      }
      if (param_1 == 0) {
        func_0x01384bf0();
        iVar2 = FUN_0210e250(0,5,0,0);
        func_0x01384bf0();
        if (iVar2 != 0) goto LAB_0216e110;
        iVar2 = func_0x02feb690(0,&iStack_20,0,**(undefined4 **)(_UNK_0216ea6c + 0x216e154));
        if (iVar2 != 0) goto LAB_0216e164;
        func_0x01384bf0();
        iVar2 = FUN_0210e250(0,2,0,0);
        func_0x01384bf0();
        if (iVar2 != 0) goto LAB_0216e24c;
        iVar2 = FUN_0210e250(0,0x15,0,0);
        func_0x01384bf0();
        if (iVar2 != 0) goto LAB_0216e2d4;
        iVar2 = FUN_0210e250(0,1,0,0);
        func_0x01384bf0();
        if (iVar2 != 0) goto LAB_0216e4cc;
        iVar2 = FUN_0210e250(0,0x10,0,0);
        if (iVar2 != 0) goto LAB_0216e524;
        func_0x01384bf0();
        iVar2 = FUN_0210e250(0,0x13,0,0);
        func_0x01384bf0();
        if (iVar2 != 0) goto LAB_0216e5ec;
        iVar2 = FUN_0210e250(0,0x14,0,0);
        func_0x01384bf0();
        if (iVar2 != 0) goto LAB_0216e644;
        iVar2 = FUN_0210e250(0,9,0,0);
        func_0x01384bf0();
        if (iVar2 != 0) goto LAB_0216e69c;
        iVar2 = FUN_0210e250(0,0xc,0,0);
        func_0x01384bf0();
        if (iVar2 != 0) goto LAB_0216e6f0;
        iVar2 = FUN_0210e250(0,0xd,0,0);
        func_0x01384bf0();
      }
      else {
        iVar2 = FUN_0210e250(param_1,5,0,0);
        if (iVar2 != 0) {
LAB_0216e110:
          iVar2 = FUN_0210cd28(param_1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = FUN_020e7034(iVar2,param_1,0);
          return uVar3;
        }
        iVar2 = func_0x02feb690(param_1,&iStack_20,0,**(undefined4 **)(_UNK_0216ea68 + 0x216de14));
        if (iVar2 != 0) {
LAB_0216e164:
          iVar2 = iStack_20;
          if (iStack_20 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_0211fcd4(iVar2,0);
          if (iVar2 == 0) {
            iVar2 = func_0x01c24918(0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x4c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x01dbb000(iVar2,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar6 = FUN_02141acc(iVar2,0);
            iVar2 = iStack_20;
            if (iVar6 < 1) {
              *param_3 = 0;
              if (iStack_20 == 0) {
                func_0x01384bf0();
              }
              uVar3 = FUN_02121168(iVar2,0);
              return uVar3;
            }
          }
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_0210cd28(param_1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_020e6034(iVar2,param_1,param_3,0);
          goto LAB_0216e27c;
        }
        iVar2 = FUN_0210e250(param_1,2,0,0);
        if (iVar2 != 0) {
LAB_0216e24c:
          iVar2 = FUN_0210cd28(param_1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_020e38a4(iVar2,param_1,param_3,0);
          goto LAB_0216e27c;
        }
        iVar2 = FUN_0210e250(param_1,0x15,0,0);
        if (iVar2 != 0) {
LAB_0216e2d4:
          FUN_0210cd7c(&uStack_48,param_1,0);
          uVar5 = (undefined4)uStack_48;
          uVar1 = uStack_48._4_4_;
          if (*(int *)(**(int **)(_UNK_0216ea70 + 0x216e2f0) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dd876c(&uStack_48,uVar5,uVar1,0);
          piVar4 = *(int **)(_UNK_0216ea74 + 0x216e330);
          uStack_28 = uStack_40;
          uStack_30 = uStack_48;
          iVar2 = *piVar4;
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar4;
          }
          iVar6 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x210);
          piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216ea78 + 0x216e35c),3);
          uStack_40 = uStack_28;
          uStack_48 = uStack_30;
          iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_0216ea7c + 0x216e37c),&uStack_48);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar2 != 0) &&
             (iVar7 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar7 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if (piVar4[3] == 0) {
            func_0x01384bf4();
          }
          piVar4[4] = iVar2;
          uStack_38 = 0x42900000;
          iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_0216ea80 + 0x216e3f4),&uStack_38);
          if ((iVar2 != 0) &&
             (iVar7 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar7 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar4[3] < 2) {
            func_0x01384bf4();
          }
          piVar4[5] = iVar2;
          if ((param_1 != 0) &&
             (iVar2 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar4 + 0x20)), iVar2 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar4[3] < 3) {
            func_0x01384bf4();
          }
          piVar4[6] = param_1;
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x01ef58d8(iVar6,piVar4,0);
          return 1;
        }
        iVar2 = FUN_0210e250(param_1,1,0,0);
        if (iVar2 != 0) {
LAB_0216e4cc:
          iVar2 = FUN_0210cd28(param_1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_020e5a54(iVar2,param_1,param_3,0xffffffff,0);
          goto LAB_0216e27c;
        }
        iVar2 = FUN_0210e250(param_1,0x10,0,0);
        if (iVar2 != 0) {
LAB_0216e524:
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x60);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01cc0100(iVar2,0x98,0);
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          iVar6 = FUN_0210cd28(param_1,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          if (iVar2 != 0) {
            FUN_020e0d8c(iVar6,param_1,param_3,0);
            return (uint)(*param_3 == 0);
          }
          iVar2 = FUN_020e0804(iVar6,param_1,param_3,0);
          goto LAB_0216e27c;
        }
        iVar2 = FUN_0210e250(param_1,0x13,0,0);
        if (iVar2 != 0) {
LAB_0216e5ec:
          iVar2 = FUN_0210cd28(param_1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_020e31d8(iVar2,param_1,param_3,0);
          goto LAB_0216e27c;
        }
        iVar2 = FUN_0210e250(param_1,0x14,0,0);
        if (iVar2 != 0) {
LAB_0216e644:
          iVar2 = FUN_0210cd28(param_1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = FUN_020e3630(iVar2,param_1,param_3,0);
          return uVar3;
        }
        iVar2 = FUN_0210e250(param_1,9,0,0);
        if (iVar2 != 0) {
LAB_0216e69c:
          iVar2 = FUN_0210cd28(param_1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_020e6718(iVar2,param_1,0);
          goto LAB_0216e27c;
        }
        iVar2 = FUN_0210e250(param_1,0xc,0,0);
        if (iVar2 != 0) {
LAB_0216e6f0:
          iVar2 = FUN_0210cd28(param_1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          FUN_020e65c0(iVar2,param_1,0);
          return 1;
        }
        iVar2 = FUN_0210e250(param_1,0xd,0,0);
      }
      if (iVar2 != 0) {
        iVar2 = FUN_0210cd28(param_1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_020e0224(iVar2,param_1,param_3,0);
LAB_0216e27c:
        return (uint)(iVar2 != 0);
      }
      iVar6 = func_0x02feb690(param_1,&iStack_34,0,**(undefined4 **)(_UNK_0216ea84 + 0x216e758));
      iVar2 = iStack_34;
      if (iVar6 != 0) {
        if (iStack_34 == 0) {
          func_0x01384bf0();
        }
        iVar6 = FUN_021331a0(iVar2,0);
        iVar2 = iStack_34;
        if (iVar6 == 0) {
          if (iStack_34 == 0) {
            func_0x01384bf0();
          }
          uVar3 = FUN_021340ac(iVar2,0);
          return uVar3;
        }
      }
      if (param_1 == 0) {
        func_0x01384bf0();
        iVar2 = FUN_0210e250(0,0x16,0,0);
        func_0x01384bf0();
        if (iVar2 != 0) goto LAB_0216e810;
        iVar2 = FUN_0210e250(0,0x17,0,0);
        if (iVar2 != 0) {
          func_0x01384bf0();
          goto LAB_0216e884;
        }
        piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216ea8c + 0x216e908),2);
        func_0x01384bf0();
      }
      else {
        iVar2 = FUN_0210e250(param_1,0x16,0,0);
        if (iVar2 != 0) {
LAB_0216e810:
          iVar2 = FUN_0210cd28(param_1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = FUN_020e1380(iVar2,param_1,param_3,0);
          return uVar3;
        }
        iVar2 = FUN_0210e250(param_1,0x17,0,0);
        if (iVar2 != 0) {
LAB_0216e884:
          iVar2 = FUN_0210cd28(param_1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = FUN_020e29b0(iVar2,param_1,param_3,0);
          return uVar3;
        }
        piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216ea88 + 0x216e7dc),2);
      }
      uVar5 = FUN_0210e5f4(param_1,0);
      puVar9 = *(undefined4 **)(_UNK_0216ea90 + 0x216e930);
      uStack_48 = CONCAT44(uStack_48._4_4_,uVar5);
      iVar2 = func_0x01384abc(*puVar9,&uStack_48);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar2 != 0) &&
         (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0)) {
        uVar5 = func_0x01384c10();
        func_0x01384aa0(uVar5,0);
      }
      if (piVar4[3] == 0) {
        func_0x01384bf4();
      }
      piVar4[4] = iVar2;
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = FUN_0210e2d4(param_1,0);
      iVar2 = func_0x01384abc(*puVar9,&uStack_38);
      if ((iVar2 != 0) &&
         (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0)) {
        uVar5 = func_0x01384c10();
        func_0x01384aa0(uVar5,0);
      }
      if ((uint)piVar4[3] < 2) {
        func_0x01384bf4();
      }
      piVar4[5] = iVar2;
      if (*(int *)(**(int **)(_UNK_0216ea94 + 0x216ea08) + 0x74) == 0) {
        func_0x01384ab4();
      }
      puVar9 = *(undefined4 **)(&UNK_0216ea24 + _UNK_0216ea98);
      goto LAB_0216e07c;
    }
    piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0216ea2c + 0x216dc28),2);
  }
  uVar5 = FUN_0210e5f4(param_1,0);
  puVar9 = *(undefined4 **)(_UNK_0216ea30 + 0x216dc9c);
  uStack_48 = CONCAT44(uStack_48._4_4_,uVar5);
  iVar2 = func_0x01384abc(*puVar9,&uStack_48);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar2 != 0) && (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0))
  {
    uVar5 = func_0x01384c10();
    func_0x01384aa0(uVar5,0);
  }
  if (piVar4[3] == 0) {
    func_0x01384bf4();
  }
  piVar4[4] = iVar2;
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  uStack_38 = FUN_0210e2d4(param_1,0);
  iVar2 = func_0x01384abc(*puVar9,&uStack_38);
  if ((iVar2 != 0) && (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0))
  {
    uVar5 = func_0x01384c10();
    func_0x01384aa0(uVar5,0);
  }
  if ((uint)piVar4[3] < 2) {
    func_0x01384bf4();
  }
  piVar4[5] = iVar2;
  if (*(int *)(**(int **)(_UNK_0216ea34 + 0x216dd74) + 0x74) == 0) {
    func_0x01384ab4();
  }
  puVar9 = *(undefined4 **)(_UNK_0216ea38 + 0x216dd90);
LAB_0216e07c:
  func_0x028c23bc(*puVar9,piVar4,0);
  return 0;
}



// ===== FAT.Merge.ItemUtility$$IsUseChestDetailView RVA 0x215ea9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0216ea9c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_0216ebc4 + 0x216eab0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216ebc8 + 0x216eac4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb52b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb52b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0216ebcc + 0x216eb34)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_0216eb7c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0216ebcc + 0x216eb34),10);
LAB_0216eb7c:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x14) != 0) {
    return 1;
  }
  return (uint)(*(int *)(iVar1 + 0x1c) != 0);
}



// ===== FAT.Merge.ItemUtility$$IsFromAuto RVA 0x215ebd0 =====

undefined4 FUN_0216ebd0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb41e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb41e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  return 0;
}



// ===== FAT.Merge.ItemUtility$$GetItemEnergyPerUse RVA 0x215ec24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216ec24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_0216ef18 + 0x216ec3c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216ef1c + 0x216ec50));
    func_0x01384978(*(undefined4 *)(_UNK_0216ef20 + 0x216ec5c));
    func_0x01384978(*(undefined4 *)(_UNK_0216ef24 + 0x216ec68));
    func_0x01384978(*(undefined4 *)(_UNK_0216ef28 + 0x216ec74));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iStack_18 = 0;
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x1629,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1629,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217493c(iVar1,param_1,0);
    return uVar2;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_0210cd28(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02116a8c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02116ae0(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = func_0x02feb690(0,&iStack_14,0,**(undefined4 **)(_UNK_0216ef2c + 0x216ee0c));
    if (iVar1 != 0) goto LAB_0216ee1c;
    func_0x01384bf0();
    iVar1 = func_0x02feb690(0,&iStack_18,0,**(undefined4 **)(_UNK_0216ef30 + 0x216ee54));
    if (iVar1 != 0) goto LAB_0216ee64;
    func_0x01384bf0();
    iVar1 = func_0x02feb690(0,&iStack_1c,0,**(undefined4 **)(_UNK_0216ef40 + 0x216ee9c));
    if (iVar1 == 0) {
      func_0x01384bf0();
      goto LAB_0216eed0;
    }
  }
  else {
    iVar1 = FUN_0210cd28(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_02116a8c(param_1,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_02116ae0(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x02feb690(param_1,&iStack_14,0,**(undefined4 **)(_UNK_0216ef34 + 0x216ed44));
    if (iVar1 != 0) {
LAB_0216ee1c:
      iVar1 = iStack_14;
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_0211fa38(iVar1,0);
      return uVar2;
    }
    iVar1 = func_0x02feb690(param_1,&iStack_18,0,**(undefined4 **)(_UNK_0216ef38 + 0x216ed68));
    if (iVar1 != 0) {
LAB_0216ee64:
      iVar1 = iStack_18;
      if (iStack_18 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_02122ab0(iVar1,0);
      return uVar2;
    }
    iVar1 = func_0x02feb690(param_1,&iStack_1c,0,**(undefined4 **)(_UNK_0216ef3c + 0x216ed8c));
    if (iVar1 == 0) {
LAB_0216eed0:
      iVar3 = func_0x02feb690(param_1,&iStack_20,0,**(undefined4 **)(_UNK_0216ef44 + 0x216eee8));
      iVar1 = iStack_20;
      if (iVar3 == 0) {
        return 0;
      }
      if (iStack_20 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_0211df88(iVar1,0);
      return uVar2;
    }
  }
  iVar1 = iStack_1c;
  if (iStack_1c == 0) {
    func_0x01384bf0();
  }
  uVar2 = FUN_0212be98(iVar1,0);
  return uVar2;
}



// ===== FAT.Merge.ItemUtility$$IsItemReadyToUse RVA 0x215ef48 =====

undefined4 FUN_0216ef48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x5e74,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e74,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_0210cd28(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02116a8c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = FUN_0210cd28(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_02116a8c(param_1,0);
    if (iVar1 != 0) {
      return 0;
    }
  }
  uVar4 = 0;
  iVar1 = FUN_02116ae0(param_1,0);
  if (iVar1 != 0) {
    uVar5 = func_0x0216f044(param_1);
    uVar4 = 0;
    if ((int)((ulonglong)uVar5 >> 0x20) < (int)(uint)((int)uVar5 == 0)) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.Merge.ItemUtility$$GetItemEmptyWaitMilli RVA 0x215f044 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0216f044(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_0216f460 + 0x216f05c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216f464 + 0x216f070));
    func_0x01384978(*(undefined4 *)(_UNK_0216f468 + 0x216f07c));
    func_0x01384978(*(undefined4 *)(_UNK_0216f46c + 0x216f088));
    func_0x01384978(*(undefined4 *)(_UNK_0216f470 + 0x216f094));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iStack_18 = 0;
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x5e75,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e75,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02179e54(iVar1,param_1,0);
    return iVar1;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_0210cd28(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02116a8c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0(0,0);
    iVar1 = FUN_02116ae0(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0(iVar1,0);
  }
  else {
    iVar1 = FUN_0210cd28(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_02116a8c(param_1,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_02116ae0(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar2 = func_0x02feb690(param_1,&iStack_14,0,**(undefined4 **)(_UNK_0216f474 + 0x216f1c8));
  iVar1 = iStack_14;
  if (iVar2 != 0) {
    if (iStack_14 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_0211f8ec(iVar1,0);
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_0211fa9c(iVar1,0);
      return iVar1;
    }
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02feb690(param_1,&iStack_18,0,**(undefined4 **)(_UNK_0216f478 + 0x216f24c));
  iVar1 = iStack_18;
  if (iVar2 != 0) {
    if (iStack_18 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_0212bdd0(iVar1,0);
    iVar1 = iStack_18;
    if (iVar2 == 1) {
      if (iStack_18 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_0212bfc0(iVar1,0);
      return iVar1;
    }
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02feb690(param_1,&iStack_1c,0,**(undefined4 **)(_UNK_0216f47c + 0x216f2c8));
  iVar1 = iStack_1c;
  if (iVar2 != 0) {
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_02122ee0(iVar1,0);
    iVar1 = iStack_1c;
    if (iVar2 < 1) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_02122da4(iVar1,0);
      iVar1 = iStack_1c;
      if (iVar2 != 0) {
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_02123058(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = iStack_1c;
        iVar1 = *(int *)(iVar1 + 0x58);
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_02123004(iVar2,0);
        return iVar1 * 1000 - iVar2;
      }
      return 0;
    }
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = 0;
  iVar2 = func_0x02feb690(param_1,&iStack_20,0,**(undefined4 **)(_UNK_0216f480 + 0x216f320));
  iVar1 = iStack_20;
  if (iVar2 != 0) {
    if (iStack_20 == 0) {
      func_0x01384bf0(iVar2,0);
    }
    iVar4 = 0;
    iVar2 = FUN_0211bf04(iVar1,0);
    iVar1 = iStack_20;
    if (iVar2 < 1) {
      if (iStack_20 == 0) {
        func_0x01384bf0(iVar2,0);
      }
      iVar4 = 0;
      iVar2 = FUN_0211bf58(iVar1,0);
      iVar1 = iStack_20;
      if (iVar2 != 0) {
        if (iStack_20 == 0) {
          func_0x01384bf0(iVar2,0);
        }
        iVar4 = FUN_0211bfcc(iVar1,0);
        iVar1 = iStack_20;
        if (iStack_20 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_0211be60(iVar1,0);
        iVar4 = iVar4 - iVar1;
      }
    }
  }
  return iVar4;
}



// ===== FAT.Merge.ItemUtility$$IsSupportSpeedup RVA 0x215f484 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0216f484(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_0216f5a8 + 0x216f498);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216f5ac + 0x216f4ac));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa4e7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa4e7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0216f5b0 + 0x216f51c)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_0216f564;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0216f5b0 + 0x216f51c),10);
LAB_0216f564:
  iVar8 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  iVar1 = 0;
  if (iVar8 != 0) {
    iVar1 = *(int *)(iVar8 + 0x14);
  }
  if (iVar8 != 0 && iVar1 != 0) {
    return (uint)(0 < *(int *)(iVar1 + 0x34));
  }
  return 0;
}



// ===== FAT.Merge.ItemUtility$$CanUseGlobalFreeSpeedup RVA 0x215f5b4 =====

undefined4 FUN_0216f5b4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa4e6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa4e6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  return 1;
}



// ===== FAT.Merge.ItemUtility$$CanUseGlobalFreeRecharge RVA 0x215f608 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0216f608(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_0216f718 + 0x216f61c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216f71c + 0x216f630));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa58d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa58d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0216f720 + 0x216f6a0)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x118);
        goto LAB_0216f6e8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0216f720 + 0x216f6a0),0xb);
LAB_0216f6e8:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)(*(int *)(iVar1 + 0x10) == 1);
  }
  return uVar4;
}



// ===== FAT.Merge.ItemUtility$$CalcCostBySeconds RVA 0x215f724 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0216f724(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_0216faa8 + 0x216f73c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216faac + 0x216f750));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa58c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa58c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar1 + 0x454);
  iVar1 = *(int *)(iVar1 + 0x458);
  if (iVar9 == 0) {
    func_0x01384bf0();
    puVar8 = *(undefined4 **)(_UNK_0216fab0 + 0x216f86c);
    iVar2 = func_0x0364c9b8(0,0,*puVar8);
    if (param_1 < iVar2) {
      return 0;
    }
    func_0x01384bf0();
    iVar2 = func_0x0364c9b8(0,1,*puVar8);
    func_0x01384bf0();
    uVar10 = *puVar8;
    if (iVar2 <= param_1) {
      iVar2 = func_0x0364c9b8(0,2,uVar10);
      func_0x01384bf0();
      iVar3 = func_0x0364c9b8(0,1,*puVar8);
      func_0x01384bf0();
      goto LAB_0216f910;
    }
  }
  else {
    puVar8 = *(undefined4 **)(_UNK_0216fab4 + 0x216f800);
    iVar2 = func_0x0364c9b8(iVar9,0,*puVar8);
    if (param_1 < iVar2) {
      return 0;
    }
    iVar2 = func_0x0364c9b8(iVar9,1,*puVar8);
    uVar10 = *puVar8;
    if (iVar2 <= param_1) {
      iVar2 = func_0x0364c9b8(iVar9,2,uVar10);
      iVar3 = func_0x0364c9b8(iVar9,1,*puVar8);
LAB_0216f910:
      puVar8 = *(undefined4 **)(_UNK_0216fabc + 0x216f924);
      iVar4 = func_0x0364c9b8(iVar9,0,*puVar8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = func_0x0364c9b8(iVar1,0,*puVar8);
      if (iVar9 == 0) {
        func_0x01384bf0();
        uVar6 = *puVar8;
        if (iVar2 <= param_1) {
          iStack_2c = func_0x0364c9b8(0,2,uVar6);
          func_0x01384bf0();
          goto LAB_0216f9e4;
        }
LAB_0216f984:
        iVar9 = func_0x0364c9b8(iVar9,1,uVar6);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar6 = func_0x0364c9b8(iVar1,1,*puVar8);
        iVar1 = func_0x01457ae8(param_1 - iVar9,uVar6);
        iVar3 = func_0x01457ae8(iVar3 - iVar4,uVar10);
      }
      else {
        uVar6 = *puVar8;
        if (param_1 < iVar2) goto LAB_0216f984;
        iStack_2c = func_0x0364c9b8(iVar9,2,uVar6);
LAB_0216f9e4:
        iStack_28 = iVar4;
        iVar2 = func_0x0364c9b8(iVar9,1,*puVar8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar6 = func_0x0364c9b8(iVar1,1,*puVar8);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar9 = func_0x0364c9b8(iVar9,2,*puVar8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x0364c9b8(iVar1,2,*puVar8);
        iVar1 = func_0x01457ae8(param_1 - iVar9,uVar5);
        iVar3 = func_0x01457ae8(iVar3 - iStack_28,uVar10);
        iVar9 = func_0x01457ae8(iStack_2c - iVar2,uVar6);
        iVar3 = iVar3 + iVar9;
      }
      iVar3 = iVar3 + iVar1;
      goto LAB_0216fa98;
    }
  }
  iVar9 = func_0x0364c9b8(iVar9,0,uVar10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar10 = func_0x0364c9b8(iVar1,0,**(undefined4 **)(_UNK_0216fab8 + 0x216f8cc));
  iVar3 = func_0x01457ae8(param_1 - iVar9,uVar10);
LAB_0216fa98:
  return iVar3 + 1;
}



// ===== FAT.Merge.ItemUtility$$CalcSpeedUpCost RVA 0x215fac0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0216fac0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar12 = (char *)(_UNK_0216fe1c + 0x216fad4);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216fe20 + 0x216fae8));
    func_0x01384978(*(undefined4 *)(_UNK_0216fe24 + 0x216faf4));
    func_0x01384978(*(undefined4 *)(_UNK_0216fe28 + 0x216fb00));
    func_0x01384978(*(undefined4 *)(_UNK_0216fe2c + 0x216fb0c));
    func_0x01384978(*(undefined4 *)(_UNK_0216fe30 + 0x216fb18));
    *pcVar12 = '\x01';
  }
  iVar13 = 0;
  iVar6 = func_0x0229f06c(0xa58a,0);
  if (iVar6 != 0) {
    iVar13 = func_0x0229f13c(0xa58a,0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
SUB_0217493c:
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar13 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar13 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar13 + 8);
    uVar15 = *(undefined4 *)(iVar13 + 0xc);
    iVar13 = *(int *)(iVar13 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar10 = 2;
    if (iVar13 == 0) {
      uVar10 = 1;
    }
    func_0x0245495c(iVar6,uVar15,&uStack_30,uVar10,0,0);
    iVar13 = func_0x0245498c(&uStack_30,0,0);
    return iVar13;
  }
  if (param_1 != (int *)0x0) {
    iVar6 = *param_1;
    uVar9 = (uint)*(byte *)(**(int **)(_UNK_0216fe34 + 0x216fb7c) + 0xb8);
    uVar7 = (uint)*(byte *)(iVar6 + 0xb8);
    if ((uVar9 <= uVar7) &&
       (*(int *)(*(int *)(iVar6 + 100) + uVar9 * 4 + -4) == **(int **)(_UNK_0216fe34 + 0x216fb7c)))
    {
      pcVar12 = (char *)(_UNK_0211e5e4 + 0x211e4f0);
      if (*pcVar12 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0211e5e8 + 0x211e504),0);
        *pcVar12 = '\x01';
      }
      iVar13 = func_0x0229f06c(0xa58b,0);
      if (iVar13 == 0) {
        piVar1 = (int *)FUN_021566f4(0);
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar13 = *piVar1;
        uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar13 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_0211e5ec + 0x211e578)) {
              puVar11 = (undefined4 *)(iVar13 + *piVar8 * 8 + 0x1c0);
              goto LAB_0211e5c0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_0211e5ec + 0x211e578),0x20);
LAB_0211e5c0:
        iVar13 = (*(code *)*puVar11)(piVar1,puVar11[1]);
        iVar6 = 0;
        if (iVar13 != 0) {
          iVar6 = param_1[0xd];
        }
        return iVar6;
      }
      iVar13 = func_0x0229f13c(0xa58b,0);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      goto SUB_0217493c;
    }
    uVar9 = (uint)*(byte *)(**(int **)(_UNK_0216fe38 + 0x216fbb0) + 0xb8);
    if ((uVar7 < uVar9) ||
       (*(int *)(*(int *)(iVar6 + 100) + uVar9 * 4 + -4) != **(int **)(_UNK_0216fe38 + 0x216fbb0)))
    {
      uVar9 = (uint)*(byte *)(**(int **)(_UNK_0216fe3c + 0x216fbdc) + 0xb8);
      if ((uVar7 < uVar9) ||
         (*(int *)(*(int *)(iVar6 + 100) + uVar9 * 4 + -4) != **(int **)(_UNK_0216fe3c + 0x216fbdc))
         ) {
        uVar9 = (uint)*(byte *)(**(int **)(_UNK_0216fe40 + 0x216fc08) + 0xb8);
        if ((uVar7 < uVar9) ||
           (*(int *)(*(int *)(iVar6 + 100) + uVar9 * 4 + -4) !=
            **(int **)(_UNK_0216fe40 + 0x216fc08))) {
          uVar9 = (uint)*(byte *)(**(int **)(_UNK_0216fe44 + 0x216fc34) + 0xb8);
          if ((uVar9 <= uVar7) &&
             (*(int *)(*(int *)(iVar6 + 100) + uVar9 * 4 + -4) ==
              **(int **)(_UNK_0216fe44 + 0x216fc34))) {
            iVar13 = 0;
            iVar6 = FUN_0211f8ec(param_1,0);
            if (iVar6 != 0) {
              iVar13 = FUN_0211fb6c(param_1,0);
              if (iVar13 == 0) {
                func_0x01384bf0();
              }
              iVar13 = *(int *)(iVar13 + 0x34);
              iVar6 = FUN_0211fbc0(param_1,0);
              goto LAB_0216fd38;
            }
          }
        }
        else {
          uVar16 = FUN_0211bfcc(param_1,0);
          uVar7 = FUN_0211be60(param_1,0);
          iVar13 = func_0x01458584((uint)uVar16 - uVar7,
                                   (int)((ulonglong)uVar16 >> 0x20) -
                                   (((int)uVar7 >> 0x1f) + (uint)((uint)uVar16 < uVar7)),1000,0);
        }
      }
      else {
        iVar13 = 0;
        iVar6 = FUN_0212f734(param_1,0);
        if (iVar6 != 0) {
          iVar13 = FUN_0212fb30(param_1,0);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          iVar13 = *(int *)(iVar13 + 0x30);
          iVar6 = FUN_0212f6e0(param_1,0);
          goto LAB_0216fd38;
        }
        iVar6 = FUN_0212f798(param_1,0);
        if (iVar6 != 0) {
          iVar13 = FUN_0212f82c(param_1,0);
          iVar6 = FUN_0212f9e4(param_1,0);
          goto LAB_0216fdf8;
        }
      }
    }
    else {
      iVar13 = 0;
      iVar6 = FUN_02122cc0(param_1,0);
      if (iVar6 == 0) {
        iVar6 = FUN_02122da4(param_1,0);
        if (iVar6 != 0) {
          iVar13 = FUN_02122e38(param_1,0);
          iVar6 = FUN_02123004(param_1,0);
LAB_0216fdf8:
          iVar13 = (iVar13 - iVar6) / 1000;
        }
      }
      else {
        iVar13 = FUN_02123058(param_1,0);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(iVar13 + 0x44);
        iVar6 = FUN_02122c6c(param_1,0);
LAB_0216fd38:
        iVar6 = (int)((ulonglong)((longlong)iVar6 * -0x10624dd3) >> 0x20);
        iVar13 = ((iVar6 >> 6) - (iVar6 >> 0x1f)) + iVar13;
      }
    }
  }
  pcVar12 = (char *)(_UNK_0216faa8 + 0x216f73c);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216faac + 0x216f750));
    *pcVar12 = '\x01';
  }
  iVar6 = func_0x0229f06c(0xa58c,0);
  if (iVar6 != 0) {
    iVar6 = func_0x0229f13c(0xa58c,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar6 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
    }
    func_0x01485238(&uStack_30,iVar13,0);
    iVar14 = *(int *)(iVar6 + 8);
    uVar15 = *(undefined4 *)(iVar6 + 0xc);
    iVar13 = *(int *)(iVar6 + 0x10);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar10 = 2;
    if (iVar13 == 0) {
      uVar10 = 1;
    }
    func_0x0245495c(iVar14,uVar15,&uStack_30,uVar10,0,0);
    iVar13 = func_0x0245498c(&uStack_30,0,0);
    return iVar13;
  }
  iVar6 = func_0x01c24918(0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar6 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar14 = *(int *)(iVar6 + 0x454);
  iVar6 = *(int *)(iVar6 + 0x458);
  if (iVar14 == 0) {
    func_0x01384bf0();
    puVar11 = *(undefined4 **)(_UNK_0216fab0 + 0x216f86c);
    iVar2 = func_0x0364c9b8(0,0,*puVar11);
    if (iVar13 < iVar2) {
      return 0;
    }
    func_0x01384bf0();
    iVar2 = func_0x0364c9b8(0,1,*puVar11);
    func_0x01384bf0();
    uVar15 = *puVar11;
    if (iVar13 < iVar2) goto LAB_0216f8a0;
    iVar2 = func_0x0364c9b8(0,2,uVar15);
    func_0x01384bf0();
    iVar3 = func_0x0364c9b8(0,1,*puVar11);
    func_0x01384bf0();
  }
  else {
    puVar11 = *(undefined4 **)(_UNK_0216fab4 + 0x216f800);
    iVar2 = func_0x0364c9b8(iVar14,0,*puVar11);
    if (iVar13 < iVar2) {
      return 0;
    }
    iVar2 = func_0x0364c9b8(iVar14,1,*puVar11);
    uVar15 = *puVar11;
    if (iVar13 < iVar2) {
LAB_0216f8a0:
      iVar14 = func_0x0364c9b8(iVar14,0,uVar15);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar15 = func_0x0364c9b8(iVar6,0,**(undefined4 **)(_UNK_0216fab8 + 0x216f8cc));
      iVar13 = func_0x01457ae8(iVar13 - iVar14,uVar15);
      goto LAB_0216fa98;
    }
    iVar2 = func_0x0364c9b8(iVar14,2,uVar15);
    iVar3 = func_0x0364c9b8(iVar14,1,*puVar11);
  }
  puVar11 = *(undefined4 **)(_UNK_0216fabc + 0x216f924);
  iVar4 = func_0x0364c9b8(iVar14,0,*puVar11);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar15 = func_0x0364c9b8(iVar6,0,*puVar11);
  if (iVar14 == 0) {
    func_0x01384bf0();
    uVar10 = *puVar11;
    if (iVar13 < iVar2) goto LAB_0216f984;
    iStack_2c = func_0x0364c9b8(0,2,uVar10);
    func_0x01384bf0();
LAB_0216f9e4:
    iStack_28 = iVar4;
    iVar2 = func_0x0364c9b8(iVar14,1,*puVar11);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar10 = func_0x0364c9b8(iVar6,1,*puVar11);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x0364c9b8(iVar14,2,*puVar11);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0364c9b8(iVar6,2,*puVar11);
    iVar6 = func_0x01457ae8(iVar13 - iVar14,uVar5);
    iVar13 = func_0x01457ae8(iVar3 - iStack_28,uVar15);
    iVar14 = func_0x01457ae8(iStack_2c - iVar2,uVar10);
    iVar13 = iVar13 + iVar14;
  }
  else {
    uVar10 = *puVar11;
    if (iVar2 <= iVar13) {
      iStack_2c = func_0x0364c9b8(iVar14,2,uVar10);
      goto LAB_0216f9e4;
    }
LAB_0216f984:
    iVar14 = func_0x0364c9b8(iVar14,1,uVar10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar10 = func_0x0364c9b8(iVar6,1,*puVar11);
    iVar6 = func_0x01457ae8(iVar13 - iVar14,uVar10);
    iVar13 = func_0x01457ae8(iVar3 - iVar4,uVar15);
  }
  iVar13 = iVar13 + iVar6;
LAB_0216fa98:
  return iVar13 + 1;
}



// ===== FAT.Merge.ItemUtility$$TryGetItemSpeedUpInfo RVA 0x215fe48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216fe48(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_02170738 + 0x216fe68);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0217073c + 0x216fe80));
    func_0x01384978(*(undefined4 *)(_UNK_02170740 + 0x216fe8c));
    func_0x01384978(*(undefined4 *)(_UNK_02170744 + 0x216fe98));
    func_0x01384978(*(undefined4 *)(_UNK_02170748 + 0x216fea4));
    func_0x01384978(*(undefined4 *)(_UNK_0217074c + 0x216feb0));
    func_0x01384978(*(undefined4 *)(_UNK_02170750 + 0x216febc));
    func_0x01384978(*(undefined4 *)(_UNK_02170754 + 0x216fec8));
    func_0x01384978(*(undefined4 *)(_UNK_02170758 + 0x216fed4));
    func_0x01384978(*(undefined4 *)(_UNK_0217075c + 0x216fee0));
    func_0x01384978(*(undefined4 *)(_UNK_02170760 + 0x216feec));
    *pcVar10 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  iStack_38 = 0;
  iStack_3c = 0;
  iStack_40 = 0;
  iVar1 = func_0x0229f06c(0xa589,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa589,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x022928bc(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = 0;
  piVar3 = (int *)FUN_021566f4();
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar3;
  piVar11 = *(int **)(_UNK_02170764 + 0x216ff9c);
  uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar6 = *piVar11;
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar6) {
        puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0x208);
        goto LAB_0216ffe4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar6,0x29);
LAB_0216ffe4:
  iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  piVar3 = (int *)FUN_021566f4();
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar6 = *piVar3;
  iVar7 = *piVar11;
  uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(int *)(iVar6 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar7) {
        puVar4 = (undefined4 *)(iVar6 + *piVar11 * 8 + 0xf8);
        goto LAB_0217005c;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar7,7);
LAB_0217005c:
  iVar6 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02feb690(param_1,&iStack_28,0,**(undefined4 **)(_UNK_02170768 + 0x2170094));
  iVar7 = iStack_28;
  if (iVar5 != 0) {
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    iVar7 = FUN_0211e720(iVar7,0);
    if (iVar7 != 0) {
      iVar7 = func_0x01c24918(0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar7 + 0x4c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x01dbb000(iVar7,0);
      uVar2 = 0;
      if (iVar7 != 0) {
        iVar7 = FUN_02139cf4(iVar7,0);
        uVar2 = 0;
        if (iVar7 != 0) {
          uStack_44 = 0;
          uStack_48 = 0;
          func_0x03507d38(&uStack_48,*(undefined4 *)(iVar7 + 8),
                          **(undefined4 **)(_UNK_0217076c + 0x2170128));
          uVar2 = uStack_44;
        }
      }
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0x230);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x0345efbc(iVar6,uVar2,&iStack_40,**(undefined4 **)(_UNK_02170770 + 0x2170174));
      if (iVar6 != 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0x28) < iStack_40) {
          *param_3 = 3;
          iStack_2c = iStack_28;
          goto LAB_021701f0;
        }
      }
      uVar2 = FUN_0216fac0(iStack_28);
      *param_4 = uVar2;
      iStack_2c = iStack_28;
      goto LAB_021701f0;
    }
  }
  iVar7 = FUN_0216545c(param_1);
  if (iVar7 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar7 = FUN_0210cd28(0,0);
    if (iVar7 == 0) {
      return 0;
    }
    func_0x01384bf0();
  }
  else {
    iVar7 = FUN_0210cd28(param_1,0);
    if (iVar7 == 0) {
      return 0;
    }
  }
  iVar5 = func_0x02feb690(param_1,&iStack_2c,0,**(undefined4 **)(_UNK_02170774 + 0x2170238));
  iVar7 = iStack_2c;
  if (iVar5 != 0) {
    if (iStack_2c == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_02126964(iVar7,0);
    iVar7 = iStack_2c;
    if (iVar5 == 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      iVar5 = FUN_02122f9c(iVar7,0);
      iVar7 = iStack_2c;
      if (iVar5 < 1) {
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        iVar5 = FUN_02122cc0(iVar7,0);
        iVar7 = iStack_2c;
        if (iVar5 == 0) {
          if (iStack_2c == 0) {
            func_0x01384bf0();
          }
          iVar7 = FUN_02122da4(iVar7,0);
          if (iVar7 == 0) goto LAB_02170290;
        }
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (iVar1 < *(int *)(iVar6 + 0x244)) {
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          FUN_0210e2d4(param_1,0);
          iVar1 = FUN_0216f608();
          if (iVar1 != 0) {
            *param_3 = 2;
            goto LAB_021701f0;
          }
        }
        uVar2 = FUN_0216fac0(iStack_2c);
        *param_4 = uVar2;
        goto LAB_021701f0;
      }
    }
  }
LAB_02170290:
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02feb690(param_1,&iStack_30,0,**(undefined4 **)(_UNK_02170778 + 0x21702b0));
  iVar7 = iStack_30;
  if (iVar5 != 0) {
    if (iStack_30 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_02126964(iVar7,0);
    iVar7 = iStack_30;
    if (iVar5 == 0) {
      if (iStack_30 == 0) {
        func_0x01384bf0();
      }
      iVar5 = FUN_0212f990(iVar7,0);
      iVar7 = iStack_30;
      if (iVar5 < 1) {
        if (iStack_30 == 0) {
          func_0x01384bf0();
        }
        iVar5 = FUN_0212f734(iVar7,0);
        iVar7 = iStack_30;
        if (iVar5 == 0) {
          if (iStack_30 == 0) {
            func_0x01384bf0();
          }
          iVar7 = FUN_0212f798(iVar7,0);
          if (iVar7 == 0) goto LAB_02170308;
        }
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (iVar1 < *(int *)(iVar6 + 0x244)) {
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          FUN_0210e2d4(param_1,0);
          iVar1 = FUN_0216f608();
          if (iVar1 != 0) {
            *param_3 = 2;
            iStack_2c = iStack_30;
            goto LAB_021701f0;
          }
        }
        uVar2 = FUN_0216fac0(iStack_30);
        *param_4 = uVar2;
        iStack_2c = iStack_30;
        goto LAB_021701f0;
      }
    }
  }
LAB_02170308:
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02feb690(param_1,&iStack_34,0,**(undefined4 **)(_UNK_0217077c + 0x2170328));
  iVar7 = iStack_34;
  if (iVar5 != 0) {
    if (iStack_34 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_02126964(iVar7,0);
    iVar7 = iStack_34;
    if (iVar5 == 0) {
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      iVar5 = FUN_0211bf58(iVar7,0);
      iVar7 = iStack_34;
      if (iVar5 != 0) {
        if (iStack_34 == 0) {
          func_0x01384bf0();
        }
        iVar7 = FUN_0211bf04(iVar7,0);
        if (iVar7 < 1) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          if (iVar1 < *(int *)(iVar6 + 0x244)) {
            if (param_1 == 0) {
              func_0x01384bf0();
            }
            FUN_0210e2d4(param_1,0);
            iVar1 = FUN_0216f608();
            if (iVar1 != 0) {
              *param_3 = 2;
              iStack_2c = iStack_34;
              goto LAB_021701f0;
            }
          }
          uVar2 = FUN_0216fac0(iStack_34);
          *param_4 = uVar2;
          iStack_2c = iStack_34;
          goto LAB_021701f0;
        }
      }
    }
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02feb690(param_1,&iStack_38,0,**(undefined4 **)(_UNK_02170780 + 0x21703c4));
  iVar7 = iStack_38;
  if (iVar5 != 0) {
    if (iStack_38 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_02126964(iVar7,0);
    iVar7 = iStack_38;
    if (iVar5 == 0) {
      if (iStack_38 == 0) {
        func_0x01384bf0();
      }
      iVar7 = FUN_0212bdd0(iVar7,0);
      if (iVar7 == 1) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (iVar1 < *(int *)(iVar6 + 0x244)) {
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          FUN_0210e2d4(param_1,0);
          iVar1 = FUN_0216f608();
          if (iVar1 != 0) {
            *param_3 = 2;
            iStack_2c = iStack_38;
            goto LAB_021701f0;
          }
        }
        iVar1 = iStack_38;
        if (iStack_38 == 0) {
          func_0x01384bf0();
        }
        uVar2 = FUN_0212dd24(iVar1,0);
        *param_4 = uVar2;
        iStack_2c = iStack_38;
        goto LAB_021701f0;
      }
    }
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02feb690(param_1,&iStack_3c,0,**(undefined4 **)(_UNK_02170784 + 0x2170498));
  iVar7 = iStack_3c;
  if (iVar5 == 0) {
    return 0;
  }
  if (iStack_3c == 0) {
    func_0x01384bf0();
  }
  iVar7 = FUN_0211f8ec(iVar7,0);
  if (iVar7 == 0) {
    return 0;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (iVar1 < *(int *)(iVar6 + 0x24c)) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    FUN_0210e2d4(param_1,0);
    iVar1 = FUN_0216f5b4();
    if (iVar1 != 0) {
      *param_3 = 1;
      iStack_2c = iStack_3c;
      goto LAB_021701f0;
    }
  }
  uVar2 = FUN_0216fac0(iStack_3c);
  *param_4 = uVar2;
  iStack_2c = iStack_3c;
LAB_021701f0:
  *param_2 = iStack_2c;
  return 1;
}



// ===== FAT.Merge.ItemUtility$$GetGeneratorCooldownRemainSeconds RVA 0x2160788 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_02170788(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int aiStack_18 [2];
  
  pcVar4 = (char *)(_UNK_02170ee8 + 0x21707a0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02170eec + 0x21707b4));
    func_0x01384978(*(undefined4 *)(_UNK_02170ef0 + 0x21707c0));
    func_0x01384978(*(undefined4 *)(_UNK_02170ef4 + 0x21707cc));
    func_0x01384978(*(undefined4 *)(_UNK_02170ef8 + 0x21707d8));
    func_0x01384978(*(undefined4 *)(_UNK_02170efc + 0x21707e4));
    func_0x01384978(*(undefined4 *)(_UNK_02170f00 + 0x21707f0));
    func_0x01384978(*(undefined4 *)(_UNK_02170f04 + 0x21707fc));
    *pcVar4 = '\x01';
  }
  aiStack_18[1] = 0;
  aiStack_18[0] = 0;
  iStack_1c = 0;
  iStack_20 = 0;
  iStack_24 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  iVar1 = func_0x0229f06c(0x5ecc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ecc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x02179e54(iVar1,param_1,0);
    return uVar5;
  }
  if ((param_1 == 0) || (iVar1 = FUN_0210cd28(param_1,0), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_0216545c(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = func_0x02feb690(param_1,aiStack_18 + 1,0,**(undefined4 **)(_UNK_02170f08 + 0x21708c0));
  if (iVar1 != 0) {
    return 0;
  }
  iVar2 = func_0x02feb690(param_1,aiStack_18,0,**(undefined4 **)(_UNK_02170f0c + 0x21708e8));
  iVar1 = aiStack_18[0];
  if (iVar2 == 0) {
LAB_02170940:
    iVar2 = func_0x02feb690(param_1,&iStack_1c,0,**(undefined4 **)(_UNK_02170f10 + 0x2170954));
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_02126964(iVar1,0);
      iVar1 = iStack_1c;
      if (iVar2 == 0) {
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_0212f990(iVar1,0);
        iVar1 = iStack_1c;
        if (iVar2 < 1) {
          if (iStack_1c == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_0212f734(iVar1,0);
          iVar1 = iStack_1c;
          if (iVar2 == 0) {
            if (iStack_1c == 0) {
              func_0x01384bf0();
            }
            iVar1 = FUN_0212f798(iVar1,0);
            if (iVar1 == 0) goto LAB_021709ac;
          }
          iVar1 = iStack_1c;
          if (iStack_1c == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_0212f734(iVar1,0);
          iVar1 = iStack_1c;
          if (iStack_1c == 0) {
            func_0x01384bf0();
          }
          if (iVar2 != 0) {
            iVar1 = FUN_0212fb30();
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar2 = iStack_1c;
            iVar1 = *(int *)(iVar1 + 0x30);
            if (iStack_1c == 0) {
              func_0x01384bf0();
            }
            iVar2 = FUN_0212f6e0(iVar2,0);
            goto LAB_02170de0;
          }
          iVar2 = FUN_0212f798(iVar1,0);
          iVar1 = iStack_1c;
          if (iVar2 != 0) {
            if (iStack_1c == 0) {
              func_0x01384bf0();
            }
            iVar2 = FUN_0212f82c(iVar1,0);
            iVar1 = iStack_1c;
            if (iStack_1c == 0) {
              func_0x01384bf0();
            }
            iVar1 = FUN_0212f9e4(iVar1,0);
            goto LAB_02170ebc;
          }
        }
      }
    }
LAB_021709ac:
    iVar2 = func_0x02feb690(param_1,&iStack_20,0,**(undefined4 **)(_UNK_02170f14 + 0x21709c0));
    iVar1 = iStack_20;
    if (iVar2 != 0) {
      if (iStack_20 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_02126964(iVar1,0);
      iVar1 = iStack_20;
      if (iVar2 == 0) {
        if (iStack_20 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_0211bf58(iVar1,0);
        iVar1 = iStack_20;
        if (iVar2 != 0) {
          if (iStack_20 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_0211bf04(iVar1,0);
          iVar1 = iStack_20;
          if (iVar2 < 1) {
            if (iStack_20 == 0) {
              func_0x01384bf0();
            }
            iVar2 = FUN_0211bfcc(iVar1,0);
            iVar1 = iStack_20;
            if (iStack_20 == 0) {
              func_0x01384bf0();
            }
            iVar1 = FUN_0211be60(iVar1,0);
            goto LAB_02170ebc;
          }
        }
      }
    }
    iVar2 = func_0x02feb690(param_1,&iStack_24,0,**(undefined4 **)(_UNK_02170f18 + 0x2170a50));
    iVar1 = iStack_24;
    if (iVar2 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_0212eec0(iVar1,0);
      iVar1 = iStack_24;
      if (iVar2 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_0212efa0(iVar1,0);
        iVar1 = iStack_24;
        if (0 < iVar2) {
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_0212efa0(iVar1,0);
          return (longlong)iVar1;
        }
      }
    }
    iVar2 = func_0x02feb690(param_1,&iStack_28,0,**(undefined4 **)(_UNK_02170f1c + 0x2170afc));
    iVar1 = iStack_28;
    if (iVar2 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_0211f8ec(iVar1,0);
      iVar1 = iStack_28;
      if (iVar2 != 0) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_0211fb6c(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = iStack_28;
        iVar1 = *(int *)(iVar1 + 0x34);
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_0211fbc0(iVar2,0);
        iVar2 = (int)((ulonglong)((longlong)iVar2 * -0x10624dd3) >> 0x20);
        uVar3 = ((iVar2 >> 6) - (iVar2 >> 0x1f)) + iVar1;
        return (ulonglong)(uVar3 & ~((int)uVar3 >> 0x1f));
      }
    }
    iVar2 = func_0x02feb690(param_1,&iStack_2c,0,**(undefined4 **)(_UNK_02170f20 + 0x2170bb4));
    iVar1 = iStack_2c;
    if (iVar2 == 0) {
      return 0;
    }
    if (iStack_2c == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_02126964(iVar1,0);
    iVar1 = iStack_2c;
    if (iVar2 != 0) {
      return 0;
    }
    if (iStack_2c == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_0212bdd0(iVar1,0);
    iVar1 = iStack_2c;
    if (iVar2 != 1) {
      return 0;
    }
    if (iStack_2c == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_0212bfc0(iVar1,0);
    iVar1 = (int)((ulonglong)((longlong)(iVar1 + 999) * 0x10624dd3) >> 0x20);
  }
  else {
    if (aiStack_18[0] == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_02126964(iVar1,0);
    iVar1 = aiStack_18[0];
    if (iVar2 != 0) goto LAB_02170940;
    if (aiStack_18[0] == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_02122f9c(iVar1,0);
    iVar1 = aiStack_18[0];
    if (0 < iVar2) goto LAB_02170940;
    if (aiStack_18[0] == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_02122cc0(iVar1,0);
    iVar1 = aiStack_18[0];
    if (iVar2 == 0) {
      if (aiStack_18[0] == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02122da4(iVar1,0);
      if (iVar1 == 0) goto LAB_02170940;
    }
    iVar1 = aiStack_18[0];
    if (aiStack_18[0] == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_02122cc0(iVar1,0);
    iVar1 = aiStack_18[0];
    if (aiStack_18[0] == 0) {
      func_0x01384bf0();
    }
    if (iVar2 == 0) {
      iVar2 = FUN_02122da4(iVar1,0);
      iVar1 = aiStack_18[0];
      if (iVar2 == 0) goto LAB_02170940;
      if (aiStack_18[0] == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_02122e38(iVar1,0);
      iVar1 = aiStack_18[0];
      if (aiStack_18[0] == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02123004(iVar1,0);
LAB_02170ebc:
      iVar2 = iVar2 - iVar1;
    }
    else {
      iVar1 = FUN_02123058();
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = aiStack_18[0];
      iVar1 = *(int *)(iVar1 + 0x44);
      if (aiStack_18[0] == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_02122c6c(iVar2,0);
LAB_02170de0:
      iVar2 = iVar1 * 1000 - iVar2;
    }
    iVar1 = 999;
    if (0 < iVar2) {
      iVar1 = iVar2 + 999;
    }
    iVar1 = (int)((ulonglong)((longlong)iVar1 * 0x10624dd3) >> 0x20);
  }
  return (longlong)((iVar1 >> 6) - (iVar1 >> 0x1f));
}



// ===== FAT.Merge.ItemUtility$$TrySpeedUpEmptyItem RVA 0x2160f24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02170f24(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar12 = (char *)(_UNK_021715d8 + 0x2170f40);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021715dc + 0x2170f54));
    func_0x01384978(*(undefined4 *)(_UNK_021715e0 + 0x2170f60));
    func_0x01384978(*(undefined4 *)(_UNK_021715e4 + 0x2170f6c));
    func_0x01384978(*(undefined4 *)(_UNK_021715e8 + 0x2170f78));
    func_0x01384978(*(undefined4 *)(_UNK_021715ec + 0x2170f84));
    func_0x01384978(*(undefined4 *)(_UNK_021715f0 + 0x2170f90));
    func_0x01384978(*(undefined4 *)(_UNK_021715f4 + 0x2170f9c));
    func_0x01384978(*(undefined4 *)(_UNK_021715f8 + 0x2170fa8));
    func_0x01384978(*(undefined4 *)(_UNK_021715fc + 0x2170fb4));
    func_0x01384978(*(undefined4 *)(_UNK_02171600 + 0x2170fc0));
    func_0x01384978(*(undefined4 *)(_UNK_02171604 + 0x2170fcc));
    *pcVar12 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  uStack_2c = 0;
  iVar2 = func_0x0229f06c(0xb52c,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02171608 + 0x2171038));
    func_0x0229e9ac(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar2 + 8) = param_1;
    *(undefined4 *)(iVar2 + 0xc) = param_2;
    iVar3 = FUN_0216fe48(param_1,&iStack_24,&iStack_28,&uStack_2c);
    iVar6 = iStack_24;
    if (iVar3 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x02450044(iVar6,0);
      if (*(int *)(**(int **)(_UNK_0217160c + 0x21710a4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar4 = FUN_0212882c(uVar4,0);
      *(undefined4 *)(iVar2 + 0x10) = uVar4;
      piVar5 = (int *)FUN_021566f4();
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar5;
      piVar13 = *(int **)(_UNK_02171610 + 0x21710e8);
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar11[-1] == *piVar13) {
            puVar7 = (undefined4 *)(iVar6 + *piVar11 * 8 + 0x208);
            goto LAB_02171130;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined4 *)func_0x014002dc(piVar5,*piVar13,0x29);
LAB_02171130:
      iVar6 = (*(code *)*puVar7)(piVar5,puVar7[1]);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      *(undefined1 *)(iVar2 + 0x14) = 0;
      if (iStack_28 == 1) {
        piVar5 = *(int **)(_UNK_02171618 + 0x21711d0);
        iVar3 = *piVar5;
        iVar10 = *(int *)(iVar3 + 0x74);
        *(undefined1 *)(iVar2 + 0x14) = 1;
        if (iVar10 == 0) {
          func_0x01384ab4();
          iVar3 = *piVar5;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x50);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 1;
      }
      else if (iStack_28 == 2) {
        piVar5 = *(int **)(_UNK_0217161c + 0x217121c);
        iVar3 = *piVar5;
        iVar10 = *(int *)(iVar3 + 0x74);
        *(undefined1 *)(iVar2 + 0x14) = 1;
        if (iVar10 == 0) {
          func_0x01384ab4();
          iVar3 = *piVar5;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x50);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      }
      else if (iStack_28 == 3) {
        piVar5 = *(int **)(_UNK_02171614 + 0x2171184);
        iVar3 = *piVar5;
        iVar10 = *(int *)(iVar3 + 0x74);
        *(undefined1 *)(iVar2 + 0x14) = 1;
        if (iVar10 == 0) {
          func_0x01384ab4();
          iVar3 = *piVar5;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x54);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar6 + 0x28) = *(int *)(iVar6 + 0x28) + 1;
      }
      else {
        piVar5 = (int *)FUN_021566f4();
        uVar4 = uStack_2c;
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar5;
        uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar13) {
              puVar7 = (undefined4 *)(iVar3 + *piVar11 * 8 + 400);
              goto LAB_021712c0;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined4 *)func_0x014002dc(piVar5,*piVar13,0x1a);
LAB_021712c0:
        iVar3 = (*(code *)*puVar7)(piVar5,uVar4,puVar7[1]);
        if (iVar3 == 0) {
          piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02171620 + 0x21713d8),4);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uStack_30 = *(undefined4 *)(iVar6 + 0x10);
          puVar7 = *(undefined4 **)(_UNK_02171624 + 0x21713fc);
          iVar6 = func_0x01384abc(*puVar7,&uStack_30);
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar6 != 0) &&
             (iVar3 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)) {
            uVar4 = func_0x01384c10();
            func_0x01384aa0(uVar4,0);
          }
          if (piVar5[3] == 0) {
            func_0x01384bf4();
          }
          piVar5[4] = iVar6;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar6 = *(int *)(iVar2 + 8);
          if ((iVar6 != 0) &&
             (iVar3 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)) {
            uVar4 = func_0x01384c10();
            func_0x01384aa0(uVar4,0);
          }
          if ((uint)piVar5[3] < 2) {
            func_0x01384bf4();
          }
          piVar5[5] = iVar6;
          uStack_34 = *(undefined4 *)(iVar2 + 0x10);
          iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_02171628 + 0x21714b8),&uStack_34);
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0)) {
            uVar4 = func_0x01384c10();
            func_0x01384aa0(uVar4,0);
          }
          if ((uint)piVar5[3] < 3) {
            func_0x01384bf4();
          }
          piVar5[6] = iVar2;
          uStack_38 = uStack_2c;
          iVar2 = func_0x01384abc(*puVar7,&uStack_38);
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0)) {
            uVar4 = func_0x01384c10();
            func_0x01384aa0(uVar4,0);
          }
          if ((uint)piVar5[3] < 4) {
            func_0x01384bf4();
          }
          piVar5[7] = iVar2;
          if (*(int *)(**(int **)(_UNK_0217162c + 0x217156c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c23bc(**(undefined4 **)(_UNK_02171630 + 0x2171590),piVar5,0);
          return;
        }
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar5 = *(int **)(_UNK_02171634 + 0x21712f4);
        iVar3 = *(int *)(iVar2 + 0x10);
        iVar6 = *piVar5;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x01384ab4();
          iVar6 = *piVar5;
        }
        if (iVar3 == 6) {
          uVar4 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x54);
        }
        else {
          uVar4 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x50);
        }
      }
      if (*(char *)(iVar2 + 0x14) == '\0') {
        piVar5 = (int *)FUN_021566f4();
        uVar1 = uStack_2c;
        uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_02171638 + 0x217134c));
        func_0x024500b4(uVar8,iVar2,**(undefined4 **)(_UNK_0217163c + 0x217136c),0);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *piVar5;
        uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar13) {
              puVar7 = (undefined4 *)(iVar6 + *piVar11 * 8 + 0x198);
              goto LAB_021715a4;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined4 *)func_0x014002dc(piVar5,*piVar13,0x1b);
LAB_021715a4:
        (*(code *)*puVar7)(piVar5,uVar1,uVar4,uVar8,iVar2 != 6,puVar7[1]);
      }
      else {
        func_0x0229e9b4(iVar2,0);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb52c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.ItemUtility$$GetItemUsableCount RVA 0x2161640 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02171640(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_021719d8 + 0x2171658);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021719dc + 0x217166c));
    func_0x01384978(*(undefined4 *)(_UNK_021719e0 + 0x2171678));
    func_0x01384978(*(undefined4 *)(_UNK_021719e4 + 0x2171684));
    func_0x01384978(*(undefined4 *)(_UNK_021719e8 + 0x2171690));
    func_0x01384978(*(undefined4 *)(_UNK_021719ec + 0x217169c));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iStack_18 = 0;
  iStack_1c = 0;
  iStack_20 = 0;
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x1472,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1472,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217493c(iVar1,param_1,0);
    return uVar2;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = FUN_0210cd28(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02116a8c(0,0);
    if (iVar1 != 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = FUN_02116ae0(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = func_0x02feb690(0,&iStack_14,0,**(undefined4 **)(_UNK_021719f0 + 0x217185c));
    if (iVar1 != 0) goto LAB_0217186c;
    func_0x01384bf0();
    iVar1 = func_0x02feb690(0,&iStack_18,0,**(undefined4 **)(_UNK_021719f4 + 0x21718cc));
    if (iVar1 != 0) goto LAB_021718dc;
    func_0x01384bf0();
    iVar1 = func_0x02feb690(0,&iStack_1c,0,**(undefined4 **)(_UNK_02171a08 + 0x2171914));
    if (iVar1 != 0) goto LAB_02171924;
    func_0x01384bf0();
    iVar1 = func_0x02feb690(0,&iStack_20,0,**(undefined4 **)(_UNK_02171a0c + 0x217195c));
    if (iVar1 == 0) {
      func_0x01384bf0();
      goto LAB_02171990;
    }
  }
  else {
    iVar1 = FUN_0210cd28(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_02116a8c(param_1,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_02116ae0(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x02feb690(param_1,&iStack_14,0,**(undefined4 **)(_UNK_021719f8 + 0x2171770));
    if (iVar1 != 0) {
LAB_0217186c:
      iVar1 = iStack_14;
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar3 = FUN_0211fcd4(iVar1,0);
      iVar1 = iStack_14;
      if (iVar3 == 0) {
        return 0;
      }
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_0211fc68(iVar1,0);
      return uVar2;
    }
    iVar1 = func_0x02feb690(param_1,&iStack_18,0,**(undefined4 **)(_UNK_021719fc + 0x2171794));
    if (iVar1 != 0) {
LAB_021718dc:
      iVar1 = iStack_18;
      if (iStack_18 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_02122f9c(iVar1,0);
      return uVar2;
    }
    iVar1 = func_0x02feb690(param_1,&iStack_1c,0,**(undefined4 **)(_UNK_02171a00 + 0x21717b8));
    if (iVar1 != 0) {
LAB_02171924:
      iVar1 = iStack_1c;
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_0211bf04(iVar1,0);
      return uVar2;
    }
    iVar1 = func_0x02feb690(param_1,&iStack_20,0,**(undefined4 **)(_UNK_02171a04 + 0x21717dc));
    if (iVar1 == 0) {
LAB_02171990:
      iVar3 = func_0x02feb690(param_1,&iStack_24,0,**(undefined4 **)(_UNK_02171a10 + 0x21719a8));
      iVar1 = iStack_24;
      if (iVar3 == 0) {
        return 0;
      }
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_0212be44(iVar1,0);
      return uVar2;
    }
  }
  iVar1 = iStack_20;
  if (iStack_20 == 0) {
    func_0x01384bf0();
  }
  uVar2 = FUN_0211de94(iVar1,0);
  return uVar2;
}



// ===== FAT.Merge.ItemUtility$$_GetItemBasicDesc RVA 0x2161a14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02171a14(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar8 = (char *)(_UNK_02171bd0 + 0x2171a28);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02171bd4 + 0x2171a3c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb52f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb52f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02173b0c + 0x2173a2c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173b10 + 0x2173a40),param_1,0);
      *pcVar8 = '\x01';
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    iStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_30,uVar7,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173b14 + 0x2173afc));
    return iVar1;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar12 = *(int **)(_UNK_02171bd8 + 0x2171aac);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar10 = *piVar12;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar10) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x108);
        goto LAB_02171af4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar10,9);
LAB_02171af4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x01489db8(*(undefined4 *)(iVar1 + 0x34),0);
  if (iVar10 == 0) {
    uVar11 = *(undefined4 *)(iVar1 + 0x34);
  }
  else {
    piVar2 = (int *)FUN_021566f4();
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    iVar10 = *piVar12;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar12[-1] == iVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0x100);
          goto LAB_02171b98;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar10,8);
LAB_02171b98:
    iVar1 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar11 = *(undefined4 *)(iVar1 + 0x18);
  }
  pcVar8 = (char *)(_UNK_02172088 + 0x2171bfc);
  iStack_28 = 1;
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0217208c + 0x2171c14));
    func_0x01384978(*(undefined4 *)(_UNK_02172090 + 0x2171c20));
    func_0x01384978(*(undefined4 *)(_UNK_02172094 + 0x2171c2c));
    func_0x01384978(*(undefined4 *)(_UNK_02172098 + 0x2171c38));
    func_0x01384978(*(undefined4 *)(_UNK_0217209c + 0x2171c44));
    func_0x01384978(*(undefined4 *)(_UNK_021720a0 + 0x2171c50));
    func_0x01384978(*(undefined4 *)(_UNK_021720a4 + 0x2171c5c));
    func_0x01384978(*(undefined4 *)(_UNK_021720a8 + 0x2171c68));
    func_0x01384978(*(undefined4 *)(_UNK_021720ac + 0x2171c74));
    *pcVar8 = '\x01';
  }
  iStack_2c = 0;
  iVar1 = func_0x0229f06c(0x9730,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01489db8(uVar11,0);
    if (iVar1 == 0) {
      piVar2 = (int *)FUN_021566f4();
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      piVar12 = *(int **)(_UNK_021720b4 + 0x2171d1c);
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar10 = *piVar12;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar10) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x110);
            goto LAB_02171d64;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar10,10);
LAB_02171d64:
      iVar10 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
      piVar2 = *(int **)(_UNK_021720b8 + 0x2171d88);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x028c1350(uVar11,0);
      if (iVar10 != 0) {
        if (*(int *)(iVar10 + 0xc) != 0) {
          piVar6 = (int *)FUN_021566f4();
          iVar9 = *(int *)(iVar10 + 0xc);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          uVar11 = *(undefined4 *)(iVar9 + 0x1c);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar9 = *piVar6;
          iVar4 = *piVar12;
          uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar12[-1] == iVar4) {
                puVar3 = (undefined4 *)(iVar9 + *piVar12 * 8 + 0x100);
                goto LAB_02171e34;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar6,iVar4,8);
LAB_02171e34:
          iVar9 = (*(code *)*puVar3)(piVar6,uVar11,puVar3[1]);
          uVar11 = func_0x014867c8(&iStack_28,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024517f0(iVar1,**(undefined4 **)(_UNK_021720bc + 0x2171e7c),uVar11,0);
          uVar11 = **(undefined4 **)(_UNK_021720c0 + 0x2171e98);
          if (iVar9 == 0) {
            iVar9 = *(int *)(iVar10 + 0xc);
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            uVar7 = func_0x014867c8(iVar9 + 0x1c,0);
          }
          else {
            uVar7 = *(undefined4 *)(iVar9 + 0x24);
            if (*(int *)(*piVar2 + 0x74) == 0) {
              func_0x01384ab4();
            }
            uVar7 = func_0x028c1350(uVar7,0);
          }
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024517f0(iVar1,uVar11,uVar7,0);
          iVar9 = *(int *)(iVar10 + 0xc);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          uVar11 = func_0x014867c8(iVar9 + 0x18,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024517f0(iVar1,**(undefined4 **)(_UNK_021720c4 + 0x2171f48),uVar11,0);
          iVar9 = *(int *)(iVar10 + 0xc);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          iStack_2c = iStack_28 * *(int *)(iVar9 + 0x18);
          uVar11 = func_0x014867c8(&iStack_2c,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024517f0(iVar1,**(undefined4 **)(_UNK_021720c8 + 0x2171fa4),uVar11,0);
        }
        if (*(int *)(iVar10 + 0x28) != 0) {
          uVar5 = *(uint *)(*(int *)(iVar10 + 0x28) + 0x14);
          iVar9 = (int)(((ulonglong)uVar5 << 0x20) + (longlong)(int)uVar5 * -0x6e5d4c3b >> 0x20);
          iStack_2c = (iVar9 >> 0xb) - (iVar9 >> 0x1f);
          uVar11 = func_0x014867c8(&iStack_2c,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024517f0(iVar1,**(undefined4 **)(_UNK_021720cc + 0x2172008),uVar11,0);
        }
        iVar10 = *(int *)(iVar10 + 0x2c);
        if (iVar10 != 0) {
          iVar1 = FUN_02132f64(iVar1,*(undefined4 *)(iVar10 + 0x28),*(undefined4 *)(iVar10 + 0x24),0
                              );
        }
      }
      iVar10 = FUN_02167bc0(param_1);
      if (0 < iVar10) {
        uVar11 = FUN_02169b54();
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x024517f0(iVar1,**(undefined4 **)(_UNK_021720d0 + 0x2172070),uVar11,0);
      }
    }
    else {
      iVar1 = **(int **)(_UNK_021720b0 + 0x2171cf4);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9730,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 0;
    iVar1 = func_0x022764f8(iVar1,param_1,uVar11,1);
  }
  return iVar1;
}



// ===== FAT.Merge.ItemUtility$$FormatMergeItemDesc RVA 0x2161bdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02171bdc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  int iStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_02172088 + 0x2171bfc);
  iStack_28 = param_3;
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0217208c + 0x2171c14));
    func_0x01384978(*(undefined4 *)(_UNK_02172090 + 0x2171c20));
    func_0x01384978(*(undefined4 *)(_UNK_02172094 + 0x2171c2c));
    func_0x01384978(*(undefined4 *)(_UNK_02172098 + 0x2171c38));
    func_0x01384978(*(undefined4 *)(_UNK_0217209c + 0x2171c44));
    func_0x01384978(*(undefined4 *)(_UNK_021720a0 + 0x2171c50));
    func_0x01384978(*(undefined4 *)(_UNK_021720a4 + 0x2171c5c));
    func_0x01384978(*(undefined4 *)(_UNK_021720a8 + 0x2171c68));
    func_0x01384978(*(undefined4 *)(_UNK_021720ac + 0x2171c74));
    *pcVar10 = '\x01';
  }
  iStack_2c = 0;
  iVar1 = func_0x0229f06c(0x9730,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01489db8(param_2,0);
    if (iVar1 == 0) {
      piVar2 = (int *)FUN_021566f4();
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      piVar12 = *(int **)(_UNK_021720b4 + 0x2171d1c);
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar4 = *piVar12;
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x110);
            goto LAB_02171d64;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,10);
LAB_02171d64:
      iVar4 = (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
      piVar2 = *(int **)(_UNK_021720b8 + 0x2171d88);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x028c1350(param_2,0);
      if (iVar4 != 0) {
        if (*(int *)(iVar4 + 0xc) != 0) {
          piVar7 = (int *)FUN_021566f4();
          iVar8 = *(int *)(iVar4 + 0xc);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          uVar11 = *(undefined4 *)(iVar8 + 0x1c);
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar8 = *piVar7;
          iVar5 = *piVar12;
          uVar6 = (uint)*(ushort *)(iVar8 + 0xb6);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(int *)(iVar8 + 0x58) + 4);
            do {
              if (piVar12[-1] == iVar5) {
                puVar3 = (undefined4 *)(iVar8 + *piVar12 * 8 + 0x100);
                goto LAB_02171e34;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar7,iVar5,8);
LAB_02171e34:
          iVar8 = (*(code *)*puVar3)(piVar7,uVar11,puVar3[1]);
          uVar11 = func_0x014867c8(&iStack_28,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024517f0(iVar1,**(undefined4 **)(_UNK_021720bc + 0x2171e7c),uVar11,0);
          uVar11 = **(undefined4 **)(_UNK_021720c0 + 0x2171e98);
          if (iVar8 == 0) {
            iVar8 = *(int *)(iVar4 + 0xc);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            uVar9 = func_0x014867c8(iVar8 + 0x1c,0);
          }
          else {
            uVar9 = *(undefined4 *)(iVar8 + 0x24);
            if (*(int *)(*piVar2 + 0x74) == 0) {
              func_0x01384ab4();
            }
            uVar9 = func_0x028c1350(uVar9,0);
          }
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024517f0(iVar1,uVar11,uVar9,0);
          iVar8 = *(int *)(iVar4 + 0xc);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          uVar11 = func_0x014867c8(iVar8 + 0x18,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024517f0(iVar1,**(undefined4 **)(_UNK_021720c4 + 0x2171f48),uVar11,0);
          iVar8 = *(int *)(iVar4 + 0xc);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iStack_2c = iStack_28 * *(int *)(iVar8 + 0x18);
          uVar11 = func_0x014867c8(&iStack_2c,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024517f0(iVar1,**(undefined4 **)(_UNK_021720c8 + 0x2171fa4),uVar11,0);
        }
        if (*(int *)(iVar4 + 0x28) != 0) {
          uVar6 = *(uint *)(*(int *)(iVar4 + 0x28) + 0x14);
          iVar8 = (int)(((ulonglong)uVar6 << 0x20) + (longlong)(int)uVar6 * -0x6e5d4c3b >> 0x20);
          iStack_2c = (iVar8 >> 0xb) - (iVar8 >> 0x1f);
          uVar11 = func_0x014867c8(&iStack_2c,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024517f0(iVar1,**(undefined4 **)(_UNK_021720cc + 0x2172008),uVar11,0);
        }
        iVar4 = *(int *)(iVar4 + 0x2c);
        if (iVar4 != 0) {
          iVar1 = FUN_02132f64(iVar1,*(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x24),0);
        }
      }
      iVar4 = FUN_02167bc0(param_1);
      if (0 < iVar4) {
        uVar11 = FUN_02169b54();
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x024517f0(iVar1,**(undefined4 **)(_UNK_021720d0 + 0x2172070),uVar11,0);
      }
    }
    else {
      iVar1 = **(int **)(_UNK_021720b0 + 0x2171cf4);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9730,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x022764f8(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.Merge.ItemUtility$$IsDropLimitItem RVA 0x21620d4 =====

/* WARNING: Removing unreachable block (ram,0x02172748) */
/* WARNING: Removing unreachable block (ram,0x02172534) */
/* WARNING: Removing unreachable block (ram,0x02172738) */
/* WARNING: Removing unreachable block (ram,0x02172544) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021720d4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_0217298c + 0x21720f0);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02172990 + 0x2172104));
    func_0x01384978(*(undefined4 *)(_UNK_02172994 + 0x2172110));
    func_0x01384978(*(undefined4 *)(_UNK_02172998 + 0x217211c));
    func_0x01384978(*(undefined4 *)(_UNK_0217299c + 0x2172128));
    func_0x01384978(*(undefined4 *)(_UNK_021729a0 + 0x2172134));
    func_0x01384978(*(undefined4 *)(_UNK_021729a4 + 0x2172140));
    func_0x01384978(*(undefined4 *)(_UNK_021729a8 + 0x217214c));
    func_0x01384978(*(undefined4 *)(_UNK_021729ac + 0x2172158));
    *pcVar10 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  iVar2 = func_0x0229f06c(0x9e06,0);
  if (iVar2 == 0) {
    *param_2 = 0;
    piVar4 = (int *)FUN_021566f4();
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar4;
    uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_021729b0 + 0x21721e0)) {
          puVar5 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0x148);
          goto LAB_02172228;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_021729b0 + 0x21721e0),0x11);
LAB_02172228:
    iVar6 = (*(code *)*puVar5)(piVar4,param_1,&iStack_28,puVar5[1]);
    iVar2 = iStack_28;
    uVar3 = 0;
    if (iVar6 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 0;
      iVar2 = func_0x017ce068(*(undefined4 *)(iVar2 + 0x1c),0);
      if (iVar2 != 0) {
        iVar6 = func_0x01c24918(0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar6 + 0x4c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x01dbb000(iVar6,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar6 + 0x2c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iStack_3c = 0;
        piVar4 = (int *)FUN_0214dafc(iVar6,0);
        iVar6 = *(int *)(iVar2 + 0x14);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        piVar8 = (int *)func_0x0345f9b0(iVar6,**(undefined4 **)(_UNK_021729b4 + 0x2172308));
        piVar11 = *(int **)(_UNK_021729b8 + 0x2172328);
LAB_02172324:
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *piVar8;
        uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_021729c0 + 0x2172340)) {
              puVar5 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
              goto LAB_02172388;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_021729c0 + 0x2172340),0);
LAB_02172388:
        iVar6 = (*(code *)*puVar5)(piVar8,puVar5[1]);
        if (iVar6 != 0) {
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar6 = *piVar8;
          uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
            do {
              if (piVar9[-1] == **(int **)(_UNK_021729bc + 0x21723bc)) {
                puVar5 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
                goto LAB_02172404;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_021729bc + 0x21723bc),0);
LAB_02172404:
          (*(code *)*puVar5)(&uStack_38,piVar8,puVar5[1]);
          iVar6 = iStack_34;
          uVar1 = uStack_38;
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar7 = *piVar4;
          uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(int *)(iVar7 + 0x58) + 4);
            do {
              if (piVar9[-1] == *piVar11) {
                puVar5 = (undefined4 *)(iVar7 + *piVar9 * 8 + 0xf8);
                goto LAB_0217247c;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar11,7);
LAB_0217247c:
          iVar7 = (*(code *)*puVar5)(piVar4,uVar1,&iStack_2c,puVar5[1]);
          if (iVar7 != 0) {
            iStack_3c = iStack_2c * iVar6 + iStack_3c;
          }
          goto LAB_02172324;
        }
        if (piVar8 != (int *)0x0) {
          iVar6 = *piVar8;
          uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
          if (uVar3 != 0) {
            piVar4 = (int *)(*(int *)(iVar6 + 0x58) + 4);
            do {
              if (piVar4[-1] == **(int **)(_UNK_021729c4 + 0x21724d4)) {
                puVar5 = (undefined4 *)(iVar6 + *piVar4 * 8 + 0xc0);
                goto LAB_0217251c;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 2;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_021729c4 + 0x21724d4),0);
LAB_0217251c:
          (*(code *)*puVar5)(piVar8,puVar5[1]);
        }
        iVar6 = func_0x01c24918(0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar2 + 0x18);
        iVar2 = *(int *)(iVar6 + 0x68);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        piVar4 = (int *)func_0x0345f9b0(iVar7,**(undefined4 **)(_UNK_021729c8 + 0x2172584));
LAB_02172594:
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *piVar4;
        uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_021729cc + 0x21725b0)) {
              puVar5 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
              goto LAB_021725f8;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_021729cc + 0x21725b0),0);
LAB_021725f8:
        iVar6 = (*(code *)*puVar5)(piVar4,puVar5[1]);
        if (iVar6 != 0) {
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar6 = *piVar4;
          uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
            do {
              if (piVar8[-1] == **(int **)(_UNK_021729d4 + 0x217262c)) {
                puVar5 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                goto LAB_02172674;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_021729d4 + 0x217262c),0);
LAB_02172674:
          (*(code *)*puVar5)(&uStack_38,piVar4,puVar5[1]);
          iVar6 = iStack_34;
          uVar1 = uStack_38;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x01e6c0b0(iVar2,uVar1,0);
          if (iVar7 != 0) {
            iStack_3c = iStack_3c + iVar6;
          }
          goto LAB_02172594;
        }
        if (piVar4 != (int *)0x0) {
          iVar2 = *piVar4;
          uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar8[-1] == **(int **)(_UNK_021729d8 + 0x21726d8)) {
                puVar5 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                goto LAB_02172720;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_021729d8 + 0x21726d8),0);
LAB_02172720:
          (*(code *)*puVar5)(piVar4,puVar5[1]);
        }
        iVar2 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        if (iStack_3c < *(int *)(iVar2 + 0x14)) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x4c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = 0;
          iVar2 = func_0x01dbb000(iVar2,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_02141ef4(iVar2,0);
          if (iVar2 == 0) goto LAB_021727e4;
        }
        iVar2 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        uVar3 = 1;
        *param_2 = *(undefined4 *)(iVar2 + 0x18);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9e06,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021b50cc(iVar2,param_1,param_2,0);
  }
LAB_021727e4:
  return uVar3 & 1;
}



// ===== FAT.Merge.ItemUtility$$CollectRewardItem RVA 0x21629e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021729e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_02172c2c + 0x2172a00);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02172c30 + 0x2172a14));
    func_0x01384978(*(undefined4 *)(_UNK_02172c34 + 0x2172a20));
    *pcVar5 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x6029,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6029,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
    return;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02feb690(param_1,&iStack_1c,0,**(undefined4 **)(_UNK_02172c38 + 0x2172aa4));
  iVar1 = iStack_1c;
  if (iVar2 != 0) {
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_0211d748(iVar1,0);
    if (((iVar1 == 1) && (iStack_1c != 0)) && (iVar1 = FUN_0211dc48(iStack_1c,0), iVar1 != 0)) {
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = FUN_0210e2d4(param_1,0);
      func_0x02172c40(param_2,uVar3,1);
      iVar1 = iStack_1c;
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      uVar3 = FUN_0211d680(iVar1,0);
      iVar1 = iStack_1c;
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      uVar4 = FUN_0211d6e4(iVar1,0);
      goto LAB_02172c14;
    }
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02feb690(param_1,&iStack_20,0,**(undefined4 **)(_UNK_02172c3c + 0x2172b7c));
  iVar1 = iStack_20;
  if (iVar2 == 0) {
    return;
  }
  if (iStack_20 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_021372e0(iVar1,0);
  if (iVar1 != 3) {
    return;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = FUN_0210e2d4(param_1,0);
  func_0x02172c40(param_2,uVar3,1);
  iVar1 = iStack_20;
  if (iStack_20 == 0) {
    func_0x01384bf0();
  }
  uVar3 = FUN_02137218(iVar1,0);
  iVar1 = iStack_20;
  if (iStack_20 == 0) {
    func_0x01384bf0();
  }
  uVar4 = FUN_0213727c(iVar1,0);
LAB_02172c14:
  func_0x02172c40(param_3,uVar3,uVar4);
  return;
}



// ===== FAT.Merge.ItemUtility$$<CollectRewardItem>g__Collect|87_0 RVA 0x2162c40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02172c40(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02172d70 + 0x2172c5c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02172d74 + 0x2172c70));
    func_0x01384978(*(undefined4 *)(_UNK_02172d78 + 0x2172c7c));
    func_0x01384978(*(undefined4 *)(_UNK_02172d7c + 0x2172c88));
    func_0x01384978(*(undefined4 *)(_UNK_02172d80 + 0x2172c94));
    *pcVar2 = '\x01';
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x03d59fc8(0,param_2,**(undefined4 **)(_UNK_02172d94 + 0x2172cf8));
    func_0x01384bf0();
    if (iVar1 == 0) goto LAB_02172d50;
    iVar1 = func_0x03d59cc4(0,param_2,**(undefined4 **)(_UNK_02172d8c + 0x2172d20));
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x03d59fc8(param_1,param_2,**(undefined4 **)(_UNK_02172d84 + 0x2172cb4));
    if (iVar1 == 0) {
LAB_02172d50:
      func_0x03d5a8e0(param_1,param_2,param_3,2,
                      *(undefined4 *)
                       (*(int *)(*(int *)(**(int **)(_UNK_02172d98 + 0x2172d64) + 0x10) + 0x60) +
                       0x88));
      return;
    }
    iVar1 = func_0x03d59cc4(param_1,param_2,**(undefined4 **)(_UNK_02172d88 + 0x2172cd4));
  }
  func_0x03d5a8e0(param_1,param_2,iVar1 + param_3,1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(**(int **)(_UNK_02172d90 + 0x2172d44) + 0x10) + 0x60) + 0x88))
  ;
  return;
}



// ===== FAT.Merge.ItemUtility$$ConvertItemDictToString_Id_Num_Level RVA 0x2162d9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02172d9c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02173438 + 0x2172db4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0217343c + 0x2172dc8));
    func_0x01384978(*(undefined4 *)(_UNK_02173440 + 0x2172dd4));
    func_0x01384978(*(undefined4 *)(_UNK_02173444 + 0x2172de0));
    func_0x01384978(*(undefined4 *)(_UNK_02173448 + 0x2172dec));
    func_0x01384978(*(undefined4 *)(_UNK_0217344c + 0x2172df8));
    func_0x01384978(*(undefined4 *)(_UNK_02173450 + 0x2172e04));
    func_0x01384978(*(undefined4 *)(_UNK_02173454 + 0x2172e10));
    func_0x01384978(*(undefined4 *)(_UNK_02173458 + 0x2172e1c));
    func_0x01384978(*(undefined4 *)(_UNK_0217345c + 0x2172e28));
    func_0x01384978(*(undefined4 *)(_UNK_02173460 + 0x2172e34));
    *pcVar4 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_4c = 0;
  iVar1 = func_0x0229f06c(0x602b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02173464 + 0x2172eb8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024500c4(&uStack_68,0);
    uStack_30 = CONCAT44(uStack_64,uStack_68);
    uStack_28 = uStack_60;
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_68,param_1,**(undefined4 **)(_UNK_02173468 + 0x2172f04));
    uStack_48 = uStack_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uStack_38 = uStack_58;
    piVar3 = *(int **)(_UNK_0217346c + 0x2172f38);
    pcVar7 = (char *)(_UNK_02173470 + 0x2172f44);
    pcVar4 = (char *)(_UNK_02173474 + 0x2172f48);
    while (iVar1 = func_0x03f9975c(&uStack_48,**(undefined4 **)(_UNK_0217349c + 0x2172f50)),
          uVar6 = uStack_3c, iVar1 != 0) {
      uVar8 = (undefined4)uStack_38;
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (0 < uStack_30._4_4_) {
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = **(int **)(_UNK_02173478 + 0x2172fa8);
        if (*pcVar7 == '\0') {
          func_0x01384978(piVar3);
          *pcVar7 = '\x01';
        }
        if (*pcVar4 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_0217347c + 0x2172fdc));
          *pcVar4 = '\x01';
        }
        if (iVar1 == 0) {
          uVar5 = 0;
          uVar2 = 0;
        }
        else {
          uVar2 = func_0x0148d698(iVar1,0);
          uVar5 = *(undefined4 *)(iVar1 + 8);
        }
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x019a7f14(&uStack_30,uVar2,uVar5,0);
      }
      uStack_4c = uVar6;
      iVar1 = func_0x014867c8(&uStack_4c,0);
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02173480 + 0x2173090));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar5 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = func_0x0148d698(iVar1,0);
        uVar5 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar2,uVar5,0);
      iVar1 = **(int **)(_UNK_02173484 + 0x21730f4);
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02173488 + 0x2173128));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar5 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = func_0x0148d698(iVar1,0);
        uVar5 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar2,uVar5,0);
      uStack_4c = uVar8;
      iVar1 = func_0x014867c8(&uStack_4c,0);
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0217348c + 0x21731c8));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar2 = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = func_0x0148d698(iVar1,0);
        uVar2 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar8,uVar2,0);
      iVar1 = **(int **)(_UNK_02173490 + 0x217322c);
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02173494 + 0x2173260));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar2 = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = func_0x0148d698(iVar1,0);
        uVar2 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar8,uVar2,0);
      uStack_4c = FUN_02157e88(uVar6);
      iVar1 = func_0x014867c8(&uStack_4c,0);
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02173498 + 0x2173308));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar8 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = func_0x0148d698(iVar1,0);
        uVar8 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar6,uVar8,0);
    }
    func_0x03f9989c(&uStack_48,**(undefined4 **)(_UNK_021734a0 + 0x2173370));
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0148d6d8(&uStack_30,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x602b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173e78(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Merge.ItemUtility.<>c__DisplayClass80_0$$.ctor RVA 0x228e9ac =====

void FUN_0229e9ac(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemUtility.<>c__DisplayClass80_0$$<TrySpeedUpEmptyItem>g__ProcessPaySuccess|0 RVA 0x228e9b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0229e9b4(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_0229ede4 + 0x229e9cc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0229ede8 + 0x229e9e0));
    func_0x01384978(*(undefined4 *)(_UNK_0229edec + 0x229e9ec));
    func_0x01384978(*(undefined4 *)(_UNK_0229edf0 + 0x229e9f8));
    func_0x01384978(*(undefined4 *)(_UNK_0229edf4 + 0x229ea04));
    func_0x01384978(*(undefined4 *)(_UNK_0229edf8 + 0x229ea10));
    func_0x01384978(*(undefined4 *)(_UNK_0229edfc + 0x229ea1c));
    func_0x01384978(*(undefined4 *)(_UNK_0229ee00 + 0x229ea28));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)FUN_02119a3c(iVar5,uVar6,0,0);
  iVar5 = *(int *)(param_1 + 0x10);
  switch(iVar5) {
  case 1:
    if (piVar2 != (int *)0x0) {
      uVar3 = (uint)*(byte *)(**(int **)(&UNK_0229eaa4 + _UNK_0229ee14) + 0xb8);
      if (((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
          (*(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) ==
           **(int **)(&UNK_0229eaa4 + _UNK_0229ee14))) &&
         (iVar5 = FUN_0211bf58(piVar2,0), iVar5 != 0)) {
        FUN_0211c85c(piVar2,0);
      }
    }
    break;
  case 2:
    if (piVar2 != (int *)0x0) {
      uVar3 = (uint)*(byte *)(**(int **)(&UNK_0229eb74 + _UNK_0229ee10) + 0xb8);
      if ((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) ==
          **(int **)(&UNK_0229eb74 + _UNK_0229ee10))) {
        iVar5 = FUN_02122cc0(piVar2,0);
        if (iVar5 == 0) {
          iVar5 = FUN_02122da4(piVar2,0);
          if (iVar5 != 0) {
            FUN_021257a8(piVar2,0);
          }
        }
        else {
          FUN_02125390(piVar2,0);
        }
      }
    }
    break;
  case 3:
    if (piVar2 != (int *)0x0) {
      uVar3 = (uint)*(byte *)(**(int **)(&UNK_0229ebd4 + _UNK_0229ee1c) + 0xb8);
      if (((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
          (*(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) ==
           **(int **)(&UNK_0229ebd4 + _UNK_0229ee1c))) &&
         (iVar5 = FUN_0211f8ec(piVar2,0), iVar5 != 0)) {
        FUN_02121768(piVar2,0);
      }
    }
    break;
  case 4:
  case 5:
    break;
  case 6:
    if (piVar2 != (int *)0x0) {
      uVar3 = (uint)*(byte *)(**(int **)(&UNK_0229ec34 + _UNK_0229ee08) + 0xb8);
      if (((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
          (*(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) ==
           **(int **)(&UNK_0229ec34 + _UNK_0229ee08))) &&
         (iVar5 = FUN_0211e720(piVar2,0), iVar5 != 0)) {
        iVar5 = *(int *)(param_1 + 8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = FUN_0210cd28(iVar5,0);
        if (iVar5 != 0) {
          FUN_020e79c0(iVar5,*(undefined4 *)(param_1 + 8),0);
        }
        iVar5 = *(int *)(param_1 + 8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar6 = FUN_0210e2d4(iVar5,0);
        uVar6 = FUN_02157e88(uVar6,0);
        cVar1 = *(char *)(param_1 + 0x14);
        if (*(int *)(**(int **)(&UNK_0229ecd8 + _UNK_0229ee0c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x019959cc(iVar5,uVar6,0,cVar1 != '\0',0,0);
      }
    }
    break;
  default:
    if (iVar5 == 0xd) {
      if (piVar2 != (int *)0x0) {
        uVar3 = (uint)*(byte *)(**(int **)(_UNK_0229ee18 + 0x229ed28) + 0xb8);
        if (((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
            (*(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) ==
             **(int **)(_UNK_0229ee18 + 0x229ed28))) && (iVar5 = FUN_0212bdd0(piVar2,0), iVar5 == 1)
           ) {
          FUN_0212e018(piVar2,0);
        }
      }
    }
    else if ((iVar5 == 0x15) && (piVar2 != (int *)0x0)) {
      uVar3 = (uint)*(byte *)(**(int **)(_UNK_0229ee04 + 0x229eb14) + 0xb8);
      if ((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) ==
          **(int **)(_UNK_0229ee04 + 0x229eb14))) {
        iVar5 = FUN_0212f734(piVar2,0);
        if (iVar5 == 0) {
          iVar5 = FUN_0212f798(piVar2,0);
          if (iVar5 != 0) {
            FUN_02131768(piVar2,0);
          }
        }
        else {
          FUN_021316cc(piVar2,0);
        }
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0229edd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x14));
    return;
  }
  return;
}



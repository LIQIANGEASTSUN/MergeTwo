/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.BoardGirdRewardIntroStep$$.ctor RVA 0x1dfaac4 =====

void FUN_01e0aac4(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.BoardGirdRewardIntroStep$$CheckCondition RVA 0x1dfac20 =====

/* WARNING: Possible PIC construction at 0x0210fc08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0210fc0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e0ac20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *unaff_r4;
  int unaff_r5;
  undefined4 *unaff_r6;
  undefined4 uVar6;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 unaff_lr;
  undefined1 auStack_78 [4];
  int iStack_74;
  uint uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
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
  
  iVar1 = func_0x0229f06c(41000,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01e0a358(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar1 + 8) == 0) ||
       (param_1 = func_0x02141a78(*(int *)(iVar1 + 8),0), param_1 == 0)) {
      return 0;
    }
    unaff_r4 = (char *)(_UNK_02110038 + 0x210faec);
    if (*unaff_r4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0211003c + 0x210fb00),0);
      func_0x01384978(*(undefined4 *)(_UNK_02110040 + 0x210fb0c));
      func_0x01384978(*(undefined4 *)(_UNK_02110044 + 0x210fb18));
      func_0x01384978(*(undefined4 *)(_UNK_02110048 + 0x210fb24));
      func_0x01384978(*(undefined4 *)(_UNK_0211004c + 0x210fb30));
      func_0x01384978(*(undefined4 *)(_UNK_02110050 + 0x210fb3c));
      func_0x01384978(*(undefined4 *)(_UNK_02110054 + 0x210fb48));
      func_0x01384978(*(undefined4 *)(_UNK_02110058 + 0x210fb54));
      func_0x01384978(*(undefined4 *)(_UNK_0211005c + 0x210fb60));
      func_0x01384978(*(undefined4 *)(_UNK_02110060 + 0x210fb6c));
      func_0x01384978(*(undefined4 *)(_UNK_02110064 + 0x210fb78));
      func_0x01384978(*(undefined4 *)(_UNK_02110068 + 0x210fb84));
      func_0x01384978(*(undefined4 *)(_UNK_0211006c + 0x210fb90));
      func_0x01384978(*(undefined4 *)(_UNK_02110070 + 0x210fb9c));
      *unaff_r4 = '\x01';
    }
    unaff_r6 = &uStack_38;
    uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    unaff_r7 = 0;
    uStack_38 = 0;
    uStack_28 = 0;
    uStack_50 = 0;
    uStack_40 = 0;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iVar1 = func_0x0229f06c(0xa02a,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0xc) == '\0') {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x60);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        unaff_r7 = 0;
        iVar1 = func_0x01cc0100(iVar1,0x91,0);
        if (iVar1 != 0) {
          iVar3 = func_0x021100b4(param_1);
          iVar1 = 0;
          if (iVar3 != 0) {
            iVar1 = *(int *)(param_1 + 8);
          }
          if (iVar3 != 0 && iVar1 != 0) {
            unaff_r7 = 0;
            iVar1 = func_0x02139cf4(iVar1,0);
            if (iVar1 != 0) {
              if ((*(int *)(param_1 + 0x14) != 0) &&
                 (iVar3 = func_0x03e70e60(*(int *)(param_1 + 0x14),
                                          **(undefined4 **)(_UNK_02110074 + 0x210fcb8)), 0 < iVar3))
              {
                iVar3 = *(int *)(param_1 + 0x14);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = func_0x03e70e70(iVar3,**(undefined4 **)(_UNK_02110078 + 0x210fce0));
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                func_0x024548e0(&uStack_68,iVar3,**(undefined4 **)(_UNK_0211007c + 0x210fd0c));
                uStack_28 = uStack_58;
                uStack_38 = uStack_68;
                uStack_34 = uStack_64;
                uStack_30 = uStack_60;
                uStack_2c = uStack_5c;
                iStack_6c = 0;
                iVar3 = iStack_6c;
                while (iVar2 = func_0x03fef520(unaff_r6,**(undefined4 **)(_UNK_0211008c + 0x210fd44)
                                              ), uVar5 = uStack_28, uVar6 = uStack_2c, iVar2 != 0) {
                  iVar2 = func_0x020e81ec(iVar1,uStack_2c,uStack_28,0);
                  if ((iVar2 == 0) || (iVar2 = func_0x0211015c(), iVar2 == 0)) {
                    if (iVar3 == 0) {
                      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02110080 + 0x210fd94));
                      func_0x032fd658(iVar3,**(undefined4 **)(_UNK_02110084 + 0x210fda8));
                      iStack_6c = iVar3;
                      if (iVar3 == 0) {
                        iStack_6c = 0;
                        func_0x01384bf0();
                      }
                    }
                    uStack_70 = *(uint *)(iStack_6c + 0xc);
                    iVar3 = *(int *)(iStack_6c + 8);
                    piVar4 = *(int **)(_UNK_02110088 + 0x210fdf0);
                    *(int *)(iStack_6c + 0x10) = *(int *)(iStack_6c + 0x10) + 1;
                    iStack_74 = *piVar4;
                    if (iVar3 == 0) {
                      func_0x01384bf0();
                    }
                    if (uStack_70 < *(uint *)(iVar3 + 0xc)) {
                      *(uint *)(iStack_6c + 0xc) = uStack_70 + 1;
                      iVar3 = iVar3 + uStack_70 * 8;
                      *(undefined4 *)(iVar3 + 0x10) = uVar6;
                      *(undefined4 *)(iVar3 + 0x14) = uVar5;
                      iVar3 = iStack_6c;
                    }
                    else {
                      func_0x032fdee4(iStack_6c,uVar6,uVar5,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iStack_74 + 0x10) + 0x60) + 0x38));
                      iVar3 = iStack_6c;
                    }
                  }
                }
                func_0x03fef51c(&uStack_38,**(undefined4 **)(_UNK_02110090 + 0x210fe58));
                if (iVar3 != 0) {
                  func_0x032fec64(&uStack_68,iVar3,**(undefined4 **)(_UNK_02110098 + 0x210fe7c));
                  uStack_40 = uStack_58;
                  uStack_50 = uStack_68;
                  uStack_4c = uStack_64;
                  uStack_48 = uStack_60;
                  uStack_44 = uStack_5c;
                  puVar7 = *(undefined4 **)(_UNK_0211009c + 0x210fea8);
                  puVar8 = *(undefined4 **)(_UNK_021100a0 + 0x210feb0);
                  while (iVar1 = func_0x03f69644(&uStack_50,*puVar7), uVar5 = uStack_40,
                        uVar6 = uStack_44, iVar1 != 0) {
                    iVar1 = *(int *)(param_1 + 0x14);
                    if (iVar1 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x03e729dc(iVar1,uVar6,uVar5,*puVar8);
                  }
                  func_0x03f69640(&uStack_50,**(undefined4 **)(_UNK_021100a8 + 0x210fef8));
                }
              }
              unaff_r7 = 1;
              *(undefined1 *)(param_1 + 0x18) = 1;
              *(undefined1 *)(param_1 + 0xc) = 1;
              func_0x019a27f8(0);
            }
          }
        }
      }
      return unaff_r7;
    }
    iVar1 = func_0x0229f13c(0xa02a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x210fc0c;
    unaff_r5 = iVar1;
    unaff_r8 = param_1;
    register0x00000054 = (BADSPACEBASE *)auStack_78;
  }
  else {
    iVar1 = func_0x0229f13c(41000,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(char **)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar3 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
  uVar6 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
  return uVar6;
}



// ===== FAT.BoardGirdRewardIntroStep$$OnExecute RVA 0x1dfacb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0acb4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa02b,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01e0a358(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (((*(int *)(iVar1 + 8) != 0) && (iVar1 = func_0x02141a78(*(int *)(iVar1 + 8),0), iVar1 != 0))
       && (iVar9 = func_0x0210f8f8(iVar1,0), iVar9 != 0)) {
      pcVar8 = (char *)(_UNK_02110774 + 0x21101cc);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02110778 + 0x21101e0),param_1,0);
        func_0x01384978(*(undefined4 *)(_UNK_0211077c + 0x21101ec));
        func_0x01384978(*(undefined4 *)(_UNK_02110780 + 0x21101f8));
        func_0x01384978(*(undefined4 *)(_UNK_02110784 + 0x2110204));
        func_0x01384978(*(undefined4 *)(_UNK_02110788 + 0x2110210));
        func_0x01384978(*(undefined4 *)(_UNK_0211078c + 0x211021c));
        func_0x01384978(*(undefined4 *)(_UNK_02110790 + 0x2110228));
        func_0x01384978(*(undefined4 *)(_UNK_02110794 + 0x2110234));
        func_0x01384978(*(undefined4 *)(_UNK_02110798 + 0x2110240));
        func_0x01384978(*(undefined4 *)(_UNK_0211079c + 0x211024c));
        func_0x01384978(*(undefined4 *)(_UNK_021107a0 + 0x2110258));
        func_0x01384978(*(undefined4 *)(_UNK_021107a4 + 0x2110264));
        func_0x01384978(*(undefined4 *)(_UNK_021107a8 + 0x2110270));
        func_0x01384978(*(undefined4 *)(_UNK_021107ac + 0x211027c));
        func_0x01384978(*(undefined4 *)(_UNK_021107b0 + 0x2110288));
        func_0x01384978(*(undefined4 *)(_UNK_021107b4 + 0x2110294));
        func_0x01384978(*(undefined4 *)(_UNK_021107b8 + 0x21102a0));
        *pcVar8 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      iVar9 = func_0x0229f06c(0xa02c,0);
      if (iVar9 == 0) {
        if ((*(int *)(iVar1 + 8) != 0) &&
           (iVar9 = func_0x02139cf4(*(int *)(iVar1 + 8),0), iVar9 != 0)) {
          if (*(int *)(iVar1 + 0x14) == 0) {
            puVar11 = *(undefined4 **)(_UNK_021107bc + 0x2110634);
            uStack_3c = CONCAT13(*(undefined1 *)(iVar1 + 0xc),(undefined3)uStack_3c);
            uVar10 = func_0x01384abc(*puVar11,(int)&uStack_3c + 3);
            uStack_50 = *(undefined4 *)(iVar1 + 0x10);
            uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_021107c0 + 0x2110654),&uStack_50);
            uStack_3c._0_3_ = CONCAT12(*(undefined1 *)(iVar1 + 0x18),(undefined2)uStack_3c);
            uVar4 = func_0x01384abc(*puVar11,(int)&uStack_3c + 2);
            uVar10 = func_0x02450228(**(undefined4 **)(_UNK_021107c4 + 0x2110690),uVar10,uVar7,uVar4
                                     ,0);
            if (*(int *)(**(int **)(_UNK_021107c8 + 0x21106ac) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2944(uVar10,0);
          }
          else {
            iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_021107cc + 0x2110344));
            func_0x0328e950(iVar2,**(undefined4 **)(_UNK_021107d0 + 0x2110358));
            iVar1 = *(int *)(iVar1 + 0x14);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x03e70e70(iVar1,**(undefined4 **)(_UNK_021107d4 + 0x211037c));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x024548e0(&uStack_50,iVar1,**(undefined4 **)(_UNK_021107d8 + 0x21103a8));
            uStack_28 = uStack_40;
            uStack_38 = uStack_50;
            uStack_34 = uStack_4c;
            uStack_30 = uStack_48;
            uStack_2c = uStack_44;
            while (iVar1 = func_0x03fef520(&uStack_38,**(undefined4 **)(_UNK_021107e8 + 0x21103d4)),
                  iVar1 != 0) {
              iVar1 = func_0x020e81ec(iVar9,uStack_2c,uStack_28,0);
              iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_021107dc + 0x2110404));
              if (iVar1 == 0) {
                uVar10 = 0xffffffff;
              }
              else {
                uVar10 = func_0x0210e5f4(iVar1);
              }
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              iVar1 = FUN_01de25b0(iVar3,uVar10,0);
              if (*(int *)(**(int **)(_UNK_021107e0 + 0x2110454) + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar3 = func_0x0244fb8c(iVar1,0,0);
              if (iVar3 == 0) {
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x022a010c(iVar1,0);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = *(int *)(iVar2 + 8);
                uVar12 = *(uint *)(iVar2 + 0xc);
                piVar5 = *(int **)(_UNK_021107e4 + 0x21104c0);
                *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
                iVar13 = *piVar5;
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                if (uVar12 < *(uint *)(iVar3 + 0xc)) {
                  *(uint *)(iVar2 + 0xc) = uVar12 + 1;
                  *(int *)(iVar3 + uVar12 * 4 + 0x10) = iVar1;
                }
                else {
                  func_0x0328f170(iVar2,iVar1,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
                }
              }
            }
            func_0x03fef51c(&uStack_38,**(undefined4 **)(_UNK_021107ec + 0x2110514));
            iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_021107f4 + 0x2110528));
            piVar5 = *(int **)(_UNK_021107f8 + 0x211053c);
            iVar9 = *piVar5;
            if (*(int *)(iVar9 + 0x74) == 0) {
              func_0x01384ab4();
              iVar9 = *piVar5;
            }
            uVar10 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x40);
            piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_021107fc + 0x2110564),2);
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar2 != 0) &&
               (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar9 == 0)) {
              uVar7 = func_0x01384c10();
              func_0x01384aa0(uVar7,0);
            }
            if (piVar5[3] == 0) {
              func_0x01384bf4();
            }
            piVar5[4] = iVar2;
            if ((param_1 != (int *)0x0) &&
               (iVar9 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar5 + 0x20)), iVar9 == 0)) {
              uVar7 = func_0x01384c10();
              func_0x01384aa0(uVar7,0);
            }
            if ((uint)piVar5[3] < 2) {
              func_0x01384bf4();
            }
            piVar5[5] = (int)param_1;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01ee858c(iVar1,uVar10,piVar5,0);
          }
        }
      }
      else {
        iVar9 = func_0x0229f13c(0xa02c,0);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x02174108(iVar9,iVar1,param_1,0);
      }
      return;
    }
    iVar1 = func_0x0229f06c(0xa022,0);
    if (iVar1 == 0) {
      if ((char)param_1[2] == '\0') {
        pcVar6 = *(code **)(*param_1 + 0x100);
        uVar10 = *(undefined4 *)(*param_1 + 0x104);
        *(undefined1 *)(param_1 + 2) = 1;
        (*pcVar6)(param_1,uVar10);
                    /* WARNING: Could not recover jumptable at 0x01e0a588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
        return;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xa022,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa02b,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7);
  return;
}



// ===== FAT.BoardGirdRewardIntroStep$$CompleteWhenAnimFinish RVA 0x1dfad68 =====

void FUN_01e0ad68(int *param_1)

{
  int iVar1;
  code *pcVar2;
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
  
  iVar1 = func_0x0229f06c(0xa02e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0xa022,0);
    if (iVar1 == 0) {
      if ((char)param_1[2] == '\0') {
        pcVar2 = *(code **)(*param_1 + 0x100);
        uVar5 = *(undefined4 *)(*param_1 + 0x104);
        *(undefined1 *)(param_1 + 2) = 1;
        (*pcVar2)(param_1,uVar5);
                    /* WARNING: Could not recover jumptable at 0x01e0a588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
        return;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xa022,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa02e,0);
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
  return;
}



// ===== FAT.BoardGirdRewardIntroStep$$OnComplete RVA 0x1dfadc0 =====

void FUN_01e0adc0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa02f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0xa030,0);
    if (iVar1 == 0) {
      iVar1 = FUN_01e0a358(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar1 + 8) == 0) ||
         (param_1 = func_0x02141a78(*(int *)(iVar1 + 8),0), param_1 == 0)) {
        return;
      }
      iVar1 = func_0x0229f06c(0xa031,0);
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0x18) = 0;
        return;
      }
      iVar1 = func_0x0229f13c(0xa031,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xa030,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa02f,0);
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
  return;
}



// ===== FAT.BoardGirdRewardIntroStep$$_TryEndWaitAnim RVA 0x1dfae18 =====

void FUN_01e0ae18(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa030,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01e0a358(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar1 + 8) == 0) ||
       (param_1 = func_0x02141a78(*(int *)(iVar1 + 8),0), param_1 == 0)) {
      return;
    }
    iVar1 = func_0x0229f06c(0xa031,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0xa031,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa030,0);
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
  return;
}



// ===== FAT.BoardGirdRewardIntroStep$$OnInterrupted RVA 0x1dfaea8 =====

void FUN_01e0aea8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa032,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0xa030,0);
    if (iVar1 == 0) {
      iVar1 = FUN_01e0a358(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar1 + 8) == 0) ||
         (param_1 = func_0x02141a78(*(int *)(iVar1 + 8),0), param_1 == 0)) {
        return;
      }
      iVar1 = func_0x0229f06c(0xa031,0);
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0x18) = 0;
        return;
      }
      iVar1 = func_0x0229f13c(0xa031,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xa030,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa032,0);
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
  return;
}



// ===== FAT.BoardGirdRewardIntroStep$$<>iFixBaseProxy_CheckCondition RVA 0x1dfaf00 =====

undefined4 thunk_FUN_01e0a450(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f5f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f5f,0);
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
  return 1;
}



// ===== FAT.BoardGirdRewardIntroStep$$<>iFixBaseProxy_OnComplete RVA 0x1dfaf04 =====

void thunk_FUN_01e0a58c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xa024,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xa024,0);
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
  return;
}



// ===== FAT.BoardGirdRewardIntroStep$$<>iFixBaseProxy_OnInterrupted RVA 0x1dfaf08 =====

void thunk_FUN_01e0a5d8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f6a,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5f6a,0);
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
  return;
}



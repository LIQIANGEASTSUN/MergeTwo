/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.HandbookMan$$IsHandbookOpen RVA 0x1cb0f70 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc0f70(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
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
  
  iVar3 = func_0x0229f06c(0x96b0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x96b0,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar10 = *(int *)(iVar3 + 8);
    uVar12 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar3 == 0) {
      uVar8 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar10,uVar12,&uStack_30,uVar8);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x60);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x0229f06c(0xf6,0);
  if (iVar10 == 0) {
    iVar10 = func_0x0229f06c(0xf7,0);
    if (iVar10 == 0) {
      iVar10 = func_0x01cc0400(iVar3,0xc);
      if (iVar10 != 0) {
        return 0;
      }
      pcVar9 = (char *)(_UNK_01cc09d4 + 0x1cc0538);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01cc09d8 + 0x1cc054c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09dc + 0x1cc0558));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e0 + 0x1cc0564));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e4 + 0x1cc0570));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e8 + 0x1cc057c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09ec + 0x1cc0588));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09f0 + 0x1cc0594));
        *pcVar9 = '\x01';
      }
      iVar10 = func_0x0229f06c(0xf9,0);
      if (iVar10 == 0) {
        iVar10 = *(int *)(iVar3 + 8);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x02451990(iVar10,0xc,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
        uVar4 = 1;
        if (iVar10 != 0) {
          iVar10 = func_0x01c24918(0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 8);
          iVar10 = *(int *)(iVar10 + 0x68);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02451948(iVar3,0xc,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar3 + 0x28)) {
            iVar11 = func_0x01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0x9c);
            uVar12 = *(undefined4 *)(iVar3 + 0x28);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x01c77708(iVar11,uVar12,0);
            if (iVar11 != 0) {
              return 1;
            }
          }
          iVar11 = func_0x01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0x48);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 0;
          iVar11 = func_0x01dd2b98(iVar11,0);
          iVar5 = *(int *)(iVar3 + 0x18);
          if (iVar5 <= iVar11) {
            iVar5 = *(int *)(iVar3 + 0x3c);
          }
          if (iVar5 <= iVar11) {
            iVar11 = *(int *)(iVar3 + 0x40);
            if (iVar11 == 0) {
              func_0x01384bf0();
              iVar5 = iRam0000000c;
              iVar11 = *(int *)(iVar3 + 0x40);
              if (iVar11 == 0) {
                func_0x01384bf0();
                iVar11 = 0;
              }
            }
            else {
              iVar5 = *(int *)(iVar11 + 0xc);
            }
            uVar4 = (uint)(iVar5 < 1);
            piVar1 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_01cc09fc + 0x1cc0758));
            piVar13 = *(int **)(_UNK_01cc0a00 + 0x1cc0770);
            piVar14 = *(int **)(_UNK_01cc0a04 + 0x1cc0778);
            do {
              if (piVar1 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar13) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc07d0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar13,0);
LAB_01cc07d0:
              iVar3 = (*(code *)*puVar2)(piVar1,puVar2[1]);
              if (iVar3 == 0) goto LAB_01cc0884;
              if (piVar1 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar14) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc0848;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar14,0);
LAB_01cc0848:
              uVar12 = (*(code *)*puVar2)(piVar1,puVar2[1]);
              if (iVar10 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x01e6c0b0(iVar10,uVar12,0);
            } while (iVar3 == 0);
            uVar4 = 1;
LAB_01cc0884:
            if (piVar1 != (int *)0x0) {
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar13[-1] == **(int **)(_UNK_01cc0a08 + 0x1cc089c)) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar13 * 8 + 0xc0);
                    goto LAB_01cc08e4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01cc0a08 + 0x1cc089c),0)
              ;
LAB_01cc08e4:
              (*(code *)*puVar2)(piVar1,puVar2[1]);
            }
          }
        }
        return uVar4;
      }
      iVar10 = func_0x0229f13c(0xf9,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar10 = func_0x0229f13c(0xf7,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar10 = func_0x0229f13c(0xf6,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0xc,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar10 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar3,0);
  func_0x01485238(&uStack_38,0xc,0);
  iVar11 = *(int *)(iVar10 + 8);
  uVar12 = *(undefined4 *)(iVar10 + 0xc);
  iVar3 = *(int *)(iVar10 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar3 == 0) {
    uVar8 = 2;
  }
  func_0x0245495c(iVar11,uVar12,&uStack_38,uVar8,0,0);
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.HandbookMan$$OpenUIHandbook RVA 0x1cb0ff4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc0ff4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
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
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01cc1194 + 0x1cc100c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc1198 + 0x1cc1020));
    func_0x01384978(*(undefined4 *)(_UNK_01cc119c + 0x1cc102c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc11a0 + 0x1cc1038));
    func_0x01384978(*(undefined4 *)(_UNK_01cc11a4 + 0x1cc1044));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x96b1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96b1,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = FUN_01cc0f70(param_1);
  if (iVar1 != 0) {
    uVar7 = func_0x01cc11b8(param_1);
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01cc11a8 + 0x1cc10bc));
    piVar5 = *(int **)(_UNK_01cc11ac + 0x1cc10d0);
    iVar6 = *piVar5;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x01384ab4();
      iVar6 = *piVar5;
    }
    uVar3 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xf4);
    piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01cc11b0 + 0x1cc10f4),1);
    uStack_1c = uVar7;
    iVar6 = func_0x01384abc(**(undefined4 **)(_UNK_01cc11b4 + 0x1cc1114),&uStack_1c);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar6 != 0) && (iVar2 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0)
       ) {
      uVar7 = func_0x01384c10();
      func_0x01384aa0(uVar7,0);
    }
    if (piVar5[3] == 0) {
      func_0x01384bf4();
    }
    piVar5[4] = iVar6;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee858c(iVar1,uVar3,piVar5,0);
  }
  return;
}



// ===== FAT.HandbookMan$$GetNextRewardableGroupId RVA 0x1cb11b8 =====

/* WARNING: Removing unreachable block (ram,0x01cc13ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cc11b8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
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
  
  pcVar4 = (char *)(_UNK_01cc14c8 + 0x1cc11d0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc14cc + 0x1cc11e4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc14d0 + 0x1cc11f0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc14d4 + 0x1cc11fc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc14d8 + 0x1cc1208));
    func_0x01384978(*(undefined4 *)(_UNK_01cc14dc + 0x1cc1214));
    func_0x01384978(*(undefined4 *)(_UNK_01cc14e0 + 0x1cc1220));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_1c = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x96b2,0);
  if (iVar2 == 0) {
    piVar5 = *(int **)(_UNK_01cc14e4 + 0x1cc1298);
    iVar2 = *piVar5;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar5;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_28,iVar2,&iStack_1c,**(undefined4 **)(_UNK_01cc14e8 + 0x1cc12d4));
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = iStack_1c;
    iVar2 = *(int *)(iVar2 + 0x50);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc7468(iVar2,iVar1,0);
    iVar2 = iStack_1c;
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&uStack_48,iVar2,**(undefined4 **)(_UNK_01cc14ec + 0x1cc1334));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    puVar6 = *(undefined4 **)(_UNK_01cc14f0 + 0x1cc1358);
    do {
      iVar2 = func_0x01470118(&uStack_38,*puVar6);
      uVar3 = uStack_2c;
      if (iVar2 == 0) {
        uVar3 = 0;
        break;
      }
      iVar2 = func_0x01cc3738(param_1,uStack_2c);
    } while (iVar2 < 1);
    func_0x02450828(&uStack_38,**(undefined4 **)(_UNK_01cc14f4 + 0x1cc139c));
    func_0x028c98a0(&uStack_28,0);
  }
  else {
    iVar2 = func_0x0229f13c(0x96b2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0217493c(iVar2,param_1,0);
  }
  return uVar3;
}



// ===== FAT.HandbookMan$$UnlockHandbookItem RVA 0x1cb14fc =====

void FUN_01cc14fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x7a92,0);
  if (iVar1 == 0) {
    func_0x01cc157c(param_1,param_2,0,param_3);
  }
  else {
    iVar1 = func_0x0229f13c(0x7a92,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f950(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.HandbookMan$$_TrySetItemUnlock RVA 0x1cb157c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc157c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01cc16a4 + 0x1cc159c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc16a8 + 0x1cc15b4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc16ac + 0x1cc15c0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a93,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x028cde6c(iVar1,param_2,0);
    if (iVar1 != 0) {
      func_0x02f622a4(*(undefined4 *)(param_1 + 0x18),param_2,
                      **(undefined4 **)(_UNK_01cc16b0 + 0x1cc1650));
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02450a00(iVar1,param_2,param_3,**(undefined4 **)(_UNK_01cc16b4 + 0x1cc167c));
      if (param_4 != 0) {
        pcVar3 = (char *)(_UNK_01cc1ca4 + 0x1cc1b30);
        if (*pcVar3 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01cc1ca8 + 0x1cc1b44));
          func_0x01384978(*(undefined4 *)(_UNK_01cc1cac + 0x1cc1b50));
          func_0x01384978(*(undefined4 *)(_UNK_01cc1cb0 + 0x1cc1b5c));
          func_0x01384978(*(undefined4 *)(_UNK_01cc1cb4 + 0x1cc1b68));
          func_0x01384978(*(undefined4 *)(_UNK_01cc1cb8 + 0x1cc1b74));
          *pcVar3 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x7a94,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0x7a94,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_30 = 0;
          func_0x0245494c(&uStack_48,0,0);
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          iStack_28 = uStack_40;
          uStack_24 = uStack_3c;
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
          uVar2 = 2;
          if (iVar1 == 0) {
            uVar2 = 1;
          }
          func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
          return;
        }
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar1 + 0xc)) {
          func_0x01cc628c(param_1,*(undefined4 *)(param_1 + 0x18));
          func_0x01cc55ec(param_1,*(undefined4 *)(param_1 + 0x18));
          func_0x01cc5980(param_1);
          func_0x01cc7720(param_1);
          func_0x01cc7988(param_1);
          if (*(int *)(**(int **)(_UNK_01cc1cbc + 0x1cc1c18) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01cc1cc0 + 0x1cc1c34));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x028c3fd8(iVar1,0);
          iVar1 = *(int *)(param_1 + 0x18);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(param_1 + 0x1c);
          *(undefined4 *)(iVar1 + 0xc) = 0;
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar4 + 0x10);
          if (0 < iVar1) {
            iVar6 = *(int *)(iVar4 + 8);
            if (iVar6 == 0) {
              func_0x02457d50(iVar4,**(undefined4 **)(_UNK_01cc1cc4 + 0x1cc1c94));
            }
            func_0x0484e5ec(iVar6,0,*(undefined4 *)(iVar6 + 0xc),0);
            *(undefined4 *)(iVar4 + 0x14) = 0xffffffff;
            *(undefined4 *)(iVar4 + 0x10) = 0;
            *(undefined4 *)(iVar4 + 0x18) = 0;
            func_0x0484e5ec(*(undefined4 *)(iVar4 + 0xc),0,iVar1,0);
          }
          *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
          return;
        }
        return;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7a93,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    iStack_28 = param_4;
    func_0x0218d77c(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.HandbookMan$$UnlockHandbookItemList RVA 0x1cb16b8 =====

/* WARNING: Removing unreachable block (ram,0x01cc19ec) */
/* WARNING: Removing unreachable block (ram,0x01cc19f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc16b8(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_01cc1aec + 0x1cc16d8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc1af0 + 0x1cc16f0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1af4 + 0x1cc16fc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1af8 + 0x1cc1708));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1afc + 0x1cc1714));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1b00 + 0x1cc1720));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x96b4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96b4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    iStack_28 = param_4;
    func_0x021cf9b8(iVar1,param_1,param_2,param_3);
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01cc1b04 + 0x1cc1794)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01cc17dc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01cc1b04 + 0x1cc1794),0);
LAB_01cc17dc:
  iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
  if (iVar1 < 1) {
    return;
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01cc1b08 + 0x1cc1804)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01cc184c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01cc1b08 + 0x1cc1804),0);
LAB_01cc184c:
  piVar4 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
  piVar8 = *(int **)(_UNK_01cc1b0c + 0x1cc186c);
  piVar12 = *(int **)(_UNK_01cc1b10 + 0x1cc1874);
  do {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar8) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01cc18cc;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,*piVar8,0);
LAB_01cc18cc:
    iVar1 = (*(code *)*puVar2)(piVar4,puVar2[1]);
    if (iVar1 == 0) break;
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar12) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01cc1940;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,*piVar12,0);
LAB_01cc1940:
    iVar1 = (*(code *)*puVar2)(piVar4,puVar2[1]);
    FUN_01cc157c(param_1,iVar1,iVar1 != param_3,0);
  } while( true );
  if (piVar4 != (int *)0x0) {
    iVar1 = *piVar4;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01cc1b14 + 0x1cc198c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_01cc19d4;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01cc1b14 + 0x1cc198c),0);
LAB_01cc19d4:
    (*(code *)*puVar2)(piVar4,puVar2[1]);
  }
  if (param_4 == 0) {
    return;
  }
  pcVar7 = (char *)(_UNK_01cc1ca4 + 0x1cc1b30);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc1ca8 + 0x1cc1b44));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1cac + 0x1cc1b50));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1cb0 + 0x1cc1b5c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1cb4 + 0x1cc1b68));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1cb8 + 0x1cc1b74));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a94,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      func_0x01cc628c(param_1,*(undefined4 *)(param_1 + 0x18));
      func_0x01cc55ec(param_1,*(undefined4 *)(param_1 + 0x18));
      func_0x01cc5980(param_1);
      func_0x01cc7720(param_1);
      func_0x01cc7988(param_1);
      if (*(int *)(**(int **)(_UNK_01cc1cbc + 0x1cc1c18) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01cc1cc0 + 0x1cc1c34));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar1,0);
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar9 + 0x10);
      if (0 < iVar1) {
        iVar11 = *(int *)(iVar9 + 8);
        if (iVar11 == 0) {
          func_0x02457d50(iVar9,**(undefined4 **)(_UNK_01cc1cc4 + 0x1cc1c94));
        }
        func_0x0484e5ec(iVar11,0,*(undefined4 *)(iVar11 + 0xc),0);
        *(undefined4 *)(iVar9 + 0x14) = 0xffffffff;
        *(undefined4 *)(iVar9 + 0x10) = 0;
        *(undefined4 *)(iVar9 + 0x18) = 0;
        func_0x0484e5ec(*(undefined4 *)(iVar9 + 0xc),0,iVar1,0);
      }
      *(int *)(iVar9 + 0x1c) = *(int *)(iVar9 + 0x1c) + 1;
      return;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x7a94,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  iStack_28 = uStack_40;
  uStack_24 = uStack_3c;
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
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
  return;
}



// ===== FAT.HandbookMan$$_CheckCacheItemUnlockState RVA 0x1cb1b1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc1b1c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar3 = (char *)(_UNK_01cc1ca4 + 0x1cc1b30);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc1ca8 + 0x1cc1b44));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1cac + 0x1cc1b50));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1cb0 + 0x1cc1b5c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1cb4 + 0x1cc1b68));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1cb8 + 0x1cc1b74));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a94,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a94,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    func_0x01cc628c(param_1,*(undefined4 *)(param_1 + 0x18));
    func_0x01cc55ec(param_1,*(undefined4 *)(param_1 + 0x18));
    func_0x01cc5980(param_1);
    func_0x01cc7720(param_1);
    func_0x01cc7988(param_1);
    if (*(int *)(**(int **)(_UNK_01cc1cbc + 0x1cc1c18) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01cc1cc0 + 0x1cc1c34));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar1,0);
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar4 + 0x10);
    if (0 < iVar1) {
      iVar6 = *(int *)(iVar4 + 8);
      if (iVar6 == 0) {
        func_0x02457d50(iVar4,**(undefined4 **)(_UNK_01cc1cc4 + 0x1cc1c94));
      }
      func_0x0484e5ec(iVar6,0,*(undefined4 *)(iVar6 + 0xc),0);
      *(undefined4 *)(iVar4 + 0x14) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      func_0x0484e5ec(*(undefined4 *)(iVar4 + 0xc),0,iVar1,0);
    }
    *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
    return;
  }
  return;
}



// ===== FAT.HandbookMan$$LockHandbookItem RVA 0x1cb1cc8 =====

/* WARNING: Removing unreachable block (ram,0x01cc20bc) */
/* WARNING: Removing unreachable block (ram,0x01cc20b0) */
/* WARNING: Removing unreachable block (ram,0x01cc5e90) */
/* WARNING: Removing unreachable block (ram,0x01cc5f04) */
/* WARNING: Removing unreachable block (ram,0x01cc60b8) */
/* WARNING: Removing unreachable block (ram,0x01cc5f34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc1cc8(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int aiStack_28 [4];
  
  iVar2 = func_0x0229f06c(0x5b57,0);
  if (iVar2 == 0) {
    pcVar10 = (char *)(_UNK_01cc21c8 + 0x1cc1d48);
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc21cc + 0x1cc1d5c));
      func_0x01384978(*(undefined4 *)(_UNK_01cc21d0 + 0x1cc1d68));
      func_0x01384978(*(undefined4 *)(_UNK_01cc21d4 + 0x1cc1d74));
      func_0x01384978(*(undefined4 *)(_UNK_01cc21d8 + 0x1cc1d80));
      func_0x01384978(*(undefined4 *)(_UNK_01cc21dc + 0x1cc1d8c));
      func_0x01384978(*(undefined4 *)(_UNK_01cc21e0 + 0x1cc1d98));
      *pcVar10 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x5b58,0);
    if (iVar2 == 0) {
      if (param_2 != (int *)0x0) {
        iVar2 = *param_2;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01cc21e4 + 0x1cc1e04)) {
              puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
              goto LAB_01cc1e4c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01cc21e4 + 0x1cc1e04),0);
LAB_01cc1e4c:
        iVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
        if (0 < iVar2) {
          iVar2 = *param_2;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01cc21e8 + 0x1cc1e74)) {
                puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
                goto LAB_01cc1ebc;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01cc21e8 + 0x1cc1e74),0);
LAB_01cc1ebc:
          piVar7 = (int *)(*(code *)*puVar3)(param_2,puVar3[1]);
          piVar13 = *(int **)(_UNK_01cc21ec + 0x1cc1edc);
          piVar14 = *(int **)(_UNK_01cc21f0 + 0x1cc1ee4);
          puVar3 = *(undefined4 **)(_UNK_01cc21f4 + 0x1cc1eec);
          do {
            if (piVar7 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = *piVar7;
            uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar8[-1] == *piVar13) {
                  puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                  goto LAB_01cc1f44;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar7,*piVar13,0);
LAB_01cc1f44:
            iVar2 = (*(code *)*puVar4)(piVar7,puVar4[1]);
            if (iVar2 == 0) goto LAB_01cc2030;
            if (piVar7 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = *piVar7;
            uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar8[-1] == *piVar14) {
                  puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                  goto LAB_01cc1fb8;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar7,*piVar14,0);
LAB_01cc1fb8:
            uVar12 = (*(code *)*puVar4)(piVar7,puVar4[1]);
            iVar2 = *(int *)(param_1 + 0xc);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x028ce234(iVar2,uVar12,0);
            iVar2 = *(int *)(param_1 + 0x10);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x028ce234(iVar2,uVar12,0);
            iVar2 = *(int *)(param_1 + 0x1c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x02451994(iVar2,uVar12,*puVar3);
          } while( true );
        }
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x5b58,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5b57,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  aiStack_28[0] = 0;
  func_0x0245494c(&iStack_50,0,param_2,0);
  uStack_38 = iStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = iStack_44;
  aiStack_28[0] = iStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar11 = *(int *)(iVar2 + 8);
  uVar12 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 3;
  if (iVar2 == 0) {
    uVar9 = 2;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  func_0x0245495c(iVar11,uVar12,&uStack_38,uVar9);
  return;
LAB_01cc2030:
  if (piVar7 != (int *)0x0) {
    iVar2 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar13[-1] == **(int **)(_UNK_01cc21f8 + 0x1cc2050)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar13 * 8 + 0xc0);
          goto LAB_01cc2098;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01cc21f8 + 0x1cc2050),0);
LAB_01cc2098:
    (*(code *)*puVar3)(piVar7,puVar3[1]);
  }
  func_0x01cc628c(param_1,param_2);
  pcVar10 = (char *)(_UNK_01cc6214 + 0x1cc5998);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc6218 + 0x1cc59ac));
    func_0x01384978(*(undefined4 *)(_UNK_01cc621c + 0x1cc59b8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6220 + 0x1cc59c4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6224 + 0x1cc59d0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6228 + 0x1cc59dc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc622c + 0x1cc59e8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6230 + 0x1cc59f4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6234 + 0x1cc5a00));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6238 + 0x1cc5a0c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc623c + 0x1cc5a18));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6240 + 0x1cc5a24));
    *pcVar10 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_28[0] = 0;
  iStack_40 = 0;
  iStack_60 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  iStack_44 = 0;
  uStack_4c = 0;
  iStack_50 = 0;
  iStack_64 = 0;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  iVar2 = func_0x0229f06c(0x5b5c,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar7 = *(int **)(_UNK_01cc6244 + 0x1cc5ac8);
    iVar11 = *(int *)(iVar2 + 0x50);
    iVar2 = *piVar7;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar7;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar2,aiStack_28,**(undefined4 **)(_UNK_01cc6248 + 0x1cc5b08));
    iVar2 = aiStack_28[0];
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc7468(iVar11,iVar2,0);
    iVar2 = aiStack_28[0];
    if (aiStack_28[0] == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&iStack_78,iVar2,**(undefined4 **)(_UNK_01cc624c + 0x1cc5b4c));
    iStack_40 = iStack_78;
    uStack_3c = uStack_74;
    uStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    piVar7 = *(int **)(_UNK_01cc6250 + 0x1cc5b74);
    do {
      iVar2 = func_0x01470118(&iStack_40,**(undefined4 **)(_UNK_01cc627c + 0x1cc5b80));
      uVar12 = uStack_34;
      piVar13 = *(int **)(_UNK_01cc6280 + 0x1cc5ba0);
      if (iVar2 == 0) {
        iVar2 = 10;
        break;
      }
      iVar2 = *piVar13;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar13;
      }
      iVar2 = **(int **)(iVar2 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&iStack_78,iVar2,&iStack_44,**(undefined4 **)(_UNK_01cc6254 + 0x1cc5bdc));
      iVar2 = iStack_44;
      uStack_4c = uStack_74;
      iStack_50 = iStack_78;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x01dc79d0(iVar11,uVar12,iVar2,0,0);
      iVar2 = iStack_44;
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      func_0x0325a3b4(&iStack_78,iVar2,**(undefined4 **)(_UNK_01cc6258 + 0x1cc5c44));
      iStack_60 = iStack_78;
      uStack_5c = uStack_74;
      uStack_58 = uStack_70;
      uStack_54 = uStack_6c;
      do {
        do {
          iVar2 = func_0x01470118(&iStack_60,**(undefined4 **)(_UNK_01cc626c + 0x1cc5c68));
          uVar12 = uStack_54;
          if (iVar2 == 0) {
            iVar2 = 3;
            goto LAB_01cc5ee8;
          }
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01db1884(iVar11,uVar12,0);
        } while (iVar2 == 0);
        iVar2 = *(int *)(iVar2 + 0x44);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar13 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01cc625c + 0x1cc5cc4));
        do {
          if (piVar13 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar13;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar14[-1] == *piVar7) {
                puVar3 = (undefined4 *)(iVar2 + *piVar14 * 8 + 0xc0);
                goto LAB_01cc5d2c;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar13,*piVar7,0);
LAB_01cc5d2c:
          iVar2 = (*(code *)*puVar3)(piVar13,puVar3[1]);
          if (iVar2 == 0) {
            iVar2 = 5;
            goto LAB_01cc5e18;
          }
          if (piVar13 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar13;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar14[-1] == **(int **)(_UNK_01cc6260 + 0x1cc5d64)) {
                puVar3 = (undefined4 *)(iVar2 + *piVar14 * 8 + 0xc0);
                goto LAB_01cc5dac;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(_UNK_01cc6260 + 0x1cc5d64),0);
LAB_01cc5dac:
          uVar12 = (*(code *)*puVar3)(piVar13,puVar3[1]);
          iVar2 = *(int *)(param_1 + 0x14);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          bVar1 = func_0x02451924(iVar2,uVar12,&iStack_64,
                                  **(undefined4 **)(_UNK_01cc6264 + 0x1cc5ddc));
        } while ((bVar1 & iStack_64 == 2) == 0);
        iVar2 = 9;
        *(undefined1 *)(param_1 + 8) = 1;
LAB_01cc5e18:
        if (piVar13 != (int *)0x0) {
          iVar5 = *piVar13;
          uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(int *)(iVar5 + 0x58) + 4);
            do {
              if (piVar14[-1] == **(int **)(_UNK_01cc6268 + 0x1cc5e30)) {
                puVar3 = (undefined4 *)(iVar5 + *piVar14 * 8 + 0xc0);
                goto LAB_01cc5e78;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(_UNK_01cc6268 + 0x1cc5e30),0);
LAB_01cc5e78:
          (*(code *)*puVar3)(piVar13,puVar3[1]);
        }
      } while (iVar2 == 5 || iVar2 == 0);
LAB_01cc5ee8:
      func_0x02450828(&iStack_60,**(undefined4 **)(_UNK_01cc6274 + 0x1cc5ef4));
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      func_0x028c98a0(&iStack_50,0);
    } while (iVar2 == 3 || iVar2 == 0);
    func_0x02450828(&iStack_40,**(undefined4 **)(_UNK_01cc6284 + 0x1cc60a4));
    func_0x028c98a0(&uStack_30,0);
    if (iVar2 == 0 || iVar2 == 10) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5b5c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.HandbookMan$$_TrySetItemLock RVA 0x1cb1d2c =====

/* WARNING: Removing unreachable block (ram,0x01cc20bc) */
/* WARNING: Removing unreachable block (ram,0x01cc20b0) */
/* WARNING: Removing unreachable block (ram,0x01cc5e90) */
/* WARNING: Removing unreachable block (ram,0x01cc5f04) */
/* WARNING: Removing unreachable block (ram,0x01cc60b8) */
/* WARNING: Removing unreachable block (ram,0x01cc5f34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc1d2c(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01cc21c8 + 0x1cc1d48);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc21cc + 0x1cc1d5c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc21d0 + 0x1cc1d68));
    func_0x01384978(*(undefined4 *)(_UNK_01cc21d4 + 0x1cc1d74));
    func_0x01384978(*(undefined4 *)(_UNK_01cc21d8 + 0x1cc1d80));
    func_0x01384978(*(undefined4 *)(_UNK_01cc21dc + 0x1cc1d8c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc21e0 + 0x1cc1d98));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5b58,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5b58,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    uStack_38 = iStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar2 == 0) {
      uVar9 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0245495c(iVar11,uVar12,&uStack_38,uVar9);
    return;
  }
  if (param_2 != (int *)0x0) {
    iVar2 = *param_2;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01cc21e4 + 0x1cc1e04)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01cc1e4c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01cc21e4 + 0x1cc1e04),0);
LAB_01cc1e4c:
    iVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (0 < iVar2) {
      iVar2 = *param_2;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01cc21e8 + 0x1cc1e74)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_01cc1ebc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01cc21e8 + 0x1cc1e74),0);
LAB_01cc1ebc:
      piVar7 = (int *)(*(code *)*puVar3)(param_2,puVar3[1]);
      piVar13 = *(int **)(_UNK_01cc21ec + 0x1cc1edc);
      piVar14 = *(int **)(_UNK_01cc21f0 + 0x1cc1ee4);
      puVar3 = *(undefined4 **)(_UNK_01cc21f4 + 0x1cc1eec);
      do {
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar7;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar13) {
              puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
              goto LAB_01cc1f44;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar7,*piVar13,0);
LAB_01cc1f44:
        iVar2 = (*(code *)*puVar4)(piVar7,puVar4[1]);
        if (iVar2 == 0) goto LAB_01cc2030;
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar7;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar14) {
              puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
              goto LAB_01cc1fb8;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar7,*piVar14,0);
LAB_01cc1fb8:
        uVar12 = (*(code *)*puVar4)(piVar7,puVar4[1]);
        iVar2 = *(int *)(param_1 + 0xc);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x028ce234(iVar2,uVar12,0);
        iVar2 = *(int *)(param_1 + 0x10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x028ce234(iVar2,uVar12,0);
        iVar2 = *(int *)(param_1 + 0x1c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02451994(iVar2,uVar12,*puVar3);
      } while( true );
    }
  }
  return;
LAB_01cc2030:
  if (piVar7 != (int *)0x0) {
    iVar2 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar13[-1] == **(int **)(_UNK_01cc21f8 + 0x1cc2050)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar13 * 8 + 0xc0);
          goto LAB_01cc2098;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01cc21f8 + 0x1cc2050),0);
LAB_01cc2098:
    (*(code *)*puVar3)(piVar7,puVar3[1]);
  }
  func_0x01cc628c(param_1,param_2);
  pcVar10 = (char *)(_UNK_01cc6214 + 0x1cc5998);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc6218 + 0x1cc59ac));
    func_0x01384978(*(undefined4 *)(_UNK_01cc621c + 0x1cc59b8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6220 + 0x1cc59c4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6224 + 0x1cc59d0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6228 + 0x1cc59dc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc622c + 0x1cc59e8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6230 + 0x1cc59f4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6234 + 0x1cc5a00));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6238 + 0x1cc5a0c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc623c + 0x1cc5a18));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6240 + 0x1cc5a24));
    *pcVar10 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  iStack_40 = 0;
  iStack_60 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  iStack_44 = 0;
  uStack_4c = 0;
  iStack_50 = 0;
  iStack_64 = 0;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  iVar2 = func_0x0229f06c(0x5b5c,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar7 = *(int **)(_UNK_01cc6244 + 0x1cc5ac8);
    iVar11 = *(int *)(iVar2 + 0x50);
    iVar2 = *piVar7;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar7;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar2,&iStack_28,**(undefined4 **)(_UNK_01cc6248 + 0x1cc5b08));
    iVar2 = iStack_28;
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc7468(iVar11,iVar2,0);
    iVar2 = iStack_28;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&iStack_78,iVar2,**(undefined4 **)(_UNK_01cc624c + 0x1cc5b4c));
    iStack_40 = iStack_78;
    uStack_3c = uStack_74;
    uStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    piVar7 = *(int **)(_UNK_01cc6250 + 0x1cc5b74);
    do {
      iVar2 = func_0x01470118(&iStack_40,**(undefined4 **)(_UNK_01cc627c + 0x1cc5b80));
      uVar12 = uStack_34;
      piVar13 = *(int **)(_UNK_01cc6280 + 0x1cc5ba0);
      if (iVar2 == 0) {
        iVar2 = 10;
        break;
      }
      iVar2 = *piVar13;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar13;
      }
      iVar2 = **(int **)(iVar2 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&iStack_78,iVar2,&iStack_44,**(undefined4 **)(_UNK_01cc6254 + 0x1cc5bdc));
      iVar2 = iStack_44;
      uStack_4c = uStack_74;
      iStack_50 = iStack_78;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x01dc79d0(iVar11,uVar12,iVar2,0,0);
      iVar2 = iStack_44;
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      func_0x0325a3b4(&iStack_78,iVar2,**(undefined4 **)(_UNK_01cc6258 + 0x1cc5c44));
      iStack_60 = iStack_78;
      uStack_5c = uStack_74;
      uStack_58 = uStack_70;
      uStack_54 = uStack_6c;
      do {
        do {
          iVar2 = func_0x01470118(&iStack_60,**(undefined4 **)(_UNK_01cc626c + 0x1cc5c68));
          uVar12 = uStack_54;
          if (iVar2 == 0) {
            iVar2 = 3;
            goto LAB_01cc5ee8;
          }
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01db1884(iVar11,uVar12,0);
        } while (iVar2 == 0);
        iVar2 = *(int *)(iVar2 + 0x44);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar13 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01cc625c + 0x1cc5cc4));
        do {
          if (piVar13 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar13;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar14[-1] == *piVar7) {
                puVar3 = (undefined4 *)(iVar2 + *piVar14 * 8 + 0xc0);
                goto LAB_01cc5d2c;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar13,*piVar7,0);
LAB_01cc5d2c:
          iVar2 = (*(code *)*puVar3)(piVar13,puVar3[1]);
          if (iVar2 == 0) {
            iVar2 = 5;
            goto LAB_01cc5e18;
          }
          if (piVar13 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar13;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar14[-1] == **(int **)(_UNK_01cc6260 + 0x1cc5d64)) {
                puVar3 = (undefined4 *)(iVar2 + *piVar14 * 8 + 0xc0);
                goto LAB_01cc5dac;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(_UNK_01cc6260 + 0x1cc5d64),0);
LAB_01cc5dac:
          uVar12 = (*(code *)*puVar3)(piVar13,puVar3[1]);
          iVar2 = *(int *)(param_1 + 0x14);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          bVar1 = func_0x02451924(iVar2,uVar12,&iStack_64,
                                  **(undefined4 **)(_UNK_01cc6264 + 0x1cc5ddc));
        } while ((bVar1 & iStack_64 == 2) == 0);
        iVar2 = 9;
        *(undefined1 *)(param_1 + 8) = 1;
LAB_01cc5e18:
        if (piVar13 != (int *)0x0) {
          iVar5 = *piVar13;
          uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(int *)(iVar5 + 0x58) + 4);
            do {
              if (piVar14[-1] == **(int **)(_UNK_01cc6268 + 0x1cc5e30)) {
                puVar3 = (undefined4 *)(iVar5 + *piVar14 * 8 + 0xc0);
                goto LAB_01cc5e78;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar13,**(int **)(_UNK_01cc6268 + 0x1cc5e30),0);
LAB_01cc5e78:
          (*(code *)*puVar3)(piVar13,puVar3[1]);
        }
      } while (iVar2 == 5 || iVar2 == 0);
LAB_01cc5ee8:
      func_0x02450828(&iStack_60,**(undefined4 **)(_UNK_01cc6274 + 0x1cc5ef4));
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      func_0x028c98a0(&iStack_50,0);
    } while (iVar2 == 3 || iVar2 == 0);
    func_0x02450828(&iStack_40,**(undefined4 **)(_UNK_01cc6284 + 0x1cc60a4));
    func_0x028c98a0(&uStack_30,0);
    if (iVar2 == 0 || iVar2 == 10) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5b5c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.HandbookMan$$TryClaimHandbookReward RVA 0x1cb2200 =====

/* WARNING: Removing unreachable block (ram,0x01cc2804) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc2200(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int aiStack_30 [3];
  
  pcVar9 = (char *)(_UNK_01cc22f0 + 0x1cc2220);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc22f4 + 0x1cc2240));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7881,0);
  if (iVar1 == 0) {
    piVar10 = *(int **)(_UNK_01cc22f8 + 0x1cc22b4);
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar10;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x5c);
    *puVar3 = param_3;
    puVar3[1] = param_4;
    puVar3[2] = param_5;
    pcVar9 = (char *)(_UNK_01cc2998 + 0x1cc231c);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc299c + 0x1cc2330));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29a0 + 0x1cc233c));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29a4 + 0x1cc2348));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29a8 + 0x1cc2354));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29ac + 0x1cc2360));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29b0 + 0x1cc236c));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29b4 + 0x1cc2378));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29b8 + 0x1cc2384));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29bc + 0x1cc2390));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29c0 + 0x1cc239c));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29c4 + 0x1cc23a8));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29c8 + 0x1cc23b4));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29cc + 0x1cc23c0));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29d0 + 0x1cc23cc));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29d4 + 0x1cc23d8));
      func_0x01384978(*(undefined4 *)(_UNK_01cc29d8 + 0x1cc23e4));
      *pcVar9 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar2 = 0;
    aiStack_30[2] = 0;
    uStack_40 = 0;
    aiStack_30[1] = 0;
    aiStack_30[0] = 0;
    iVar1 = func_0x0229f06c(0x7882,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01cc3dbc(param_1,param_2);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 0;
        iVar1 = func_0x028cde6c(iVar1,param_2,0);
        if (iVar1 != 0) {
          func_0x01cc68cc(param_1,param_2);
          func_0x019a5fa4(param_2,0);
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x38);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01cccae0(iVar1,param_2,0);
          if (iVar1 != 0) {
            uVar7 = *(undefined4 *)(iVar1 + 0x5c);
            if (*(int *)(**(int **)(_UNK_01cc29dc + 0x1cc2500) + 0x74) == 0) {
              func_0x01384ab4(**(int **)(_UNK_01cc29dc + 0x1cc2500));
            }
            iVar1 = func_0x02565a88(uVar7,0);
            if (iVar1 != 0) {
              piVar10 = *(int **)(_UNK_01cc29e0 + 0x1cc253c);
              iVar4 = *piVar10;
              if (*(int *)(iVar4 + 0x74) == 0) {
                func_0x01384ab4();
                iVar4 = *piVar10;
              }
              iVar4 = **(int **)(iVar4 + 0x5c);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              func_0x0359c380(aiStack_30,iVar4,aiStack_30 + 2,
                              **(undefined4 **)(_UNK_01cc29e4 + 0x1cc2578));
              iVar4 = aiStack_30[2];
              iVar5 = func_0x01c24918(0);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              piVar10 = *(int **)(_UNK_01cc29e8 + 0x1cc25b0);
              uVar12 = *(undefined4 *)(iVar1 + 8);
              uVar7 = *(undefined4 *)(iVar1 + 0xc);
              iVar1 = *piVar10;
              iVar5 = *(int *)(iVar5 + 0x40);
              if (*(int *)(iVar1 + 0x74) == 0) {
                func_0x01384ab4();
                iVar1 = *piVar10;
              }
              uVar8 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              uVar7 = func_0x01cdcbac(iVar5,uVar12,uVar7,uVar8,0,0,0,0x288,
                                      **(undefined4 **)(_UNK_01cc29ec + 0x1cc25f0),
                                      **(undefined4 **)(_UNK_01cc29f0 + 0x1cc25fc),0);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              iVar1 = *(int *)(iVar4 + 8);
              uVar2 = *(uint *)(iVar4 + 0xc);
              piVar10 = *(int **)(_UNK_01cc29f4 + 0x1cc2660);
              *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
              iVar5 = *piVar10;
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              if (uVar2 < *(uint *)(iVar1 + 0xc)) {
                *(uint *)(iVar4 + 0xc) = uVar2 + 1;
                *(undefined4 *)(iVar1 + uVar2 * 4 + 0x10) = uVar7;
              }
              else {
                func_0x0328f170(iVar4,uVar7,
                                *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
              }
              iVar1 = aiStack_30[2];
              if (aiStack_30[2] == 0) {
                func_0x01384bf0();
              }
              func_0x0328fe1c(&uStack_50,iVar1,**(undefined4 **)(_UNK_01cc29f8 + 0x1cc26c0));
              uStack_40 = uStack_50;
              uStack_3c = uStack_4c;
              uStack_38 = uStack_48;
              uStack_34 = uStack_44;
              puVar3 = *(undefined4 **)(_UNK_01cc29fc + 0x1cc26ec);
              piVar13 = *(int **)(_UNK_01cc2a00 + 0x1cc26f4);
              piVar10 = *(int **)(_UNK_01cc2a04 + 0x1cc26fc);
              while (iVar1 = func_0x0145b12c(&uStack_40,*puVar3), uVar7 = uStack_34, iVar1 != 0) {
                iVar1 = *piVar13;
                if (param_6 == 0x17) {
                  if (*(int *)(iVar1 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar1 = *piVar13;
                  }
                  puVar6 = *(undefined4 **)(iVar1 + 0x5c);
                  iVar1 = *piVar10;
                  uVar8 = puVar6[2];
                  uVar12 = *puVar6;
                  uVar11 = puVar6[1];
                  if (*(int *)(iVar1 + 0x74) == 0) {
                    func_0x01384ab4(iVar1);
                  }
                  func_0x02072a58(uVar7,uVar12,uVar11,uVar8,0x17,0,0,0);
                }
                else {
                  if (*(int *)(iVar1 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar1 = *piVar13;
                  }
                  iVar4 = *piVar10;
                  puVar6 = *(undefined4 **)(iVar1 + 0x5c);
                  uVar12 = *puVar6;
                  uVar8 = puVar6[1];
                  uVar11 = puVar6[2];
                  if (*(int *)(iVar4 + 0x74) == 0) {
                    func_0x01384ab4(iVar4);
                  }
                  func_0x0206de24(uVar7,uVar12,uVar8,uVar11,0,0,0,0);
                }
              }
              func_0x0145b14c(&uStack_40,**(undefined4 **)(_UNK_01cc2a08 + 0x1cc27ec));
              func_0x028c98a0(aiStack_30,0);
            }
          }
          func_0x01cc5980(param_1);
          if (*(int *)(**(int **)(_UNK_01cc2a10 + 0x1cc283c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01cc2a14 + 0x1cc2858));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0349e110(iVar1,param_2,**(undefined4 **)(_UNK_01cc2a18 + 0x1cc287c));
          uVar2 = 1;
        }
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x7882,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x022526c4(iVar1,param_1,param_2,param_6,0);
    }
    return uVar2 & 1;
  }
  iVar1 = func_0x0229f13c(0x7881,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = param_5;
  aiStack_30[0] = param_6;
  aiStack_30[1] = 0;
  uStack_38 = param_4;
  uVar2 = func_0x022527bc(iVar1,param_1,param_2,param_3);
  return uVar2;
}



// ===== FAT.HandbookMan$$_TryClaimHandbookReward RVA 0x1cb22fc =====

/* WARNING: Removing unreachable block (ram,0x01cc2804) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc22fc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *piVar13;
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
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_01cc2998 + 0x1cc231c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc299c + 0x1cc2330));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29a0 + 0x1cc233c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29a4 + 0x1cc2348));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29a8 + 0x1cc2354));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29ac + 0x1cc2360));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29b0 + 0x1cc236c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29b4 + 0x1cc2378));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29b8 + 0x1cc2384));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29bc + 0x1cc2390));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29c0 + 0x1cc239c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29c4 + 0x1cc23a8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29c8 + 0x1cc23b4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29cc + 0x1cc23c0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29d0 + 0x1cc23cc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29d4 + 0x1cc23d8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc29d8 + 0x1cc23e4));
    *pcVar5 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar9 = 0;
  iStack_28 = 0;
  uStack_40 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x7882,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01cc3dbc(param_1,param_2);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar9 = 0;
      iVar1 = func_0x028cde6c(iVar1,param_2,0);
      if (iVar1 != 0) {
        func_0x01cc68cc(param_1,param_2);
        func_0x019a5fa4(param_2,0);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x38);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01cccae0(iVar1,param_2,0);
        if (iVar1 != 0) {
          uVar6 = *(undefined4 *)(iVar1 + 0x5c);
          if (*(int *)(**(int **)(_UNK_01cc29dc + 0x1cc2500) + 0x74) == 0) {
            func_0x01384ab4(**(int **)(_UNK_01cc29dc + 0x1cc2500));
          }
          iVar1 = func_0x02565a88(uVar6,0);
          if (iVar1 != 0) {
            piVar7 = *(int **)(_UNK_01cc29e0 + 0x1cc253c);
            iVar2 = *piVar7;
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            iVar2 = **(int **)(iVar2 + 0x5c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x0359c380(&uStack_30,iVar2,&iStack_28,**(undefined4 **)(_UNK_01cc29e4 + 0x1cc2578)
                           );
            iVar2 = iStack_28;
            iVar3 = func_0x01c24918(0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            piVar7 = *(int **)(_UNK_01cc29e8 + 0x1cc25b0);
            uVar12 = *(undefined4 *)(iVar1 + 8);
            uVar6 = *(undefined4 *)(iVar1 + 0xc);
            iVar1 = *piVar7;
            iVar3 = *(int *)(iVar3 + 0x40);
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar7;
            }
            uVar8 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uVar6 = func_0x01cdcbac(iVar3,uVar12,uVar6,uVar8,0,0,0,0x288,
                                    **(undefined4 **)(_UNK_01cc29ec + 0x1cc25f0),
                                    **(undefined4 **)(_UNK_01cc29f0 + 0x1cc25fc),0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar2 + 8);
            uVar9 = *(uint *)(iVar2 + 0xc);
            piVar7 = *(int **)(_UNK_01cc29f4 + 0x1cc2660);
            *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
            iVar3 = *piVar7;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            if (uVar9 < *(uint *)(iVar1 + 0xc)) {
              *(uint *)(iVar2 + 0xc) = uVar9 + 1;
              *(undefined4 *)(iVar1 + uVar9 * 4 + 0x10) = uVar6;
            }
            else {
              func_0x0328f170(iVar2,uVar6,
                              *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
            }
            iVar1 = iStack_28;
            if (iStack_28 == 0) {
              func_0x01384bf0();
            }
            func_0x0328fe1c(&uStack_50,iVar1,**(undefined4 **)(_UNK_01cc29f8 + 0x1cc26c0));
            uStack_40 = uStack_50;
            uStack_3c = uStack_4c;
            uStack_38 = uStack_48;
            uStack_34 = uStack_44;
            puVar11 = *(undefined4 **)(_UNK_01cc29fc + 0x1cc26ec);
            piVar13 = *(int **)(_UNK_01cc2a00 + 0x1cc26f4);
            piVar7 = *(int **)(_UNK_01cc2a04 + 0x1cc26fc);
            while (iVar1 = func_0x0145b12c(&uStack_40,*puVar11), uVar6 = uStack_34, iVar1 != 0) {
              iVar1 = *piVar13;
              if (param_3 == 0x17) {
                if (*(int *)(iVar1 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar1 = *piVar13;
                }
                puVar4 = *(undefined4 **)(iVar1 + 0x5c);
                iVar1 = *piVar7;
                uVar8 = puVar4[2];
                uVar12 = *puVar4;
                uVar10 = puVar4[1];
                if (*(int *)(iVar1 + 0x74) == 0) {
                  func_0x01384ab4(iVar1);
                }
                func_0x02072a58(uVar6,uVar12,uVar10,uVar8,0x17,0,0,0);
              }
              else {
                if (*(int *)(iVar1 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar1 = *piVar13;
                }
                iVar2 = *piVar7;
                puVar4 = *(undefined4 **)(iVar1 + 0x5c);
                uVar12 = *puVar4;
                uVar8 = puVar4[1];
                uVar10 = puVar4[2];
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4(iVar2);
                }
                func_0x0206de24(uVar6,uVar12,uVar8,uVar10,0,0,0,0);
              }
            }
            func_0x0145b14c(&uStack_40,**(undefined4 **)(_UNK_01cc2a08 + 0x1cc27ec));
            func_0x028c98a0(&uStack_30,0);
          }
        }
        func_0x01cc5980(param_1);
        if (*(int *)(**(int **)(_UNK_01cc2a10 + 0x1cc283c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01cc2a14 + 0x1cc2858));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0349e110(iVar1,param_2,**(undefined4 **)(_UNK_01cc2a18 + 0x1cc287c));
        uVar9 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7882,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x022526c4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar9 & 1;
}



// ===== FAT.HandbookMan$$TryClaimBoardHandbookReward RVA 0x1cb2a1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc2a1c(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_01cc2cb8 + 0x1cc2a3c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc2cbc + 0x1cc2a54));
    func_0x01384978(*(undefined4 *)(_UNK_01cc2cc0 + 0x1cc2a60));
    func_0x01384978(*(undefined4 *)(_UNK_01cc2cc4 + 0x1cc2a6c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc2cc8 + 0x1cc2a78));
    func_0x01384978(*(undefined4 *)(_UNK_01cc2ccc + 0x1cc2a84));
    *pcVar9 = '\x01';
  }
  uStack_28 = 0;
  iVar3 = func_0x0229f06c(0x7880,0);
  if (iVar3 == 0) {
    if (param_2 != (int *)0x0) {
      iVar3 = FUN_01cc2200(param_1,param_3,param_4,param_5,param_6,param_7);
      if (iVar3 != 0) {
        uVar4 = func_0x01cc2ce4(param_1,param_2,param_3,&uStack_28);
        iVar3 = *param_2;
        piVar10 = *(int **)(_UNK_01cc2cd0 + 0x1cc2b4c);
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        iVar6 = *piVar10;
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar8[-1] == iVar6) {
              puVar5 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xe0);
              goto LAB_01cc2b94;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(param_2,iVar6,4);
LAB_01cc2b94:
        iVar3 = (*(code *)*puVar5)(param_2,puVar5[1]);
        piVar8 = (int *)0x0;
        if (iVar3 != 0) {
          iVar3 = *param_2;
          iVar6 = *piVar10;
          uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar8[-1] == iVar6) {
                puVar5 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xe8);
                goto LAB_01cc2c04;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(param_2,iVar6,5,piVar8);
LAB_01cc2c04:
          piVar8 = (int *)(*(code *)*puVar5)(param_2,puVar5[1]);
        }
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x03921380(&uStack_30,param_3,uVar4,piVar8,**(undefined4 **)(_UNK_01cc2cd4 + 0x1cc2c2c)
                       );
        uVar1 = uStack_2c;
        uVar4 = uStack_30;
        if (*(int *)(**(int **)(_UNK_01cc2cd8 + 0x1cc2c4c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_01cc2cdc + 0x1cc2c70));
        uVar2 = uStack_28;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x034a72f0(iVar3,param_2,uVar4,uVar1,uVar2,**(undefined4 **)(_UNK_01cc2ce0 + 0x1cc2ca0)
                       );
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x7880,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02252920(iVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}



// ===== FAT.HandbookMan$$_ProcessChainReward RVA 0x1cb2ce4 =====

/* WARNING: Removing unreachable block (ram,0x01cc3244) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cc2ce4(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  
  pcVar9 = (char *)(_UNK_01cc3334 + 0x1cc2d04);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc3338 + 0x1cc2d1c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc333c + 0x1cc2d28));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3340 + 0x1cc2d34));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3344 + 0x1cc2d40));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3348 + 0x1cc2d4c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc334c + 0x1cc2d58));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3350 + 0x1cc2d64));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3354 + 0x1cc2d70));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3358 + 0x1cc2d7c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc335c + 0x1cc2d88));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3360 + 0x1cc2d94));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3364 + 0x1cc2da0));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7884,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01cc3368 + 0x1cc2e08));
    func_0x0328e950(iVar1,**(undefined4 **)(_UNK_01cc336c + 0x1cc2e1c));
    *param_4 = iVar1;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x01dd0230(iVar1,param_3,0);
    if (iVar1 != 0) {
      uVar10 = *(undefined4 *)(iVar1 + 0x10);
      if (param_2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *param_2;
      uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01cc3370 + 0x1cc2e90)) {
            puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xd8);
            goto LAB_01cc2ed8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01cc3370 + 0x1cc2e90),3);
LAB_01cc2ed8:
      iVar3 = (*(code *)*puVar4)(param_2,uVar10,puVar4[1]);
      if (iVar3 != 0) {
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x3c);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x01cc33a0(iVar3,param_3);
        uVar2 = 0;
        if (iVar3 != 0) {
          uVar2 = 0;
          iVar1 = func_0x0185597c(*(undefined4 *)(iVar1 + 0x10),0);
          if (iVar1 != 0) {
            iVar1 = *(int *)(iVar1 + 0x14);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            piVar6 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_01cc3374 + 0x1cc2f68));
LAB_01cc2f78:
            if (piVar6 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar6;
            uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar5 != 0) {
              piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar7[-1] == **(int **)(_UNK_01cc3394 + 0x1cc2f94)) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                  goto LAB_01cc2fdc;
                }
                uVar5 = uVar5 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01cc3394 + 0x1cc2f94),0);
LAB_01cc2fdc:
            iVar1 = (*(code *)*puVar4)(piVar6,puVar4[1]);
            if (iVar1 != 0) {
              if (piVar6 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar6;
              uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar5 != 0) {
                piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar7[-1] == **(int **)(_UNK_01cc3378 + 0x1cc3010)) {
                    puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc3058;
                  }
                  uVar5 = uVar5 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01cc3378 + 0x1cc3010),0)
              ;
LAB_01cc3058:
              uVar2 = (*(code *)*puVar4)(piVar6,puVar4[1]);
              if (*(int *)(**(int **)(_UNK_01cc337c + 0x1cc3078) + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar1 = func_0x02565a88(uVar2,0);
              if (iVar1 != 0) {
                iVar3 = func_0x01c24918(0);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                uVar2 = *(undefined4 *)(iVar1 + 8);
                uVar10 = *(undefined4 *)(iVar1 + 0xc);
                iVar1 = **(int **)(_UNK_01cc3380 + 0x1cc30c4);
                iVar3 = *(int *)(iVar3 + 0x40);
                if (*(int *)(iVar1 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar1 = **(int **)(_UNK_01cc3384 + 0x1cc30ec);
                }
                uVar8 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                uVar2 = func_0x01cdcbac(iVar3,uVar2,uVar10,uVar8,0,0,0,0xa0,
                                        **(undefined4 **)(_UNK_01cc3388 + 0x1cc310c),
                                        **(undefined4 **)(_UNK_01cc338c + 0x1cc3118),0);
                iVar1 = *param_4;
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = *(int *)(iVar1 + 8);
                uVar5 = *(uint *)(iVar1 + 0xc);
                piVar7 = *(int **)(_UNK_01cc3390 + 0x1cc317c);
                *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                iVar11 = *piVar7;
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                if (uVar5 < *(uint *)(iVar3 + 0xc)) {
                  *(uint *)(iVar1 + 0xc) = uVar5 + 1;
                  *(undefined4 *)(iVar3 + uVar5 * 4 + 0x10) = uVar2;
                }
                else {
                  func_0x0328f170(iVar1,uVar2,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                }
              }
              goto LAB_01cc2f78;
            }
            if (piVar6 != (int *)0x0) {
              iVar1 = *piVar6;
              uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar5 != 0) {
                piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar7[-1] == **(int **)(_UNK_01cc3398 + 0x1cc31e0)) {
                    puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc3228;
                  }
                  uVar5 = uVar5 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01cc3398 + 0x1cc31e0),0)
              ;
LAB_01cc3228:
              (*(code *)*puVar4)(piVar6,puVar4[1]);
            }
            uVar2 = 1;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7884,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021fba5c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.HandbookMan$$CheckAllReceivedInChain RVA 0x1cb33a0 =====

/* WARNING: Removing unreachable block (ram,0x01cc3634) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc33a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
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
  
  pcVar9 = (char *)(_UNK_01cc3710 + 0x1cc33b8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc3714 + 0x1cc33cc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3718 + 0x1cc33d8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc371c + 0x1cc33e4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3720 + 0x1cc33f0));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7885,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7885,0);
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
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar7,0,0);
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = func_0x01dd0230(iVar1,param_2,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01cc3724 + 0x1cc34a0));
    piVar12 = *(int **)(_UNK_01cc3728 + 0x1cc34b8);
    piVar11 = *(int **)(_UNK_01cc372c + 0x1cc34c0);
    do {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar12) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01cc3518;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_01cc3518:
      uVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (uVar4 == 0) break;
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01cc3590;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01cc3590:
      uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      iVar1 = func_0x01cc4240(param_1,uVar10);
    } while (iVar1 != 0);
    uVar4 = uVar4 ^ 1;
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == **(int **)(_UNK_01cc3730 + 0x1cc35d4)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_01cc361c;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cc3730 + 0x1cc35d4),0);
LAB_01cc361c:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return uVar4;
}



// ===== FAT.HandbookMan$$GetNextRewardableSeriesId RVA 0x1cb3738 =====

/* WARNING: Removing unreachable block (ram,0x01cc3b24) */
/* WARNING: Removing unreachable block (ram,0x01cc3b98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cc3738(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uStack_5c;
  undefined4 uStack_58;
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
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01cc3d64 + 0x1cc3754);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc3d68 + 0x1cc3768));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3d6c + 0x1cc3774));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3d70 + 0x1cc3780));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3d74 + 0x1cc378c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3d78 + 0x1cc3798));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3d7c + 0x1cc37a4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3d80 + 0x1cc37b0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3d84 + 0x1cc37bc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3d88 + 0x1cc37c8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc3d8c + 0x1cc37d4));
    *pcVar8 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  iVar2 = func_0x0229f06c(0x96b3,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar9 = *(int **)(_UNK_01cc3d90 + 0x1cc3868);
    iVar11 = *(int *)(iVar2 + 0x50);
    iVar2 = *piVar9;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar9;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar2,&iStack_28,**(undefined4 **)(_UNK_01cc3d94 + 0x1cc38a8));
    iVar2 = iStack_28;
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc79d0(iVar11,param_2,iVar2,0,0);
    iVar2 = iStack_28;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&uStack_50,iVar2,**(undefined4 **)(_UNK_01cc3d98 + 0x1cc38f8));
    uStack_58 = 0xffffffff;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_5c = 0;
    puVar10 = *(undefined4 **)(_UNK_01cc3d9c + 0x1cc3930);
    do {
      do {
        iVar2 = func_0x01470118(&uStack_40,*puVar10);
        uVar1 = uStack_34;
        if (iVar2 == 0) {
          iVar2 = 8;
          goto LAB_01cc3b78;
        }
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01db1884(iVar11,uVar1,0);
      } while (iVar2 == 0);
      iVar2 = *(int *)(iVar2 + 0x44);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar9 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01cc3da0 + 0x1cc3984));
      do {
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01cc3da4 + 0x1cc39ac)) {
              puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
              goto LAB_01cc39f4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01cc3da4 + 0x1cc39ac),0);
LAB_01cc39f4:
        iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
        if (iVar2 == 0) {
          iVar2 = 3;
          goto LAB_01cc3aac;
        }
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01cc3da8 + 0x1cc3a2c)) {
              puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
              goto LAB_01cc3a74;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01cc3da8 + 0x1cc3a2c),0);
LAB_01cc3a74:
        uVar4 = (*(code *)*puVar3)(piVar9,puVar3[1]);
        iVar2 = func_0x01cc3dbc(param_1,uVar4);
      } while (iVar2 == 0);
      uStack_5c = uVar1;
      uStack_58 = uVar1;
      iVar2 = 7;
LAB_01cc3aac:
      if (piVar9 != (int *)0x0) {
        iVar5 = *piVar9;
        uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01cc3dac + 0x1cc3ac4)) {
              puVar3 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
              goto LAB_01cc3b0c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01cc3dac + 0x1cc3ac4),0);
LAB_01cc3b0c:
        (*(code *)*puVar3)(piVar9,puVar3[1]);
      }
    } while (iVar2 == 3 || iVar2 == 0);
LAB_01cc3b78:
    func_0x02450828(&uStack_40,**(undefined4 **)(_UNK_01cc3db4 + 0x1cc3b84));
    func_0x028c98a0(&uStack_30,0);
    if (iVar2 == 7) {
      uStack_58 = uStack_5c;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x96b3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_58 = func_0x02175ef0(iVar2,param_1,param_2,0);
  }
  return uStack_58;
}



// ===== FAT.HandbookMan$$IsItemCanClaim RVA 0x1cb3dbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc3dbc(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01cc3e94 + 0x1cc3dd8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc3e98 + 0x1cc3dec));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5c2d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02451924(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_01cc3e9c + 0x1cc3e68));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (uint)(iStack_14 == 2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c2d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.HandbookMan$$CheckHasRewardInChain RVA 0x1cb3ea0 =====

/* WARNING: Removing unreachable block (ram,0x01cc413c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01cc3ea0(undefined4 param_1,undefined4 param_2)

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
  
  pcVar8 = (char *)(_UNK_01cc4218 + 0x1cc3eb8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc421c + 0x1cc3ecc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc4220 + 0x1cc3ed8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc4224 + 0x1cc3ee4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc4228 + 0x1cc3ef0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7982,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7982,0);
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
    iVar1 = func_0x0245496c(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = 0;
  iVar1 = func_0x01dd0230(iVar1,param_2,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01cc422c + 0x1cc3fa0));
    piVar11 = *(int **)(_UNK_01cc4230 + 0x1cc3fb8);
    piVar10 = *(int **)(_UNK_01cc4234 + 0x1cc3fc0);
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
            goto LAB_01cc4018;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01cc4018:
      iVar7 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar7 == 0) {
        iVar7 = 0;
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
            goto LAB_01cc4090;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01cc4090:
      uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      iVar1 = FUN_01cc3dbc(param_1,uVar9);
    } while (iVar1 == 0);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01cc4238 + 0x1cc40dc)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_01cc4124;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cc4238 + 0x1cc40dc),0);
LAB_01cc4124:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return iVar7;
}



// ===== FAT.HandbookMan$$IsItemReceived RVA 0x1cb4240 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc4240(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01cc4318 + 0x1cc425c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc431c + 0x1cc4270));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5c2f,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02451924(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_01cc4320 + 0x1cc42ec));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (uint)(iStack_14 == 3);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c2f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.HandbookMan$$IsItemLock RVA 0x1cb4324 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc4324(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01cc43f8 + 0x1cc4340);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc43fc + 0x1cc4354));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0xf47,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02451924(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_01cc4400 + 0x1cc43d0));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (uint)(iStack_14 == 0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xf47,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.HandbookMan$$IsItemPreview RVA 0x1cb4404 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc4404(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01cc44dc + 0x1cc4420);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc44e0 + 0x1cc4434));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5b5b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02451924(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_01cc44e4 + 0x1cc44b0));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (uint)(iStack_14 == 1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b5b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.HandbookMan$$IsItemUnlocked RVA 0x1cb44e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc44e8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uStack_14;
  
  pcVar3 = (char *)(_UNK_01cc45c8 + 0x1cc4504);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc45cc + 0x1cc4518));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x2ca,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02451924(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01cc45d0 + 0x1cc4594));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (uint)((uStack_14 & 0xfffffffe) == 2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x2ca,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.HandbookMan$$IsItemUnlockedInList RVA 0x1cb45d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc45d4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
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
  
  pcVar5 = (char *)(_UNK_01cc46c4 + 0x1cc45ec);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc46c8 + 0x1cc4600));
    func_0x01384978(*(undefined4 *)(_UNK_01cc46cc + 0x1cc460c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1625,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1625,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
    uVar3 = func_0x0245496c(&uStack_38,0,0);
    return uVar3;
  }
  puVar9 = *(undefined4 **)(_UNK_01cc46d0 + 0x1cc466c);
  iVar1 = 0;
  do {
    iVar7 = iVar1;
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 0xc);
    if (iVar6 <= iVar7) break;
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03259410(iVar1,iVar7,*puVar9);
    iVar1 = iVar7 + 1;
  } while (iVar2 != param_2);
  return (uint)(iVar7 < iVar6);
}



// ===== FAT.HandbookMan$$TryGetItemState RVA 0x1cb46d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc46d4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar4;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_01cc4798 + 0x1cc46f4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc479c + 0x1cc4708));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7888,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7888,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02252a84(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03d5de60(iVar1,param_2,
                          *(undefined4 *)
                           (*(int *)(*(int *)(**(int **)(_UNK_01cc47a0 + 0x1cc4788) + 0x10) + 0x60)
                           + 0x84),**(int **)(_UNK_01cc47a0 + 0x1cc4788),unaff_r4,unaff_r5,unaff_r6,
                          unaff_lr);
  if ((int)uVar2 < 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      func_0x02457d5c();
    }
    uVar3 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
  }
  *param_3 = uVar3;
  return ~uVar2 >> 0x1f;
}



// ===== FAT.HandbookMan$$Reset RVA 0x1cb47a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc47a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar3 = (char *)(_UNK_01cc48d8 + 0x1cc47b8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc48dc + 0x1cc47cc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc48e0 + 0x1cc47d8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc48e4 + 0x1cc47e4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x96b5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96b5,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x028cdcdc(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x028cdcdc(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02451930(iVar1,**(undefined4 **)(_UNK_01cc48e8 + 0x1cc4884));
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar4 + 0x10);
  if (0 < iVar1) {
    iVar6 = *(int *)(iVar4 + 8);
    if (iVar6 == 0) {
      func_0x02457d50(iVar4,**(undefined4 **)(_UNK_01cc48ec + 0x1cc48cc));
    }
    func_0x0484e5ec(iVar6,0,*(undefined4 *)(iVar6 + 0xc),0);
    *(undefined4 *)(iVar4 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(iVar4 + 0x18) = 0;
    func_0x0484e5ec(*(undefined4 *)(iVar4 + 0xc),0,iVar1,0);
  }
  *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
  return;
}



// ===== FAT.HandbookMan$$LoadConfig RVA 0x1cb48f0 =====

void FUN_01cc48f0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x96b6,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x96b6,0);
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



// ===== FAT.HandbookMan$$Startup RVA 0x1cb493c =====

void FUN_01cc493c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x96b7,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x96b7,0);
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



// ===== FAT.HandbookMan$$SetData RVA 0x1cb4988 =====

/* WARNING: Removing unreachable block (ram,0x01cc4f74) */
/* WARNING: Removing unreachable block (ram,0x01cc4f80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc4988(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x96b8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96b8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x028cdcdc(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x028cdcdc(iVar1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 != 0) {
    iVar9 = *(int *)(param_1 + 0xc);
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x028cdd80(iVar9,uVar10,0);
    iVar9 = *(int *)(param_1 + 0x10);
    uVar10 = *(undefined4 *)(iVar1 + 0x14);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x028cdd80(iVar9,uVar10,0);
  }
  pcVar8 = (char *)(_UNK_01cc5218 + 0x1cc4ab8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc521c + 0x1cc4acc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5220 + 0x1cc4ad8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5224 + 0x1cc4ae4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5228 + 0x1cc4af0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc522c + 0x1cc4afc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5230 + 0x1cc4b08));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5234 + 0x1cc4b14));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5238 + 0x1cc4b20));
    func_0x01384978(*(undefined4 *)(_UNK_01cc523c + 0x1cc4b2c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5240 + 0x1cc4b38));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5244 + 0x1cc4b44));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5248 + 0x1cc4b50));
    *pcVar8 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  iVar1 = func_0x0229f06c(0x96b9,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02451930(iVar1,**(undefined4 **)(_UNK_01cc524c + 0x1cc4bd8));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x01ca5188(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01cc5250 + 0x1cc4c34)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
          goto LAB_01cc4c7c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cc5250 + 0x1cc4c34),3);
LAB_01cc4c7c:
    piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01cc5254 + 0x1cc4cac)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01cc4cf4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cc5254 + 0x1cc4cac),0);
LAB_01cc4cf4:
    piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
    piVar5 = *(int **)(_UNK_01cc5258 + 0x1cc4d14);
    piVar11 = *(int **)(_UNK_01cc525c + 0x1cc4d1c);
LAB_01cc4d18:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar5) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01cc4d74;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar5,0);
LAB_01cc4d74:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01cc4de8;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01cc4de8:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = *(undefined4 *)(iVar1 + 0xc);
      iVar9 = *(int *)(param_1 + 0xc);
      uVar7 = *(undefined4 *)(iVar1 + 0x14);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x028ce554(iVar9,uVar10,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x028ce554(iVar1,uVar7,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0xc);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x028cde6c(iVar1,uVar7,0);
        }
      }
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x028ce554(iVar1,uVar10,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x028ce554(iVar1,uVar7,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x028cde6c(iVar1,uVar7,0);
        }
      }
      goto LAB_01cc4d18;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01cc5260 + 0x1cc4f14)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01cc4f5c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cc5260 + 0x1cc4f14),0);
LAB_01cc4f5c:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dd1324(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450598(&uStack_60,iVar1,**(undefined4 **)(_UNK_01cc5264 + 0x1cc4fe0));
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    puVar12 = *(undefined4 **)(_UNK_01cc5268 + 0x1cc5010);
    puVar3 = *(undefined4 **)(_UNK_01cc526c + 0x1cc5018);
    while (iVar1 = func_0x01475638(&uStack_40,*puVar12), uVar10 = uStack_34, iVar1 != 0) {
      func_0x01cc547c(param_1,uStack_34,&uStack_44);
      uVar7 = uStack_44;
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02451998(iVar1,uVar10,uVar7,*puVar3);
    }
    func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01cc5274 + 0x1cc5074));
    func_0x01cc55ec(param_1,0);
    func_0x01cc5980(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0x96b9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.HandbookMan$$_InitItemStateMap RVA 0x1cb4aa0 =====

/* WARNING: Removing unreachable block (ram,0x01cc4f74) */
/* WARNING: Removing unreachable block (ram,0x01cc4f80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc4aa0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar7 = (char *)(_UNK_01cc5218 + 0x1cc4ab8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc521c + 0x1cc4acc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5220 + 0x1cc4ad8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5224 + 0x1cc4ae4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5228 + 0x1cc4af0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc522c + 0x1cc4afc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5230 + 0x1cc4b08));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5234 + 0x1cc4b14));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5238 + 0x1cc4b20));
    func_0x01384978(*(undefined4 *)(_UNK_01cc523c + 0x1cc4b2c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5240 + 0x1cc4b38));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5244 + 0x1cc4b44));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5248 + 0x1cc4b50));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  iVar1 = func_0x0229f06c(0x96b9,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02451930(iVar1,**(undefined4 **)(_UNK_01cc524c + 0x1cc4bd8));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x01ca5188(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01cc5250 + 0x1cc4c34)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
          goto LAB_01cc4c7c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cc5250 + 0x1cc4c34),3);
LAB_01cc4c7c:
    piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01cc5254 + 0x1cc4cac)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01cc4cf4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cc5254 + 0x1cc4cac),0);
LAB_01cc4cf4:
    piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
    piVar5 = *(int **)(_UNK_01cc5258 + 0x1cc4d14);
    piVar11 = *(int **)(_UNK_01cc525c + 0x1cc4d1c);
LAB_01cc4d18:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar5) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01cc4d74;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar5,0);
LAB_01cc4d74:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01cc4de8;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01cc4de8:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar9 = *(undefined4 *)(iVar1 + 0xc);
      iVar8 = *(int *)(param_1 + 0xc);
      uVar10 = *(undefined4 *)(iVar1 + 0x14);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x028ce554(iVar8,uVar9,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x028ce554(iVar1,uVar10,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0xc);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x028cde6c(iVar1,uVar10,0);
        }
      }
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x028ce554(iVar1,uVar9,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x028ce554(iVar1,uVar10,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x028cde6c(iVar1,uVar10,0);
        }
      }
      goto LAB_01cc4d18;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01cc5260 + 0x1cc4f14)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01cc4f5c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cc5260 + 0x1cc4f14),0);
LAB_01cc4f5c:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dd1324(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450598(&uStack_60,iVar1,**(undefined4 **)(_UNK_01cc5264 + 0x1cc4fe0));
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    puVar12 = *(undefined4 **)(_UNK_01cc5268 + 0x1cc5010);
    puVar3 = *(undefined4 **)(_UNK_01cc526c + 0x1cc5018);
    while (iVar1 = func_0x01475638(&uStack_40,*puVar12), uVar9 = uStack_34, iVar1 != 0) {
      func_0x01cc547c(param_1,uStack_34,&uStack_44);
      uVar10 = uStack_44;
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02451998(iVar1,uVar9,uVar10,*puVar3);
    }
    func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01cc5274 + 0x1cc5074));
    func_0x01cc55ec(param_1,0);
    func_0x01cc5980(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0x96b9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.HandbookMan$$FillData RVA 0x1cb5280 =====

/* WARNING: Possible PIC construction at 0x01cc53ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc53b0) */
/* WARNING: Removing unreachable block (ram,0x01cc53bc) */
/* WARNING: Removing unreachable block (ram,0x01cc53c0) */
/* WARNING: Removing unreachable block (ram,0x01cc53d0) */
/* WARNING: Removing unreachable block (ram,0x01cc53d4) */
/* WARNING: Removing unreachable block (ram,0x01cc53ec) */
/* WARNING: Removing unreachable block (ram,0x01cc53f0) */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01cc5280(uint param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  uint unaff_r8;
  uint extraout_r12;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  
  pcVar11 = (char *)(iRam01cc5408 + 0x1cc5298);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam01cc540c + 0x1cc52ac));
    func_0x01384978(*(undefined4 *)(iRam01cc5410 + 0x1cc52b8));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x96bb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96bb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piStack_30 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    piStack_28 = (int *)0x0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    piStack_30 = (int *)uStack_48;
    iStack_2c = uStack_44;
    piStack_28 = (int *)iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    iVar1 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
    return iVar1;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar1 + 0x18);
  iStack_2c = iVar1;
  if (iVar10 == 0) {
    iVar10 = func_0x01384be4(**(undefined4 **)(iRam01cc5414 + 0x1cc534c));
    func_0x017892c4(iVar10,0);
    bVar14 = iVar10 == 0;
    *(int *)(iVar1 + 0x18) = iVar10;
    if (bVar14) {
      uVar16 = func_0x01384bf0();
      uVar6 = (uint)((ulonglong)uVar16 >> 0x20);
      iVar1 = (int)uVar16;
      if (bVar14) {
        uVar6 = param_1 & 0x67ffffff;
      }
      bVar15 = false;
      if (bVar14 && (extraout_r12 | 0x2800) == 0) {
        unaff_r8 = (uint)&stack0xffffffe8 | 0x8000000a;
        bVar15 = unaff_r8 == 0;
      }
      if (bVar15 && (extraout_r12 | 0x22000) == 0) {
        unaff_r8 = (uint)&stack0xffffffe8 | 0x2d;
      }
      piStack_28 = (int *)param_1;
      iVar12 = func_0x0229f06c(0x96bc,0);
      if (iVar12 != 0) {
        iVar12 = func_0x0229f13c(0x96bc,0);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = (uint)piStack_28;
        uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_50 = 0;
        iStack_40 = 0;
        iStack_34 = iVar10;
        piStack_30 = (int *)pcVar11;
        piStack_28 = (int *)unaff_r8;
        func_0x0245494c(&uStack_68,0,uVar6,0);
        uStack_50 = uStack_68;
        uStack_4c = uStack_64;
        uStack_48 = uStack_60;
        uStack_44 = uStack_5c;
        iStack_40 = uStack_58;
        if (*(int *)(iVar12 + 0x10) != 0) {
          func_0x01485278(&uStack_50,*(int *)(iVar12 + 0x10),0);
        }
        func_0x01485278(&uStack_50,iVar1,0);
        func_0x01485258(&uStack_50,uVar6,0);
        iVar10 = *(int *)(iVar12 + 8);
        uVar13 = *(undefined4 *)(iVar12 + 0xc);
        iVar1 = *(int *)(iVar12 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar7 = 3;
        if (iVar1 == 0) {
          uVar7 = 2;
        }
        iVar1 = func_0x0245495c(iVar10,uVar13,&uStack_50,uVar7,0,0);
        return iVar1;
      }
      pcVar9 = (char *)(_UNK_01cc1ca4 + 0x1cc1b30);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01cc1ca8 + 0x1cc1b44));
        func_0x01384978(*(undefined4 *)(_UNK_01cc1cac + 0x1cc1b50));
        func_0x01384978(*(undefined4 *)(_UNK_01cc1cb0 + 0x1cc1b5c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc1cb4 + 0x1cc1b68));
        func_0x01384978(*(undefined4 *)(_UNK_01cc1cb8 + 0x1cc1b74));
        *pcVar9 = '\x01';
      }
      iVar12 = func_0x0229f06c(0x7a94,0);
      iStack_2c = iVar10;
      if (iVar12 != 0) {
        iVar10 = func_0x0229f13c(0x7a94,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        piStack_30 = piStack_28;
        uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_40 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_48 = 0;
        uStack_38 = 0;
        piStack_28 = (int *)pcVar11;
        func_0x0245494c(&uStack_60,0,0);
        uStack_48 = uStack_60;
        uStack_44 = uStack_5c;
        iStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        if (*(int *)(iVar10 + 0x10) != 0) {
          func_0x01485278(&uStack_48,*(int *)(iVar10 + 0x10),0);
        }
        func_0x01485278(&uStack_48,iVar1,0);
        iVar12 = *(int *)(iVar10 + 8);
        uVar13 = *(undefined4 *)(iVar10 + 0xc);
        iVar1 = *(int *)(iVar10 + 0x10);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        uVar7 = 2;
        if (iVar1 == 0) {
          uVar7 = 1;
        }
        uStack_68 = 0;
        uStack_64 = 0;
        iVar1 = func_0x0245495c(iVar12,uVar13,&uStack_48,uVar7);
        return iVar1;
      }
      iVar10 = *(int *)(iVar1 + 0x18);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar10 + 0xc);
      if (0 < iVar10) {
        func_0x01cc628c(iVar1,*(undefined4 *)(iVar1 + 0x18));
        func_0x01cc55ec(iVar1,*(undefined4 *)(iVar1 + 0x18));
        func_0x01cc5980(iVar1);
        func_0x01cc7720(iVar1);
        func_0x01cc7988(iVar1);
        if (*(int *)(**(int **)(_UNK_01cc1cbc + 0x1cc1c18) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar10 = func_0x0300d558(**(undefined4 **)(_UNK_01cc1cc0 + 0x1cc1c34));
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x028c3fd8(iVar10,0);
        iVar10 = *(int *)(iVar1 + 0x18);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x1c);
        *(undefined4 *)(iVar10 + 0xc) = 0;
        *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piStack_30 = piStack_28;
        iVar10 = *(int *)(iVar1 + 0x10);
        if (0 < iVar10) {
          iVar12 = *(int *)(iVar1 + 8);
          piStack_28 = (int *)pcVar11;
          if (iVar12 == 0) {
            func_0x02457d50(iVar1,**(undefined4 **)(_UNK_01cc1cc4 + 0x1cc1c94));
          }
          func_0x0484e5ec(iVar12,0,*(undefined4 *)(iVar12 + 0xc),0);
          *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined4 *)(iVar1 + 0x18) = 0;
          func_0x0484e5ec(*(undefined4 *)(iVar1 + 0xc),0,iVar10,0);
        }
        iVar10 = *(int *)(iVar1 + 0x1c) + 1;
        *(int *)(iVar1 + 0x1c) = iVar10;
        return iVar10;
      }
      return iVar10;
    }
  }
  iVar12 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(iVar10 + 0x10);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x028cdaf8(iVar12,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_28 = *(int **)(iRam01cc5418 + 0x1cc53ac);
  iVar10 = *piStack_28;
  pcVar11 = (char *)(_UNK_0365a588 + 0x365a050);
  uStack_38 = param_1;
  iStack_34 = iVar1;
  piStack_30 = piVar2;
  if (*pcVar11 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_0365a58c + 0x365a064));
    func_0x02457d54(*(undefined4 *)(_UNK_0365a590 + 0x365a070));
    func_0x02457d54(*(undefined4 *)(_UNK_0365a594 + 0x365a07c));
    func_0x02457d54(*(undefined4 *)(_UNK_0365a598 + 0x365a088));
    *pcVar11 = '\x01';
  }
  func_0x03031d60(piVar2,**(undefined4 **)(_UNK_0365a59c + 0x365a0a4),
                  *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x8c));
  iVar12 = **(int **)(*(int *)(iVar10 + 0x10) + 0x60);
  if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
    iVar12 = func_0x02457d84();
  }
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)func_0x02457d4c(0,**(undefined4 **)(_UNK_0365a5a8 + 0x365a110));
    if (piVar3 == (int *)0x0) {
      func_0x02457d50();
LAB_0365a284:
      iVar12 = *(int *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x88);
      if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
        iVar12 = func_0x02457d84(iVar12);
      }
      iVar4 = *piVar2;
      uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar6 != 0) {
        piVar3 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar3[-1] == iVar12) {
            puVar5 = (undefined4 *)(iVar4 + *piVar3 * 8 + 0xc0);
            goto LAB_0365a2f4;
          }
          uVar6 = uVar6 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)func_0x02457d88(piVar2,iVar12,0);
LAB_0365a2f4:
      piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
      piVar3 = *(int **)(_UNK_0365a5ac + 0x365a314);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x02457d50();
        }
        iVar12 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar12 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar3) {
              puVar5 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
              goto LAB_0365a36c;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined4 *)func_0x02457d88(piVar2,*piVar3,0);
LAB_0365a36c:
        iVar12 = (*(code *)*puVar5)(piVar2,puVar5[1]);
        if (iVar12 == 0) goto LAB_0365a434;
        if (piVar2 == (int *)0x0) {
          func_0x02457d50();
        }
        iVar12 = *(int *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x94);
        if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
          iVar12 = func_0x02457d84(iVar12);
        }
        iVar4 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar8[-1] == iVar12) {
              puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
              goto LAB_0365a400;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined4 *)func_0x02457d88(piVar2,iVar12,0);
LAB_0365a400:
        uVar16 = (*(code *)*puVar5)(piVar2,puVar5[1]);
        uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
        iStack_40 = *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x44);
        func_0x03659ddc(iVar1,uVar13,(int)uVar16,uVar13);
      } while( true );
    }
  }
  else {
    if (*piVar2 == iVar12) {
      func_0x03659c84(iVar1,piVar2[3] + *(int *)(iVar1 + 0xc),
                      *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x3c));
      iStack_40 = piVar2[3];
      uStack_3c = 0;
      func_0x0484e904(piVar2[2],0,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
      iVar12 = piVar2[3] + *(int *)(iVar1 + 0xc);
      goto LAB_0365a274;
    }
    piVar3 = (int *)func_0x02457d4c(piVar2,**(undefined4 **)(_UNK_0365a5a0 + 0x365a0ec));
    if (piVar3 == (int *)0x0) goto LAB_0365a284;
  }
  iVar12 = *piVar3;
  piVar2 = *(int **)(_UNK_0365a5a4 + 0x365a134);
  uVar6 = (uint)*(ushort *)(iVar12 + 0xb6);
  iVar4 = *piVar2;
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar4) {
        puVar5 = (undefined4 *)(iVar12 + *piVar8 * 8 + 200);
        goto LAB_0365a1cc;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)func_0x02457d88(piVar3,iVar4,1);
LAB_0365a1cc:
  iVar12 = (*(code *)*puVar5)(piVar3,puVar5[1]);
  func_0x03659c84(iVar1,*(int *)(iVar1 + 0xc) + iVar12,
                  *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x3c));
  iVar10 = *piVar3;
  uVar7 = *(undefined4 *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
  iVar4 = *piVar2;
  if (uVar6 != 0) {
    piVar2 = (int *)(*(int *)(iVar10 + 0x58) + 4);
    do {
      if (piVar2[-1] == iVar4) {
        puVar5 = (undefined4 *)(iVar10 + *piVar2 * 8 + 0xc0);
        goto LAB_0365a254;
      }
      uVar6 = uVar6 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)func_0x02457d88(piVar3,iVar4,0);
LAB_0365a254:
  (*(code *)*puVar5)(piVar3,uVar7,uVar13,puVar5[1]);
  iVar12 = *(int *)(iVar1 + 0xc) + iVar12;
LAB_0365a274:
  *(int *)(iVar1 + 0xc) = iVar12;
  return iVar12;
LAB_0365a434:
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar1 = *piVar2;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_0365a5b0 + 0x365a450)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_0365a498;
      }
      uVar6 = uVar6 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)func_0x02457d88(piVar2,**(int **)(_UNK_0365a5b0 + 0x365a450),0);
LAB_0365a498:
  iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
  return iVar1;
}



// ===== FAT.HandbookMan$$SecondUpdate RVA 0x1cb541c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc541c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  iVar1 = func_0x0229f06c(0x96bc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96bc,0);
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
    func_0x01485258(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  pcVar3 = (char *)(_UNK_01cc1ca4 + 0x1cc1b30);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc1ca8 + 0x1cc1b44));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1cac + 0x1cc1b50));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1cb0 + 0x1cc1b5c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1cb4 + 0x1cc1b68));
    func_0x01384978(*(undefined4 *)(_UNK_01cc1cb8 + 0x1cc1b74));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a94,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a94,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    func_0x01cc628c(param_1,*(undefined4 *)(param_1 + 0x18));
    func_0x01cc55ec(param_1,*(undefined4 *)(param_1 + 0x18));
    func_0x01cc5980(param_1);
    func_0x01cc7720(param_1);
    func_0x01cc7988(param_1);
    if (*(int *)(**(int **)(_UNK_01cc1cbc + 0x1cc1c18) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01cc1cc0 + 0x1cc1c34));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar1,0);
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar4 + 0x10);
    if (0 < iVar1) {
      iVar6 = *(int *)(iVar4 + 8);
      if (iVar6 == 0) {
        func_0x02457d50(iVar4,**(undefined4 **)(_UNK_01cc1cc4 + 0x1cc1c94));
      }
      func_0x0484e5ec(iVar6,0,*(undefined4 *)(iVar6 + 0xc),0);
      *(undefined4 *)(iVar4 + 0x14) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      func_0x0484e5ec(*(undefined4 *)(iVar4 + 0xc),0,iVar1,0);
    }
    *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
    return;
  }
  return;
}



// ===== FAT.HandbookMan$$_CheckItemState RVA 0x1cb547c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc547c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01cc55e0 + 0x1cc549c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc55e4 + 0x1cc54b0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b5a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b5a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02232a14(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x028ce554(iVar1,param_2,0);
  if (iVar1 == 0) {
    uVar2 = FUN_01cc4404(param_1,param_2);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x028ce554(iVar1,param_2,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x38);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01cccae0(iVar1,param_2,0);
      if ((iVar1 != 0) &&
         (iVar1 = func_0x0244f848(*(undefined4 *)(iVar1 + 0x5c),
                                  **(undefined4 **)(_UNK_01cc55e8 + 0x1cc55a8),0), iVar1 != 0)) {
        uVar2 = 2;
        goto LAB_01cc55d4;
      }
    }
    uVar2 = 3;
  }
LAB_01cc55d4:
  *param_3 = uVar2;
  return;
}



// ===== FAT.HandbookMan$$_RefreshAllItemPreviewState RVA 0x1cb55ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc55ec(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01cc5924 + 0x1cc5608);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc5928 + 0x1cc561c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc592c + 0x1cc5628));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5930 + 0x1cc5634));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5934 + 0x1cc5640));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5938 + 0x1cc564c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc593c + 0x1cc5658));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5940 + 0x1cc5664));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5944 + 0x1cc5670));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5948 + 0x1cc567c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc594c + 0x1cc5688));
    func_0x01384978(*(undefined4 *)(_UNK_01cc5950 + 0x1cc5694));
    *pcVar3 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  iVar2 = func_0x0229f06c(0x7a95,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      iVar2 = func_0x02fc0f18(*(undefined4 *)(param_1 + 0x14),
                              **(undefined4 **)(_UNK_01cc5964 + 0x1cc57e0));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0245199c(&uStack_48,iVar2,**(undefined4 **)(_UNK_01cc5968 + 0x1cc5808));
      puVar4 = *(undefined4 **)(_UNK_01cc596c + 0x1cc5820);
      while (iVar2 = func_0x0146dd38(&uStack_48,*puVar4), iVar2 != 0) {
        if ((uStack_38 & 0xfffffffe) == 2) {
          func_0x01cc69ec(param_1,uStack_3c);
        }
      }
      func_0x024519a0(&uStack_48,**(undefined4 **)(_UNK_01cc5974 + 0x1cc585c));
    }
    else {
      func_0x0325a3b4(&uStack_58,param_2,**(undefined4 **)(_UNK_01cc5954 + 0x1cc5720));
      uStack_30 = uStack_58;
      uStack_2c = uStack_54;
      uStack_28 = uStack_50;
      uStack_24 = uStack_4c;
      puVar4 = *(undefined4 **)(_UNK_01cc5958 + 0x1cc573c);
      while (iVar2 = func_0x01470118(&uStack_30,*puVar4), uVar1 = uStack_24, iVar2 != 0) {
        iVar2 = FUN_01cc44e8(param_1,uStack_24);
        if (iVar2 != 0) {
          func_0x01cc69ec(param_1,uVar1);
        }
      }
      func_0x02450828(&uStack_30,**(undefined4 **)(_UNK_01cc595c + 0x1cc5780));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7a95,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.HandbookMan$$_RefreshRedPointState RVA 0x1cb5980 =====

/* WARNING: Removing unreachable block (ram,0x01cc5e90) */
/* WARNING: Removing unreachable block (ram,0x01cc5f04) */
/* WARNING: Removing unreachable block (ram,0x01cc60b8) */
/* WARNING: Removing unreachable block (ram,0x01cc5f34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc5980(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01cc6214 + 0x1cc5998);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc6218 + 0x1cc59ac));
    func_0x01384978(*(undefined4 *)(_UNK_01cc621c + 0x1cc59b8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6220 + 0x1cc59c4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6224 + 0x1cc59d0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6228 + 0x1cc59dc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc622c + 0x1cc59e8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6230 + 0x1cc59f4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6234 + 0x1cc5a00));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6238 + 0x1cc5a0c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc623c + 0x1cc5a18));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6240 + 0x1cc5a24));
    *pcVar8 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_40 = 0;
  uStack_60 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_44 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  iStack_64 = 0;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  iVar2 = func_0x0229f06c(0x5b5c,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar9 = *(int **)(_UNK_01cc6244 + 0x1cc5ac8);
    iVar11 = *(int *)(iVar2 + 0x50);
    iVar2 = *piVar9;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar9;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar2,&iStack_28,**(undefined4 **)(_UNK_01cc6248 + 0x1cc5b08));
    iVar2 = iStack_28;
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc7468(iVar11,iVar2,0);
    iVar2 = iStack_28;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&uStack_78,iVar2,**(undefined4 **)(_UNK_01cc624c + 0x1cc5b4c));
    uStack_40 = uStack_78;
    uStack_3c = uStack_74;
    uStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    piVar9 = *(int **)(_UNK_01cc6250 + 0x1cc5b74);
    do {
      iVar2 = func_0x01470118(&uStack_40,**(undefined4 **)(_UNK_01cc627c + 0x1cc5b80));
      uVar4 = uStack_34;
      piVar10 = *(int **)(_UNK_01cc6280 + 0x1cc5ba0);
      if (iVar2 == 0) {
        iVar2 = 10;
        break;
      }
      iVar2 = *piVar10;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar10;
      }
      iVar2 = **(int **)(iVar2 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_78,iVar2,&iStack_44,**(undefined4 **)(_UNK_01cc6254 + 0x1cc5bdc));
      iVar2 = iStack_44;
      uStack_4c = uStack_74;
      uStack_50 = uStack_78;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x01dc79d0(iVar11,uVar4,iVar2,0,0);
      iVar2 = iStack_44;
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      func_0x0325a3b4(&uStack_78,iVar2,**(undefined4 **)(_UNK_01cc6258 + 0x1cc5c44));
      uStack_60 = uStack_78;
      uStack_5c = uStack_74;
      uStack_58 = uStack_70;
      uStack_54 = uStack_6c;
      do {
        do {
          iVar2 = func_0x01470118(&uStack_60,**(undefined4 **)(_UNK_01cc626c + 0x1cc5c68));
          uVar4 = uStack_54;
          if (iVar2 == 0) {
            iVar2 = 3;
            goto LAB_01cc5ee8;
          }
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01db1884(iVar11,uVar4,0);
        } while (iVar2 == 0);
        iVar2 = *(int *)(iVar2 + 0x44);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar10 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01cc625c + 0x1cc5cc4));
        do {
          if (piVar10 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar10;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar9) {
                puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
                goto LAB_01cc5d2c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar10,*piVar9,0);
LAB_01cc5d2c:
          iVar2 = (*(code *)*puVar3)(piVar10,puVar3[1]);
          if (iVar2 == 0) {
            iVar2 = 5;
            goto LAB_01cc5e18;
          }
          if (piVar10 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar10;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01cc6260 + 0x1cc5d64)) {
                puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
                goto LAB_01cc5dac;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01cc6260 + 0x1cc5d64),0);
LAB_01cc5dac:
          uVar4 = (*(code *)*puVar3)(piVar10,puVar3[1]);
          iVar2 = *(int *)(param_1 + 0x14);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          bVar1 = func_0x02451924(iVar2,uVar4,&iStack_64,
                                  **(undefined4 **)(_UNK_01cc6264 + 0x1cc5ddc));
        } while ((bVar1 & iStack_64 == 2) == 0);
        iVar2 = 9;
        *(undefined1 *)(param_1 + 8) = 1;
LAB_01cc5e18:
        if (piVar10 != (int *)0x0) {
          iVar5 = *piVar10;
          uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01cc6268 + 0x1cc5e30)) {
                puVar3 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
                goto LAB_01cc5e78;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01cc6268 + 0x1cc5e30),0);
LAB_01cc5e78:
          (*(code *)*puVar3)(piVar10,puVar3[1]);
        }
      } while (iVar2 == 5 || iVar2 == 0);
LAB_01cc5ee8:
      func_0x02450828(&uStack_60,**(undefined4 **)(_UNK_01cc6274 + 0x1cc5ef4));
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      func_0x028c98a0(&uStack_50,0);
    } while (iVar2 == 3 || iVar2 == 0);
    func_0x02450828(&uStack_40,**(undefined4 **)(_UNK_01cc6284 + 0x1cc60a4));
    func_0x028c98a0(&uStack_30,0);
    if (iVar2 == 0 || iVar2 == 10) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5b5c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.HandbookMan$$_RefreshAllItemState RVA 0x1cb628c =====

/* WARNING: Removing unreachable block (ram,0x01cc6608) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc628c(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_01cc685c + 0x1cc62a8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc6860 + 0x1cc62bc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6864 + 0x1cc62c8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6868 + 0x1cc62d4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc686c + 0x1cc62e0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6870 + 0x1cc62ec));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6874 + 0x1cc62f8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6878 + 0x1cc6304));
    func_0x01384978(*(undefined4 *)(_UNK_01cc687c + 0x1cc6310));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6880 + 0x1cc631c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6884 + 0x1cc6328));
    func_0x01384978(*(undefined4 *)(_UNK_01cc6888 + 0x1cc6334));
    func_0x01384978(*(undefined4 *)(_UNK_01cc688c + 0x1cc6340));
    *pcVar9 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x5b59,0);
  if (iVar2 == 0) {
    if (param_2 == (int *)0x0) {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x024519ac(iVar2,**(undefined4 **)(_UNK_01cc68a8 + 0x1cc6634));
      iVar2 = func_0x02fc1430(uVar5,**(undefined4 **)(_UNK_01cc68ac + 0x1cc6648));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0325a3b4(&uStack_50,iVar2,**(undefined4 **)(_UNK_01cc68b0 + 0x1cc6670));
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      puVar3 = *(undefined4 **)(_UNK_01cc68b4 + 0x1cc6690);
      puVar4 = *(undefined4 **)(_UNK_01cc68b8 + 0x1cc6698);
      while (iVar2 = func_0x01470118(&uStack_38,*puVar3), uVar5 = uStack_2c, iVar2 != 0) {
        FUN_01cc547c(param_1,uStack_2c,&uStack_3c);
        uVar1 = uStack_3c;
        iVar2 = *(int *)(param_1 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x024519a8(iVar2,uVar5,uVar1,*puVar4);
      }
      func_0x02450828(&uStack_38,**(undefined4 **)(_UNK_01cc68c0 + 0x1cc66f4));
    }
    else {
      iVar2 = *param_2;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01cc6890 + 0x1cc63c0)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_01cc6408;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01cc6890 + 0x1cc63c0),0);
LAB_01cc6408:
      piVar7 = (int *)(*(code *)*puVar3)(param_2,puVar3[1]);
      piVar11 = *(int **)(_UNK_01cc6894 + 0x1cc6428);
      piVar10 = *(int **)(_UNK_01cc6898 + 0x1cc6430);
      puVar3 = *(undefined4 **)(_UNK_01cc689c + 0x1cc6438);
LAB_01cc6434:
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar7;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar8[-1] == *piVar11) {
            puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
            goto LAB_01cc6490;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar7,*piVar11,0);
LAB_01cc6490:
      iVar2 = (*(code *)*puVar4)(piVar7,puVar4[1]);
      if (iVar2 != 0) {
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar7;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar10) {
              puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
              goto LAB_01cc6504;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_01cc6504:
        uVar5 = (*(code *)*puVar4)(piVar7,puVar4[1]);
        iVar2 = *(int *)(param_1 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x024519a4(iVar2,uVar5,*puVar3);
        if (iVar2 != 0) {
          FUN_01cc547c(param_1,uVar5,&uStack_28);
          uVar1 = uStack_28;
          iVar2 = *(int *)(param_1 + 0x14);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x024519a8(iVar2,uVar5,uVar1,**(undefined4 **)(_UNK_01cc68a0 + 0x1cc6570));
        }
        goto LAB_01cc6434;
      }
      if (piVar7 != (int *)0x0) {
        iVar2 = *piVar7;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_01cc68a4 + 0x1cc65a8)) {
              puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
              goto LAB_01cc65f0;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01cc68a4 + 0x1cc65a8),0);
LAB_01cc65f0:
        (*(code *)*puVar3)(piVar7,puVar3[1]);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5b59,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.HandbookMan$$_RefreshItemState RVA 0x1cb68cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc68cc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01cc69d8 + 0x1cc68e8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc69dc + 0x1cc68fc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc69e0 + 0x1cc6908));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar2 = func_0x0229f06c(0x7883,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x024519a4(iVar2,param_2,**(undefined4 **)(_UNK_01cc69e4 + 0x1cc6980));
    if (iVar2 != 0) {
      FUN_01cc547c(param_1,param_2,&uStack_14);
      uVar1 = uStack_14;
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x024519a8(iVar2,param_2,uVar1,**(undefined4 **)(_UNK_01cc69e8 + 0x1cc69c8));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7883,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.HandbookMan$$_RefreshItemPreviewState RVA 0x1cb69ec =====

/* WARNING: Possible PIC construction at 0x01cc6f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cc6fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cc71a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc6f08) */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01cc6f00) */
/* WARNING: Removing unreachable block (ram,0x01cc71a0) */
/* WARNING: Removing unreachable block (ram,0x01cc7398) */
/* WARNING: Removing unreachable block (ram,0x01cc6fcc) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01cc69ec(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01cc76b4 + 0x1cc6a08);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc76b8 + 0x1cc6a1c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc76bc + 0x1cc6a28));
    func_0x01384978(*(undefined4 *)(_UNK_01cc76c0 + 0x1cc6a34));
    func_0x01384978(*(undefined4 *)(_UNK_01cc76c4 + 0x1cc6a40));
    func_0x01384978(*(undefined4 *)(_UNK_01cc76c8 + 0x1cc6a4c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc76cc + 0x1cc6a58));
    func_0x01384978(*(undefined4 *)(_UNK_01cc76d0 + 0x1cc6a64));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a96,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a96,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
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
    iVar1 = func_0x0245495c(iVar9,uVar11,&uStack_38,uVar8,0,0);
    return iVar1;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01db5714(iVar1,param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar1 + 0x20);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01db5714(iVar1,param_2,0);
  iVar1 = iVar2;
  if (iVar2 == 0) {
    iVar1 = func_0x01384bf0();
  }
  iStack_28 = *(int *)(iVar2 + 8);
  if (iVar9 == 0) {
    if (iStack_28 != 0) {
      iVar1 = *(int *)(iStack_28 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01cc7704 + 0x1cc71d8));
      piVar13 = *(int **)(_UNK_01cc7708 + 0x1cc71f0);
      piVar14 = *(int **)(_UNK_01cc770c + 0x1cc71f8);
      puVar12 = *(undefined4 **)(_UNK_01cc7710 + 0x1cc7200);
LAB_01cc71fc:
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar13) {
            puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01cc7258;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_01cc7258:
      iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar1 != 0) {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar14) {
              puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto LAB_01cc72cc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar14,0);
LAB_01cc72cc:
        uVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        iVar1 = FUN_01cc4324(param_1,uVar11);
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0x14);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x024519a8(iVar1,uVar11,1,*puVar12);
        }
        goto LAB_01cc71fc;
      }
      iVar1 = 0;
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar13[-1] == **(int **)(_UNK_01cc7718 + 0x1cc7338)) {
              puVar12 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
              goto LAB_01cc7380;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 2;
          } while (uVar5 != 0);
        }
        puVar12 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01cc7718 + 0x1cc7338),0);
LAB_01cc7380:
        iVar1 = (*(code *)*puVar12)(piVar3,puVar12[1]);
      }
    }
  }
  else {
    iVar1 = *(int *)(iVar9 + 0x18);
    iStack_2c = iVar9;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01cc76d4 + 0x1cc6b7c));
    piVar13 = *(int **)(_UNK_01cc76d8 + 0x1cc6b94);
    piVar14 = *(int **)(_UNK_01cc76dc + 0x1cc6b9c);
    puVar12 = *(undefined4 **)(_UNK_01cc76e0 + 0x1cc6ba4);
LAB_01cc6ba0:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar13) {
          puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01cc6bfc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_01cc6bfc:
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar1 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar14) {
            puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01cc6c70;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar14,0);
LAB_01cc6c70:
      uVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01db6254(iVar1,uVar11,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar6 = (int *)func_0x0345f264(iVar1,**(undefined4 **)(_UNK_01cc76e4 + 0x1cc6ce0));
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar6;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01cc76e8 + 0x1cc6d08)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01cc6d50;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01cc76e8 + 0x1cc6d08),0);
LAB_01cc6d50:
        piVar6 = (int *)(*(code *)*puVar4)(piVar6,puVar4[1]);
LAB_01cc6d64:
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar6;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar13) {
              puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01cc6dc0;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar6,*piVar13,0);
LAB_01cc6dc0:
        iVar1 = (*(code *)*puVar4)(piVar6,puVar4[1]);
        if (iVar1 != 0) {
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar6;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar14) {
                puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01cc6e34;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar6,*piVar14,0);
LAB_01cc6e34:
          uVar11 = (*(code *)*puVar4)(piVar6,puVar4[1]);
          iVar1 = FUN_01cc4324(param_1,uVar11);
          if (iVar1 != 0) {
            iVar1 = *(int *)(param_1 + 0x14);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x024519a8(iVar1,uVar11,1,*puVar12);
          }
          goto LAB_01cc6d64;
        }
        if (piVar6 != (int *)0x0) {
          iVar1 = *piVar6;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01cc76ec + 0x1cc6ea0)) {
                puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01cc6ee8;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01cc76ec + 0x1cc6ea0),0);
LAB_01cc6ee8:
          (*(code *)*puVar4)(piVar6,puVar4[1]);
        }
      }
      goto LAB_01cc6ba0;
    }
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01cc76f4 + 0x1cc6f60)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01cc6fb4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01cc76f4 + 0x1cc6f60),0);
LAB_01cc6fb4:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    iVar1 = *(int *)(iStack_2c + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01cc76f8 + 0x1cc6ff4));
LAB_01cc7000:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar13) {
          puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01cc705c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_01cc705c:
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar1 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar14) {
            puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01cc70d0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar14,0);
LAB_01cc70d0:
      uVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      iVar1 = FUN_01cc4324(param_1,uVar11);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x024519a8(iVar1,uVar11,1,*puVar12);
      }
      goto LAB_01cc7000;
    }
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar13[-1] == **(int **)(_UNK_01cc7700 + 0x1cc7140)) {
            puVar12 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
            goto LAB_01cc7188;
          }
          uVar5 = uVar5 - 1;
          piVar13 = piVar13 + 2;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01cc7700 + 0x1cc7140),0);
LAB_01cc7188:
      (*(code *)*puVar12)(piVar3,puVar12[1]);
    }
    iVar1 = 1;
  }
  return iVar1;
}



// ===== FAT.HandbookMan$$_TrackNewItemUnlock RVA 0x1cb7720 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc7720(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char cStack_39;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01cc7950 + 0x1cc7738);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc7954 + 0x1cc774c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7958 + 0x1cc7758));
    func_0x01384978(*(undefined4 *)(_UNK_01cc795c + 0x1cc7764));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7960 + 0x1cc7770));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7964 + 0x1cc777c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7968 + 0x1cc7788));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  cStack_39 = '\0';
  uStack_38 = 0;
  iVar3 = func_0x0229f06c(0x7a97,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&uStack_50,iVar3,**(undefined4 **)(_UNK_01cc796c + 0x1cc780c));
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    puVar7 = *(undefined4 **)(_UNK_01cc7970 + 0x1cc782c);
    puVar6 = *(undefined4 **)(_UNK_01cc7974 + 0x1cc7834);
    piVar5 = *(int **)(_UNK_01cc7978 + 0x1cc783c);
    while (iVar3 = func_0x01470118(&uStack_38,*puVar7), uVar2 = uStack_2c, iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x024519b0(iVar3,uVar2,&cStack_39,*puVar6);
      cVar1 = cStack_39;
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01995814(uVar2,cVar1 != '\0',0);
    }
    func_0x02450828(&uStack_38,**(undefined4 **)(_UNK_01cc797c + 0x1cc78b4));
  }
  else {
    iVar3 = func_0x0229f13c(0x7a97,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar3,param_1,0);
  }
  return;
}



// ===== FAT.HandbookMan$$_OnNewItemUnlock RVA 0x1cb7988 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc7988(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01cc7d48 + 0x1cc79a0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc7d4c + 0x1cc79b4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7d50 + 0x1cc79c0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7d54 + 0x1cc79cc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7d58 + 0x1cc79d8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7d5c + 0x1cc79e4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7d60 + 0x1cc79f0));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_34 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_30 = uStack_3c;
  uStack_2c = uStack_38;
  iVar1 = func_0x0229f06c(0x7a98,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01c8f3c0(iVar1,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e6c044(iVar1,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01aa5fb4(iVar1,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01ab7f28(iVar1,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 200);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01a6b864(iVar1,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450818(&uStack_40,iVar1,**(undefined4 **)(_UNK_01cc7d64 + 0x1cc7bbc));
    puVar9 = *(undefined4 **)(_UNK_01cc7d68 + 0x1cc7be0);
    piVar8 = *(int **)(_UNK_01cc7d6c + 0x1cc7be8);
    while (iVar1 = func_0x01473bf8(&uStack_40,*puVar9), iVar1 != 0) {
      uStack_48 = uStack_2c;
      uStack_50 = uStack_34;
      uStack_4c = uStack_30;
      func_0x01483df8(&uStack_50,&uStack_58,&uStack_5c,**(undefined4 **)(_UNK_01cc7d70 + 0x1cc7c0c))
      ;
      piVar2 = (int *)func_0x01384ab8(uStack_5c,*piVar8);
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        iVar4 = *piVar8;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == iVar4) {
              puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 200);
              goto LAB_01cc7c8c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,1);
LAB_01cc7c8c:
        (*(code *)*puVar3)(piVar2,puVar3[1]);
      }
    }
    func_0x0245081c(&uStack_40,**(undefined4 **)(_UNK_01cc7d74 + 0x1cc7cac));
  }
  else {
    iVar1 = func_0x0229f13c(0x7a98,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.HandbookMan$$.ctor RVA 0x1cb7d80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc7d80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  pcVar3 = (char *)(_UNK_01cc7ed4 + 0x1cc7d94);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc7ed8 + 0x1cc7da8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7edc + 0x1cc7db4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7ee0 + 0x1cc7dc0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7ee4 + 0x1cc7dcc));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7ee8 + 0x1cc7dd8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7eec + 0x1cc7de4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc7ef0 + 0x1cc7df0));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_01cc7ef4 + 0x1cc7e04);
  uVar1 = func_0x01384be4(*puVar4);
  func_0x028cdb4c(uVar1,&UNK_00b71b00,0);
  uVar2 = *puVar4;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x028cdb4c(uVar1,&UNK_00b71b00,0);
  puVar4 = *(undefined4 **)(_UNK_01cc7ef8 + 0x1cc7e48);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x01384be4(*puVar4);
  func_0x02451950(uVar1,**(undefined4 **)(_UNK_01cc7efc + 0x1cc7e60));
  puVar4 = *(undefined4 **)(_UNK_01cc7f00 + 0x1cc7e74);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(*puVar4);
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_01cc7f04 + 0x1cc7e8c));
  puVar4 = *(undefined4 **)(_UNK_01cc7f08 + 0x1cc7ea0);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x01384be4(*puVar4);
  func_0x02450a14(uVar1,**(undefined4 **)(_UNK_01cc7f0c + 0x1cc7eb8));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.HandbookMan$$.cctor RVA 0x1cb7f10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc7f10(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = (char *)(_UNK_01cc7fa0 + 0x1cc7f24);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc7fa4 + 0x1cc7f38));
    *pcVar3 = '\x01';
  }
  pcVar3 = (char *)(_UNK_01cc7fa8 + 0x1cc7f4c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc7fac + 0x1cc7f60));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined8 **)(**(int **)(_UNK_01cc7fb0 + 0x1cc7f74) + 0x5c);
  uVar4 = *puVar1;
  puVar2 = *(undefined8 **)(**(int **)(_UNK_01cc7fb4 + 0x1cc7f80) + 0x5c);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
  *puVar2 = uVar4;
  return;
}



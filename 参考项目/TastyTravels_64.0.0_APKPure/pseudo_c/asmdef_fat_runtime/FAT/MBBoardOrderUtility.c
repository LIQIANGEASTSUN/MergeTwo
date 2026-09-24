/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardOrderUtility$$get_DebugForceOrderV2 RVA 0x1f1a0f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f2a0f0(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
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
  
  pcVar3 = (char *)(_UNK_01f2a174 + 0x1f2a100);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f2a178 + 0x1f2a114));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa5e7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa5e7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
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
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar5,&uStack_30,uVar4,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)**(byte **)(**(int **)(_UNK_01f2a17c + 0x1f2a168) + 0x5c);
}



// ===== FAT.MBBoardOrderUtility$$SetDebugForceOrderV2 RVA 0x1f1a180 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f2a180(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01f2a20c + 0x1f2a194);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f2a210 + 0x1f2a1a8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa5e8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa5e8,0);
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
    func_0x01485228(&uStack_30,param_1,0);
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
  **(undefined1 **)(**(int **)(_UNK_01f2a214 + 0x1f2a200) + 0x5c) = (char)param_1;
  return;
}



// ===== FAT.MBBoardOrderUtility$$IsOrderV2Enabled RVA 0x1f1a218 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f2a218(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
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
  
  pcVar8 = (char *)(_UNK_01f2a2e0 + 0x1f2a228);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f2a2e4 + 0x1f2a23c));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x16c0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x16c0,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar9 = 0;
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
      uVar9 = 0;
      if (*(int *)(iVar3 + 0x10) != 0) {
        uVar9 = 1;
      }
    }
    iVar12 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar12,uVar10,&uStack_30,uVar9);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if (**(char **)(**(int **)(_UNK_01f2a2e8 + 0x1f2a290) + 0x5c) != '\0') {
    return 1;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x60);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar12 = func_0x0229f06c(0xf6,0,0);
  if (iVar12 == 0) {
    iVar12 = func_0x0229f06c(0xf7,0);
    if (iVar12 == 0) {
      iVar12 = func_0x01cc0400(iVar3,0x90);
      if (iVar12 != 0) {
        return 0;
      }
      pcVar8 = (char *)(_UNK_01cc09d4 + 0x1cc0538);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01cc09d8 + 0x1cc054c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09dc + 0x1cc0558));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e0 + 0x1cc0564));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e4 + 0x1cc0570));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e8 + 0x1cc057c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09ec + 0x1cc0588));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09f0 + 0x1cc0594));
        *pcVar8 = '\x01';
      }
      iVar12 = func_0x0229f06c(0xf9,0);
      if (iVar12 == 0) {
        iVar12 = *(int *)(iVar3 + 8);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        iVar12 = func_0x02451990(iVar12,0x90,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
        uVar4 = 1;
        if (iVar12 != 0) {
          iVar12 = func_0x01c24918(0);
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 8);
          iVar12 = *(int *)(iVar12 + 0x68);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02451948(iVar3,0x90,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar3 + 0x28)) {
            iVar11 = func_0x01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0x9c);
            uVar9 = *(undefined4 *)(iVar3 + 0x28);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x01c77708(iVar11,uVar9,0);
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
              uVar9 = (*(code *)*puVar2)(piVar1,puVar2[1]);
              if (iVar12 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x01e6c0b0(iVar12,uVar9,0);
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
      iVar12 = func_0x0229f13c(0xf9,0);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar12 = func_0x0229f13c(0xf7,0);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar12 = func_0x0229f13c(0xf6,0);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0x90,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar12 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar12 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar3,0);
  func_0x01485238(&uStack_38,0x90,0);
  iVar11 = *(int *)(iVar12 + 8);
  uVar9 = *(undefined4 *)(iVar12 + 0xc);
  iVar3 = *(int *)(iVar12 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 3;
  if (iVar3 == 0) {
    uVar10 = 2;
  }
  func_0x0245495c(iVar11,uVar9,&uStack_38,uVar10,0,0);
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.MBBoardOrderUtility$$GetDefaultTypeKey RVA 0x1f1a2ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f2a2ec(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
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
  
  pcVar3 = (char *)(_UNK_01f2a38c + 0x1f2a2fc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f2a390 + 0x1f2a310));
    func_0x01384978(*(undefined4 *)(_UNK_01f2a394 + 0x1f2a31c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa5e9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa5e9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021788ac + 0x21787dc);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021788b0 + 0x21787f0),0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
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
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar4,&uStack_30,uVar5,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021788b4 + 0x217889c));
    return uVar5;
  }
  iVar1 = FUN_01f2a218();
  if (iVar1 == 0) {
    puVar2 = *(undefined4 **)(_UNK_01f2a398 + 0x1f2a388);
  }
  else {
    puVar2 = *(undefined4 **)(_UNK_01f2a39c + 0x1f2a37c);
  }
  return *puVar2;
}



// ===== FAT.MBBoardOrderUtility$$GetItemTypeKey RVA 0x1f1a3a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f2a3a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uStack_14;
  
  pcVar7 = (char *)(_UNK_01f2a528 + 0x1f2a3b8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f2a52c + 0x1f2a3cc));
    *pcVar7 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0xa5ea,0);
  if (iVar1 == 0) {
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_1;
    piVar8 = *(int **)(_UNK_01f2a530 + 0x1f2a43c);
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar4 = *piVar8;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x3b8);
          goto LAB_01f2a484;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_1,iVar4,0x5f);
LAB_01f2a484:
    iVar1 = (*(code *)*puVar3)(param_1,puVar3[1]);
    if (iVar1 != 0) {
      if (param_1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *param_1;
      iVar4 = *piVar8;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x3c0);
            goto LAB_01f2a4f8;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(param_1,iVar4,0x60);
LAB_01f2a4f8:
      iVar1 = (*(code *)*puVar3)(param_1,&uStack_14,puVar3[1]);
      if (iVar1 != 0) {
        return uStack_14;
      }
    }
    uVar2 = FUN_01f2a2ec();
  }
  else {
    iVar1 = func_0x0229f13c(0xa5ea,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02173e78(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.MBBoardOrderUtility$$CanPresentOrder RVA 0x1f1a534 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f2a534(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
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
  
  pcVar6 = (char *)(_UNK_01f2a6f8 + 0x1f2a548);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f2a6fc + 0x1f2a55c));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  iVar1 = func_0x0229f06c(0xa5eb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa5eb,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
    uVar7 = func_0x0245496c(&uStack_30,0,0);
    return uVar7;
  }
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar10 = *(int **)(_UNK_01f2a700 + 0x1f2a5c4);
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01f2a60c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0);
LAB_01f2a60c:
    iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (iVar1 != 4) {
      iVar1 = *param_1;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == *piVar10) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto LAB_01f2a674;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0);
LAB_01f2a674:
      iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
      if (iVar1 != 5) {
        iVar1 = *param_1;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == *piVar10) {
              puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x1c0);
              goto LAB_01f2a6dc;
            }
            uVar7 = uVar7 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0x20);
LAB_01f2a6dc:
        uVar7 = (*(code *)*puVar2)(param_1,puVar2[1]);
        uVar7 = uVar7 ^ 1;
      }
    }
  }
  return uVar7;
}



// ===== FAT.MBBoardOrderUtility$$CanApplyDelayedOrderBoxEffect RVA 0x1f1a704 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f2a704(int *param_1,int *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  iVar2 = func_0x0229f06c(0xa5ec,0);
  if (iVar2 == 0) {
    if (param_1 == param_2 && param_3 == param_4) {
      pcVar7 = (char *)(_UNK_01f2a6f8 + 0x1f2a548);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f2a6fc + 0x1f2a55c));
        *pcVar7 = '\x01';
      }
      uVar3 = 0;
      iVar2 = func_0x0229f06c(0xa5eb,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0xa5eb,0);
        if (iVar2 == 0) {
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
        if (*(int *)(iVar2 + 0x10) != 0) {
          func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
        }
        func_0x01485278(&uStack_30,param_1,0);
        iVar8 = *(int *)(iVar2 + 8);
        uVar9 = *(undefined4 *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 2;
        if (iVar2 == 0) {
          uVar6 = 1;
        }
        func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
        uVar3 = func_0x0245496c(&uStack_30,0,0);
        return uVar3;
      }
      if (param_1 != (int *)0x0) {
        iVar2 = *param_1;
        piVar10 = *(int **)(_UNK_01f2a700 + 0x1f2a5c4);
        uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar10) {
              puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
              goto LAB_01f2a60c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0);
LAB_01f2a60c:
        iVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
        if (iVar2 != 4) {
          iVar2 = *param_1;
          uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar5[-1] == *piVar10) {
                puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
                goto LAB_01f2a674;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar4 != 0);
          }
          puVar1 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0);
LAB_01f2a674:
          iVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
          if (iVar2 != 5) {
            iVar2 = *param_1;
            uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar3 != 0) {
              piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar5[-1] == *piVar10) {
                  puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0x1c0);
                  goto LAB_01f2a6dc;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar1 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0x20);
LAB_01f2a6dc:
            uVar3 = (*(code *)*puVar1)(param_1,puVar1[1]);
            uVar3 = uVar3 ^ 1;
          }
        }
      }
      return uVar3;
    }
    uVar3 = 0;
  }
  else {
    iVar2 = func_0x0229f13c(0xa5ec,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    iStack_28 = param_4;
    uVar3 = func_0x021bf524(iVar2,param_1,param_2,param_3);
  }
  return uVar3;
}



// ===== FAT.MBBoardOrderUtility$$CanApplyDelayedOrderReload RVA 0x1f1a794 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f2a794(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
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
  
  iVar2 = func_0x0229f06c(0xa5ed,0);
  if (iVar2 == 0) {
    if (param_2 == param_3) {
      pcVar7 = (char *)(_UNK_01f2a6f8 + 0x1f2a548);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f2a6fc + 0x1f2a55c));
        *pcVar7 = '\x01';
      }
      uVar3 = 0;
      iVar2 = func_0x0229f06c(0xa5eb,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0xa5eb,0);
        if (iVar2 == 0) {
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
        if (*(int *)(iVar2 + 0x10) != 0) {
          func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
        }
        func_0x01485278(&uStack_30,param_1,0);
        iVar8 = *(int *)(iVar2 + 8);
        uVar9 = *(undefined4 *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 2;
        if (iVar2 == 0) {
          uVar6 = 1;
        }
        func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
        uVar3 = func_0x0245496c(&uStack_30,0,0);
        return uVar3;
      }
      if (param_1 != (int *)0x0) {
        iVar2 = *param_1;
        piVar10 = *(int **)(_UNK_01f2a700 + 0x1f2a5c4);
        uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar10) {
              puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
              goto LAB_01f2a60c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0);
LAB_01f2a60c:
        iVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
        if (iVar2 != 4) {
          iVar2 = *param_1;
          uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar5[-1] == *piVar10) {
                puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
                goto LAB_01f2a674;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar4 != 0);
          }
          puVar1 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0);
LAB_01f2a674:
          iVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
          if (iVar2 != 5) {
            iVar2 = *param_1;
            uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar3 != 0) {
              piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar5[-1] == *piVar10) {
                  puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0x1c0);
                  goto LAB_01f2a6dc;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar1 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0x20);
LAB_01f2a6dc:
            uVar3 = (*(code *)*puVar1)(param_1,puVar1[1]);
            uVar3 = uVar3 ^ 1;
          }
        }
      }
      return uVar3;
    }
    uVar3 = 0;
  }
  else {
    iVar2 = func_0x0229f13c(0xa5ed,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar3 = func_0x02174cb0(iVar2,param_1,param_2,param_3);
  }
  return uVar3;
}



// ===== FAT.MBBoardOrderUtility$$.ctor RVA 0x1f1a81c =====

void FUN_01f2a81c(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



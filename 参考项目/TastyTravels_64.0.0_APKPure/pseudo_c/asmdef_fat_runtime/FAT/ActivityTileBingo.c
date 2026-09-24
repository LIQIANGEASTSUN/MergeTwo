/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityTileBingo$$SetBoardData RVA 0x1b4e280 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0214bc3c) */
/* WARNING: Removing unreachable block (ram,0x0214b9ec) */
/* WARNING: Removing unreachable block (ram,0x0214b350) */
/* WARNING: Removing unreachable block (ram,0x0214b344) */
/* WARNING: Removing unreachable block (ram,0x0214acf8) */
/* WARNING: Removing unreachable block (ram,0x0214b080) */
/* WARNING: Removing unreachable block (ram,0x0214b08c) */
/* WARNING: Removing unreachable block (ram,0x0214b9e0) */
/* WARNING: Removing unreachable block (ram,0x0214bc48) */
/* WARNING: Removing unreachable block (ram,0x0214c20c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b5e280(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = func_0x0229f06c(0x8c2c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8c2c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    auStack_28[0] = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar14 = *(undefined4 *)(iVar2 + 0xc);
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
    func_0x0245495c(iVar11,uVar14,&uStack_38,uVar9);
    return;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x54);
  }
  if (param_2 == 0 || iVar2 == 0) {
    return;
  }
  func_0x01b5e398(param_1);
  func_0x01b5e530(param_1);
  func_0x01b5e634(param_1);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(param_1 + 0x54);
  uVar14 = *(undefined4 *)(param_1 + 0x108);
  iVar2 = *(int *)(iVar2 + 0x4c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar9 = *(undefined4 *)(iVar11 + 0x1c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x01db8438(iVar2,uVar14,uVar9,0);
  iVar2 = *(int *)(param_1 + 0x108);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_0214b97c + 0x214aa08);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214b980 + 0x214aa1c),param_2,0,0);
    func_0x01384978(*(undefined4 *)(_UNK_0214b984 + 0x214aa28));
    func_0x01384978(*(undefined4 *)(_UNK_0214b988 + 0x214aa34));
    func_0x01384978(*(undefined4 *)(_UNK_0214b98c + 0x214aa40));
    func_0x01384978(*(undefined4 *)(_UNK_0214b990 + 0x214aa4c));
    func_0x01384978(*(undefined4 *)(_UNK_0214b994 + 0x214aa58));
    func_0x01384978(*(undefined4 *)(_UNK_0214b998 + 0x214aa64));
    func_0x01384978(*(undefined4 *)(_UNK_0214b99c + 0x214aa70));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9a0 + 0x214aa7c));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9a4 + 0x214aa88));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9a8 + 0x214aa94));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9ac + 0x214aaa0));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9b0 + 0x214aaac));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9b4 + 0x214aab8));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9b8 + 0x214aac4));
    func_0x01384978(*(undefined4 *)(_UNK_0214bac4 + 0x214aad0));
    func_0x01384978(*(undefined4 *)(_UNK_0214bac8 + 0x214aadc));
    func_0x01384978(*(undefined4 *)(_UNK_0214bacc + 0x214aae8));
    func_0x01384978(*(undefined4 *)(_UNK_0214bad0 + 0x214aaf4));
    func_0x01384978(*(undefined4 *)(_UNK_0214bad4 + 0x214ab00));
    func_0x01384978(*(undefined4 *)(_UNK_0214bad8 + 0x214ab0c));
    func_0x01384978(*(undefined4 *)(_UNK_0214badc + 0x214ab18));
    func_0x01384978(*(undefined4 *)(_UNK_0214bae0 + 0x214ab24));
    func_0x01384978(*(undefined4 *)(_UNK_0214bae4 + 0x214ab30));
    func_0x01384978(*(undefined4 *)(_UNK_0214bae8 + 0x214ab3c));
    func_0x01384978(*(undefined4 *)(_UNK_0214baec + 0x214ab48));
    func_0x01384978(*(undefined4 *)(_UNK_0214baf0 + 0x214ab54));
    func_0x01384978(*(undefined4 *)(_UNK_0214baf4 + 0x214ab60));
    func_0x01384978(*(undefined4 *)(_UNK_0214baf8 + 0x214ab6c));
    func_0x01384978(*(undefined4 *)(_UNK_0214bafc + 0x214ab78));
    func_0x01384978(*(undefined4 *)(_UNK_0214bb7c + 0x214ab84));
    func_0x01384978(*(undefined4 *)(_UNK_0214bb80 + 0x214ab90));
    *pcVar10 = '\x01';
  }
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  auStack_28[0] = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  iVar11 = func_0x0229f06c(0x5c51,0);
  if (iVar11 != 0) {
    iVar11 = func_0x0229f13c(0x5c51,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar11,iVar2,param_2,0,0);
    return;
  }
  iVar11 = func_0x01c24918(0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar2 + 0x34);
  iVar11 = *(int *)(iVar11 + 0x38);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar12 + 0xc);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar12,**(undefined4 **)(_UNK_0214bc10 + 0x214ac60));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar16 = *(uint *)(param_2 + 0x48);
  uVar17 = *(uint *)(param_2 + 0x4c);
  if (uVar16 != 0 || uVar17 != 0) {
    iVar12 = 0;
    puVar15 = *(undefined4 **)(_UNK_0214bc14 + 0x214ac90);
    do {
      if ((uVar16 & 1) != 0) {
        iVar13 = *(int *)(iVar2 + 0x6c);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        func_0x024519c0(iVar13,iVar12,*puVar15);
      }
      bVar1 = (byte)uVar17;
      uVar17 = uVar17 >> 1;
      iVar12 = iVar12 + 1;
      uVar16 = (uint)(bVar1 & 1) << 0x1f | uVar16 >> 1;
    } while (uVar16 != 0 || uVar17 != 0);
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar14 = *(undefined4 *)(param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 0x34);
  *(int *)(iVar2 + 0x80) = *(int *)(param_2 + 0x30);
  *(undefined4 *)(iVar2 + 0x84) = uVar6;
  *(undefined4 *)(iVar2 + 0x90) = uVar14;
  *(undefined4 *)(iVar2 + 0x94) = uVar9;
  piVar3 = (int *)func_0x021566f4(0);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar3;
  uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar17 != 0) {
    piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0214bcb8 + 0x214ad30)) {
        puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
        goto LAB_0214ad78;
      }
      uVar17 = uVar17 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar17 != 0);
  }
  puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214bcb8 + 0x214ad30),0);
LAB_0214ad78:
  (*(code *)*puVar15)(piVar3,puVar15[1]);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar13 = *(int *)(iVar2 + 0x9c);
  iVar12 = (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x10)) * 1000;
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(param_2 + 0xc);
  *(int *)(iVar2 + 0x44) = iVar12;
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar13,**(undefined4 **)(_UNK_0214bd90 + 0x214addc));
  iVar12 = *(int *)(param_2 + 0x50);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x034658b4(iVar12,**(undefined4 **)(_UNK_0214bd94 + 0x214ae00));
  piVar7 = *(int **)(_UNK_0214bd98 + 0x214ae1c);
  puVar15 = *(undefined4 **)(_UNK_0214bd9c + 0x214ae24);
LAB_0214ae20:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar3;
  uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar17 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_0214bda0 + 0x214ae3c)) {
        puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
        goto LAB_0214ae84;
      }
      uVar17 = uVar17 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar17 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214bda0 + 0x214ae3c),0);
LAB_0214ae84:
  iVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar12 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
          goto LAB_0214aef8;
        }
        uVar17 = uVar17 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar17 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar7,0);
LAB_0214aef8:
    (*(code *)*puVar4)(&uStack_68,piVar3,puVar4[1]);
    iVar12 = iStack_64;
    uVar14 = uStack_68;
    iVar13 = func_0x02142c70(iVar2,uStack_68,2);
    if (iVar13 == 0) {
      piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0214bf34 + 0x214af5c),1);
      uStack_68 = uVar14;
      iVar12 = func_0x01384abc(**(undefined4 **)(_UNK_0214bf64 + 0x214af74),&uStack_68);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar12 != 0) &&
         (iVar13 = func_0x01384ab8(iVar12,*(undefined4 *)(*piVar8 + 0x20)), iVar13 == 0)) {
        uVar14 = func_0x01384c10();
        func_0x01384aa0(uVar14,0);
      }
      if (piVar8[3] == 0) {
        func_0x01384bf4();
      }
      piVar8[4] = iVar12;
      if (*(int *)(**(int **)(_UNK_0214bfc0 + 0x214afdc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(*puVar15,piVar8,0);
    }
    else {
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0214c448(iVar13,*(undefined4 *)(iVar12 + 0xc),*(undefined4 *)(iVar12 + 0x10));
    }
    goto LAB_0214ae20;
  }
  if (piVar3 != (int *)0x0) {
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c004 + 0x214b020)) {
          puVar4 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b068;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c004 + 0x214b020),0);
LAB_0214b068:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  iVar12 = *(int *)(iVar2 + 0x98);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar12,**(undefined4 **)(_UNK_0214c090 + 0x214b0b0));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(param_2 + 0x58);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x034658b4(iVar12,**(undefined4 **)(_UNK_0214c0c0 + 0x214b0e4));
  piVar7 = *(int **)(_UNK_0214c0c4 + 0x214b100);
LAB_0214b0fc:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar3;
  uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar17 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_0214c0c8 + 0x214b118)) {
        puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
        goto LAB_0214b160;
      }
      uVar17 = uVar17 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar17 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c0c8 + 0x214b118),0);
LAB_0214b160:
  iVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar12 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
          goto LAB_0214b1d4;
        }
        uVar17 = uVar17 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar17 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar7,0);
LAB_0214b1d4:
    (*(code *)*puVar4)(&uStack_68,piVar3,puVar4[1]);
    iVar12 = iStack_64;
    uVar14 = uStack_68;
    iVar13 = func_0x0214225c(iVar2,uStack_68,0xd);
    if (iVar13 == 0) {
      piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0214c218 + 0x214b220),1);
      uStack_68 = uVar14;
      iVar12 = func_0x01384abc(**(undefined4 **)(_UNK_0214c228 + 0x214b238),&uStack_68);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar12 != 0) &&
         (iVar13 = func_0x01384ab8(iVar12,*(undefined4 *)(*piVar8 + 0x20)), iVar13 == 0)) {
        uVar14 = func_0x01384c10();
        func_0x01384aa0(uVar14,0);
      }
      if (piVar8[3] == 0) {
        func_0x01384bf4();
      }
      piVar8[4] = iVar12;
      if (*(int *)(**(int **)(_UNK_0214c258 + 0x214b2a0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(*puVar15,piVar8,0);
    }
    else {
      func_0x0214c4c8(iVar13,iVar12);
    }
    goto LAB_0214b0fc;
  }
  if (piVar3 != (int *)0x0) {
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c2b4 + 0x214b2e4)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b32c;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c2b4 + 0x214b2e4),0);
LAB_0214b32c:
    (*(code *)*puVar15)(piVar3,puVar15[1]);
  }
  iVar12 = func_0x01c24918(0);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar12 + 0xc);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar14 = func_0x01ca5188(iVar12,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(param_2 + 0x28);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x03653608(iVar12,**(undefined4 **)(_UNK_0214c3b0 + 0x214b3bc));
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c3dc + 0x214b3e8)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b430;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c3dc + 0x214b3e8),0);
LAB_0214b430:
    iVar12 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    if (iVar12 == 0) {
      iVar11 = 0x15;
      iVar12 = 0;
      goto LAB_0214b574;
    }
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c3b8 + 0x214b464)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b4b4;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c3b8 + 0x214b464),0);
LAB_0214b4b4:
    iVar12 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar12 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar13 = func_0x01cccae0(iVar11,uVar9,0);
    if ((iVar13 == 0) && (iVar13 = func_0x02168818(*(undefined4 *)(iVar12 + 0x10),0), iVar13 == 0))
    break;
    func_0x0214c9b0(iVar2,iVar12,uVar14,auStack_28);
    iVar13 = *(int *)(iVar2 + 0x34);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar9 = auStack_28[0];
    iVar13 = *(int *)(iVar13 + 0xc);
    uVar6 = *(undefined4 *)(iVar12 + 0xc);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    func_0x03d6491c(iVar13,uVar6,uVar9,**(undefined4 **)(_UNK_0214c3d8 + 0x214b558));
  } while( true );
  uStack_68 = *(undefined4 *)(iVar12 + 0xc);
  uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c3bc + 0x214bdb8));
  uVar14 = func_0x01384abc(uVar14,&uStack_68);
  uStack_48 = *(undefined4 *)(iVar12 + 0x10);
  uVar9 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c0 + 0x214bdd8));
  uVar9 = func_0x01384abc(uVar9,&uStack_48);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uStack_4c = *(undefined4 *)(param_2 + 0x38);
  uVar6 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c4 + 0x214be0c));
  uVar6 = func_0x01384abc(uVar6,&uStack_4c);
  uVar5 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c8 + 0x214be24));
  uVar14 = func_0x02450228(uVar5,uVar14,uVar9,uVar6,0);
  iVar11 = func_0x01384988(*(undefined4 *)(_UNK_0214c3cc + 0x214be4c));
  if (*(int *)(iVar11 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar14,0);
  func_0x01384988(*(undefined4 *)(_UNK_0214c3d0 + 0x214be74));
  uVar9 = func_0x01384be4();
  func_0x0244f904(uVar9,uVar14,0);
  uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c3d4 + 0x214be94));
  func_0x01384aa0(uVar9,uVar14);
  uVar18 = func_0x01384928();
  if ((int)((ulonglong)uVar18 >> 0x20) != 1) {
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar17 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar17 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_0214c3ec + 0x214c1ac)) {
            puVar15 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_0214c1f4;
          }
          uVar17 = uVar17 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar17 != 0);
      }
      puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c3ec + 0x214c1ac),0);
LAB_0214c1f4:
      (*(code *)*puVar15)(piVar3,puVar15[1]);
    }
    func_0x01459844((int)uVar18);
    func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar7 = (int *)func_0x0145b008((int)uVar18);
  iVar12 = *piVar7;
  iVar11 = 0;
  func_0x0145b0f8();
LAB_0214b574:
  if (piVar3 != (int *)0x0) {
    iVar13 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c3e0 + 0x214b590)) {
          puVar15 = (undefined4 *)(iVar13 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b5d8;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c3e0 + 0x214b590),0);
LAB_0214b5d8:
    (*(code *)*puVar15)(piVar3,puVar15[1]);
  }
  if (iVar12 != 0) {
    func_0x01384bec(iVar12);
  }
  if (iVar11 != 0x15 && iVar11 != 0) {
    return;
  }
  iVar11 = *(int *)(iVar2 + 0x34);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar11 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64e30(&uStack_68,iVar11,**(undefined4 **)(_UNK_0214c3e4 + 0x214b638));
  uStack_30 = (ulonglong)uStack_58;
  uStack_40 = uStack_68;
  iStack_3c = iStack_64;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  puVar15 = *(undefined4 **)(_UNK_0214c3e8 + 0x214b664);
  while (iVar11 = func_0x03f9b324(&uStack_40,*puVar15), iVar11 != 0) {
    iVar11 = (int)uStack_30;
    if ((int)uStack_30 == 0) {
      func_0x01384bf0();
    }
    func_0x02117bcc(iVar11,0);
  }
  func_0x03f9b464(&uStack_40,**(undefined4 **)(_UNK_0214c3f0 + 0x214b6a0));
  iVar12 = *(int *)(iVar2 + 0x34);
  iVar11 = *(int *)(iVar2 + 0x50);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar14 = *(undefined4 *)(iVar12 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x02113ec4(iVar11,param_2,uVar14,0);
  iVar11 = *(int *)(iVar2 + 0x54);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x0214cca8(iVar11,param_2);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(param_2 + 0x5c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_0214c3f8 + 0x214b728));
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c428 + 0x214b750)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b798;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c428 + 0x214b750),0);
LAB_0214b798:
    iVar11 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    if (iVar11 == 0) {
      if (piVar3 == (int *)0x0) goto LAB_0214b9d8;
      iVar11 = *piVar3;
      uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar17 == 0) goto LAB_0214b96c;
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      break;
    }
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c400 + 0x214b7cc)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b814;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c400 + 0x214b7cc),0);
LAB_0214b814:
    uVar14 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    iVar11 = *(int *)(iVar2 + 0x34);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xc);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = func_0x03d66780(iVar11,uVar14,&uStack_44,**(undefined4 **)(_UNK_0214c404 + 0x214b854));
    uVar9 = uStack_44;
    if (iVar11 == 0) {
      uStack_68 = uVar14;
      uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c408 + 0x214bccc));
      uVar14 = func_0x01384abc(uVar14,&uStack_68);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = *(undefined4 *)(param_2 + 0x38);
      uVar9 = func_0x01384988(*(undefined4 *)(_UNK_0214c40c + 0x214bd00));
      uVar9 = func_0x01384abc(uVar9,&uStack_48);
      uVar6 = func_0x01384988(*(undefined4 *)(_UNK_0214c410 + 0x214bd18));
      uVar14 = func_0x0244f690(uVar6,uVar14,uVar9,0);
      iVar2 = func_0x01384988(*(undefined4 *)(_UNK_0214c414 + 0x214bd38));
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar14,0);
      func_0x01384988(*(undefined4 *)(_UNK_0214c418 + 0x214bd60));
      uVar9 = func_0x01384be4();
      func_0x0244f904(uVar9,uVar14,0);
      uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c41c + 0x214bd80));
      func_0x01384aa0(uVar9,uVar14);
      func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar11 = *(int *)(iVar2 + 0x68);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar11 + 8);
    uVar17 = *(uint *)(iVar11 + 0xc);
    piVar7 = *(int **)(_UNK_0214c420 + 0x214b8a0);
    *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
    iVar12 = *piVar7;
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    if (uVar17 < *(uint *)(iVar13 + 0xc)) {
      *(uint *)(iVar11 + 0xc) = uVar17 + 1;
      *(undefined4 *)(iVar13 + uVar17 * 4 + 0x10) = uVar9;
    }
    else {
      func_0x0328f170(iVar11,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar11 = *(int *)(iVar2 + 0x34);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xc);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x03d66094(iVar11,uVar14,**(undefined4 **)(_UNK_0214c424 + 0x214b910));
  } while( true );
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar7 = piVar7 + 2;
    if (uVar17 == 0) break;
    if (piVar7[-1] == **(int **)(_UNK_0214c42c + 0x214b940)) {
      puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
      goto LAB_0214b9c8;
    }
  }
LAB_0214b96c:
  puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c42c + 0x214b940),0);
LAB_0214b9c8:
  (*(code *)*puVar15)(piVar3,puVar15[1]);
LAB_0214b9d8:
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar2 + 0x34);
  iVar11 = *(int *)(iVar2 + 0x4c);
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_2 + 0x18);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar14 = *(undefined4 *)(iVar12 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x020daf18(iVar11,uVar14,0);
  iVar11 = *(int *)(param_2 + 0x1c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_0214c430 + 0x214ba60));
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c43c + 0x214ba88)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214bb0c;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c43c + 0x214ba88),0);
LAB_0214bb0c:
    iVar11 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    if (iVar11 == 0) break;
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c438 + 0x214bb40)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214bb90;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c438 + 0x214bb40),0);
LAB_0214bb90:
    uVar14 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    func_0x02144c58(iVar2,uVar14,1);
  } while( true );
  if (piVar3 != (int *)0x0) {
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c440 + 0x214bbd4)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214bc24;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c440 + 0x214bbd4),0);
LAB_0214bc24:
    (*(code *)*puVar15)(piVar3,puVar15[1]);
  }
  iVar11 = *(int *)(iVar2 + 0x58);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x02139c14(iVar11,param_2);
  iVar11 = *(int *)(iVar2 + 0x5c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x0215e864(iVar11,param_2,0);
  iVar2 = *(int *)(iVar2 + 0x60);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01db6ad4(iVar2,param_2,0);
  return;
}



// ===== FAT.ActivityTileBingo$$CreateWorld RVA 0x1b4e398 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b5e398(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_01b5e51c + 0x1b5e3ac);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b5e520 + 0x1b5e3c0));
    func_0x01384978(*(undefined4 *)(_UNK_01b5e524 + 0x1b5e3cc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c2e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c2e,0);
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
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4);
    return;
  }
  uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01b5e528 + 0x1b5e424));
  func_0x02143488(uVar7,0);
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x108) = uVar7;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x38) == '\0') {
    iVar1 = *(int *)(param_1 + 0x108);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02143dc4(iVar1,0);
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x39) == '\0') {
    iVar1 = *(int *)(param_1 + 0x108);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021440e4(iVar1,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0x4c);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b5e52c + 0x1b5e4cc));
  func_0x01db7f44(iVar1,0);
  uVar7 = *(undefined4 *)(param_1 + 0x108);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 8) = 0xb;
  *(undefined4 *)(iVar1 + 0xc) = uVar7;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_01db80d4 + 0x1db7f64);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db80d8 + 0x1db7f78),iVar1,0);
    func_0x01384978(*(undefined4 *)(_UNK_01db80dc + 0x1db7f84));
    func_0x01384978(*(undefined4 *)(_UNK_01db80e0 + 0x1db7f90));
    func_0x01384978(*(undefined4 *)(_UNK_01db80e4 + 0x1db7f9c));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5baa,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5baa,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar6,0);
    func_0x01485278(&uStack_38,iVar1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar6,*(undefined4 *)(iVar1 + 0xc));
  iVar6 = *(int *)(iVar6 + 0x18);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar6 + 8);
  uVar8 = *(uint *)(iVar6 + 0xc);
  piVar3 = *(int **)(_UNK_01db80e8 + 0x1db8034);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  iVar9 = *piVar3;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (uVar8 < *(uint *)(iVar2 + 0xc)) {
    *(uint *)(iVar6 + 0xc) = uVar8 + 1;
    *(int *)(iVar2 + uVar8 * 4 + 0x10) = iVar1;
  }
  else {
    func_0x0328f170(iVar6,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
  }
  if (*(int *)(**(int **)(_UNK_01db80ec + 0x1db8084) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar6 = func_0x0300d558(**(undefined4 **)(_UNK_01db80f0 + 0x1db80a0));
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar6 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar7,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.ActivityTileBingo$$CreateWorldTracer RVA 0x1b4e530 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b5e530(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01b5e618 + 0x1b5e544);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b5e61c + 0x1b5e558));
    func_0x01384978(*(undefined4 *)(_UNK_01b5e620 + 0x1b5e564));
    func_0x01384978(*(undefined4 *)(_UNK_01b5e624 + 0x1b5e570));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c31,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c31,0);
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
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b5e628 + 0x1b5e5c8));
  func_0x024500b4(uVar5,param_1,**(undefined4 **)(_UNK_01b5e62c + 0x1b5e5e4),0);
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01b5e630 + 0x1b5e5f8));
  func_0x0214d6c8(uVar2,uVar5,0,0);
  *(undefined4 *)(param_1 + 0x10c) = uVar2;
  return;
}



// ===== FAT.ActivityTileBingo$$BindWorldTracer RVA 0x1b4e634 =====

void FUN_01b5e634(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x8c35,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c35,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10c);
  uVar5 = *(undefined4 *)(param_1 + 0x108);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0214e900(iVar1,uVar5,0);
  iVar1 = *(int *)(param_1 + 0x108);
  uVar5 = *(undefined4 *)(param_1 + 0x10c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0229f06c(0x5bb9,0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x5bb9,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,uVar5,0);
    iVar4 = *(int *)(iVar3 + 8);
    uVar5 = *(undefined4 *)(iVar3 + 0xc);
    iVar1 = *(int *)(iVar3 + 0x10);
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
  *(undefined4 *)(iVar1 + 0x2c) = uVar5;
  return;
}



// ===== FAT.ActivityTileBingo$$FillBoardData RVA 0x1b4e6cc =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b5e6cc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int unaff_r4;
  char *pcVar11;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar12;
  undefined4 uVar13;
  undefined4 unaff_r7;
  undefined4 *puVar14;
  undefined4 *unaff_r8;
  int unaff_r9;
  uint uVar15;
  int unaff_r10;
  undefined4 *puVar16;
  undefined4 unaff_lr;
  undefined8 uVar17;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int aiStack_28 [4];
  
  iVar1 = func_0x0229f06c(0x8c37,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x108);
    if (param_1 == 0) {
      return;
    }
    pcVar11 = (char *)(_UNK_0214881c + 0x2147b9c);
    if (*pcVar11 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02148820 + 0x2147bb0),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02148824 + 0x2147bbc));
      func_0x01384978(*(undefined4 *)(_UNK_02148828 + 0x2147bc8));
      func_0x01384978(*(undefined4 *)(_UNK_0214882c + 0x2147bd4));
      func_0x01384978(*(undefined4 *)(_UNK_02148830 + 0x2147be0));
      func_0x01384978(*(undefined4 *)(_UNK_02148834 + 0x2147bec));
      func_0x01384978(*(undefined4 *)(_UNK_02148838 + 0x2147bf8));
      func_0x01384978(*(undefined4 *)(_UNK_0214883c + 0x2147c04));
      func_0x01384978(*(undefined4 *)(_UNK_02148840 + 0x2147c10));
      func_0x01384978(*(undefined4 *)(_UNK_02148844 + 0x2147c1c));
      func_0x01384978(*(undefined4 *)(_UNK_02148848 + 0x2147c28));
      func_0x01384978(*(undefined4 *)(_UNK_0214884c + 0x2147c34));
      func_0x01384978(*(undefined4 *)(_UNK_02148850 + 0x2147c40));
      func_0x01384978(*(undefined4 *)(_UNK_02148854 + 0x2147c4c));
      func_0x01384978(*(undefined4 *)(_UNK_02148858 + 0x2147c58));
      func_0x01384978(*(undefined4 *)(_UNK_0214885c + 0x2147c64));
      func_0x01384978(*(undefined4 *)(_UNK_02148860 + 0x2147c70));
      func_0x01384978(*(undefined4 *)(_UNK_02148864 + 0x2147c7c));
      func_0x01384978(*(undefined4 *)(_UNK_02148868 + 0x2147c88));
      func_0x01384978(*(undefined4 *)(_UNK_0214886c + 0x2147c94));
      func_0x01384978(*(undefined4 *)(_UNK_02148870 + 0x2147ca0));
      func_0x01384978(*(undefined4 *)(_UNK_02148874 + 0x2147cac));
      func_0x01384978(*(undefined4 *)(_UNK_02148878 + 0x2147cb8));
      func_0x01384978(*(undefined4 *)(_UNK_0214887c + 0x2147cc4));
      func_0x01384978(*(undefined4 *)(_UNK_02148880 + 0x2147cd0));
      func_0x01384978(*(undefined4 *)(_UNK_02148884 + 0x2147cdc));
      func_0x01384978(*(undefined4 *)(_UNK_02148888 + 0x2147ce8));
      func_0x01384978(*(undefined4 *)(_UNK_0214888c + 0x2147cf4));
      func_0x01384978(*(undefined4 *)(_UNK_02148890 + 0x2147d00));
      func_0x01384978(*(undefined4 *)(_UNK_02148894 + 0x2147d0c));
      func_0x01384978(*(undefined4 *)(_UNK_02148898 + 0x2147d18));
      func_0x01384978(*(undefined4 *)(_UNK_0214889c + 0x2147d24));
      func_0x01384978(*(undefined4 *)(_UNK_021488a0 + 0x2147d30));
      func_0x01384978(*(undefined4 *)(_UNK_021488a4 + 0x2147d3c));
      func_0x01384978(*(undefined4 *)(_UNK_021488a8 + 0x2147d48));
      func_0x01384978(*(undefined4 *)(_UNK_021488ac + 0x2147d54));
      func_0x01384978(*(undefined4 *)(_UNK_021488b0 + 0x2147d60));
      func_0x01384978(*(undefined4 *)(_UNK_021488b4 + 0x2147d6c));
      *pcVar11 = '\x01';
    }
    uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_90 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_8c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_60 = 0;
    unaff_r8 = &uStack_38;
    uStack_78 = 0;
    aiStack_28[0] = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_38 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_48 = 0;
    uStack_84 = uStack_94;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    uStack_5c = uStack_94;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    uStack_34 = uStack_94;
    uStack_30 = uStack_90;
    uStack_2c = uStack_8c;
    iVar1 = func_0x0229f06c(0x5c6c,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar1 + 8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_2 + 0x38) = uVar13;
      uVar17 = func_0x02140d24(param_1);
      uVar17 = func_0x01458584((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),1000,0);
      *(undefined8 *)(param_2 + 0x30) = uVar17;
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_021488b8 + 0x2147e74)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_02147ebc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021488b8 + 0x2147e74),0);
LAB_02147ebc:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
      uVar13 = *(undefined4 *)(param_1 + 0x94);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_2 + 0x3c) = uVar13;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x021139b0(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02148958(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02139e7c(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0215ea7c(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01db6828(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02110804(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x020dc720(iVar1,aiStack_28,0);
      iVar1 = aiStack_28[0];
      iStack_b4 = param_2;
      if (iVar6 != 0) {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        func_0x0325a3b4(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488bc + 0x2147fe8));
        uStack_38 = uStack_b0;
        uStack_34 = uStack_ac;
        uStack_30 = uStack_a8;
        uStack_2c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488c0 + 0x2148004);
        puVar14 = *(undefined4 **)(_UNK_021488c4 + 0x214800c);
        while (iVar1 = func_0x03f597e0(unaff_r8,*puVar3), uVar7 = uStack_2c, iVar1 != 0) {
          iVar1 = *(int *)(param_2 + 0x6c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0364baf8(iVar1,uVar7,*puVar14);
        }
        func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_021488c8 + 0x2148050));
      }
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
      uVar17 = func_0x02140d24(param_1);
      uVar7 = *(uint *)(param_1 + 0x44);
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar13 = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_2 + 0x44) = uVar13;
      uVar17 = func_0x01458584((uint)uVar17 - uVar7,
                               (int)((ulonglong)uVar17 >> 0x20) -
                               (((int)uVar7 >> 0x1f) + (uint)((uint)uVar17 < uVar7)),1000,0);
      *(undefined8 *)(param_2 + 0x10) = uVar17;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0x10)) {
        iVar1 = *(int *)(param_1 + 0x6c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02454910(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488d0 + 0x21480dc));
        uVar7 = 0;
        uVar15 = 0;
        uStack_48 = uStack_b0;
        uStack_44 = uStack_ac;
        uStack_40 = uStack_a8;
        uStack_3c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488d4 + 0x2148104);
        while (iVar1 = func_0x03f5a2cc(&uStack_48,*puVar3), iVar1 != 0) {
          uVar4 = uStack_3c & 0x3f;
          uVar8 = uVar4 - 0x20;
          uVar5 = 1 << uVar4;
          if (-1 < (int)uVar8) {
            uVar5 = 0;
          }
          uVar7 = uVar5 | uVar7;
          uVar5 = 1 >> (0x20 - uVar4 & 0xff);
          if (-1 < (int)uVar8) {
            uVar5 = 1 << (uVar8 & 0xff);
          }
          uVar15 = uVar5 | uVar15;
        }
        func_0x03f5a2c8(&uStack_48,**(undefined4 **)(_UNK_021488dc + 0x214814c));
        if (iStack_b4 == 0) {
          func_0x01384bf0();
        }
        *(uint *)(param_2 + 0x48) = uVar7;
        *(uint *)(param_2 + 0x4c) = uVar15;
      }
      iVar1 = *(int *)(param_1 + 0x9c);
      iStack_b8 = param_1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488e4 + 0x2148190));
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      puVar14 = *(undefined4 **)(_UNK_021488e8 + 0x21481bc);
      puVar3 = *(undefined4 **)(_UNK_021488ec + 0x21481c4);
      while (iVar1 = func_0x03f9b324(&uStack_60,*puVar14), uVar7 = uStack_54, iVar1 != 0) {
        iVar1 = (int)uStack_50;
        iVar12 = *(int *)(iStack_b4 + 0x50);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_021488f4 + 0x21481ec));
        func_0x01797598(iVar6,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148a58(iVar1);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar6 + 0x10) = uVar13;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148aac(iVar1);
        *(undefined4 *)(iVar6 + 0xc) = uVar13;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar12,uVar7,iVar6,*puVar3);
      }
      func_0x03f9b464(&uStack_60,**(undefined4 **)(_UNK_021488f8 + 0x214826c));
      iVar1 = *(int *)(iStack_b8 + 0x98);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_02148900 + 0x214829c));
      uStack_78 = uStack_b0;
      uStack_74 = uStack_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      puVar3 = *(undefined4 **)(_UNK_02148904 + 0x21482c8);
      puVar14 = *(undefined4 **)(_UNK_02148908 + 0x21482d0);
      puVar16 = *(undefined4 **)(_UNK_0214890c + 0x21482d8);
      while (iVar1 = func_0x03f9b324(&uStack_78,*puVar3), uVar7 = uStack_6c, iVar1 != 0) {
        iVar1 = (int)uStack_68;
        uVar13 = func_0x01384be4(*puVar14);
        func_0x01798ae4(uVar13,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02148b00(iVar1,uVar13);
        iVar1 = *(int *)(iStack_b4 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar1,uVar7,uVar13,*puVar16);
      }
      func_0x03f9b464(&uStack_78,**(undefined4 **)(_UNK_02148914 + 0x2148354));
      iVar6 = iStack_b4;
      iVar1 = iStack_b8;
      uVar13 = **(undefined4 **)(_UNK_0214891c + 0x2148368);
      *(int *)(iStack_b8 + 0xa4) = iStack_b4;
      uVar13 = func_0x01384be4(uVar13);
      func_0x03ccb96c(uVar13,iVar1,**(undefined4 **)(_UNK_02148920 + 0x2148390),0);
      func_0x021475dc(iVar1,uVar13,0x7fffffff);
      iVar12 = *(int *)(iVar1 + 0x68);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_b0,iVar12,**(undefined4 **)(_UNK_02148924 + 0x21483d0));
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      puVar3 = *(undefined4 **)(_UNK_02148928 + 0x21483ec);
      puVar14 = *(undefined4 **)(_UNK_0214892c + 0x21483f4);
      while (iVar12 = func_0x03f5f428(&uStack_88,*puVar3), uVar7 = uStack_7c, iVar12 != 0) {
        iVar12 = *(int *)(iVar6 + 0x5c);
        if (uStack_7c == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x0210e5f4(uVar7,0);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x0364baf8(iVar12,uVar13,*puVar14);
      }
      func_0x03f5f424(&uStack_88,**(undefined4 **)(_UNK_02148934 + 0x2148454));
      iVar6 = *(int *)(iVar1 + 0x34);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x03d6476c(iVar6,**(undefined4 **)(_UNK_0214893c + 0x2148488));
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x0382ab5c(&uStack_98,iVar6,**(undefined4 **)(_UNK_02148940 + 0x21484b4));
      puVar3 = *(undefined4 **)(_UNK_02148944 + 0x21484c8);
      while (iVar6 = func_0x03f9b9f8(&uStack_98,*puVar3), iVar6 != 0) {
        if (uStack_8c != 0) {
          func_0x02148de8(iVar1);
        }
      }
      func_0x03f9b9f4(&uStack_98,**(undefined4 **)(_UNK_0214894c + 0x21484fc));
      return;
    }
    iVar1 = func_0x0229f13c(0x5c6c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2147e08;
    unaff_r4 = iVar1;
    unaff_r9 = param_2;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&iStack_b8;
  }
  else {
    iVar1 = func_0x0229f13c(0x8c37,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
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
  iVar6 = *(int *)(iVar1 + 0x10);
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 3;
  if (iVar1 == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar10);
  return;
}



// ===== FAT.ActivityTileBingo$$InitWorld RVA 0x1b4e740 =====

void FUN_01b5e740(int param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x8c38,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c38,0);
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
  FUN_01b5e398(param_1);
  FUN_01b5e530(param_1);
  FUN_01b5e634(param_1);
  func_0x01b5e81c(param_1);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x54);
  uVar4 = *(undefined4 *)(param_1 + 0x108);
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(iVar3 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  uStack_14 = 0;
  func_0x01db8438(iVar1,uVar4,uVar2,1);
  return;
}



// ===== FAT.ActivityTileBingo$$CreateInventory RVA 0x1b4e81c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b5e81c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8c39,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c39,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    iVar1 = func_0x0245495c(iVar11,uVar12,&uStack_30,uVar7,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x108);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02141880(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02112bc0(iVar1,1,0);
  iVar1 = *(int *)(param_1 + 0x108);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02141880(iVar1,0);
  iVar11 = *(int *)(param_1 + 0x54);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar12 = *(undefined4 *)(iVar11 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_02115fa4 + 0x2115cc0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02115fa8 + 0x2115cd4),uVar12,1,0);
    func_0x01384978(*(undefined4 *)(_UNK_02115fac + 0x2115ce0));
    func_0x01384978(*(undefined4 *)(_UNK_02115fb0 + 0x2115cec));
    func_0x01384978(*(undefined4 *)(_UNK_02115fb4 + 0x2115cf8));
    func_0x01384978(*(undefined4 *)(_UNK_02115fb8 + 0x2115d04));
    func_0x01384978(*(undefined4 *)(_UNK_02115fbc + 0x2115d10));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar11 = func_0x0229f06c(0x55d,0);
  if (iVar11 == 0) {
    iVar11 = *(int *)(iVar1 + 8);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar11,1,&iStack_28,**(undefined4 **)(_UNK_02115fc0 + 0x2115d98));
    iVar11 = iStack_28;
    if (iVar2 == 0) {
      piVar13 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02115fc8 + 0x2115ee8),1);
      uStack_2c = 1;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02115fcc + 0x2115f00),&uStack_2c);
      if (piVar13 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar11 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar13 + 0x20)), iVar11 == 0)) {
        uVar12 = func_0x01384c10();
        func_0x01384aa0(uVar12,0);
      }
      if (piVar13[3] == 0) {
        func_0x01384bf4();
      }
      piVar13[4] = iVar1;
      if (*(int *)(**(int **)(_UNK_02115fd0 + 0x2115f64) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar11 = 0;
      func_0x028c2f28(**(undefined4 **)(_UNK_02115fd4 + 0x2115f8c),piVar13,0);
    }
    else {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x02115fd8(iVar11,uVar12);
      if (iVar11 == 0) {
        iVar11 = 0;
      }
      else {
        uVar3 = *(uint *)(iVar11 + 0xc);
        if (0 < (int)uVar3) {
          uVar10 = 0;
          piVar13 = *(int **)(_UNK_02115fc4 + 0x2115dec);
          do {
            if (uVar3 <= uVar10) {
              func_0x01384bf4();
            }
            iVar2 = *(int *)(iVar11 + uVar10 * 4 + 0x10);
            if (iVar2 != 0) {
              piVar9 = *(int **)(iVar1 + 0x10);
              if (piVar9 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar4 = *piVar9;
              uVar3 = (uint)*(ushort *)(iVar4 + 0xb6);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                do {
                  if (piVar6[-1] == *piVar13) {
                    puVar5 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xc0);
                    goto LAB_02115e64;
                  }
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 2;
                } while (uVar3 != 0);
              }
              puVar5 = (undefined4 *)func_0x014002dc(piVar9,*piVar13,0);
LAB_02115e64:
              iVar4 = (*(code *)*puVar5)(piVar9,puVar5[1]);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              func_0x02144d84(iVar4,iVar2,0,0);
            }
            uVar3 = *(uint *)(iVar11 + 0xc);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar3);
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 != 0) {
          uStack_30 = *(undefined4 *)(iVar1 + 0x14);
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),1,iVar11,0);
        }
      }
    }
  }
  else {
    iVar11 = func_0x0229f13c(0x55d,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 0;
    iVar11 = func_0x0218e0a0(iVar11,iVar1,uVar12,1);
  }
  return iVar11;
}



// ===== FAT.ActivityTileBingo$$OnBoardItemChange RVA 0x1b4e8fc =====

void FUN_01b5e8fc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8c32,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x8c33,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x114);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x01b5e9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x8c33,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8c32,0);
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



// ===== FAT.ActivityTileBingo$$NotifyInvalidate RVA 0x1b4e954 =====

void FUN_01b5e954(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8c33,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c33,0);
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
  iVar1 = *(int *)(param_1 + 0x114);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b5e9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.ActivityTileBingo$$CheckIndicator RVA 0x1b4e9c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5e9c4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_01b5eb80 + 0x1b5e9e4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b5eb84 + 0x1b5e9f8));
    func_0x01384978(*(undefined4 *)(_UNK_01b5eb88 + 0x1b5ea04));
    func_0x01384978(*(undefined4 *)(_UNK_01b5eb8c + 0x1b5ea10));
    func_0x01384978(*(undefined4 *)(_UNK_01b5eb90 + 0x1b5ea1c));
    func_0x01384978(*(undefined4 *)(_UNK_01b5eb94 + 0x1b5ea28));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c3a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b5eb98 + 0x1b5ea8c));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 0xc) = param_1;
    *param_3 = 0;
    puVar3 = *(undefined4 **)(_UNK_01b5eb9c + 0x1b5eac0);
    *(undefined4 *)(iVar1 + 8) = param_2;
    iVar4 = func_0x034aaa34(*puVar3);
    iVar6 = *(int *)(param_1 + 0x98);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar6 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01eea2b8(iVar4,uVar2,0);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x68);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x01b5ebb4(iVar4);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b5eba0 + 0x1b5eb2c));
      func_0x0244f8d0(uVar5,iVar1,**(undefined4 **)(_UNK_01b5eba4 + 0x1b5eb48),0);
      iVar1 = func_0x02f85c6c(uVar2,uVar5,**(undefined4 **)(_UNK_01b5eba8 + 0x1b5eb60));
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 4;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8c3a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021ca740(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ActivityTileBingo.<>c__DisplayClass8_0$$.ctor RVA 0x1b4ebac =====

void FUN_01b5ebac(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityTileBingo$$PutItem RVA 0x1b4ec08 =====

/* WARNING: Removing unreachable block (ram,0x01b5f138) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b5ec08(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01b5f21c + 0x1b5ec24);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b5f220 + 0x1b5ec38));
    func_0x01384978(*(undefined4 *)(_UNK_01b5f224 + 0x1b5ec44));
    func_0x01384978(*(undefined4 *)(_UNK_01b5f228 + 0x1b5ec50));
    func_0x01384978(*(undefined4 *)(_UNK_01b5f22c + 0x1b5ec5c));
    func_0x01384978(*(undefined4 *)(_UNK_01b5f230 + 0x1b5ec68));
    func_0x01384978(*(undefined4 *)(_UNK_01b5f234 + 0x1b5ec74));
    *pcVar10 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x8c48,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(param_2,&iStack_28,0,**(undefined4 **)(_UNK_01b5f238 + 0x1b5ecf0));
    iVar1 = iStack_28;
    if (iVar2 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0211d880(iVar1,0);
      iVar1 = iStack_28;
      if (iVar2 != 0) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0211dc48(iVar1,0);
        if (iVar1 != 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0210cd28(param_2,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x020e6d84(iVar1,param_2,0);
          return 1;
        }
      }
    }
    iVar1 = func_0x021697d8(param_2,0);
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 == 0) {
      iVar2 = *(int *)(iVar2 + 0x10);
      iVar4 = **(int **)(_UNK_01b5f23c + 0x1b5eefc);
      iVar1 = *(int *)(iVar4 + 0x1c);
      if (iVar1 == 0) {
        func_0x0140024c(iVar4);
        iVar1 = *(int *)(iVar4 + 0x1c);
      }
      iVar1 = *(int *)(iVar1 + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0();
      }
      uVar3 = **(undefined4 **)(iVar1 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 0x18;
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x50);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0210e2d4(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x01dd0230(iVar1,uVar3,0);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = *(int *)(param_1 + 0x5c);
        iVar1 = iVar4;
      }
      if (iVar4 != 0 && iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 0x1c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar5 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01b5f240 + 0x1b5efa8));
        piVar11 = *(int **)(_UNK_01b5f244 + 0x1b5efc0);
        piVar12 = *(int **)(_UNK_01b5f248 + 0x1b5efc8);
        do {
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar5;
          uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar9[-1] == *piVar11) {
                puVar6 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
                goto LAB_01b5f020;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined4 *)func_0x014002dc(piVar5,*piVar11,0);
LAB_01b5f020:
          iVar2 = (*(code *)*puVar6)(piVar5,puVar6[1]);
          if (iVar2 == 0) {
            iVar2 = 5;
            goto LAB_01b5f0c0;
          }
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar5;
          uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar9[-1] == *piVar12) {
                puVar6 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
                goto LAB_01b5f098;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined4 *)func_0x014002dc(piVar5,*piVar12,0);
LAB_01b5f098:
          iVar2 = (*(code *)*puVar6)(piVar5,puVar6[1]);
        } while (*(int *)(iVar1 + 0x10) != iVar2);
        iVar2 = 8;
LAB_01b5f0c0:
        if (piVar5 != (int *)0x0) {
          iVar4 = *piVar5;
          uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(int *)(iVar4 + 0x58) + 4);
            do {
              iVar1 = piVar11[-1];
              if (iVar1 == **(int **)(_UNK_01b5f24c + 0x1b5f0d8)) {
                puVar6 = (undefined4 *)(iVar4 + *piVar11 * 8 + 0xc0);
                goto LAB_01b5f120;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 2;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01b5f24c + 0x1b5f0d8),0);
LAB_01b5f120:
          (*(code *)*puVar6)(piVar5,puVar6[1]);
        }
        if (iVar2 != 5) {
          iVar1 = 0;
        }
        if (iVar2 != 5 && iVar2 != 0) {
          return iVar1;
        }
      }
      iVar1 = *(int *)(param_1 + 0x108);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x020e82b4(iVar1,param_2,0);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar1 + 0x10);
      iVar4 = **(int **)(_UNK_01b5f250 + 0x1b5ee74);
      iVar1 = *(int *)(iVar4 + 0x1c);
      if (iVar1 == 0) {
        func_0x0140024c(iVar4);
        iVar1 = *(int *)(iVar4 + 0x1c);
      }
      iVar1 = *(int *)(iVar1 + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0();
      }
      uVar3 = **(undefined4 **)(iVar1 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 0x17;
    }
    iVar1 = 0;
    func_0x01ca1c50(iVar2,uVar7,uVar3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8c48,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return iVar1;
}



// ===== FAT.ActivityTileBingo$$PeekItem RVA 0x1b4f258 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5f258(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uStack_30;
  int iStack_2c;
  int aiStack_28 [2];
  undefined4 uStack_20;
  
  iVar2 = func_0x0229f06c(0x8c4a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8c4a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar3 = func_0x0217a5ac(iVar2,param_1,param_2,param_3);
    return uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x108);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02139cf4(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_020e8a8c + 0x20e8744);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e8a90 + 0x20e8758),param_2,param_3,0);
    func_0x01384978(*(undefined4 *)(_UNK_020e8a94 + 0x20e8764));
    func_0x01384978(*(undefined4 *)(_UNK_020e8a98 + 0x20e8770));
    func_0x01384978(*(undefined4 *)(_UNK_020e8a9c + 0x20e877c));
    *pcVar9 = '\x01';
  }
  aiStack_28[0] = 0;
  iStack_2c = 0;
  iVar4 = func_0x0229f06c(0x1496,0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar2 + 0x98);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x02141880(iVar4,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x021138b0(iVar6,param_2,param_3,0);
    uStack_30 = param_2;
    if (iVar6 == 0) {
      uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_020e8aa0 + 0x20e8a08),&uStack_30);
      puVar8 = *(undefined4 **)(_UNK_020e8aa4 + 0x20e8a20);
    }
    else {
      iVar10 = *(int *)(iVar2 + 0x90) / 2;
      iVar1 = *(int *)(iVar2 + 0x8c) / 2;
      iStack_2c = iVar1;
      aiStack_28[0] = iVar10;
      uVar3 = func_0x0210e2d4(iVar6,0);
      uVar7 = func_0x020defc4(iVar2,iVar1,iVar10,uVar3,0,0,0,0);
      func_0x020df144(iVar2,uVar7,&iStack_2c,aiStack_28);
      if (-1 < (int)uVar7) {
        iVar10 = *(int *)(iVar2 + 0x80);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar7) {
          func_0x01384bf4();
        }
        func_0x02117440(iVar6,iVar2,*(undefined4 *)(iVar10 + uVar7 * 4 + 0x10),0);
        func_0x020e8ab4(iVar2,iVar6,0xffffffff,uVar7,iStack_2c,aiStack_28[0],0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x02141880(iVar4,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x02114c08(iVar10,param_2,param_3,0);
        iVar10 = *(int *)(iVar2 + 0x38);
        if (iVar10 != 0) {
          (**(code **)(iVar10 + 0xc))
                    (*(undefined4 *)(iVar10 + 0x20),iVar6,*(undefined4 *)(iVar10 + 0x14));
        }
        iVar2 = *(int *)(iVar2 + 0x68);
        if (iVar2 != 0) {
          (**(code **)(iVar2 + 0xc))
                    (*(undefined4 *)(iVar2 + 0x20),iVar6,*(undefined4 *)(iVar2 + 0x14));
        }
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02148ef8(iVar4,iVar6,3,0);
        uVar3 = func_0x0210e2d4(iVar6,0);
        func_0x019a617c(param_3,uVar3,0,0);
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x74);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01c8f2dc(iVar2,0);
        return 1;
      }
      uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_020e8aac + 0x20e8a30),&uStack_30);
      puVar8 = *(undefined4 **)(_UNK_020e8ab0 + 0x20e8a48);
    }
    uVar5 = 0;
    uVar3 = func_0x0244f6a0(*puVar8,uVar3,0);
    if (*(int *)(**(int **)(_UNK_020e8aa8 + 0x20e8a64) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar3,0);
  }
  else {
    iVar4 = func_0x0229f13c(0x1496,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0217a5ac(iVar4,iVar2,param_2,param_3,0);
  }
  return uVar5;
}



// ===== FAT.ActivityTileBingo$$SendJumpCDItem RVA 0x1b4f308 =====

void FUN_01b5f308(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
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
  
  iVar1 = func_0x0229f06c(0x8c4b,0);
  if (iVar1 == 0) {
    bVar5 = *(int *)(param_1 + 0x54) != 0;
    iVar1 = 0;
    if (bVar5) {
      iVar1 = *(int *)(param_1 + 0x108);
    }
    if ((bVar5 && iVar1 != 0) && (iVar1 = func_0x02139cf4(iVar1,0), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(param_1 + 0x108);
      uVar4 = *(undefined4 *)(iVar1 + 0x28);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      iVar1 = func_0x020ddf40(iVar1,uVar4,0,1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0210e250(iVar1,0x12,0,0);
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 0x108);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x02147034(iVar3,iVar1,0);
      }
      *(undefined1 *)(param_1 + 0x4a) = 0;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8c4b,0);
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



// ===== FAT.ActivityTileBingo$$IsItemNeeded RVA 0x1b4f444 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b5f444(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_01b5f658 + 0x1b5f45c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b5f65c + 0x1b5f470));
    func_0x01384978(*(undefined4 *)(_UNK_01b5f660 + 0x1b5f47c));
    func_0x01384978(*(undefined4 *)(_UNK_01b5f664 + 0x1b5f488));
    func_0x01384978(*(undefined4 *)(_UNK_01b5f668 + 0x1b5f494));
    func_0x01384978(*(undefined4 *)(_UNK_01b5f66c + 0x1b5f4a0));
    func_0x01384978(*(undefined4 *)(_UNK_01b5f670 + 0x1b5f4ac));
    func_0x01384978(*(undefined4 *)(_UNK_01b5f674 + 0x1b5f4b8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c4c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c4c,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b5f678 + 0x1b5f514));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_1 + 0x68);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar6 = FUN_01b5ebb4(iVar5);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01b5f67c + 0x1b5f55c));
  func_0x0244f8d0(uVar3,iVar1,**(undefined4 **)(_UNK_01b5f680 + 0x1b5f578),0);
  uVar6 = func_0x02f92d20(uVar6,uVar3,**(undefined4 **)(_UNK_01b5f684 + 0x1b5f590));
  iVar5 = *(int *)(param_1 + 0x108);
  *(undefined4 *)(iVar1 + 0xc) = uVar6;
  if ((iVar5 != 0) && (iVar5 = func_0x02141880(iVar5,0), iVar5 != 0)) {
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01b5f688 + 0x1b5f5cc));
    func_0x02450194(uVar6,iVar1,**(undefined4 **)(_UNK_01b5f68c + 0x1b5f5e8),0);
    func_0x021131f8(iVar5,uVar6,0);
  }
  iVar5 = func_0x03668dfc(**(undefined4 **)(_UNK_01b5f690 + 0x1b5f60c));
  uVar3 = *(undefined4 *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x01de5d8c(iVar5,uVar3,uVar6,0);
  return (uint)(0 < *(int *)(iVar1 + 0xc)) & (uVar2 ^ 1);
}



// ===== FAT.ActivityTileBingo.<>c__DisplayClass12_0$$.ctor RVA 0x1b4f694 =====

void FUN_01b5f694(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityTileBingo$$HasRequiredItemForTile RVA 0x1b4f69c =====

/* WARNING: Possible PIC construction at 0x01b5f938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b5f93c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5f69c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x8c50,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01b5f744(iVar1,param_2);
    if ((iVar1 == 0) || (iVar4 = func_0x01b5f834(param_1,param_2), iVar4 == 0)) {
      return 0;
    }
    param_2 = *(undefined4 *)(iVar1 + 0x18);
    pcVar8 = (char *)(_UNK_01b5fa00 + 0x1b5f8d4);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b5fa04 + 0x1b5f8e8));
      *pcVar8 = '\x01';
    }
    uVar9 = 0;
    iStack_14 = 0;
    iVar1 = func_0x0229f06c(0x8c51,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x10c) != 0) {
        piVar2 = (int *)func_0x0214da98(*(int *)(param_1 + 0x10c),0);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_01b5fa08 + 0x1b5f978)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xf8);
              goto LAB_01b5f9c0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b5fa08 + 0x1b5f978),7);
LAB_01b5f9c0:
        iVar1 = (*(code *)*puVar3)(piVar2,param_2,&iStack_14,puVar3[1]);
        uVar9 = 0;
        if ((iVar1 != 0) && (uVar9 = 0, 0 < iStack_14)) {
          uVar9 = 1;
        }
      }
      return uVar9;
    }
    iVar1 = func_0x0229f13c(0x8c51,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1b5f93c;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x8c50,0);
    if (iVar1 == 0) {
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
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar4 = *(int *)(iVar1 + 0x10);
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
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar1 == 0) {
    uVar7 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x38),uVar7);
  uVar9 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar9;
}



// ===== FAT.ActivityTileBingo$$IsTileFaceUp RVA 0x1b4f834 =====

uint FUN_01b5f834(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  iVar1 = func_0x0229f06c(0x8c40,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c40,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  uVar6 = func_0x01b61988(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0229f06c(0x8c43,0);
  if (iVar5 == 0) {
    iVar1 = FUN_01b5f744(iVar1,param_2);
    if (iVar1 != 0) {
      uVar2 = 0;
      iVar5 = func_0x0229f06c(0x8c45,0);
      if (iVar5 == 0) {
        if (*(char *)(iVar1 + 0x28) == '\0') {
          uVar2 = (uint)(*(char *)(iVar1 + 0x29) == '\0');
        }
        return uVar2;
      }
      iVar5 = func_0x0229f13c(0x8c45,0);
      if (iVar5 == 0) {
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
      if (*(int *)(iVar5 + 0x10) != 0) {
        func_0x01485278(&uStack_30,*(int *)(iVar5 + 0x10),0);
      }
      func_0x01485278(&uStack_30,iVar1,0);
      iVar4 = *(int *)(iVar5 + 8);
      uVar6 = *(undefined4 *)(iVar5 + 0xc);
      iVar1 = *(int *)(iVar5 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 2;
      if (iVar1 == 0) {
        uVar3 = 1;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3);
      uVar2 = func_0x0245496c(&uStack_30,0,0);
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
    iVar5 = func_0x0229f13c(0x8c43,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar2 = func_0x0217a5ac(iVar5,iVar1,param_2,uVar6);
  }
  return uVar2;
}



// ===== FAT.ActivityTileBingo$$HasRequiredItem RVA 0x1b4f8b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5f8b8(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iStack_14;
  
  pcVar6 = (char *)(_UNK_01b5fa00 + 0x1b5f8d4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b5fa04 + 0x1b5f8e8));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x8c51,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x10c) != 0) {
      piVar2 = (int *)func_0x0214da98(*(int *)(param_1 + 0x10c),0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01b5fa08 + 0x1b5f978)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xf8);
            goto LAB_01b5f9c0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b5fa08 + 0x1b5f978),7);
LAB_01b5f9c0:
      iVar1 = (*(code *)*puVar3)(piVar2,param_2,&iStack_14,puVar3[1]);
      uVar7 = 0;
      if ((iVar1 != 0) && (uVar7 = 0, 0 < iStack_14)) {
        uVar7 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8c51,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar7;
}



// ===== FAT.ActivityTileBingo$$FillBoardItemByCurrentBoard RVA 0x1b4fa0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b5fa0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01b5fbf8 + 0x1b5fa24);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b5fbfc + 0x1b5fa38));
    func_0x01384978(*(undefined4 *)(_UNK_01b5fc00 + 0x1b5fa44));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c52,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x108) != 0) {
      iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x108),0);
      if (iVar1 != 0) {
        pcVar3 = *(char **)(param_1 + 0x60);
      }
      if (iVar1 != 0 && pcVar3 != (char *)0x0) {
        iVar7 = 0;
        iVar1 = 0;
        puVar9 = *(undefined4 **)(_UNK_01b5fc04 + 0x1b5fad8);
        while( true ) {
          if (pcVar3 == (char *)0x0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(pcVar3 + 0x1c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar4 + 0xc) <= iVar1) break;
          iVar4 = *(int *)(param_1 + 0x60);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar4 + 0x1c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar8 = func_0x0364c9b8(iVar4,iVar1,*puVar9);
          iVar4 = func_0x02c05738(uVar8,1,0);
          if (0 < iVar4) {
            if (iVar7 == 0) {
              uVar6 = 0;
            }
            else {
              iVar5 = *(int *)(param_1 + 0x108);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              iVar5 = func_0x02139cf4(iVar5,0);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              func_0x020da680(&iStack_30,iVar5,0);
              uVar6 = iVar7 + iStack_30 & ~(iVar7 + iStack_30 >> 0x1f);
            }
            iVar5 = *(int *)(param_1 + 0x108);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar5 = func_0x02139cf4(iVar5,0);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            uStack_40 = 0;
            uStack_3c = 0;
            uStack_38 = 0;
            func_0x020ddf40(iVar5,iVar4,0,uVar6);
          }
          pcVar3 = *(char **)(param_1 + 0x60);
          iVar7 = iVar7 + -1;
          iVar1 = iVar1 + 1;
        }
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8c52,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_30 = 0;
  func_0x0245494c(&iStack_48,0,0);
  iStack_30 = iStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar7,uVar8,&iStack_30,uVar2,0,0);
  return;
}



// ===== FAT.ActivityTileBingo$$RefreshNextBoardItem RVA 0x1b4fc08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b5fc08(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01b5fe00 + 0x1b5fc24);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b5fe04 + 0x1b5fc38));
    func_0x01384978(*(undefined4 *)(_UNK_01b5fe08 + 0x1b5fc44));
    func_0x01384978(*(undefined4 *)(_UNK_01b5fe0c + 0x1b5fc50));
    func_0x01384978(*(undefined4 *)(_UNK_01b5fe10 + 0x1b5fc5c));
    func_0x01384978(*(undefined4 *)(_UNK_01b5fe14 + 0x1b5fc68));
    func_0x01384978(*(undefined4 *)(_UNK_01b5fe18 + 0x1b5fc74));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c54,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c54,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x60);
  }
  if ((param_2 != 0 && iVar1 != 0) && (0 < *(int *)(param_2 + 0xc))) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b5fe1c + 0x1b5fd00));
    func_0x03258eb8(iVar1,**(undefined4 **)(_UNK_01b5fe20 + 0x1b5fd14));
    iVar7 = *(int *)(param_1 + 0x60);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x02c052d8(*(undefined4 *)(iVar7 + 0x1c),iVar1,1,0);
    iVar7 = *(int *)(param_2 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    if (iVar7 < *(int *)(iVar1 + 0xc)) {
      iVar3 = iVar7;
    }
    if (0 < iVar3) {
      iVar7 = 0;
      do {
        iVar4 = *(int *)(param_1 + 0x108);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x02139cf4(iVar4,0);
        uVar8 = func_0x0328eea8(param_2,iVar7,**(undefined4 **)(_UNK_01b5fe24 + 0x1b5fd98));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x03259410(iVar1,iVar7,**(undefined4 **)(_UNK_01b5fe28 + 0x1b5fdc0));
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x020e7c44(iVar4,uVar8,uVar2,0);
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
    }
    return;
  }
  pcVar5 = (char *)(_UNK_01b5fbf8 + 0x1b5fa24);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b5fbfc + 0x1b5fa38));
    func_0x01384978(*(undefined4 *)(_UNK_01b5fc00 + 0x1b5fa44));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c52,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x108) != 0) {
      iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x108),0);
      if (iVar1 != 0) {
        pcVar5 = *(char **)(param_1 + 0x60);
      }
      if (iVar1 != 0 && pcVar5 != (char *)0x0) {
        iVar7 = 0;
        iVar1 = 0;
        puVar9 = *(undefined4 **)(_UNK_01b5fc04 + 0x1b5fad8);
        while( true ) {
          if (pcVar5 == (char *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(pcVar5 + 0x1c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar3 + 0xc) <= iVar1) break;
          iVar3 = *(int *)(param_1 + 0x60);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0x1c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar8 = func_0x0364c9b8(iVar3,iVar1,*puVar9);
          iVar3 = func_0x02c05738(uVar8,1,0);
          if (0 < iVar3) {
            if (iVar7 == 0) {
              uVar6 = 0;
            }
            else {
              iVar4 = *(int *)(param_1 + 0x108);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              iVar4 = func_0x02139cf4(iVar4,0);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              func_0x020da680(&iStack_30,iVar4,0);
              uVar6 = iVar7 + iStack_30 & ~(iVar7 + iStack_30 >> 0x1f);
            }
            iVar4 = *(int *)(param_1 + 0x108);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            iVar4 = func_0x02139cf4(iVar4,0);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uStack_40 = 0;
            uStack_3c = 0;
            uStack_38 = 0;
            func_0x020ddf40(iVar4,iVar3,0,uVar6);
          }
          pcVar5 = *(char **)(param_1 + 0x60);
          iVar7 = iVar7 + -1;
          iVar1 = iVar1 + 1;
        }
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8c52,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_30 = 0;
  func_0x0245494c(&iStack_48,0,0);
  iStack_30 = iStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar7,uVar8,&iStack_30,uVar2);
  return;
}



// ===== FAT.ActivityTileBingo$$RefreshBoardSpawnerItems RVA 0x1b4fe2c =====

/* WARNING: Removing unreachable block (ram,0x01b6019c) */
/* WARNING: Removing unreachable block (ram,0x01b601a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b5fe2c(int param_1)

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
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01b602fc + 0x1b5fe44);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b60300 + 0x1b5fe58));
    func_0x01384978(*(undefined4 *)(_UNK_01b60304 + 0x1b5fe64));
    func_0x01384978(*(undefined4 *)(_UNK_01b60308 + 0x1b5fe70));
    func_0x01384978(*(undefined4 *)(_UNK_01b6030c + 0x1b5fe7c));
    func_0x01384978(*(undefined4 *)(_UNK_01b60310 + 0x1b5fe88));
    func_0x01384978(*(undefined4 *)(_UNK_01b60314 + 0x1b5fe94));
    func_0x01384978(*(undefined4 *)(_UNK_01b60318 + 0x1b5fea0));
    func_0x01384978(*(undefined4 *)(_UNK_01b6031c + 0x1b5feac));
    func_0x01384978(*(undefined4 *)(_UNK_01b60320 + 0x1b5feb8));
    func_0x01384978(*(undefined4 *)(_UNK_01b60324 + 0x1b5fec4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c55,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b60328 + 0x1b5ff20));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(param_1 + 0x108);
    *(int *)(iVar1 + 0xc) = param_1;
    if (iVar9 != 0) {
      iVar2 = func_0x02139cf4(iVar9,0);
      iVar9 = 0;
      if (iVar2 != 0) {
        iVar9 = *(int *)(param_1 + 0x60);
      }
      if (iVar2 != 0 && iVar9 != 0) {
        uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_01b6032c + 0x1b5ff78));
        func_0x024509b4(uVar10,**(undefined4 **)(_UNK_01b60330 + 0x1b5ff8c));
        iVar9 = *(int *)(param_1 + 0x60);
        *(undefined4 *)(iVar1 + 8) = uVar10;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar9 + 0x1c);
        iStack_28 = param_1;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)func_0x0364c2b4(iVar9,**(undefined4 **)(_UNK_01b60334 + 0x1b5ffc8));
        piVar11 = *(int **)(_UNK_01b60338 + 0x1b5ffe0);
        piVar13 = *(int **)(_UNK_01b6033c + 0x1b5ffe8);
        puVar12 = *(undefined4 **)(_UNK_01b60340 + 0x1b5fff0);
        do {
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar9 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar11) {
                puVar4 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
                goto LAB_01b60048;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar11,0);
LAB_01b60048:
          iVar9 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          param_1 = iStack_28;
          if (iVar9 == 0) goto LAB_01b60118;
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar9 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar13) {
                puVar4 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
                goto LAB_01b600bc;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_01b600bc:
          uVar10 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar9 = *(int *)(iVar1 + 8);
          uVar7 = func_0x02c05738(uVar10,1,0);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          func_0x0245025c(iVar9,uVar10,uVar7,*puVar12);
        } while( true );
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8c55,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  goto SUB_02173f80;
LAB_01b60118:
  if (piVar3 != (int *)0x0) {
    iVar9 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_01b60344 + 0x1b6013c)) {
          puVar12 = (undefined4 *)(iVar9 + *piVar11 * 8 + 0xc0);
          goto LAB_01b60184;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar5 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b60344 + 0x1b6013c),0);
LAB_01b60184:
    (*(code *)*puVar12)(piVar3,puVar12[1]);
  }
  iVar9 = *(int *)(param_1 + 0x108);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x02139cf4(iVar9,0);
  uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_01b60348 + 0x1b601dc));
  func_0x02450194(uVar10,iVar1,**(undefined4 **)(_UNK_01b6034c + 0x1b601f8),0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x020dba14(iVar9,uVar10,0);
  iVar1 = func_0x0229f06c(0x8c33,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x114);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b5e9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8c33,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
SUB_02173f80:
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  iStack_28 = uStack_40;
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
  func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
  return;
}



// ===== FAT.ActivityTileBingo.<>c__DisplayClass17_0$$.ctor RVA 0x1b50354 =====

void FUN_01b60354(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityTileBingo$$IsCurrentSpawnerItem RVA 0x1b5035c =====

/* WARNING: Removing unreachable block (ram,0x01b60658) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b6035c(int param_1,int param_2)

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
  
  pcVar7 = (char *)(_UNK_01b60740 + 0x1b60378);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b60744 + 0x1b6038c));
    func_0x01384978(*(undefined4 *)(_UNK_01b60748 + 0x1b60398));
    func_0x01384978(*(undefined4 *)(_UNK_01b6074c + 0x1b603a4));
    func_0x01384978(*(undefined4 *)(_UNK_01b60750 + 0x1b603b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b60754 + 0x1b603bc));
    *pcVar7 = '\x01';
  }
  iVar8 = 0;
  iVar1 = func_0x0229f06c(0x8c58,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c58,0);
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
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x60);
  }
  if (param_2 != 0 && iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01b60758 + 0x1b6044c));
    piVar10 = *(int **)(_UNK_01b6075c + 0x1b60464);
    piVar11 = *(int **)(_UNK_01b60760 + 0x1b6046c);
    puVar12 = *(undefined4 **)(_UNK_01b60764 + 0x1b60474);
    do {
      do {
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
              goto LAB_01b604cc;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01b604cc:
        iVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar8 == 0) {
          iVar8 = 0;
          goto LAB_01b605e0;
        }
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
              goto LAB_01b60544;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01b60544:
        uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x50);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01db1884(iVar1,uVar9,0);
      } while (iVar1 == 0);
      iVar1 = *(int *)(iVar1 + 0x44);
      uVar9 = func_0x0210e2d4(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0364bc1c(iVar1,uVar9,*puVar12);
    } while (iVar1 == 0);
LAB_01b605e0:
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01b60768 + 0x1b605f8)) {
            puVar12 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_01b60640;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar4 != 0);
      }
      puVar12 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b60768 + 0x1b605f8),0);
LAB_01b60640:
      (*(code *)*puVar12)(piVar2,puVar12[1]);
    }
  }
  return iVar8;
}



// ===== FAT.ActivityTileBingo$$CollectCurrentSpawnerItems RVA 0x1b50770 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b60770(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_01b6090c + 0x1b60788);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b60910 + 0x1b6079c));
    func_0x01384978(*(undefined4 *)(_UNK_01b60914 + 0x1b607a8));
    func_0x01384978(*(undefined4 *)(_UNK_01b60918 + 0x1b607b4));
    func_0x01384978(*(undefined4 *)(_UNK_01b6091c + 0x1b607c0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c59,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b60920 + 0x1b6081c));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 8) = param_1;
    *(int *)(iVar1 + 0xc) = param_2;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_2 + 0xc);
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0145b1dc(*(undefined4 *)(param_2 + 8),0,iVar3,0);
    }
    if ((*(int *)(param_1 + 0x108) == 0) ||
       (iVar3 = func_0x02139cf4(*(int *)(param_1 + 0x108),0), iVar3 == 0)) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x108);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x02139cf4(iVar3,0);
    param_2 = func_0x01384be4(**(undefined4 **)(_UNK_01b60924 + 0x1b608c4));
    func_0x02450194(param_2,iVar1,**(undefined4 **)(_UNK_01b60928 + 0x1b608e0),0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x2a8,0,0);
    if (iVar1 == 0) {
      iVar1 = 4;
      while( true ) {
        iVar3 = *(int *)(param_1 + 0x80);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar5 = iVar1 - 4;
        if (*(int *)(iVar3 + 0xc) <= (int)uVar5) break;
        iVar3 = *(int *)(param_1 + 0x80);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar5) {
          func_0x01384bf4();
        }
        iVar3 = *(int *)(iVar3 + iVar1 * 4);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar3 + 8) != 0) {
          iVar3 = *(int *)(param_1 + 0x80);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar5) {
            func_0x01384bf4();
          }
          iVar3 = *(int *)(iVar3 + iVar1 * 4);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar6 = *(undefined4 *)(iVar3 + 8);
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          (**(code **)(param_2 + 0xc))
                    (*(undefined4 *)(param_2 + 0x20),uVar6,*(undefined4 *)(param_2 + 0x14));
        }
        iVar1 = iVar1 + 1;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x2a8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8c59,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar6,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.ActivityTileBingo.<>c__DisplayClass19_0$$.ctor RVA 0x1b5092c =====

void FUN_01b6092c(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityTileBingo$$InitConfig RVA 0x1b50934 =====

/* WARNING: Removing unreachable block (ram,0x01b61db8) */
/* WARNING: Removing unreachable block (ram,0x01b61dc4) */
/* WARNING: Removing unreachable block (ram,0x01b61dc8) */
/* WARNING: Removing unreachable block (ram,0x032dc368) */
/* WARNING: Removing unreachable block (ram,0x032dc388) */
/* WARNING: Removing unreachable block (ram,0x032dc390) */
/* WARNING: Removing unreachable block (ram,0x032dc39c) */
/* WARNING: Removing unreachable block (ram,0x032dc3a8) */
/* WARNING: Removing unreachable block (ram,0x032dc3b0) */
/* WARNING: Removing unreachable block (ram,0x032dc3c8) */
/* WARNING: Removing unreachable block (ram,0x032dc3d4) */
/* WARNING: Removing unreachable block (ram,0x032dc44c) */
/* WARNING: Removing unreachable block (ram,0x032dc458) */
/* WARNING: Removing unreachable block (ram,0x032dc460) */
/* WARNING: Removing unreachable block (ram,0x032dc464) */
/* WARNING: Removing unreachable block (ram,0x032dc47c) */
/* WARNING: Removing unreachable block (ram,0x032dc488) */
/* WARNING: Removing unreachable block (ram,0x032dc498) */
/* WARNING: Removing unreachable block (ram,0x032dc4a0) */
/* WARNING: Removing unreachable block (ram,0x032dc620) */
/* WARNING: Removing unreachable block (ram,0x032dc4ac) */
/* WARNING: Removing unreachable block (ram,0x032dc4b8) */
/* WARNING: Removing unreachable block (ram,0x032dc62c) */
/* WARNING: Removing unreachable block (ram,0x032dc64c) */
/* WARNING: Removing unreachable block (ram,0x032dc654) */
/* WARNING: Removing unreachable block (ram,0x032dc658) */
/* WARNING: Removing unreachable block (ram,0x032dc66c) */
/* WARNING: Removing unreachable block (ram,0x032dc674) */
/* WARNING: Removing unreachable block (ram,0x032dc69c) */
/* WARNING: Removing unreachable block (ram,0x032dc680) */
/* WARNING: Removing unreachable block (ram,0x032dc68c) */
/* WARNING: Removing unreachable block (ram,0x032dc6a8) */
/* WARNING: Removing unreachable block (ram,0x032dc784) */
/* WARNING: Removing unreachable block (ram,0x032dc794) */
/* WARNING: Removing unreachable block (ram,0x032dc7b0) */
/* WARNING: Removing unreachable block (ram,0x032dc7b8) */
/* WARNING: Removing unreachable block (ram,0x032dc7e0) */
/* WARNING: Removing unreachable block (ram,0x032dc7c4) */
/* WARNING: Removing unreachable block (ram,0x032dc7d0) */
/* WARNING: Removing unreachable block (ram,0x032dc7ec) */
/* WARNING: Removing unreachable block (ram,0x032dc7fc) */
/* WARNING: Removing unreachable block (ram,0x032dc6c0) */
/* WARNING: Removing unreachable block (ram,0x032dc6c8) */
/* WARNING: Removing unreachable block (ram,0x032dc6cc) */
/* WARNING: Removing unreachable block (ram,0x032dc6e4) */
/* WARNING: Removing unreachable block (ram,0x032dc6f0) */
/* WARNING: Removing unreachable block (ram,0x032dc700) */
/* WARNING: Removing unreachable block (ram,0x032dc708) */
/* WARNING: Removing unreachable block (ram,0x032dc730) */
/* WARNING: Removing unreachable block (ram,0x032dc714) */
/* WARNING: Removing unreachable block (ram,0x032dc720) */
/* WARNING: Removing unreachable block (ram,0x032dc73c) */
/* WARNING: Removing unreachable block (ram,0x032dc81c) */
/* WARNING: Removing unreachable block (ram,0x032dc3e4) */
/* WARNING: Removing unreachable block (ram,0x032dc400) */
/* WARNING: Removing unreachable block (ram,0x032dc40c) */
/* WARNING: Removing unreachable block (ram,0x032dc41c) */
/* WARNING: Removing unreachable block (ram,0x032dc424) */
/* WARNING: Removing unreachable block (ram,0x032dc4c8) */
/* WARNING: Removing unreachable block (ram,0x032dc430) */
/* WARNING: Removing unreachable block (ram,0x032dc43c) */
/* WARNING: Removing unreachable block (ram,0x032dc4d4) */
/* WARNING: Removing unreachable block (ram,0x032dc4ec) */
/* WARNING: Removing unreachable block (ram,0x032dc518) */
/* WARNING: Removing unreachable block (ram,0x032dc538) */
/* WARNING: Removing unreachable block (ram,0x032dc5a8) */
/* WARNING: Removing unreachable block (ram,0x032dc540) */
/* WARNING: Removing unreachable block (ram,0x032dc55c) */
/* WARNING: Removing unreachable block (ram,0x032dc568) */
/* WARNING: Removing unreachable block (ram,0x032dc578) */
/* WARNING: Removing unreachable block (ram,0x032dc580) */
/* WARNING: Removing unreachable block (ram,0x032dc5ec) */
/* WARNING: Removing unreachable block (ram,0x032dc58c) */
/* WARNING: Removing unreachable block (ram,0x032dc598) */
/* WARNING: Removing unreachable block (ram,0x032dc5f8) */
/* WARNING: Removing unreachable block (ram,0x032dc610) */
/* WARNING: Removing unreachable block (ram,0x01b628bc) */
/* WARNING: Removing unreachable block (ram,0x01b628b0) */
/* WARNING: Removing unreachable block (ram,0x032dc804) */
/* WARNING: Removing unreachable block (ram,0x032dc80c) */
/* WARNING: Removing unreachable block (ram,0x032dc834) */
/* WARNING: Removing unreachable block (ram,0x032dc814) */
/* WARNING: Removing unreachable block (ram,0x032dc840) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b60934(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
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
  
  pcVar7 = (char *)(_UNK_01b60be4 + 0x1b60948);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b60be8 + 0x1b6095c));
    func_0x01384978(*(undefined4 *)(_UNK_01b60bec + 0x1b60968));
    func_0x01384978(*(undefined4 *)(_UNK_01b60bf0 + 0x1b60974));
    func_0x01384978(*(undefined4 *)(_UNK_01b60bf4 + 0x1b60980));
    func_0x01384978(*(undefined4 *)(_UNK_01b60bf8 + 0x1b6098c));
    func_0x01384978(*(undefined4 *)(_UNK_01b60bfc + 0x1b60998));
    func_0x01384978(*(undefined4 *)(_UNK_01b60c00 + 0x1b609a4));
    func_0x01384978(*(undefined4 *)(_UNK_01b60c04 + 0x1b609b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b60c08 + 0x1b609bc));
    func_0x01384978(*(undefined4 *)(_UNK_01b60c0c + 0x1b609c8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c5c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c5c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  if ((*(int *)(param_1 + 0x50) == 0) || (iVar1 = *(int *)(param_1 + 0x24), iVar1 < 0)) {
    return;
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x50) + 0x14);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar8 + 0xc) <= iVar1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x0364c9b8(iVar1,uVar9,**(undefined4 **)(_UNK_01b60c10 + 0x1b60a7c));
  if (*(int *)(**(int **)(_UNK_01b60c14 + 0x1b60a94) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_01b60c18 + 0x1b60ab0));
  *(int *)(param_1 + 0x54) = iVar1;
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(param_1 + 0x54);
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar8 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01cf6408(iVar1,uVar9,0);
    *(int *)(param_1 + 0x3c) = iVar1;
  }
  if (*(int *)(**(int **)(_UNK_01b60c1c + 0x1b60b30) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x036a1750(iVar1,**(undefined4 **)(_UNK_01b60c20 + 0x1b60b4c));
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)(iVar1 + 0x1c);
  }
  if (*(int *)(**(int **)(_UNK_01b60c24 + 0x1b60b70) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar9 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_01b60c28 + 0x1b60b8c));
  piVar2 = *(int **)(_UNK_01b60c2c + 0x1b60ba4);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 100) = uVar9;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar9 = func_0x036a1750(uVar6,**(undefined4 **)(_UNK_01b60c30 + 0x1b60bc8));
  *(undefined4 *)(param_1 + 0x5c) = uVar9;
  pcVar7 = (char *)(_UNK_01b60ed4 + 0x1b60c48);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b60ed8 + 0x1b60c5c));
    func_0x01384978(*(undefined4 *)(_UNK_01b60edc + 0x1b60c68));
    func_0x01384978(*(undefined4 *)(_UNK_01b60ee0 + 0x1b60c74));
    func_0x01384978(*(undefined4 *)(_UNK_01b60ee4 + 0x1b60c80));
    func_0x01384978(*(undefined4 *)(_UNK_01b60ee8 + 0x1b60c8c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c66,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c66,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
LAB_01b60d64:
    iVar8 = *(int *)(param_1 + 0x68);
    iVar10 = **(int **)(_UNK_01b60eec + 0x1b60d70);
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar1 = *(int *)(iVar10 + 0x1c);
    if (iVar1 == 0) {
      func_0x0140024c(iVar10);
      iVar1 = *(int *)(iVar10 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    uVar9 = **(undefined4 **)(iVar1 + 0x5c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x01b61160(iVar8,uVar9,0);
    iVar1 = *(int *)(param_1 + 0x68);
    uVar9 = func_0x01b61988(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01b61a78(iVar1,uVar9);
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_01b61de8 + 0x1b61cd0);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b61dec + 0x1b61ce4));
      func_0x01384978(*(undefined4 *)(_UNK_01b61df0 + 0x1b61cf0));
      func_0x01384978(*(undefined4 *)(_UNK_01b61df4 + 0x1b61cfc));
      *pcVar7 = '\x01';
    }
    iVar8 = func_0x0229f06c(0x8c75,0);
    if (iVar8 != 0) {
      iVar8 = func_0x0229f13c(0x8c75,0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar8 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar1,0);
      func_0x01485278(&uStack_38,0,0);
      iVar10 = *(int *)(iVar8 + 8);
      uVar9 = *(undefined4 *)(iVar8 + 0xc);
      iVar1 = *(int *)(iVar8 + 0x10);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar6 = 3;
      if (iVar1 == 0) {
        uVar6 = 2;
      }
      func_0x0245495c(iVar10,uVar9,&uStack_38,uVar6,0,0);
      return;
    }
    iVar8 = *(int *)(iVar1 + 8);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar8 + 0xc);
    *(undefined4 *)(iVar8 + 0xc) = 0;
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    if (0 < iVar10) {
      func_0x0145b1dc(*(undefined4 *)(iVar8 + 8),0,iVar10,0);
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245055c(iVar1,**(undefined4 **)(_UNK_01b61df8 + 0x1b61da8));
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) < 1) goto LAB_01b60d64;
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 < 0) {
    iVar1 = 0;
LAB_01b60e40:
    *(int *)(param_1 + 0x44) = iVar1;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x5c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar8 + 0x18);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar8 + 0xc) <= iVar1) {
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc) + -1;
      goto LAB_01b60e40;
    }
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  uVar9 = *(undefined4 *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x0364c9b8(iVar1,uVar9,**(undefined4 **)(_UNK_01b60ef0 + 0x1b60e78));
  if (*(int *)(**(int **)(_UNK_01b60ef4 + 0x1b60e90) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar9 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_01b60ef8 + 0x1b60eac));
  *(undefined4 *)(param_1 + 0x60) = uVar9;
  func_0x01b61e00(param_1);
  func_0x01b61f64(param_1);
  pcVar7 = (char *)(_UNK_01b629c4 + 0x1b6246c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b629c8 + 0x1b62480));
    func_0x01384978(*(undefined4 *)(_UNK_01b629cc + 0x1b6248c));
    func_0x01384978(*(undefined4 *)(_UNK_01b629d0 + 0x1b62498));
    func_0x01384978(*(undefined4 *)(_UNK_01b629d4 + 0x1b624a4));
    func_0x01384978(*(undefined4 *)(_UNK_01b629d8 + 0x1b624b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b629dc + 0x1b624bc));
    func_0x01384978(*(undefined4 *)(_UNK_01b629e0 + 0x1b624c8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c7a,0);
  if (iVar1 == 0) {
    bVar14 = *(int *)(param_1 + 0x7c) != 0;
    iVar1 = 0;
    if (bVar14) {
      iVar1 = *(int *)(param_1 + 0x60);
    }
    if (bVar14 && iVar1 != 0) {
      puVar11 = *(undefined4 **)(_UNK_01b629e4 + 0x1b62540);
      iVar1 = func_0x01384be4(*puVar11);
      puVar12 = *(undefined4 **)(_UNK_01b629e8 + 0x1b62554);
      func_0x02450558(iVar1,*puVar12);
      iVar8 = 0;
      puVar13 = *(undefined4 **)(_UNK_01b629ec + 0x1b62568);
      while( true ) {
        iVar10 = *(int *)(param_1 + 0x68);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01b62a90(iVar10);
        if (iVar10 <= iVar8) break;
        uVar9 = func_0x01b62a24(*(undefined4 *)(param_1 + 0x44),iVar8);
        iVar10 = *(int *)(param_1 + 0x7c);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01c23b88(uVar9,*(undefined4 *)(iVar10 + 0x28),0);
        if (iVar10 != 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02450560(iVar1,iVar8,*puVar13);
        }
        iVar8 = iVar8 + 1;
      }
      iVar8 = *(int *)(param_1 + 0x68);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x01b62b24(iVar8,iVar1);
      iVar1 = *(int *)(param_1 + 0x68);
      uVar9 = func_0x01b61988(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01b61a78(iVar1,uVar9);
      iVar1 = func_0x01384be4(*puVar11);
      func_0x02450558(iVar1,*puVar12);
      iVar8 = *(int *)(param_1 + 0x6c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x01b62ccc(iVar8);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar2;
      uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01b629f0 + 0x1b62670)) {
            puVar11 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xc0);
            goto LAB_01b626b8;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b629f0 + 0x1b62670),0);
LAB_01b626b8:
      piVar2 = (int *)(*(code *)*puVar11)(piVar2,puVar11[1]);
      piVar4 = *(int **)(_UNK_01b629f4 + 0x1b626e0);
LAB_01b626dc:
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar2;
      uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar4) {
            puVar11 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
            goto LAB_01b62738;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar11 = (undefined4 *)func_0x014002dc(piVar2,*piVar4,0);
LAB_01b62738:
      iVar8 = (*(code *)*puVar11)(piVar2,puVar11[1]);
      if (iVar8 != 0) {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar8 = *piVar2;
        uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_01b629f8 + 0x1b6276c)) {
              puVar11 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
              goto LAB_01b627b4;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b629f8 + 0x1b6276c),0);
LAB_01b627b4:
        (*(code *)*puVar11)(&uStack_30,piVar2,puVar11[1]);
        uVar9 = uStack_30;
        uVar6 = func_0x01b62d20(*(undefined4 *)(param_1 + 0x44),uStack_30);
        iVar8 = *(int *)(param_1 + 0x7c);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x01c23b88(uVar6,*(undefined4 *)(iVar8 + 0x28),0);
        if (iVar8 != 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02450560(iVar1,uVar9,**(undefined4 **)(_UNK_01b629fc + 0x1b62820));
        }
        goto LAB_01b626dc;
      }
      if (piVar2 != (int *)0x0) {
        iVar8 = *piVar2;
        uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(_UNK_01b62a00 + 0x1b62850)) {
              puVar11 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xc0);
              goto LAB_01b62898;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b62a00 + 0x1b62850),0);
LAB_01b62898:
        (*(code *)*puVar11)(piVar2,puVar11[1]);
      }
      iVar8 = *(int *)(param_1 + 0x6c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x01b62d8c(iVar8,iVar1);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8c7a,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
SUB_02173f80:
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
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6);
  return;
}



// ===== FAT.ActivityTileBingo$$RefreshBoardConfig RVA 0x1b50c34 =====

/* WARNING: Removing unreachable block (ram,0x01b61db8) */
/* WARNING: Removing unreachable block (ram,0x01b61dc4) */
/* WARNING: Removing unreachable block (ram,0x01b61dc8) */
/* WARNING: Removing unreachable block (ram,0x032dc368) */
/* WARNING: Removing unreachable block (ram,0x032dc388) */
/* WARNING: Removing unreachable block (ram,0x032dc390) */
/* WARNING: Removing unreachable block (ram,0x032dc39c) */
/* WARNING: Removing unreachable block (ram,0x032dc3a8) */
/* WARNING: Removing unreachable block (ram,0x032dc3b0) */
/* WARNING: Removing unreachable block (ram,0x032dc3c8) */
/* WARNING: Removing unreachable block (ram,0x032dc3d4) */
/* WARNING: Removing unreachable block (ram,0x032dc44c) */
/* WARNING: Removing unreachable block (ram,0x032dc458) */
/* WARNING: Removing unreachable block (ram,0x032dc460) */
/* WARNING: Removing unreachable block (ram,0x032dc464) */
/* WARNING: Removing unreachable block (ram,0x032dc47c) */
/* WARNING: Removing unreachable block (ram,0x032dc488) */
/* WARNING: Removing unreachable block (ram,0x032dc498) */
/* WARNING: Removing unreachable block (ram,0x032dc4a0) */
/* WARNING: Removing unreachable block (ram,0x032dc620) */
/* WARNING: Removing unreachable block (ram,0x032dc4ac) */
/* WARNING: Removing unreachable block (ram,0x032dc4b8) */
/* WARNING: Removing unreachable block (ram,0x032dc62c) */
/* WARNING: Removing unreachable block (ram,0x032dc64c) */
/* WARNING: Removing unreachable block (ram,0x032dc654) */
/* WARNING: Removing unreachable block (ram,0x032dc658) */
/* WARNING: Removing unreachable block (ram,0x032dc66c) */
/* WARNING: Removing unreachable block (ram,0x032dc674) */
/* WARNING: Removing unreachable block (ram,0x032dc69c) */
/* WARNING: Removing unreachable block (ram,0x032dc680) */
/* WARNING: Removing unreachable block (ram,0x032dc68c) */
/* WARNING: Removing unreachable block (ram,0x032dc6a8) */
/* WARNING: Removing unreachable block (ram,0x032dc784) */
/* WARNING: Removing unreachable block (ram,0x032dc794) */
/* WARNING: Removing unreachable block (ram,0x032dc7b0) */
/* WARNING: Removing unreachable block (ram,0x032dc7b8) */
/* WARNING: Removing unreachable block (ram,0x032dc7e0) */
/* WARNING: Removing unreachable block (ram,0x032dc7c4) */
/* WARNING: Removing unreachable block (ram,0x032dc7d0) */
/* WARNING: Removing unreachable block (ram,0x032dc7ec) */
/* WARNING: Removing unreachable block (ram,0x032dc7fc) */
/* WARNING: Removing unreachable block (ram,0x032dc6c0) */
/* WARNING: Removing unreachable block (ram,0x032dc6c8) */
/* WARNING: Removing unreachable block (ram,0x032dc6cc) */
/* WARNING: Removing unreachable block (ram,0x032dc6e4) */
/* WARNING: Removing unreachable block (ram,0x032dc6f0) */
/* WARNING: Removing unreachable block (ram,0x032dc700) */
/* WARNING: Removing unreachable block (ram,0x032dc708) */
/* WARNING: Removing unreachable block (ram,0x032dc730) */
/* WARNING: Removing unreachable block (ram,0x032dc714) */
/* WARNING: Removing unreachable block (ram,0x032dc720) */
/* WARNING: Removing unreachable block (ram,0x032dc73c) */
/* WARNING: Removing unreachable block (ram,0x032dc81c) */
/* WARNING: Removing unreachable block (ram,0x032dc3e4) */
/* WARNING: Removing unreachable block (ram,0x032dc400) */
/* WARNING: Removing unreachable block (ram,0x032dc40c) */
/* WARNING: Removing unreachable block (ram,0x032dc41c) */
/* WARNING: Removing unreachable block (ram,0x032dc424) */
/* WARNING: Removing unreachable block (ram,0x032dc4c8) */
/* WARNING: Removing unreachable block (ram,0x032dc430) */
/* WARNING: Removing unreachable block (ram,0x032dc43c) */
/* WARNING: Removing unreachable block (ram,0x032dc4d4) */
/* WARNING: Removing unreachable block (ram,0x032dc4ec) */
/* WARNING: Removing unreachable block (ram,0x032dc518) */
/* WARNING: Removing unreachable block (ram,0x032dc538) */
/* WARNING: Removing unreachable block (ram,0x032dc5a8) */
/* WARNING: Removing unreachable block (ram,0x032dc540) */
/* WARNING: Removing unreachable block (ram,0x032dc55c) */
/* WARNING: Removing unreachable block (ram,0x032dc568) */
/* WARNING: Removing unreachable block (ram,0x032dc578) */
/* WARNING: Removing unreachable block (ram,0x032dc580) */
/* WARNING: Removing unreachable block (ram,0x032dc5ec) */
/* WARNING: Removing unreachable block (ram,0x032dc58c) */
/* WARNING: Removing unreachable block (ram,0x032dc598) */
/* WARNING: Removing unreachable block (ram,0x032dc5f8) */
/* WARNING: Removing unreachable block (ram,0x032dc610) */
/* WARNING: Removing unreachable block (ram,0x01b628bc) */
/* WARNING: Removing unreachable block (ram,0x01b628b0) */
/* WARNING: Removing unreachable block (ram,0x032dc804) */
/* WARNING: Removing unreachable block (ram,0x032dc80c) */
/* WARNING: Removing unreachable block (ram,0x032dc834) */
/* WARNING: Removing unreachable block (ram,0x032dc814) */
/* WARNING: Removing unreachable block (ram,0x032dc840) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b60c34(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
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
  
  pcVar7 = (char *)(_UNK_01b60ed4 + 0x1b60c48);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b60ed8 + 0x1b60c5c));
    func_0x01384978(*(undefined4 *)(_UNK_01b60edc + 0x1b60c68));
    func_0x01384978(*(undefined4 *)(_UNK_01b60ee0 + 0x1b60c74));
    func_0x01384978(*(undefined4 *)(_UNK_01b60ee4 + 0x1b60c80));
    func_0x01384978(*(undefined4 *)(_UNK_01b60ee8 + 0x1b60c8c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c66,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c66,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
LAB_01b60d64:
    iVar8 = *(int *)(param_1 + 0x68);
    iVar10 = **(int **)(_UNK_01b60eec + 0x1b60d70);
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar1 = *(int *)(iVar10 + 0x1c);
    if (iVar1 == 0) {
      func_0x0140024c(iVar10);
      iVar1 = *(int *)(iVar10 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    uVar9 = **(undefined4 **)(iVar1 + 0x5c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x01b61160(iVar8,uVar9,0);
    iVar1 = *(int *)(param_1 + 0x68);
    uVar9 = func_0x01b61988(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01b61a78(iVar1,uVar9);
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_01b61de8 + 0x1b61cd0);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b61dec + 0x1b61ce4));
      func_0x01384978(*(undefined4 *)(_UNK_01b61df0 + 0x1b61cf0));
      func_0x01384978(*(undefined4 *)(_UNK_01b61df4 + 0x1b61cfc));
      *pcVar7 = '\x01';
    }
    iVar8 = func_0x0229f06c(0x8c75,0);
    if (iVar8 != 0) {
      iVar8 = func_0x0229f13c(0x8c75,0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar8 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar1,0);
      func_0x01485278(&uStack_38,0,0);
      iVar10 = *(int *)(iVar8 + 8);
      uVar9 = *(undefined4 *)(iVar8 + 0xc);
      iVar1 = *(int *)(iVar8 + 0x10);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar6 = 3;
      if (iVar1 == 0) {
        uVar6 = 2;
      }
      func_0x0245495c(iVar10,uVar9,&uStack_38,uVar6,0,0);
      return;
    }
    iVar8 = *(int *)(iVar1 + 8);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar8 + 0xc);
    *(undefined4 *)(iVar8 + 0xc) = 0;
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    if (0 < iVar10) {
      func_0x0145b1dc(*(undefined4 *)(iVar8 + 8),0,iVar10,0);
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245055c(iVar1,**(undefined4 **)(_UNK_01b61df8 + 0x1b61da8));
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) < 1) goto LAB_01b60d64;
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 < 0) {
    iVar1 = 0;
LAB_01b60e40:
    *(int *)(param_1 + 0x44) = iVar1;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x5c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar8 + 0x18);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar8 + 0xc) <= iVar1) {
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc) + -1;
      goto LAB_01b60e40;
    }
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  uVar9 = *(undefined4 *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x0364c9b8(iVar1,uVar9,**(undefined4 **)(_UNK_01b60ef0 + 0x1b60e78));
  if (*(int *)(**(int **)(_UNK_01b60ef4 + 0x1b60e90) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar9 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_01b60ef8 + 0x1b60eac));
  *(undefined4 *)(param_1 + 0x60) = uVar9;
  func_0x01b61e00(param_1);
  func_0x01b61f64(param_1);
  pcVar7 = (char *)(_UNK_01b629c4 + 0x1b6246c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b629c8 + 0x1b62480));
    func_0x01384978(*(undefined4 *)(_UNK_01b629cc + 0x1b6248c));
    func_0x01384978(*(undefined4 *)(_UNK_01b629d0 + 0x1b62498));
    func_0x01384978(*(undefined4 *)(_UNK_01b629d4 + 0x1b624a4));
    func_0x01384978(*(undefined4 *)(_UNK_01b629d8 + 0x1b624b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b629dc + 0x1b624bc));
    func_0x01384978(*(undefined4 *)(_UNK_01b629e0 + 0x1b624c8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c7a,0);
  if (iVar1 == 0) {
    bVar14 = *(int *)(param_1 + 0x7c) != 0;
    iVar1 = 0;
    if (bVar14) {
      iVar1 = *(int *)(param_1 + 0x60);
    }
    if (bVar14 && iVar1 != 0) {
      puVar11 = *(undefined4 **)(_UNK_01b629e4 + 0x1b62540);
      iVar1 = func_0x01384be4(*puVar11);
      puVar12 = *(undefined4 **)(_UNK_01b629e8 + 0x1b62554);
      func_0x02450558(iVar1,*puVar12);
      iVar8 = 0;
      puVar13 = *(undefined4 **)(_UNK_01b629ec + 0x1b62568);
      while( true ) {
        iVar10 = *(int *)(param_1 + 0x68);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01b62a90(iVar10);
        if (iVar10 <= iVar8) break;
        uVar9 = func_0x01b62a24(*(undefined4 *)(param_1 + 0x44),iVar8);
        iVar10 = *(int *)(param_1 + 0x7c);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01c23b88(uVar9,*(undefined4 *)(iVar10 + 0x28),0);
        if (iVar10 != 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02450560(iVar1,iVar8,*puVar13);
        }
        iVar8 = iVar8 + 1;
      }
      iVar8 = *(int *)(param_1 + 0x68);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x01b62b24(iVar8,iVar1);
      iVar1 = *(int *)(param_1 + 0x68);
      uVar9 = func_0x01b61988(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01b61a78(iVar1,uVar9);
      iVar1 = func_0x01384be4(*puVar11);
      func_0x02450558(iVar1,*puVar12);
      iVar8 = *(int *)(param_1 + 0x6c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x01b62ccc(iVar8);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar2;
      uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01b629f0 + 0x1b62670)) {
            puVar11 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xc0);
            goto LAB_01b626b8;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b629f0 + 0x1b62670),0);
LAB_01b626b8:
      piVar2 = (int *)(*(code *)*puVar11)(piVar2,puVar11[1]);
      piVar4 = *(int **)(_UNK_01b629f4 + 0x1b626e0);
LAB_01b626dc:
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar2;
      uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar4) {
            puVar11 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
            goto LAB_01b62738;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar11 = (undefined4 *)func_0x014002dc(piVar2,*piVar4,0);
LAB_01b62738:
      iVar8 = (*(code *)*puVar11)(piVar2,puVar11[1]);
      if (iVar8 != 0) {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar8 = *piVar2;
        uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_01b629f8 + 0x1b6276c)) {
              puVar11 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
              goto LAB_01b627b4;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b629f8 + 0x1b6276c),0);
LAB_01b627b4:
        (*(code *)*puVar11)(&uStack_30,piVar2,puVar11[1]);
        uVar9 = uStack_30;
        uVar6 = func_0x01b62d20(*(undefined4 *)(param_1 + 0x44),uStack_30);
        iVar8 = *(int *)(param_1 + 0x7c);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x01c23b88(uVar6,*(undefined4 *)(iVar8 + 0x28),0);
        if (iVar8 != 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02450560(iVar1,uVar9,**(undefined4 **)(_UNK_01b629fc + 0x1b62820));
        }
        goto LAB_01b626dc;
      }
      if (piVar2 != (int *)0x0) {
        iVar8 = *piVar2;
        uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(_UNK_01b62a00 + 0x1b62850)) {
              puVar11 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xc0);
              goto LAB_01b62898;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b62a00 + 0x1b62850),0);
LAB_01b62898:
        (*(code *)*puVar11)(piVar2,puVar11[1]);
      }
      iVar8 = *(int *)(param_1 + 0x6c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x01b62d8c(iVar8,iVar1);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8c7a,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
SUB_02173f80:
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
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6);
  return;
}



// ===== FAT.ActivityTileBingo$$InitTheme RVA 0x1b50efc =====

/* WARNING: Possible PIC construction at 0x01b60fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b60ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b61020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b61074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b61098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b610bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b610e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b61104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b61128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b61be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b6112c) */
/* WARNING: Removing unreachable block (ram,0x01b6113c) */
/* WARNING: Removing unreachable block (ram,0x01b61140) */
/* WARNING: Removing unreachable block (ram,0x01b61108) */
/* WARNING: Removing unreachable block (ram,0x01b61118) */
/* WARNING: Removing unreachable block (ram,0x01b6111c) */
/* WARNING: Removing unreachable block (ram,0x01b610e4) */
/* WARNING: Removing unreachable block (ram,0x01b610f4) */
/* WARNING: Removing unreachable block (ram,0x01b610f8) */
/* WARNING: Removing unreachable block (ram,0x01b610c0) */
/* WARNING: Removing unreachable block (ram,0x01b610d0) */
/* WARNING: Removing unreachable block (ram,0x01b610d4) */
/* WARNING: Removing unreachable block (ram,0x01b6109c) */
/* WARNING: Removing unreachable block (ram,0x01b610ac) */
/* WARNING: Removing unreachable block (ram,0x01b610b0) */
/* WARNING: Removing unreachable block (ram,0x01b61078) */
/* WARNING: Removing unreachable block (ram,0x01b61088) */
/* WARNING: Removing unreachable block (ram,0x01b6108c) */
/* WARNING: Removing unreachable block (ram,0x01b61024) */
/* WARNING: Removing unreachable block (ram,0x01b61034) */
/* WARNING: Removing unreachable block (ram,0x01b61038) */
/* WARNING: Removing unreachable block (ram,0x01b61064) */
/* WARNING: Removing unreachable block (ram,0x01b61068) */
/* WARNING: Removing unreachable block (ram,0x01b60ffc) */
/* WARNING: Removing unreachable block (ram,0x01b6100c) */
/* WARNING: Removing unreachable block (ram,0x01b61010) */
/* WARNING: Removing unreachable block (ram,0x01b60fa8) */
/* WARNING: Removing unreachable block (ram,0x01b60fb8) */
/* WARNING: Removing unreachable block (ram,0x01b60fbc) */
/* WARNING: Removing unreachable block (ram,0x01b60fe8) */
/* WARNING: Removing unreachable block (ram,0x01b60fec) */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b60efc(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  undefined4 unaff_r5;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *unaff_r6;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  int iVar14;
  int aiStackY_b8 [16];
  int aiStack_70 [6];
  int aiStack_58 [6];
  int iStack_40;
  int *piStack_3c;
  int *piStack_38;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x8c83,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c83,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x10) = unaff_r6;
    *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
    iVar5 = *(int *)(iVar1 + 0x10);
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
    if (iVar5 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar5,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    iVar1 = func_0x0245495c(iVar5,uVar11,(undefined1 *)((int)register0x00000054 + -0x30),uVar6);
    return iVar1;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    return 0;
  }
  uStack_1c = 0;
  uStack_20 = 1;
  func_0x02b64928(param_1 + 0x8c,*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x58),param_1,0);
  iVar1 = *(int *)(param_1 + 0x54);
  piVar8 = (int *)(param_1 + 0x98);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = *(int **)(iVar1 + 0x48);
  uStack_24 = 0x1b60fa8;
  unaff_r6 = (int *)0x0;
  pcVar13 = (char *)(_UNK_02b64618 + 0x2b64558);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b6461c + 0x2b6456c),piVar4,0);
    func_0x01384978(*(undefined4 *)(_UNK_02b64620 + 0x2b64578));
    *pcVar13 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1776,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1776,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar13 = (char *)(_UNK_021d6f90 + 0x21d6e50);
    iStack_40 = param_1;
    piStack_3c = piVar8;
    piStack_38 = unaff_r6;
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d6f94 + 0x21d6e64),piVar8,piVar4,0);
      func_0x01384978(*(undefined4 *)(_UNK_021d6f98 + 0x21d6e70));
      *pcVar13 = '\x01';
    }
    aiStack_58[1] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    aiStack_58[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    aiStack_58[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    aiStack_58[0] = 0;
    aiStack_58[4] = 0;
    func_0x0245494c(aiStack_70,0);
    aiStack_58[0] = aiStack_70[0];
    aiStack_58[1] = aiStack_70[1];
    aiStack_58[2] = aiStack_70[2];
    aiStack_58[3] = aiStack_70[3];
    aiStack_58[4] = aiStack_70[4];
    aiStack_70[0] = *piVar8;
    aiStack_70[1] = *(undefined4 *)(param_1 + 0x9c);
    uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_021d6f9c + 0x21d6ec0),aiStack_70);
    func_0x01485288(aiStack_58,uVar11,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(aiStack_58,*(int *)(iVar1 + 0x10),0);
    }
    func_0x014852b8(aiStack_58,0,0);
    func_0x01485238(aiStack_58,piVar4,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar5,uVar11,aiStack_58,uVar6,1,0);
    func_0x02f5ecfc(aiStack_70,aiStack_58,0,**(undefined4 **)(_UNK_021d6fa0 + 0x21d6f74));
    *piVar8 = aiStack_70[0];
    *(int *)(param_1 + 0x9c) = aiStack_70[1];
    return aiStack_70[0];
  }
  piVar3 = *(int **)(param_1 + 0x9c);
  if (piVar3 == (int *)0x0) {
    if (*(int *)(**(int **)(_UNK_02b64624 + 0x2b645f0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = **(int **)(_UNK_02b64628 + 0x2b64610);
    register0x00000054 = (BADSPACEBASE *)&uStack_20;
  }
  else {
    iVar1 = *piVar8;
    pcVar13 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
    piStack_38 = (int *)param_1;
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84));
      func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
      func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
      func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
      *pcVar13 = '\x01';
    }
    iVar5 = func_0x0229f06c(0x305,0);
    if (iVar5 != 0) {
      iVar5 = func_0x0229f13c(0x305,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iStack_40 = 0;
      iVar1 = func_0x021846e8(iVar5,piVar3,piVar4,iVar1);
      return iVar1;
    }
    iVar5 = func_0x01822f2c(piVar4,0);
    piVar3[2] = iVar5;
    if (iVar5 != 0) {
      iVar5 = func_0x017d2c28(*(undefined4 *)(iVar5 + 0x1c),0);
      piVar3[3] = iVar5;
      if (iVar1 == 0) {
        return 1;
      }
      iVar5 = piVar3[2];
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x01875b98(*(undefined4 *)(iVar5 + 0x24),0);
      piVar3[4] = iVar5;
      uVar11 = func_0x02b61610(piVar3);
      func_0x02b61c14(iVar1,uVar11);
      return 1;
    }
    if ((int)piVar4 < 1) {
      return 0;
    }
    piStack_3c = piVar4;
    uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),&piStack_3c);
    unaff_r7 = 0;
    iVar5 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                            **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar11,0);
    if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_24 = 0x2b61be4;
    param_1 = iVar5;
    piVar8 = piVar3;
    unaff_r6 = piVar4;
    register0x00000054 = (BADSPACEBASE *)&iStack_40;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = uStack_24;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(int **)((int)register0x00000054 + -0xc) = piVar8;
  piVar8 = (int *)((int)register0x00000054 + -0x10);
  *piVar8 = param_1;
  pcVar13 = (char *)(_UNK_028c29e4 + 0x28c2958);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c29e8 + 0x28c296c),0);
    *pcVar13 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x46,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x46,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_r4 = *piVar8;
    unaff_r5 = *(undefined4 *)((int)register0x00000054 + -0xc);
    unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
    param_1 = iVar5;
    goto SUB_02173f80;
  }
  if (*(int *)(**(int **)(_UNK_028c29ec + 0x28c29c4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = *piVar8;
  uVar11 = *(undefined4 *)((int)register0x00000054 + -0xc);
  *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
  *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)((int)register0x00000054 + -8);
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *piVar8 = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int **)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar11;
  piVar4 = (int *)((int)register0x00000054 + -0x20);
  *piVar4 = iVar1;
  iVar1 = 4;
  pcVar13 = (char *)(_UNK_028c2868 + 0x28c26ec);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar13 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x14,0);
  iVar9 = iVar5;
  if (iVar2 != 0) {
    iVar5 = func_0x0229f13c(0x14,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar4;
    iVar10 = *(int *)((int)register0x00000054 + -0x1c);
    iVar12 = *(int *)((int)register0x00000054 + -0x18);
    iVar2 = *(int *)((int)register0x00000054 + -0x14);
    iVar1 = *piVar8;
    piVar3 = *(int **)((int)register0x00000054 + -0xc);
    iVar14 = *(int *)((int)register0x00000054 + -4);
    goto LAB_02174038;
  }
  piVar3 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar2 = *piVar3;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar3;
  }
  if (**(int **)(iVar2 + 0x5c) < 1) {
LAB_028c2848:
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = *piVar4;
    iVar10 = *(int *)((int)register0x00000054 + -0x1c);
    iVar7 = *(int *)((int)register0x00000054 + -0x18);
    iVar2 = *(int *)((int)register0x00000054 + -0x14);
    iVar1 = *piVar8;
    piVar3 = *(int **)((int)register0x00000054 + -0xc);
    iVar12 = *(int *)((int)register0x00000054 + -4);
  }
  else {
    if (iVar5 == 0) {
      func_0x01384bf0();
      iVar2 = *piVar3;
    }
    iVar7 = *(int *)(iVar5 + 8);
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar3;
    }
    iVar10 = **(int **)(iVar2 + 0x5c);
    if (iVar7 <= iVar10) goto LAB_028c2848;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar10 = **(int **)(*piVar3 + 0x5c);
    }
    iVar9 = *(int *)(iVar5 + 8);
    if (iVar9 < 1) {
      return iVar9;
    }
    iVar7 = 0;
    if (iVar9 < iVar10) {
      iVar10 = iVar9;
    }
    iVar2 = func_0x04673af4(iVar5,0,iVar10,0);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar12 = 0x28c2824;
    iVar9 = iVar2;
    register0x00000054 = (BADSPACEBASE *)piVar4;
  }
  *(int *)((int)register0x00000054 + -4) = iVar12;
  *(int *)((int)register0x00000054 + -8) = iVar7;
  *(int *)((int)register0x00000054 + -0xc) = iVar10;
  *(int *)((int)register0x00000054 + -0x10) = iVar5;
  pcVar13 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar13 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x15,0);
  if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(&UNK_028c31a0 + _UNK_028c31ac))();
    return iVar1;
  }
  iVar5 = func_0x0229f13c(0x15,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)((int)register0x00000054 + -0x10);
  iVar10 = *(int *)((int)register0x00000054 + -0xc);
  iVar12 = *(int *)((int)register0x00000054 + -8);
  iVar14 = *(int *)((int)register0x00000054 + -4);
LAB_02174038:
  *(int *)((int)register0x00000054 + -4) = iVar14;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = piVar3;
  *(int *)((int)register0x00000054 + -0x10) = iVar1;
  *(int *)((int)register0x00000054 + -0x14) = iVar2;
  *(int *)((int)register0x00000054 + -0x18) = iVar12;
  *(int *)((int)register0x00000054 + -0x1c) = iVar10;
  *(int *)((int)register0x00000054 + -0x20) = iVar7;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,iVar9,0);
  iVar1 = *(int *)(iVar5 + 0x10);
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
  if (iVar1 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar1,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),4,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar9,0);
  iVar9 = *(int *)(iVar5 + 8);
  uVar11 = *(undefined4 *)(iVar5 + 0xc);
  iVar1 = *(int *)(iVar5 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar1 == 0) {
    uVar6 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  iVar1 = func_0x0245495c(iVar9,uVar11,(undefined1 *)((int)register0x00000054 + -0x38),uVar6);
  return iVar1;
}



// ===== FAT.ActivityTileBingo$$GetTileCoverSize RVA 0x1b51988 =====

/* WARNING: Possible PIC construction at 0x01b61a54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b61a58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b61988(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
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
  
  pcVar4 = (char *)(_UNK_01b61a6c + 0x1b6199c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b61a70 + 0x1b619b0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c41,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 0) {
      iVar3 = 4;
      iVar5 = 4;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x20);
      if (iVar3 < 1) {
        iVar3 = 4;
      }
      iVar5 = *(int *)(iVar1 + 0x24);
      if (*(int *)(iVar1 + 0x24) < 1) {
        iVar5 = iVar3;
      }
    }
    if (*(int *)(**(int **)(_UNK_01b61a74 + 0x1b61a38) + 0x74) == 0) {
      func_0x01384ab4();
    }
    (*(code *)&SUB_04825cf4)(iVar3,iVar5,0);
    return;
  }
  iVar1 = func_0x0229f13c(0x8c41,0);
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
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
  func_0x0245498c(&uStack_30,0,0);
  return;
}



// ===== FAT.ActivityTileBingo$$RefreshTileState RVA 0x1b51e00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b61e00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01b61f58 + 0x1b61e14);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b61f5c + 0x1b61e28));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c78,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c78,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  iVar6 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    iVar3 = **(int **)(_UNK_01b61f60 + 0x1b61eb4);
    iVar1 = *(int *)(iVar3 + 0x1c);
    if (iVar1 == 0) {
      func_0x0140024c(iVar3);
      iVar1 = *(int *)(iVar3 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    uVar8 = **(undefined4 **)(iVar1 + 0x5c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar1 + 0x14);
    uVar2 = *(undefined4 *)(iVar1 + 0x24);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
  }
  FUN_01b61160(iVar6,uVar8,uVar2);
  iVar1 = *(int *)(param_1 + 0x68);
  uVar8 = FUN_01b61988(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_01b61ca8 + 0x1b61a94);
  uStack_24 = unaff_r4;
  uStack_20 = unaff_r5;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b61cac + 0x1b61aa8));
    func_0x01384978(*(undefined4 *)(_UNK_01b61cb0 + 0x1b61ab4));
    *pcVar5 = '\x01';
  }
  iVar3 = 0;
  iVar6 = func_0x0229f06c(0x8c6e,0);
  if (iVar6 != 0) {
    iVar6 = func_0x0229f13c(0x8c6e,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_20;
    uStack_20 = uStack_24;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar8,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar6 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar6 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,uVar8,0);
    iVar3 = *(int *)(iVar6 + 8);
    uVar8 = *(undefined4 *)(iVar6 + 0xc);
    iVar1 = *(int *)(iVar6 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar8,&uStack_38,uVar2,0,0);
    return;
  }
  puVar9 = *(undefined4 **)(_UNK_01b61cb4 + 0x1b61b18);
  while( true ) {
    iVar6 = *(int *)(iVar1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar6 + 0xc) <= iVar3) break;
    iVar6 = *(int *)(iVar1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x0328eea8(iVar6,iVar3,*puVar9);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x01b6bc44(iVar6,0);
    iVar3 = iVar3 + 1;
  }
  iVar6 = 0;
LAB_01b61b7c:
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar3 + 0xc) <= iVar6) {
    return;
  }
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0328eea8(iVar3,iVar6,*puVar9);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar3 + 0x28) == '\0') {
    iVar4 = 0;
    do {
      iVar7 = *(int *)(iVar1 + 8);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar7 + 0xc) <= iVar4) break;
      iVar7 = *(int *)(iVar1 + 8);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x0328eea8(iVar7,iVar4,*puVar9);
      if (iVar7 == 0) {
        func_0x01384bf0();
        if (iRam00000008 != *(int *)(iVar3 + 8)) {
          func_0x01384bf0();
          goto LAB_01b61c54;
        }
      }
      else if (*(int *)(iVar7 + 8) != *(int *)(iVar3 + 8)) {
LAB_01b61c54:
        if (((*(char *)(iVar7 + 0x28) == '\0') && (*(int *)(iVar3 + 0x14) < *(int *)(iVar7 + 0x14)))
           && (iVar7 = func_0x01b6c72c(iVar3,iVar7,uVar8), iVar7 != 0)) goto LAB_01b61c90;
      }
      iVar4 = iVar4 + 1;
    } while( true );
  }
  goto LAB_01b61bd4;
LAB_01b61c90:
  func_0x01b6bc44(iVar3,1);
LAB_01b61bd4:
  iVar6 = iVar6 + 1;
  goto LAB_01b61b7c;
}



// ===== FAT.ActivityTileBingo$$BuildMilestoneState RVA 0x1b51f64 =====

/* WARNING: Removing unreachable block (ram,0x032dc814) */
/* WARNING: Removing unreachable block (ram,0x01b62300) */
/* WARNING: Removing unreachable block (ram,0x01b622f0) */
/* WARNING: Removing unreachable block (ram,0x032dc804) */
/* WARNING: Removing unreachable block (ram,0x01b6232c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b61f64(uint param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  pcVar11 = (char *)(_UNK_01b62404 + 0x1b61f7c);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b62408 + 0x1b61f90));
    func_0x01384978(*(undefined4 *)(_UNK_01b6240c + 0x1b61f9c));
    func_0x01384978(*(undefined4 *)(_UNK_01b62410 + 0x1b61fa8));
    func_0x01384978(*(undefined4 *)(_UNK_01b62414 + 0x1b61fb4));
    func_0x01384978(*(undefined4 *)(_UNK_01b62418 + 0x1b61fc0));
    func_0x01384978(*(undefined4 *)(_UNK_01b6241c + 0x1b61fcc));
    func_0x01384978(*(undefined4 *)(_UNK_01b62420 + 0x1b61fd8));
    func_0x01384978(*(undefined4 *)(_UNK_01b62424 + 0x1b61fe4));
    func_0x01384978(*(undefined4 *)(_UNK_01b62428 + 0x1b61ff0));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c79,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c79,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar12 = *(int *)(iVar1 + 8);
    uVar14 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar1 == 0) {
      uVar9 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar12,uVar14,&uStack_30,uVar9);
    return;
  }
  piVar2 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01b6242c + 0x1b6204c));
  func_0x032da608(piVar2,**(undefined4 **)(_UNK_01b62430 + 0x1b62060));
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x20);
    uStack_28 = param_1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01b62434 + 0x1b62094));
LAB_01b620a0:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01b62448 + 0x1b620bc)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_01b62104;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b62448 + 0x1b620bc),0);
LAB_01b62104:
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar1 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01b62438 + 0x1b62138)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_01b62180;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b62438 + 0x1b62138),0);
LAB_01b62180:
      uVar14 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (*(int *)(**(int **)(_UNK_01b6243c + 0x1b621a0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x036a1750(uVar14,**(undefined4 **)(_UNK_01b62440 + 0x1b621bc));
      if (iVar1 != 0) {
        uVar15 = *(undefined4 *)(iVar1 + 0x10);
        uVar9 = *(undefined4 *)(iVar1 + 0x1c);
        uVar14 = func_0x01b6bf98(*(undefined4 *)(iVar1 + 0x18));
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = piVar2[2];
        uVar6 = piVar2[3];
        piVar8 = *(int **)(_UNK_01b62444 + 0x1b62210);
        piVar2[4] = piVar2[4] + 1;
        iVar12 = *piVar8;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (uVar6 < *(uint *)(iVar1 + 0xc)) {
          piVar2[3] = uVar6 + 1;
          iVar1 = iVar1 + uVar6 * 0xc;
          *(undefined4 *)(iVar1 + 0x10) = uVar15;
          *(undefined4 *)(iVar1 + 0x14) = uVar9;
          *(undefined4 *)(iVar1 + 0x18) = uVar14;
        }
        else {
          uStack_30 = *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38);
          func_0x032daed4(piVar2,uVar15,uVar9,uVar14);
        }
      }
      goto LAB_01b620a0;
    }
    param_1 = uStack_28;
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01b6244c + 0x1b62290)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_01b622d8;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b6244c + 0x1b62290),0);
LAB_01b622d8:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
      param_1 = uStack_28;
    }
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar11 = (char *)(_UNK_01b61de8 + 0x1b61cd0);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b61dec + 0x1b61ce4));
    func_0x01384978(*(undefined4 *)(_UNK_01b61df0 + 0x1b61cf0));
    func_0x01384978(*(undefined4 *)(_UNK_01b61df4 + 0x1b61cfc));
    *pcVar11 = '\x01';
  }
  iVar12 = func_0x0229f06c(0x8c75,0);
  if (iVar12 != 0) {
    iVar12 = func_0x0229f13c(0x8c75,0);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar12 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar12 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,piVar2,0);
    iVar13 = *(int *)(iVar12 + 8);
    uVar14 = *(undefined4 *)(iVar12 + 0xc);
    iVar1 = *(int *)(iVar12 + 0x10);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar1 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar13,uVar14,&uStack_38,uVar9,0,0);
    return;
  }
  iVar12 = *(int *)(iVar1 + 8);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar13 = *(int *)(iVar12 + 0xc);
  *(undefined4 *)(iVar12 + 0xc) = 0;
  *(int *)(iVar12 + 0x10) = *(int *)(iVar12 + 0x10) + 1;
  if (0 < iVar13) {
    func_0x0145b1dc(*(undefined4 *)(iVar12 + 8),0,iVar13,0);
  }
  iVar12 = *(int *)(iVar1 + 0xc);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  func_0x0245055c(iVar12,**(undefined4 **)(_UNK_01b61df8 + 0x1b61da8));
  if (piVar2 == (int *)0x0) {
    return;
  }
  piVar3 = *(int **)(iVar1 + 8);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar6 = piVar3[3];
  iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_01b61dfc + 0x1b61dd8) + 0x10) + 0x60) + 0x48);
  pcVar11 = (char *)(_UNK_032dc914 + 0x32dc35c);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_032dc918 + 0x32dc374));
    func_0x01384978(*(undefined4 *)(_UNK_032dc91c + 0x32dc380));
    *pcVar11 = '\x01';
  }
  if (piVar2 == (int *)0x0) {
    func_0x04839ccc(6,0);
  }
  if ((uint)piVar3[3] < uVar6) {
    func_0x0484c9cc(0);
  }
  iVar12 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
    iVar12 = func_0x014001f0(iVar12);
  }
  piVar8 = (int *)func_0x01384ab8(piVar2,iVar12);
  if (piVar8 == (int *)0x0) {
    if ((int)uVar6 < piVar3[3]) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
      if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
        iVar12 = func_0x014001f0(iVar12);
      }
      iVar13 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar12) {
            puVar4 = (undefined4 *)(iVar13 + *piVar8 * 8 + 0xc0);
            goto LAB_032dc62c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar12,0);
LAB_032dc62c:
      piVar2 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
      piVar8 = *(int **)(_UNK_032dc920 + 0x32dc650);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar12 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
          do {
            if (piVar10[-1] == *piVar8) {
              puVar4 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
              goto LAB_032dc6a8;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,*piVar8,0);
LAB_032dc6a8:
        iVar12 = (*(code *)*puVar4)(piVar2,puVar4[1]);
        if (iVar12 == 0) goto LAB_032dc784;
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
        if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
          iVar12 = func_0x014001f0(iVar12);
        }
        iVar13 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar13 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar12) {
              puVar4 = (undefined4 *)(iVar13 + *piVar10 * 8 + 0xc0);
              goto LAB_032dc73c;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar12,0);
LAB_032dc73c:
        (*(code *)*puVar4)(&uStack_30,piVar2,puVar4[1]);
        uStack_34 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4);
        uStack_38 = uStack_28;
        func_0x032dc0b8(piVar3,uVar6,uStack_30,uStack_2c);
        uVar6 = uVar6 + 1;
      } while( true );
    }
    func_0x032dd158(piVar3,piVar2,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20));
  }
  else {
    iVar12 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
    if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
      iVar12 = func_0x014001f0(iVar12);
    }
    iVar13 = *piVar8;
    uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar2[-1] == iVar12) {
          puVar4 = (undefined4 *)(iVar13 + *piVar2 * 8 + 0xc0);
          goto LAB_032dc4d4;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar8,iVar12,0);
LAB_032dc4d4:
    iVar12 = (*(code *)*puVar4)(piVar8,puVar4[1]);
    if (0 < iVar12) {
      func_0x032db540(piVar3,piVar3[3] + iVar12,
                      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
      if ((int)uVar6 < piVar3[3]) {
        uStack_38 = piVar3[3] - uVar6;
        uStack_34 = 0;
        func_0x0484e904(piVar3[2],uVar6,piVar3[2],iVar12 + uVar6);
      }
      if (piVar3 == piVar8) {
        uStack_34 = 0;
        uStack_38 = uVar6;
        func_0x0484e904(piVar3[2],0,piVar3[2],uVar6);
        uStack_38 = piVar3[3] - uVar6;
        uStack_34 = 0;
        func_0x0484e904(piVar3[2],iVar12 + uVar6,piVar3[2],uVar6 << 1);
      }
      else {
        iVar13 = piVar3[2];
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar5 = *piVar8;
        uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar7 != 0) {
          piVar2 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar2[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar5 + *piVar2 * 8 + 0xe8);
              goto LAB_032dc5f8;
            }
            uVar7 = uVar7 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar8,iVar1,5);
LAB_032dc5f8:
        (*(code *)*puVar4)(piVar8,iVar13,uVar6,puVar4[1]);
      }
      piVar3[3] = piVar3[3] + iVar12;
    }
  }
LAB_032dc834:
  piVar3[4] = piVar3[4] + 1;
  return;
LAB_032dc784:
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_032dc924 + 0x32dc7a4)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_032dc7ec;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_032dc924 + 0x32dc7a4),0);
LAB_032dc7ec:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  goto LAB_032dc834;
}



// ===== FAT.ActivityTileBingo$$RestoreProgressState RVA 0x1b52454 =====

/* WARNING: Removing unreachable block (ram,0x01b628b0) */
/* WARNING: Removing unreachable block (ram,0x01b628bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b62454(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01b629c4 + 0x1b6246c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b629c8 + 0x1b62480));
    func_0x01384978(*(undefined4 *)(_UNK_01b629cc + 0x1b6248c));
    func_0x01384978(*(undefined4 *)(_UNK_01b629d0 + 0x1b62498));
    func_0x01384978(*(undefined4 *)(_UNK_01b629d4 + 0x1b624a4));
    func_0x01384978(*(undefined4 *)(_UNK_01b629d8 + 0x1b624b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b629dc + 0x1b624bc));
    func_0x01384978(*(undefined4 *)(_UNK_01b629e0 + 0x1b624c8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c7a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c7a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
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
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    return;
  }
  bVar14 = *(int *)(param_1 + 0x7c) != 0;
  iVar1 = 0;
  if (bVar14) {
    iVar1 = *(int *)(param_1 + 0x60);
  }
  if (bVar14 && iVar1 != 0) {
    puVar11 = *(undefined4 **)(_UNK_01b629e4 + 0x1b62540);
    iVar1 = func_0x01384be4(*puVar11);
    puVar12 = *(undefined4 **)(_UNK_01b629e8 + 0x1b62554);
    func_0x02450558(iVar1,*puVar12);
    iVar8 = 0;
    puVar13 = *(undefined4 **)(_UNK_01b629ec + 0x1b62568);
    while( true ) {
      iVar10 = *(int *)(param_1 + 0x68);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = func_0x01b62a90(iVar10);
      if (iVar10 <= iVar8) break;
      uVar9 = func_0x01b62a24(*(undefined4 *)(param_1 + 0x44),iVar8);
      iVar10 = *(int *)(param_1 + 0x7c);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = func_0x01c23b88(uVar9,*(undefined4 *)(iVar10 + 0x28),0);
      if (iVar10 != 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02450560(iVar1,iVar8,*puVar13);
      }
      iVar8 = iVar8 + 1;
    }
    iVar8 = *(int *)(param_1 + 0x68);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x01b62b24(iVar8,iVar1);
    iVar1 = *(int *)(param_1 + 0x68);
    uVar9 = FUN_01b61988(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01b61a78(iVar1,uVar9);
    iVar1 = func_0x01384be4(*puVar11);
    func_0x02450558(iVar1,*puVar12);
    iVar8 = *(int *)(param_1 + 0x6c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x01b62ccc(iVar8);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar2;
    uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01b629f0 + 0x1b62670)) {
          puVar11 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xc0);
          goto LAB_01b626b8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b629f0 + 0x1b62670),0);
LAB_01b626b8:
    piVar2 = (int *)(*(code *)*puVar11)(piVar2,puVar11[1]);
    piVar4 = *(int **)(_UNK_01b629f4 + 0x1b626e0);
LAB_01b626dc:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar2;
    uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar4) {
          puVar11 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
          goto LAB_01b62738;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar2,*piVar4,0);
LAB_01b62738:
    iVar8 = (*(code *)*puVar11)(piVar2,puVar11[1]);
    if (iVar8 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar2;
      uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01b629f8 + 0x1b6276c)) {
            puVar11 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
            goto LAB_01b627b4;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b629f8 + 0x1b6276c),0);
LAB_01b627b4:
      (*(code *)*puVar11)(&uStack_30,piVar2,puVar11[1]);
      uVar9 = uStack_30;
      uVar6 = func_0x01b62d20(*(undefined4 *)(param_1 + 0x44),uStack_30);
      iVar8 = *(int *)(param_1 + 0x7c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x01c23b88(uVar6,*(undefined4 *)(iVar8 + 0x28),0);
      if (iVar8 != 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02450560(iVar1,uVar9,**(undefined4 **)(_UNK_01b629fc + 0x1b62820));
      }
      goto LAB_01b626dc;
    }
    if (piVar2 != (int *)0x0) {
      iVar8 = *piVar2;
      uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01b62a00 + 0x1b62850)) {
            puVar11 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xc0);
            goto LAB_01b62898;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b62a00 + 0x1b62850),0);
LAB_01b62898:
      (*(code *)*puVar11)(piVar2,puVar11[1]);
    }
    iVar8 = *(int *)(param_1 + 0x6c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x01b62d8c(iVar8,iVar1);
  }
  return;
}



// ===== FAT.ActivityTileBingo$$GetCompletedTileSaveKey RVA 0x1b52a24 =====

int FUN_01b62a24(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8c7b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c7b,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  return param_2 + param_1 * 100000 + 1000000;
}



// ===== FAT.ActivityTileBingo$$GetClaimedMilestoneSaveKey RVA 0x1b52d20 =====

int FUN_01b62d20(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x8c81,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c81,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  return param_2 + param_1 * 100000 + 2000000;
}



// ===== FAT.ActivityTileBingo$$GetCanChooseGroupDetailID RVA 0x1b5318c =====

/* WARNING: Removing unreachable block (ram,0x01b63458) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b6318c(int param_1)

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
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_01b63538 + 0x1b631a0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6353c + 0x1b631b4));
    func_0x01384978(*(undefined4 *)(_UNK_01b63540 + 0x1b631c0));
    func_0x01384978(*(undefined4 *)(_UNK_01b63544 + 0x1b631cc));
    func_0x01384978(*(undefined4 *)(_UNK_01b63548 + 0x1b631d8));
    func_0x01384978(*(undefined4 *)(_UNK_01b6354c + 0x1b631e4));
    func_0x01384978(*(undefined4 *)(_UNK_01b63550 + 0x1b631f0));
    func_0x01384978(*(undefined4 *)(_UNK_01b63554 + 0x1b631fc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c84,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c84,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_021a9f78 + 0x21a9e98);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021a9f7c + 0x21a9eac),param_1,0);
      *pcVar7 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
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
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a9f80 + 0x21a9f68));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b63558 + 0x1b63254));
  func_0x03258eb8(iVar1,**(undefined4 **)(_UNK_01b6355c + 0x1b63268));
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 0x58) + 0x18);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar8,**(undefined4 **)(_UNK_01b63560 + 0x1b63298));
    piVar10 = *(int **)(_UNK_01b63564 + 0x1b632b0);
    piVar11 = *(int **)(_UNK_01b63568 + 0x1b632b8);
    do {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
            goto LAB_01b63310;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01b63310:
      iVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar8 == 0) goto LAB_01b633e0;
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
            goto LAB_01b63388;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01b63388:
      uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      iVar8 = func_0x01b63578(param_1,uVar9);
    } while (iVar8 == 0);
    func_0x01b636e8(param_1,iVar1,uVar9);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0325b328(iVar1,**(undefined4 **)(_UNK_01b6356c + 0x1b633d8));
LAB_01b633e0:
    if (piVar2 != (int *)0x0) {
      iVar8 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01b63570 + 0x1b633f8)) {
            puVar3 = (undefined4 *)(iVar8 + *piVar10 * 8 + 0xc0);
            goto LAB_01b63440;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b63570 + 0x1b633f8),0);
LAB_01b63440:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return iVar1;
}



// ===== FAT.ActivityTileBingo$$CheckGroupLevelRequire RVA 0x1b53578 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b63578(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar5 = (char *)(_UNK_01b636d4 + 0x1b63590);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b636d8 + 0x1b635a4));
    func_0x01384978(*(undefined4 *)(_UNK_01b636dc + 0x1b635b0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c85,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c85,0);
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
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_01b636e0 + 0x1b6360c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x036a1750(param_2,**(undefined4 **)(_UNK_01b636e4 + 0x1b63628));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar7 = *(int *)(iVar1 + 0x1c);
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x48);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar4 = func_0x01dd2c04(iVar4,0);
    if (iVar7 <= iVar4) {
      iVar4 = *(int *)(iVar1 + 0x18);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x48);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01dd2c04(iVar1,0);
      uVar2 = (uint)(iVar1 <= iVar4);
    }
  }
  return uVar2;
}



// ===== FAT.ActivityTileBingo$$FillGroupDetailID RVA 0x1b536e8 =====

/* WARNING: Removing unreachable block (ram,0x0325ad8c) */
/* WARNING: Removing unreachable block (ram,0x0325ad9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b636e8(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  
  pcVar12 = (char *)(_UNK_01b63948 + 0x1b63708);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6394c + 0x1b6371c));
    func_0x01384978(*(undefined4 *)(_UNK_01b63950 + 0x1b63728));
    func_0x01384978(*(undefined4 *)(_UNK_01b63954 + 0x1b63734));
    func_0x01384978(*(undefined4 *)(_UNK_01b63958 + 0x1b63740));
    func_0x01384978(*(undefined4 *)(_UNK_01b6395c + 0x1b6374c));
    func_0x01384978(*(undefined4 *)(_UNK_01b63960 + 0x1b63758));
    func_0x01384978(*(undefined4 *)(_UNK_01b63964 + 0x1b63764));
    func_0x01384978(*(undefined4 *)(_UNK_01b63968 + 0x1b63770));
    func_0x01384978(*(undefined4 *)(_UNK_01b6396c + 0x1b6377c));
    func_0x01384978(*(undefined4 *)(_UNK_01b63970 + 0x1b63788));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c86,0);
  if (iVar1 == 0) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar2 = *(int **)(_UNK_01b63974 + 0x1b637fc);
    param_2[3] = 0;
    iVar1 = *piVar2;
    param_2[4] = param_2[4] + 1;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x036a1750(param_3,**(undefined4 **)(_UNK_01b63978 + 0x1b63828));
    if (iVar1 != 0) {
      iVar11 = *(int *)(iVar1 + 0x20);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar11 + 0xc) < 4) {
        piVar3 = *(int **)(_UNK_01b6397c + 0x1b63934);
        piVar2 = *(int **)(iVar1 + 0x20);
      }
      else {
        piVar2 = *(int **)(_UNK_01b63980 + 0x1b63864);
        uVar10 = *(undefined4 *)(iVar1 + 0x20);
        iVar1 = *piVar2;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar2;
        }
        iVar11 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
        if (iVar11 == 0) {
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar2;
          }
          uVar13 = **(undefined4 **)(iVar1 + 0x5c);
          iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01b63984 + 0x1b638b0));
          func_0x0245082c(iVar11,uVar13,**(undefined4 **)(_UNK_01b63988 + 0x1b638d0),0);
          *(int *)(*(int *)(*piVar2 + 0x5c) + 4) = iVar11;
        }
        uVar10 = func_0x02f9fd10(uVar10,iVar11,**(undefined4 **)(_UNK_01b6398c + 0x1b638f4));
        piVar2 = (int *)func_0x02fb1e30(uVar10,3,**(undefined4 **)(_UNK_01b63990 + 0x1b63908));
        piVar3 = *(int **)(_UNK_01b63994 + 0x1b63920);
      }
      uVar7 = param_2[3];
      iVar1 = *(int *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x48);
      pcVar12 = (char *)(_UNK_0325ae98 + 0x325a8f8);
      if (*pcVar12 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0325ae9c + 0x325a910));
        func_0x01384978(*(undefined4 *)(_UNK_0325aea0 + 0x325a91c));
        *pcVar12 = '\x01';
      }
      if (piVar2 == (int *)0x0) {
        func_0x04839ccc(6,0);
      }
      if ((uint)param_2[3] < uVar7) {
        func_0x0484c9cc(0);
      }
      iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x014001f0(iVar11);
      }
      piVar3 = (int *)func_0x01384ab8(piVar2,iVar11);
      if (piVar3 == (int *)0x0) {
        if ((int)uVar7 < param_2[3]) {
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
          if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
            iVar11 = func_0x014001f0(iVar11);
          }
          iVar4 = *piVar2;
          uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
          if (uVar8 != 0) {
            piVar3 = (int *)(*(int *)(iVar4 + 0x58) + 4);
            do {
              if (piVar3[-1] == iVar11) {
                puVar5 = (undefined4 *)(iVar4 + *piVar3 * 8 + 0xc0);
                goto LAB_0325abc8;
              }
              uVar8 = uVar8 - 1;
              piVar3 = piVar3 + 2;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_0325abc8:
          piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
          piVar3 = *(int **)(_UNK_0325aea4 + 0x325abe8);
          do {
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar2;
            uVar8 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar9[-1] == *piVar3) {
                  puVar5 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
                  goto LAB_0325ac40;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_0325ac40:
            iVar11 = (*(code *)*puVar5)(piVar2,puVar5[1]);
            if (iVar11 == 0) goto LAB_0325ad0c;
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
            if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
              iVar11 = func_0x014001f0(iVar11);
            }
            iVar4 = *piVar2;
            uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar9[-1] == iVar11) {
                  puVar5 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
                  goto LAB_0325acd4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_0325acd4:
            uVar10 = (*(code *)*puVar5)(piVar2,puVar5[1]);
            func_0x0325a680(param_2,uVar7,uVar10,
                            *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
            uVar7 = uVar7 + 1;
          } while( true );
        }
        func_0x0325b5f8(param_2,piVar2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20));
      }
      else {
        iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x014001f0(iVar11);
        }
        iVar4 = *piVar3;
        uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar8 != 0) {
          piVar2 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar2[-1] == iVar11) {
              puVar5 = (undefined4 *)(iVar4 + *piVar2 * 8 + 0xc0);
              goto LAB_0325aa70;
            }
            uVar8 = uVar8 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar3,iVar11,0);
LAB_0325aa70:
        iVar11 = (*(code *)*puVar5)(piVar3,puVar5[1]);
        if (0 < iVar11) {
          func_0x03259cec(param_2,param_2[3] + iVar11,
                          *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
          if ((int)uVar7 < param_2[3]) {
            func_0x0484e904(param_2[2],uVar7,param_2[2],iVar11 + uVar7,param_2[3] - uVar7,0);
          }
          if (param_2 == piVar3) {
            func_0x0484e904(param_2[2],0,param_2[2],uVar7,uVar7,0);
            func_0x0484e904(param_2[2],iVar11 + uVar7,param_2[2],uVar7 << 1,param_2[3] - uVar7,0);
          }
          else {
            iVar4 = param_2[2];
            iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x014001f0(iVar1);
            }
            iVar6 = *piVar3;
            uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
            if (uVar8 != 0) {
              piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
              do {
                if (piVar2[-1] == iVar1) {
                  puVar5 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xe8);
                  goto LAB_0325ab94;
                }
                uVar8 = uVar8 - 1;
                piVar2 = piVar2 + 2;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined4 *)func_0x014002dc(piVar3,iVar1,5);
LAB_0325ab94:
            (*(code *)*puVar5)(piVar3,iVar4,uVar7,puVar5[1]);
          }
          param_2[3] = param_2[3] + iVar11;
        }
      }
      goto LAB_0325adbc;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8c86,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return;
LAB_0325ad0c:
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_0325aea8 + 0x325ad2c)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_0325ad74;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0325aea8 + 0x325ad2c),0);
LAB_0325ad74:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
LAB_0325adbc:
  param_2[4] = param_2[4] + 1;
  return;
}



// ===== FAT.ActivityTileBingo$$GetGroupInfo RVA 0x1b53998 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b63998(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01b63c30 + 0x1b639b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b63c34 + 0x1b639c8));
    func_0x01384978(*(undefined4 *)(_UNK_01b63c38 + 0x1b639d4));
    func_0x01384978(*(undefined4 *)(_UNK_01b63c3c + 0x1b639e0));
    func_0x01384978(*(undefined4 *)(_UNK_01b63c40 + 0x1b639ec));
    func_0x01384978(*(undefined4 *)(_UNK_01b63c44 + 0x1b639f8));
    func_0x01384978(*(undefined4 *)(_UNK_01b63c48 + 0x1b63a04));
    func_0x01384978(*(undefined4 *)(_UNK_01b63c4c + 0x1b63a10));
    func_0x01384978(*(undefined4 *)(_UNK_01b63c50 + 0x1b63a1c));
    func_0x01384978(*(undefined4 *)(_UNK_01b63c54 + 0x1b63a28));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x8c8c,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0245058c(param_2,**(undefined4 **)(_UNK_01b63c58 + 0x1b63a9c));
    iVar2 = FUN_01b6318c(param_1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&uStack_48,iVar2,**(undefined4 **)(_UNK_01b63c5c + 0x1b63ad0));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    puVar5 = *(undefined4 **)(_UNK_01b63c60 + 0x1b63af0);
    piVar7 = *(int **)(_UNK_01b63c64 + 0x1b63af8);
    puVar8 = *(undefined4 **)(_UNK_01b63c68 + 0x1b63b00);
    puVar9 = *(undefined4 **)(_UNK_01b63c6c + 0x1b63b08);
    puVar6 = *(undefined4 **)(_UNK_01b63c70 + 0x1b63b10);
    while (iVar2 = func_0x01470118(&uStack_38,*puVar5), uVar1 = uStack_2c, iVar2 != 0) {
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x036a1750(uVar1,*puVar8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x02fb6260(*(undefined4 *)(iVar2 + 0x1c),*puVar9);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x02450824(param_2,uVar1,uVar3,*puVar6);
    }
    func_0x02450828(&uStack_38,**(undefined4 **)(_UNK_01b63c74 + 0x1b63b94));
  }
  else {
    iVar2 = func_0x0229f13c(0x8c8c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ActivityTileBingo$$ChooseGroup RVA 0x1b53c80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b63c80(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  pcVar5 = (char *)(_UNK_01b63da0 + 0x1b63c98);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b63da4 + 0x1b63cac));
    func_0x01384978(*(undefined4 *)(_UNK_01b63da8 + 0x1b63cb8));
    func_0x01384978(*(undefined4 *)(_UNK_01b63dac + 0x1b63cc4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c8d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c8d,0);
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
  piVar2 = *(int **)(_UNK_01b63db0 + 0x1b63d20);
  *(undefined4 *)(param_1 + 0x40) = param_2;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar6 = func_0x036a1750(param_2,**(undefined4 **)(_UNK_01b63db4 + 0x1b63d40));
  *(undefined4 *)(param_1 + 0x5c) = uVar6;
  func_0x01b63dbc(param_1);
  FUN_01b60c34(param_1);
  FUN_01b5fa0c(param_1);
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01b63db8 + 0x1b63d70));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x01c359e8(iVar1,0);
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  iVar1 = func_0x0229f06c(0x8c33,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c33,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x114);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b5e9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.ActivityTileBingo$$ResetBoardIndex RVA 0x1b53dbc =====

void FUN_01b63dbc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8c8f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c8f,0);
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
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



// ===== FAT.ActivityTileBingo$$get_detailID RVA 0x1b53e18 =====

undefined4 FUN_01b63e18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.ActivityTileBingo$$set_detailID RVA 0x1b53e20 =====

void FUN_01b63e20(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_groupDetailID RVA 0x1b53e28 =====

undefined4 FUN_01b63e28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.ActivityTileBingo$$set_groupDetailID RVA 0x1b53e30 =====

void FUN_01b63e30(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_boardIndex RVA 0x1b53e38 =====

undefined4 FUN_01b63e38(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.ActivityTileBingo$$set_boardIndex RVA 0x1b53e40 =====

void FUN_01b63e40(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_waitEnterNextBoard RVA 0x1b53e48 =====

undefined1 FUN_01b63e48(int param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



// ===== FAT.ActivityTileBingo$$set_waitEnterNextBoard RVA 0x1b53e50 =====

void FUN_01b63e50(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_waitRecycle RVA 0x1b53e58 =====

undefined1 FUN_01b63e58(int param_1)

{
  return *(undefined1 *)(param_1 + 0x49);
}



// ===== FAT.ActivityTileBingo$$set_waitRecycle RVA 0x1b53e60 =====

void FUN_01b63e60(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x49) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_HasSeenSpecialTileChangeAnimThisRound RVA 0x1b53e68 =====

undefined1 FUN_01b63e68(int param_1)

{
  return *(undefined1 *)(param_1 + 0x4d);
}



// ===== FAT.ActivityTileBingo$$set_HasSeenSpecialTileChangeAnimThisRound RVA 0x1b53e70 =====

void FUN_01b63e70(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x4d) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_roundConf RVA 0x1b53e78 =====

undefined4 FUN_01b63e78(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== FAT.ActivityTileBingo$$set_roundConf RVA 0x1b53e80 =====

void FUN_01b63e80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_conf RVA 0x1b53e88 =====

undefined4 FUN_01b63e88(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== FAT.ActivityTileBingo$$set_conf RVA 0x1b53e90 =====

void FUN_01b63e90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_detailConf RVA 0x1b53e98 =====

undefined4 FUN_01b63e98(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.ActivityTileBingo$$set_detailConf RVA 0x1b53ea0 =====

void FUN_01b63ea0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_groupDetailConf RVA 0x1b53ea8 =====

undefined4 FUN_01b63ea8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== FAT.ActivityTileBingo$$set_groupDetailConf RVA 0x1b53eb0 =====

void FUN_01b63eb0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_bingoBoardConf RVA 0x1b53eb8 =====

undefined4 FUN_01b63eb8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// ===== FAT.ActivityTileBingo$$set_bingoBoardConf RVA 0x1b53ec0 =====

void FUN_01b63ec0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_tileBoardDetailConf RVA 0x1b53ec8 =====

undefined4 FUN_01b63ec8(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// ===== FAT.ActivityTileBingo$$set_tileBoardDetailConf RVA 0x1b53ed0 =====

void FUN_01b63ed0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_TileState RVA 0x1b53ed8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b63ed8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x8c90,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c90,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02260ff4 + 0x2260f14);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02260ff8 + 0x2260f28),param_1,0);
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
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02260ffc + 0x2260fe4));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x68);
}



// ===== FAT.ActivityTileBingo$$get_MilestoneState RVA 0x1b53f2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b63f2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x8c91,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c91,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022610fc + 0x226101c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02261100 + 0x2261030),param_1,0);
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
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02261104 + 0x22610ec));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x6c);
}



// ===== FAT.ActivityTileBingo$$get_CompletedBoardTotal RVA 0x1b53f80 =====

undefined4 FUN_01b63f80(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8c92,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c92,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x84);
}



// ===== FAT.ActivityTileBingo$$get_MilestoneQueue RVA 0x1b53fd4 =====

undefined4 FUN_01b63fd4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8c93,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c93,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x88);
}



// ===== FAT.ActivityTileBingo$$get_GuideRes RVA 0x1b54028 =====

void FUN_01b64028(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x8c94,0);
  if (iVar1 == 0) {
    uStack_18 = *(undefined4 *)(param_2 + 0xd8);
    uStack_14 = *(undefined4 *)(param_2 + 0xdc);
  }
  else {
    iVar1 = func_0x0229f13c(0x8c94,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021e4730(&uStack_18,iVar1,param_2,0);
  }
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}



// ===== FAT.ActivityTileBingo$$get_Visual RVA 0x1b54098 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b64098(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x8c95,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c95,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7f44 + 0x21c7e64);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c7f48 + 0x21c7e78),param_1,0);
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
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7f4c + 0x21c7f34));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x9c);
}



// ===== FAT.ActivityTileBingo$$get_World RVA 0x1b540ec =====

undefined4 FUN_01b640ec(int param_1)

{
  return *(undefined4 *)(param_1 + 0x108);
}



// ===== FAT.ActivityTileBingo$$set_World RVA 0x1b540f4 =====

void FUN_01b640f4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x108) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_WorldTracer RVA 0x1b540fc =====

undefined4 FUN_01b640fc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10c);
}



// ===== FAT.ActivityTileBingo$$set_WorldTracer RVA 0x1b54104 =====

void FUN_01b64104(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10c) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$get_recycleReward RVA 0x1b5410c =====

undefined4 FUN_01b6410c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x110);
}



// ===== FAT.ActivityTileBingo$$set_recycleReward RVA 0x1b54114 =====

void FUN_01b64114(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x110) = param_2;
  return;
}



// ===== FAT.ActivityTileBingo$$add_Invalidate RVA 0x1b5411c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b6411c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_01b641b0 + 0x1b64134);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b641b4 + 0x1b64148));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01b641b8 + 0x1b64160);
  iVar1 = *(int *)(param_1 + 0x114);
  do {
    piVar2 = (int *)func_0x024507e8(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_01b64190:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_01b64190;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x114),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.ActivityTileBingo$$remove_Invalidate RVA 0x1b541bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b641bc(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_01b64250 + 0x1b641d4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b64254 + 0x1b641e8));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01b64258 + 0x1b64200);
  iVar1 = *(int *)(param_1 + 0x114);
  do {
    piVar2 = (int *)func_0x024507f8(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_01b64230:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_01b64230;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x114),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.ActivityTileBingo$$get_Feature RVA 0x1b5425c =====

undefined4 FUN_01b6425c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x8c96,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c96,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return 199;
}



// ===== FAT.ActivityTileBingo$$get_ActivityBoardId RVA 0x1b542b0 =====

undefined4 FUN_01b642b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x8c97,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c97,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x1c);
  }
  return uVar3;
}



// ===== FAT.ActivityTileBingo$$get_NeedChooseGroup RVA 0x1b54314 =====

uint FUN_01b64314(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8c98,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c98,0);
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
  return (uint)(*(int *)(param_1 + 0x40) == 0);
}



// ===== FAT.ActivityTileBingo$$get_IsEnd RVA 0x1b54370 =====

uint FUN_01b64370(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x8c99,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c99,0);
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
  uVar2 = func_0x02b48934(param_1,0);
  return uVar2 ^ 1;
}



// ===== FAT.ActivityTileBingo$$MarkSpecialChangeAnimSeen RVA 0x1b543d0 =====

void FUN_01b643d0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8c9a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c9a,0);
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
  *(undefined1 *)(param_1 + 0x4d) = 1;
  return;
}



// ===== FAT.ActivityTileBingo$$ResetSpecialChangeAnimSeen RVA 0x1b54428 =====

void FUN_01b64428(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8c9c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c9c,0);
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
  *(undefined1 *)(param_1 + 0x4d) = 0;
  return;
}



// ===== FAT.ActivityTileBingo$$.ctor RVA 0x1b54480 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b64480(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  pcVar6 = (char *)(_UNK_01b64a00 + 0x1b6449c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b64a04 + 0x1b644b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b64a08 + 0x1b644bc));
    func_0x01384978(*(undefined4 *)(_UNK_01b64a0c + 0x1b644c8));
    func_0x01384978(*(undefined4 *)(_UNK_01b64a10 + 0x1b644d4));
    func_0x01384978(*(undefined4 *)(_UNK_01b64a14 + 0x1b644e0));
    func_0x01384978(*(undefined4 *)(_UNK_01b64a18 + 0x1b644ec));
    func_0x01384978(*(undefined4 *)(_UNK_01b64a1c + 0x1b644f8));
    func_0x01384978(*(undefined4 *)(_UNK_01b64a20 + 0x1b64504));
    func_0x01384978(*(undefined4 *)(_UNK_01b64a24 + 0x1b64510));
    func_0x01384978(*(undefined4 *)(_UNK_01b64a28 + 0x1b6451c));
    func_0x01384978(*(undefined4 *)(_UNK_01b64a2c + 0x1b64528));
    func_0x01384978(*(undefined4 *)(_UNK_01b64a30 + 0x1b64534));
    func_0x01384978(*(undefined4 *)(_UNK_01b64a34 + 0x1b64540));
    func_0x01384978(*(undefined4 *)(_UNK_01b64a38 + 0x1b6454c));
    *pcVar6 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b64a3c + 0x1b645ac));
  func_0x01b64a74();
  puVar2 = *(undefined4 **)(_UNK_01b64a40 + 0x1b645c4);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x01b64b00();
  puVar2 = *(undefined4 **)(_UNK_01b64a44 + 0x1b645e0);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  puVar7 = *(undefined4 **)(_UNK_01b64a48 + 0x1b645f8);
  func_0x0328e950(uVar1,*puVar7);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x0328e950(uVar1,*puVar7);
  puVar2 = *(undefined4 **)(_UNK_01b64a4c + 0x1b64620);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x035d0f70(uVar1,**(undefined4 **)(_UNK_01b64a50 + 0x1b64638));
  piVar8 = *(int **)(_UNK_01b64a54 + 0x1b6464c);
  iVar4 = *piVar8;
  iVar5 = *(int *)(iVar4 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  if (iVar5 == 0) {
    func_0x01384ab4();
    iVar4 = *piVar8;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x02b64854(&uStack_30,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x904),0);
  iVar4 = *piVar8;
  *(undefined4 *)(param_1 + 0x94) = uStack_28;
  *(ulonglong *)(param_1 + 0x8c) = CONCAT44(uStack_2c,uStack_30);
  uStack_34 = 0;
  uStack_38 = 0;
  func_0x02b644a0(&uStack_38,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x900),0);
  uStack_44 = 0;
  *(undefined4 *)(param_1 + 0x98) = uStack_38;
  *(undefined4 *)(param_1 + 0x9c) = uStack_34;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x02b64854(&uStack_48,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x904),0);
  iVar4 = *piVar8;
  *(undefined4 *)(param_1 + 0xa8) = uStack_40;
  *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_44,uStack_48);
  uStack_4c = 0;
  uStack_50 = 0;
  func_0x02b644a0(&uStack_50,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x928),0);
  *(undefined4 *)(param_1 + 0xac) = uStack_50;
  *(undefined4 *)(param_1 + 0xb0) = uStack_4c;
  uStack_54 = 0;
  uStack_58 = 0;
  func_0x02b644a0(&uStack_58,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x924),0);
  *(undefined4 *)(param_1 + 0xb4) = uStack_58;
  *(undefined4 *)(param_1 + 0xb8) = uStack_54;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x02b64854(&uStack_68,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x914),0);
  iVar4 = *piVar8;
  *(undefined4 *)(param_1 + 0xc4) = uStack_60;
  *(ulonglong *)(param_1 + 0xbc) = CONCAT44(uStack_64,uStack_68);
  uStack_6c = 0;
  uStack_70 = 0;
  func_0x02b644a0(&uStack_70,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x90c),0);
  uStack_74 = 0;
  *(undefined4 *)(param_1 + 200) = uStack_70;
  *(undefined4 *)(param_1 + 0xcc) = uStack_6c;
  uStack_78 = 0;
  func_0x02b644a0(&uStack_78,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x910),0);
  uStack_7c = 0;
  *(undefined4 *)(param_1 + 0xd0) = uStack_78;
  *(undefined4 *)(param_1 + 0xd4) = uStack_74;
  uStack_80 = 0;
  func_0x02b644a0(&uStack_80,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x918),0);
  uStack_84 = 0;
  *(undefined4 *)(param_1 + 0xd8) = uStack_80;
  *(undefined4 *)(param_1 + 0xdc) = uStack_7c;
  uStack_88 = 0;
  func_0x02b644a0(&uStack_88,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x91c),0);
  uStack_8c = 0;
  *(undefined4 *)(param_1 + 0xe0) = uStack_88;
  *(undefined4 *)(param_1 + 0xe4) = uStack_84;
  uStack_90 = 0;
  func_0x02b644a0(&uStack_90,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x920),0);
  uStack_94 = 0;
  *(undefined4 *)(param_1 + 0xe8) = uStack_90;
  *(undefined4 *)(param_1 + 0xec) = uStack_8c;
  uStack_98 = 0;
  func_0x02b644a0(&uStack_98,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x92c),0);
  uStack_9c = 0;
  *(undefined4 *)(param_1 + 0xf0) = uStack_98;
  *(undefined4 *)(param_1 + 0xf4) = uStack_94;
  uStack_a0 = 0;
  func_0x02b644a0(&uStack_a0,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x934),0);
  uStack_a4 = 0;
  *(undefined4 *)(param_1 + 0xf8) = uStack_a0;
  *(undefined4 *)(param_1 + 0xfc) = uStack_9c;
  uStack_a8 = 0;
  func_0x02b644a0(&uStack_a8,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x938),0);
  *(undefined4 *)(param_1 + 0x100) = uStack_a8;
  *(undefined4 *)(param_1 + 0x104) = uStack_a4;
  func_0x02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar1 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  if (*(int *)(**(int **)(_UNK_01b64a58 + 0x1b64948) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar1 = func_0x036a1750(uVar1,**(undefined4 **)(_UNK_01b64a5c + 0x1b64964));
  iVar4 = *(int *)(**(int **)(_UNK_01b64a60 + 0x1b6497c) + 0x74);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (iVar4 == 0) {
    func_0x01384ab4();
  }
  iVar4 = func_0x0300d558(**(undefined4 **)(_UNK_01b64a64 + 0x1b6499c));
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b64a68 + 0x1b649b0));
  func_0x02450820(uVar1,param_1,**(undefined4 **)(_UNK_01b64a6c + 0x1b649cc),0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x034a0e84(iVar4,uVar1,**(undefined4 **)(_UNK_01b64a70 + 0x1b649f0));
  return;
}



// ===== FAT.ActivityTileBingo$$Open RVA 0x1b54be0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b64be0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
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
  
  pcVar4 = (char *)(_UNK_01b64d24 + 0x1b64bf4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b64d28 + 0x1b64c08));
    func_0x01384978(*(undefined4 *)(_UNK_01b64d2c + 0x1b64c14));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c9d,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b64314(param_1);
    if (iVar1 != 0) {
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01b64d30 + 0x1b64c7c));
      iVar7 = *(int *)(param_1 + 200);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar8 = *(undefined4 *)(iVar7 + 0xc);
      piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01b64d34 + 0x1b64ca4),1);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar2 + 0x20));
      if (iVar7 == 0) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if (piVar2[3] == 0) {
        func_0x01384bf4();
      }
      piVar2[4] = param_1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x0229f06c(0xd,0,piVar2,0);
      if (iVar7 == 0) {
        func_0x01ee81d4(iVar1,uVar8,0,piVar2);
      }
      else {
        iVar7 = func_0x0229f13c(0xd,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x02174858(iVar7,iVar1,uVar8,piVar2);
      }
      return;
    }
    iVar1 = func_0x0229f06c(0x8c9e,0);
    if (iVar1 == 0) {
      FUN_01b5fe2c(param_1);
      pcVar4 = (char *)(_UNK_01b65074 + 0x1b64da8);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01b65078 + 0x1b64dbc));
        func_0x01384978(*(undefined4 *)(_UNK_01b6507c + 0x1b64dc8));
        func_0x01384978(*(undefined4 *)(_UNK_01b65080 + 0x1b64dd4));
        func_0x01384978(*(undefined4 *)(_UNK_01b65084 + 0x1b64de0));
        func_0x01384978(*(undefined4 *)(_UNK_01b65088 + 0x1b64dec));
        func_0x01384978(*(undefined4 *)(_UNK_01b6508c + 0x1b64df8));
        func_0x01384978(*(undefined4 *)(_UNK_01b65090 + 0x1b64e04));
        func_0x01384978(*(undefined4 *)(_UNK_01b65094 + 0x1b64e10));
        *pcVar4 = '\x01';
      }
      uStack_24 = 0;
      iVar1 = func_0x0229f06c(35999,0);
      if (iVar1 == 0) {
        pcVar4 = (char *)(_UNK_01b65098 + 0x1b64e6c);
        if (*pcVar4 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01b6509c + 0x1b64e80));
          *pcVar4 = '\x01';
        }
        if (**(char **)(**(int **)(_UNK_01b650a0 + 0x1b64e94) + 0x5c) == '\0') {
          func_0x01b6ee84();
          iVar1 = func_0x01b6ecd4(&uStack_24);
          if ((iVar1 != 0) && (iVar1 = func_0x01b6eddc(), iVar1 != 0)) {
            uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01b650a4 + 0x1b64ed0));
            func_0x020d79b0(uVar8,0);
            if (*(int *)(**(int **)(_UNK_01b650a8 + 0x1b64eec) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x021616a0(uVar8,0);
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0xfc);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01e8007c(iVar1,1,0,0);
            iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01b650ac + 0x1b64f50));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01eeb900(iVar1,0,0);
            iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01b650b0 + 0x1b64f80));
            uVar8 = uStack_24;
            puVar5 = *(undefined4 **)(_UNK_01b650b4 + 0x1b64f94);
            uVar3 = func_0x01384be4(*puVar5);
            func_0x02450194(uVar3,0,**(undefined4 **)(_UNK_01b650b8 + 0x1b64fb4),0);
            piVar2 = *(int **)(_UNK_01b650bc + 0x1b64fc8);
            iVar7 = *piVar2;
            if (*(int *)(iVar7 + 0x74) == 0) {
              func_0x01384ab4();
              iVar7 = *piVar2;
            }
            iVar9 = *(int *)(*(int *)(iVar7 + 0x5c) + 0x14);
            if (iVar9 == 0) {
              if (*(int *)(iVar7 + 0x74) == 0) {
                func_0x01384ab4();
                iVar7 = *piVar2;
              }
              uVar6 = **(undefined4 **)(iVar7 + 0x5c);
              iVar9 = func_0x01384be4(*puVar5);
              func_0x02450194(iVar9,uVar6,**(undefined4 **)(_UNK_01b650c0 + 0x1b65028),0);
              *(int *)(*(int *)(*piVar2 + 0x5c) + 0x14) = iVar9;
            }
            uVar8 = func_0x01b6f058(uVar8,uVar3,iVar9);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01c36290(iVar1,uVar8,0);
          }
        }
      }
      else {
        iVar1 = func_0x0229f13c(35999,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02174a08(iVar1,0);
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x8c9e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8c9d,0);
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
  iVar7 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.ActivityTileBingo$$OpenMain RVA 0x1b54d38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b64d38(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
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
  
  iVar1 = func_0x0229f06c(0x8c9e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8c9e,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar2,0,0);
    return;
  }
  FUN_01b5fe2c(param_1);
  pcVar3 = (char *)(_UNK_01b65074 + 0x1b64da8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b65078 + 0x1b64dbc));
    func_0x01384978(*(undefined4 *)(_UNK_01b6507c + 0x1b64dc8));
    func_0x01384978(*(undefined4 *)(_UNK_01b65080 + 0x1b64dd4));
    func_0x01384978(*(undefined4 *)(_UNK_01b65084 + 0x1b64de0));
    func_0x01384978(*(undefined4 *)(_UNK_01b65088 + 0x1b64dec));
    func_0x01384978(*(undefined4 *)(_UNK_01b6508c + 0x1b64df8));
    func_0x01384978(*(undefined4 *)(_UNK_01b65090 + 0x1b64e04));
    func_0x01384978(*(undefined4 *)(_UNK_01b65094 + 0x1b64e10));
    *pcVar3 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(35999,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01b65098 + 0x1b64e6c);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b6509c + 0x1b64e80));
      *pcVar3 = '\x01';
    }
    if (**(char **)(**(int **)(_UNK_01b650a0 + 0x1b64e94) + 0x5c) == '\0') {
      func_0x01b6ee84();
      iVar1 = func_0x01b6ecd4(&uStack_24);
      if ((iVar1 != 0) && (iVar1 = func_0x01b6eddc(), iVar1 != 0)) {
        uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01b650a4 + 0x1b64ed0));
        func_0x020d79b0(uVar7,0);
        if (*(int *)(**(int **)(_UNK_01b650a8 + 0x1b64eec) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x021616a0(uVar7,0);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xfc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e8007c(iVar1,1,0,0);
        iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01b650ac + 0x1b64f50));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01eeb900(iVar1,0,0);
        iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01b650b0 + 0x1b64f80));
        uVar7 = uStack_24;
        puVar4 = *(undefined4 **)(_UNK_01b650b4 + 0x1b64f94);
        uVar2 = func_0x01384be4(*puVar4);
        func_0x02450194(uVar2,0,**(undefined4 **)(_UNK_01b650b8 + 0x1b64fb4),0);
        piVar9 = *(int **)(_UNK_01b650bc + 0x1b64fc8);
        iVar6 = *piVar9;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x01384ab4();
          iVar6 = *piVar9;
        }
        iVar8 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x14);
        if (iVar8 == 0) {
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x01384ab4();
            iVar6 = *piVar9;
          }
          uVar5 = **(undefined4 **)(iVar6 + 0x5c);
          iVar8 = func_0x01384be4(*puVar4);
          func_0x02450194(iVar8,uVar5,**(undefined4 **)(_UNK_01b650c0 + 0x1b65028),0);
          *(int *)(*(int *)(*piVar9 + 0x5c) + 0x14) = iVar8;
        }
        uVar7 = func_0x01b6f058(uVar7,uVar2,iVar8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01c36290(iVar1,uVar7,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(35999,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174a08(iVar1,0);
  }
  return;
}



// ===== FAT.ActivityTileBingo$$TryPopup RVA 0x1b550c4 =====

void FUN_01b650c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x8cbb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cbb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityTileBingo$$WhenReset RVA 0x1b5512c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b6512c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 *puVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_01b652c4 + 0x1b65140);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b652c8 + 0x1b65154));
    func_0x01384978(*(undefined4 *)(_UNK_01b652cc + 0x1b65160));
    func_0x01384978(*(undefined4 *)(_UNK_01b652d0 + 0x1b6516c));
    func_0x01384978(*(undefined4 *)(_UNK_01b652d4 + 0x1b65178));
    func_0x01384978(*(undefined4 *)(_UNK_01b652d8 + 0x1b65184));
    func_0x01384978(*(undefined4 *)(_UNK_01b652dc + 0x1b65190));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cbc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cbc,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar3);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01b652e0 + 0x1b651e8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b652e4 + 0x1b65204));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01b652e8 + 0x1b65218));
  func_0x02450820(uVar8,param_1,**(undefined4 **)(_UNK_01b652ec + 0x1b65234),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a10dc(iVar1,uVar8,**(undefined4 **)(_UNK_01b652f0 + 0x1b65258));
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x035d1208(iVar1,**(undefined4 **)(_UNK_01b652f4 + 0x1b6527c));
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0x4c);
  iVar1 = *(int *)(param_1 + 0x108);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_01dbc290 + 0x1dbc104);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbc294 + 0x1dbc118),iVar1,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbc298 + 0x1dbc124));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc29c + 0x1dbc130));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc2a0 + 0x1dbc13c));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc2a4 + 0x1dbc148));
    func_0x01384978(*(undefined4 *)(_UNK_01dbc2a8 + 0x1dbc154));
    *pcVar5 = '\x01';
  }
  iVar7 = 0;
  iVar2 = func_0x0229f06c(0x5b65,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5b65,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar6,0);
    func_0x01485278(&uStack_38,iVar1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  puVar4 = *(undefined4 **)(_UNK_01dbc2ac + 0x1dbc1b4);
  while( true ) {
    iVar2 = *(int *)(iVar6 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) <= iVar7) goto LAB_01dbc238;
    iVar2 = *(int *)(iVar6 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0328eea8(iVar2,iVar7,*puVar4);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) == iVar1) break;
    iVar7 = iVar7 + 1;
  }
  iVar6 = *(int *)(iVar6 + 0x18);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  func_0x03290bd4(iVar6,iVar7,**(undefined4 **)(_UNK_01dbc2b0 + 0x1dbc230));
LAB_01dbc238:
  if (*(int *)(**(int **)(_UNK_01dbc2b4 + 0x1dbc244) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar6 = func_0x0300d558(**(undefined4 **)(_UNK_01dbc2b8 + 0x1dbc260));
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar6 + 0x20),iVar1,*(undefined4 *)(iVar6 + 0x14));
  return;
}



// ===== FAT.ActivityTileBingo$$DequeueItemFly RVA 0x1b552f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b652f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01b65448 + 0x1b65318);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6544c + 0x1b65330));
    func_0x01384978(*(undefined4 *)(_UNK_01b65450 + 0x1b6533c));
    func_0x01384978(*(undefined4 *)(_UNK_01b65454 + 0x1b65348));
    func_0x01384978(*(undefined4 *)(_UNK_01b65458 + 0x1b65354));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cbd,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0x14)) {
      uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01b6545c + 0x1b653d8));
      func_0x02450814(uVar2,param_1,**(undefined4 **)(_UNK_01b65460 + 0x1b653f8),0);
      if (*(int *)(**(int **)(_UNK_01b65464 + 0x1b6540c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02074880(param_2,1,param_3,param_4,param_5,0,uVar2,0,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8cbd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021dc2d4(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ActivityTileBingo$$ResolveItemFlyTarget RVA 0x1b55468 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b65468(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  pcVar3 = (char *)(_UNK_01b65594 + 0x1b65484);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b65598 + 0x1b65498));
    func_0x01384978(*(undefined4 *)(_UNK_01b6559c + 0x1b654a4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cbe,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x14) < 1) {
      pcVar3 = (char *)(_UNK_01b655a0 + 0x1b6555c);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01b655a4 + 0x1b65570));
        *pcVar3 = '\x01';
      }
      puVar2 = *(undefined8 **)(**(int **)(_UNK_01b655a8 + 0x1b65584) + 0x5c);
      uStack_20 = *puVar2;
      uStack_18 = *(undefined4 *)(puVar2 + 1);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x78);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x035d17d4(&uStack_20,iVar1,**(undefined4 **)(_UNK_01b655ac + 0x1b65530));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8cbe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218a848(&uStack_20,iVar1,param_2,0);
  }
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}



// ===== FAT.ActivityTileBingo$$JumpTask RVA 0x1b555b0 =====

void FUN_01b655b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x8cbf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cbf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
    return;
  }
  func_0x02b64d7c(param_1 + 0x23,0);
  func_0x02b64d7c(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x01b65648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined4 *)(*param_1 + 0x1fc));
  return;
}



// ===== FAT.ActivityTileBingo$$BoardEntryAsset RVA 0x1b5564c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b6564c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01b65738 + 0x1b65664);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6573c + 0x1b65678));
    func_0x01384978(*(undefined4 *)(_UNK_01b65740 + 0x1b65684));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x8cc0,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03470a60(iVar1,**(undefined4 **)(_UNK_01b65748 + 0x1b65724),&uStack_14,
                    **(undefined4 **)(_UNK_01b65744 + 0x1b65718));
  }
  else {
    iVar1 = func_0x0229f13c(0x8cc0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityTileBingo$$SetupFresh RVA 0x1b5574c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b6574c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01b658bc + 0x1b65760);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b658c0 + 0x1b65774));
    func_0x01384978(*(undefined4 *)(_UNK_01b658c4 + 0x1b65780));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cc1,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x4b) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
    *(undefined4 *)(param_1 + 0x42) = 0;
    FUN_01b64428(param_1);
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_01b60934(param_1);
    FUN_01b60efc(param_1);
    if (*(int *)(param_1 + 0x54) == 0) {
      return;
    }
    if (0 < *(int *)(*(int *)(param_1 + 0x54) + 0x28)) {
      *(undefined1 *)(param_1 + 0x4a) = 1;
    }
    FUN_01b5e740(param_1);
    iVar1 = FUN_01b6318c(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == 1) {
      uVar5 = func_0x03259410(iVar1,0,**(undefined4 **)(_UNK_01b658c8 + 0x1b65860));
      FUN_01b63c80(param_1,uVar5);
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    uVar5 = *(undefined4 *)(param_1 + 0x94);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x31a,0,0,0);
    if (iVar4 == 0) {
      uVar2 = func_0x01e7e874(iVar1);
      func_0x01e7437c(iVar1,uVar5,uVar2,0);
    }
    else {
      iVar4 = func_0x0229f13c(0x31a,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x02174858(iVar4,iVar1,uVar5,0);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8cc1,0);
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



// ===== FAT.ActivityTileBingo$$LoadSetup RVA 0x1b558cc =====

/* WARNING: Possible PIC construction at 0x01b60fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b60ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b61020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b61074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b61098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b610bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b610e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b61104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b61128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b61be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b6112c) */
/* WARNING: Removing unreachable block (ram,0x01b6113c) */
/* WARNING: Removing unreachable block (ram,0x01b61140) */
/* WARNING: Removing unreachable block (ram,0x01b61108) */
/* WARNING: Removing unreachable block (ram,0x01b61118) */
/* WARNING: Removing unreachable block (ram,0x01b6111c) */
/* WARNING: Removing unreachable block (ram,0x01b610e4) */
/* WARNING: Removing unreachable block (ram,0x01b610f4) */
/* WARNING: Removing unreachable block (ram,0x01b610f8) */
/* WARNING: Removing unreachable block (ram,0x01b610c0) */
/* WARNING: Removing unreachable block (ram,0x01b610d0) */
/* WARNING: Removing unreachable block (ram,0x01b610d4) */
/* WARNING: Removing unreachable block (ram,0x01b6109c) */
/* WARNING: Removing unreachable block (ram,0x01b610ac) */
/* WARNING: Removing unreachable block (ram,0x01b610b0) */
/* WARNING: Removing unreachable block (ram,0x01b61078) */
/* WARNING: Removing unreachable block (ram,0x01b61088) */
/* WARNING: Removing unreachable block (ram,0x01b6108c) */
/* WARNING: Removing unreachable block (ram,0x01b61024) */
/* WARNING: Removing unreachable block (ram,0x01b61034) */
/* WARNING: Removing unreachable block (ram,0x01b61038) */
/* WARNING: Removing unreachable block (ram,0x01b61064) */
/* WARNING: Removing unreachable block (ram,0x01b61068) */
/* WARNING: Removing unreachable block (ram,0x01b60ffc) */
/* WARNING: Removing unreachable block (ram,0x01b6100c) */
/* WARNING: Removing unreachable block (ram,0x01b61010) */
/* WARNING: Removing unreachable block (ram,0x01b60fa8) */
/* WARNING: Removing unreachable block (ram,0x01b60fb8) */
/* WARNING: Removing unreachable block (ram,0x01b60fbc) */
/* WARNING: Removing unreachable block (ram,0x01b60fe8) */
/* WARNING: Removing unreachable block (ram,0x01b60fec) */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b658cc(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int unaff_r4;
  int unaff_r5;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *unaff_r6;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  int unaff_r7;
  int *piVar14;
  int unaff_r8;
  undefined4 unaff_r9;
  int *piVar15;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int **ppiVar16;
  int unaff_lr;
  int iVar17;
  int aiStackY_b8 [16];
  int iStack_70;
  int iStack_6c;
  int *piStack_68;
  int aiStack_64 [5];
  int *piStack_50;
  int aiStack_4c [3];
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  piVar10 = (int *)&stack0xfffffff0;
  iVar2 = func_0x0229f06c(0x8cc4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8cc4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piStack_38 = (int *)0x0;
    func_0x0245494c(&piStack_50,0,param_2,0);
    piStack_38 = piStack_50;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&piStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&piStack_38,param_1,0);
    func_0x01485278(&piStack_38,param_2,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar11 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    aiStack_64[3] = 0;
    aiStack_64[4] = 0;
    iVar2 = func_0x0245495c(iVar8,uVar11,&piStack_38,uVar6);
    return iVar2;
  }
  param_1[0x1f] = param_2;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x01c23b88(0xffffffff,*(undefined4 *)(param_2 + 0x28),0);
  iVar2 = param_1[3];
  uVar11 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)((int)param_1 + 0x4a) = uVar1;
  param_1[3] = iVar2 + 1;
  iVar2 = func_0x01c23c30(iVar2,uVar11,0);
  iVar8 = param_1[3];
  uVar11 = *(undefined4 *)(param_2 + 0x28);
  param_1[0xf] = iVar2;
  param_1[3] = iVar8 + 1;
  iVar2 = func_0x01c23c30(iVar8,uVar11,0);
  iVar8 = param_1[3];
  uVar11 = *(undefined4 *)(param_2 + 0x28);
  param_1[0x10] = iVar2;
  param_1[3] = iVar8 + 1;
  iVar2 = func_0x01c23c30(iVar8,uVar11,0);
  iVar8 = param_1[3];
  uVar11 = *(undefined4 *)(param_2 + 0x28);
  param_1[0x11] = iVar2;
  param_1[3] = iVar8 + 1;
  uVar1 = func_0x01c23b88(iVar8,uVar11,0);
  iVar2 = param_1[3];
  uVar11 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  param_1[3] = iVar2 + 1;
  uVar1 = func_0x01c23b88(iVar2,uVar11,0);
  iVar2 = param_1[3];
  uVar11 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)((int)param_1 + 0x49) = uVar1;
  param_1[3] = iVar2 + 1;
  uVar1 = func_0x01c23b88(iVar2,uVar11,0);
  iVar2 = param_1[3];
  uVar11 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)((int)param_1 + 0x4b) = uVar1;
  param_1[3] = iVar2 + 1;
  iVar2 = func_0x01c23c30(iVar2,uVar11,0);
  iVar8 = param_1[3];
  uVar11 = *(undefined4 *)(param_2 + 0x28);
  param_1[0x20] = iVar2;
  param_1[3] = iVar8 + 1;
  iVar2 = func_0x01c23c30(iVar8,uVar11,0);
  iVar8 = param_1[3];
  uVar11 = *(undefined4 *)(param_2 + 0x28);
  param_1[0x21] = iVar2;
  param_1[3] = iVar8 + 1;
  iVar2 = func_0x01c23c30(iVar8,uVar11,0);
  iVar8 = param_1[3];
  uVar11 = *(undefined4 *)(param_2 + 0x28);
  param_1[0x22] = iVar2;
  param_1[3] = iVar8 + 1;
  uVar1 = func_0x01c23b88(iVar8,uVar11,0);
  *(undefined1 *)((int)param_1 + 0x4d) = uVar1;
  FUN_01b60934(param_1);
  iStack_18 = unaff_r4;
  iVar2 = func_0x0229f06c(0x8c83,0);
  if (iVar2 != 0) {
    iVar8 = func_0x0229f13c(0x8c83,0);
    iVar2 = iStack_18;
    if (iVar8 == 0) {
      func_0x01384bf0();
      iVar2 = iStack_18;
    }
SUB_02173f80:
    piVar10[3] = unaff_lr;
    piVar10[2] = unaff_r8;
    piVar10[1] = unaff_r7;
    *piVar10 = (int)unaff_r6;
    piVar10[-1] = unaff_r5;
    piVar10[-2] = iVar2;
    piVar10[-8] = 0;
    piVar10[-7] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piVar10[-6] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piVar10[-5] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piVar10[-4] = 0;
    func_0x0245494c(piVar10 + -0xe,0,0);
    iVar2 = *(int *)(iVar8 + 0x10);
    piVar10[-8] = piVar10[-0xe];
    piVar10[-7] = piVar10[-0xd];
    piVar10[-6] = piVar10[-0xc];
    piVar10[-5] = piVar10[-0xb];
    piVar10[-4] = piVar10[-10];
    if (iVar2 != 0) {
      func_0x01485278(piVar10 + -8,iVar2,0);
    }
    func_0x01485278(piVar10 + -8,param_1,0);
    iVar7 = *(int *)(iVar8 + 8);
    uVar11 = *(undefined4 *)(iVar8 + 0xc);
    iVar2 = *(int *)(iVar8 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    piVar10[-0x10] = 0;
    piVar10[-0xf] = 0;
    iVar2 = func_0x0245495c(iVar7,uVar11,piVar10 + -8,uVar6);
    return iVar2;
  }
  if (param_1[0x15] == 0) {
    return 0;
  }
  uStack_1c = 0;
  uStack_20 = 1;
  func_0x02b64928(param_1 + 0x23,*(undefined4 *)(param_1[0x15] + 0x58),param_1,0);
  iVar2 = param_1[0x15];
  piVar10 = param_1 + 0x26;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar5 = *(int **)(iVar2 + 0x48);
  uStack_24 = 0x1b60fa8;
  unaff_r6 = (int *)0x0;
  pcVar13 = (char *)(_UNK_02b64618 + 0x2b64558);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b6461c + 0x2b6456c),piVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_02b64620 + 0x2b64578));
    *pcVar13 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x1776,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1776,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar13 = (char *)(_UNK_021d6f90 + 0x21d6e50);
    piStack_40 = param_1;
    piStack_3c = piVar10;
    piStack_38 = unaff_r6;
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d6f94 + 0x21d6e64),piVar10,piVar5,0);
      func_0x01384978(*(undefined4 *)(_UNK_021d6f98 + 0x21d6e70));
      *pcVar13 = '\x01';
    }
    aiStack_64[4] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piStack_50 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    aiStack_4c[0] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    aiStack_64[3] = 0;
    aiStack_4c[1] = 0;
    func_0x0245494c(&stack0xffffff90,0);
    aiStack_64[3] = iStack_70;
    aiStack_64[4] = iStack_6c;
    piStack_50 = piStack_68;
    aiStack_4c[0] = aiStack_64[0];
    aiStack_4c[1] = aiStack_64[1];
    iStack_70 = *piVar10;
    iStack_6c = param_1[0x27];
    uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_021d6f9c + 0x21d6ec0),&stack0xffffff90);
    func_0x01485288(aiStack_64 + 3,uVar11,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(aiStack_64 + 3,*(int *)(iVar2 + 0x10),0);
    }
    func_0x014852b8(aiStack_64 + 3,0,0);
    func_0x01485238(aiStack_64 + 3,piVar5,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar11 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar11,aiStack_64 + 3,uVar6,1,0);
    func_0x02f5ecfc(&stack0xffffff90,aiStack_64 + 3,0,**(undefined4 **)(_UNK_021d6fa0 + 0x21d6f74));
    *piVar10 = iStack_70;
    param_1[0x27] = iStack_6c;
    return iStack_70;
  }
  piVar4 = (int *)param_1[0x27];
  if (piVar4 == (int *)0x0) {
    if (*(int *)(**(int **)(_UNK_02b64624 + 0x2b645f0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar3 = (int *)**(int **)(_UNK_02b64628 + 0x2b64610);
    ppiVar16 = (int **)&uStack_20;
  }
  else {
    iVar2 = *piVar10;
    ppiVar16 = &piStack_40;
    pcVar13 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
    piStack_38 = param_1;
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84));
      func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
      func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
      func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
      *pcVar13 = '\x01';
    }
    iVar8 = func_0x0229f06c(0x305,0);
    if (iVar8 != 0) {
      iVar8 = func_0x0229f13c(0x305,0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piStack_40 = (int *)0x0;
      iVar2 = func_0x021846e8(iVar8,piVar4,piVar5,iVar2);
      return iVar2;
    }
    iVar8 = func_0x01822f2c(piVar5,0);
    piVar4[2] = iVar8;
    if (iVar8 != 0) {
      iVar8 = func_0x017d2c28(*(undefined4 *)(iVar8 + 0x1c),0);
      piVar4[3] = iVar8;
      if (iVar2 == 0) {
        return 1;
      }
      iVar8 = piVar4[2];
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x01875b98(*(undefined4 *)(iVar8 + 0x24),0);
      piVar4[4] = iVar8;
      uVar11 = func_0x02b61610(piVar4);
      func_0x02b61c14(iVar2,uVar11);
      return 1;
    }
    if ((int)piVar5 < 1) {
      return 0;
    }
    piStack_3c = piVar5;
    uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),&piStack_3c);
    unaff_r7 = 0;
    piVar3 = (int *)func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                                    **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar11,0);
    if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_24 = 0x2b61be4;
    param_1 = piVar3;
    piVar10 = piVar4;
    unaff_r6 = piVar5;
  }
  ppiVar16[-1] = (int *)uStack_24;
  ppiVar16[-2] = (int *)unaff_r11;
  ppiVar16[-3] = piVar10;
  piVar10 = (int *)(ppiVar16 + -4);
  *piVar10 = (int)param_1;
  pcVar13 = (char *)(_UNK_028c29e4 + 0x28c2958);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c29e8 + 0x28c296c),0);
    *pcVar13 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x46,0);
  if (iVar2 != 0) {
    iVar8 = func_0x0229f13c(0x46,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    unaff_r5 = (int)ppiVar16[-3];
    unaff_lr = (int)ppiVar16[-1];
    param_1 = piVar3;
    iVar2 = *piVar10;
    goto SUB_02173f80;
  }
  if (*(int *)(**(int **)(_UNK_028c29ec + 0x28c29c4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = *piVar10;
  uVar11 = ppiVar16[-3];
  ppiVar16[-1] = ppiVar16[-1];
  ppiVar16[-2] = ppiVar16[-2];
  ppiVar16[-3] = (int *)unaff_r9;
  *piVar10 = unaff_r8;
  ppiVar16[-5] = (int *)unaff_r7;
  ppiVar16[-6] = unaff_r6;
  ppiVar16[-7] = (int *)uVar11;
  piVar5 = (int *)(ppiVar16 + -8);
  *piVar5 = iVar2;
  iVar2 = 4;
  pcVar13 = (char *)(_UNK_028c2868 + 0x28c26ec);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar13 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x14,0);
  piVar4 = piVar3;
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0x14,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar5;
    iVar9 = (int)ppiVar16[-7];
    iVar12 = (int)ppiVar16[-6];
    piVar14 = ppiVar16[-5];
    iVar2 = *piVar10;
    piVar15 = ppiVar16[-3];
    iVar17 = (int)ppiVar16[-1];
    goto LAB_02174038;
  }
  piVar15 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar8 = *piVar15;
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x01384ab4();
    iVar8 = *piVar15;
  }
  if (**(int **)(iVar8 + 0x5c) < 1) {
LAB_028c2848:
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar3 = (int *)*piVar5;
    iVar9 = (int)ppiVar16[-7];
    iVar8 = (int)ppiVar16[-6];
    piVar14 = ppiVar16[-5];
    iVar2 = *piVar10;
    piVar15 = ppiVar16[-3];
    iVar7 = (int)ppiVar16[-1];
  }
  else {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
      iVar8 = *piVar15;
    }
    iVar7 = piVar3[2];
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x01384ab4();
      iVar8 = *piVar15;
    }
    iVar9 = **(int **)(iVar8 + 0x5c);
    if (iVar7 <= iVar9) goto LAB_028c2848;
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = **(int **)(*piVar15 + 0x5c);
    }
    iVar7 = piVar3[2];
    if (iVar7 < 1) {
      return iVar7;
    }
    iVar8 = 0;
    if (iVar7 < iVar9) {
      iVar9 = iVar7;
    }
    piVar14 = (int *)func_0x04673af4(piVar3,0,iVar9,0);
    if (*(int *)(*piVar15 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = 0x28c2824;
    piVar4 = piVar14;
    ppiVar16 = (int **)piVar5;
  }
  ppiVar16[-1] = (int *)iVar7;
  ppiVar16[-2] = (int *)iVar8;
  ppiVar16[-3] = (int *)iVar9;
  ppiVar16[-4] = piVar3;
  pcVar13 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar13 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x15,0);
  if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*(code *)(&UNK_028c31a0 + _UNK_028c31ac))();
    return iVar2;
  }
  iVar8 = func_0x0229f13c(0x15,0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar7 = (int)ppiVar16[-4];
  iVar9 = (int)ppiVar16[-3];
  iVar12 = (int)ppiVar16[-2];
  iVar17 = (int)ppiVar16[-1];
LAB_02174038:
  *(int *)((int)ppiVar16 + -4) = iVar17;
  *(undefined4 *)((int)ppiVar16 + -8) = unaff_r10;
  *(int **)((int)ppiVar16 + -0xc) = piVar15;
  *(int *)((int)ppiVar16 + -0x10) = iVar2;
  *(int **)((int)ppiVar16 + -0x14) = piVar14;
  *(int *)((int)ppiVar16 + -0x18) = iVar12;
  *(int *)((int)ppiVar16 + -0x1c) = iVar9;
  *(int *)((int)ppiVar16 + -0x20) = iVar7;
  *(undefined4 *)((int)ppiVar16 + -0x38) = 0;
  *(undefined4 *)((int)ppiVar16 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)ppiVar16 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)ppiVar16 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)ppiVar16 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)ppiVar16 + -0x50),0,piVar4,0);
  iVar2 = *(int *)(iVar8 + 0x10);
  *(undefined4 *)((int)ppiVar16 + -0x38) = *(undefined4 *)((int)ppiVar16 + -0x50);
  *(undefined4 *)((int)ppiVar16 + -0x34) = *(undefined4 *)((int)ppiVar16 + -0x4c);
  *(undefined4 *)((int)ppiVar16 + -0x30) = *(undefined4 *)((int)ppiVar16 + -0x48);
  *(undefined4 *)((int)ppiVar16 + -0x2c) = *(undefined4 *)((int)ppiVar16 + -0x44);
  *(undefined4 *)((int)ppiVar16 + -0x28) = *(undefined4 *)((int)ppiVar16 + -0x40);
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)ppiVar16 + -0x38),iVar2,0);
  }
  func_0x01485238((undefined1 *)((int)ppiVar16 + -0x38),4,0);
  func_0x01485278((undefined1 *)((int)ppiVar16 + -0x38),piVar4,0);
  iVar7 = *(int *)(iVar8 + 8);
  uVar11 = *(undefined4 *)(iVar8 + 0xc);
  iVar2 = *(int *)(iVar8 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar2 == 0) {
    uVar6 = 2;
  }
  *(undefined4 *)((int)ppiVar16 + -0x58) = 0;
  *(undefined4 *)((int)ppiVar16 + -0x54) = 0;
  iVar2 = func_0x0245495c(iVar7,uVar11,(undefined1 *)((int)ppiVar16 + -0x38),uVar6);
  return iVar2;
}



// ===== FAT.ActivityTileBingo$$SaveSetup RVA 0x1b55a98 =====

/* WARNING: Possible PIC construction at 0x01b6604c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01b66054) */
/* WARNING: Removing unreachable block (ram,0x01b6629c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_01b65a98(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 extraout_r1;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *extraout_r12;
  undefined1 uVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01b66454 + 0x1b65ab4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b66458 + 0x1b65ac8));
    func_0x01384978(*(undefined4 *)(_UNK_01b6645c + 0x1b65ad4));
    func_0x01384978(*(undefined4 *)(_UNK_01b66460 + 0x1b65ae0));
    func_0x01384978(*(undefined4 *)(_UNK_01b66464 + 0x1b65aec));
    func_0x01384978(*(undefined4 *)(_UNK_01b66468 + 0x1b65af8));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cc5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cc5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
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
    iVar1 = func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7);
    return iVar1;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar10 = func_0x01c23ac8(0xffffffff,*(undefined1 *)(param_1 + 0x4a),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar11 = *(undefined4 **)(_UNK_01b6646c + 0x1b65b90);
  func_0x03652b00(iVar1,uVar10,*puVar11);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  iVar9 = *(int *)(param_2 + 0x28);
  uVar10 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x3c),0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar9,uVar10,*puVar11);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  iVar9 = *(int *)(param_2 + 0x28);
  uVar10 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x40),0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar9,uVar10,*puVar11);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  iVar9 = *(int *)(param_2 + 0x28);
  uVar10 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x44),0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar9,uVar10,*puVar11);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  iVar9 = *(int *)(param_2 + 0x28);
  uVar10 = func_0x01c23ac8(iVar1,*(undefined1 *)(param_1 + 0x48),0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar9,uVar10,*puVar11);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  iVar9 = *(int *)(param_2 + 0x28);
  uVar10 = func_0x01c23ac8(iVar1,*(undefined1 *)(param_1 + 0x49),0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar9,uVar10,*puVar11);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  iVar9 = *(int *)(param_2 + 0x28);
  uVar10 = func_0x01c23ac8(iVar1,*(undefined1 *)(param_1 + 0x4b),0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar9,uVar10,*puVar11);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  iVar9 = *(int *)(param_2 + 0x28);
  uVar10 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x80),0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar9,uVar10,*puVar11);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  iVar9 = *(int *)(param_2 + 0x28);
  uVar10 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x84),0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar9,uVar10,*puVar11);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  iVar9 = *(int *)(param_2 + 0x28);
  uVar10 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x88),0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar9,uVar10,*puVar11);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  iVar9 = *(int *)(param_2 + 0x28);
  uVar10 = func_0x01c23ac8(iVar1,*(undefined1 *)(param_1 + 0x4d),0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar9,uVar10,*puVar11);
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01b66490(iVar1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01b66470 + 0x1b65e24)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_01b65e6c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b66470 + 0x1b65e24),0);
LAB_01b65e6c:
  piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
  piVar12 = *(int **)(_UNK_01b66474 + 0x1b65e8c);
  piVar5 = *(int **)(_UNK_01b66478 + 0x1b65e94);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    iVar9 = *piVar12;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar9) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01b65eec;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar9,0);
LAB_01b65eec:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    iVar9 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar9) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01b65f60;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar9,0);
LAB_01b65f60:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x28);
    uVar10 = FUN_01b62a24(*(undefined4 *)(param_1 + 0x44),uVar10);
    uVar10 = func_0x01c23ac8(uVar10,1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar10,*puVar11);
  } while( true );
  iVar1 = 0;
  if (piVar2 != (int *)0x0) {
    iStack_28 = 0;
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01b6647c + 0x1b65fe4)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01b6602c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b6647c + 0x1b65fe4),0);
LAB_01b6602c:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
    iVar1 = iStack_28;
  }
  uVar13 = iVar1 == 0;
  if (!(bool)uVar13) {
    piVar2 = (int *)func_0x0145b108(4);
    iVar9 = iRam01419040;
    *piVar2 = iVar1;
    func_0x0145b118(piVar2,(int)&iRam01419040 + iVar9,0);
    if ((bool)uVar13) {
      *extraout_r12 = extraout_r1;
    }
    iStack_3c = 0;
    iVar1 = _UNK_014190a0 + 0x1419088;
    iVar9 = _UNK_014190a4 + 0x141908c;
    uVar10 = func_0x013c37a0();
    func_0x013e4ae4(uVar10,iVar1,iVar9);
    iVar1 = func_0x0140c80c();
    func_0x013d7660();
    if (iStack_3c != 0) {
      uVar10 = func_0x01400df0(&uStack_40);
      func_0x013aeeb4(iVar1 + 0xc,uVar10);
    }
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01b6654c(iVar1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01b66480 + 0x1b66094)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_01b660dc;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b66480 + 0x1b66094),0);
LAB_01b660dc:
  piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    iVar9 = *piVar12;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar9) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01b6614c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar9,0);
LAB_01b6614c:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    iVar9 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar9) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01b661c0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar9,0);
LAB_01b661c0:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x28);
    uVar10 = FUN_01b62d20(*(undefined4 *)(param_1 + 0x44),uVar10);
    uVar10 = func_0x01c23ac8(uVar10,1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar10,*puVar11);
  } while( true );
  iVar1 = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01b66488 + 0x1b6623c)) {
          puVar11 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01b66284;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b66488 + 0x1b6623c),0);
LAB_01b66284:
    iVar1 = (*(code *)*puVar11)(piVar2,puVar11[1]);
  }
  return iVar1;
}



// ===== FAT.ActivityTileBingo$$WhenEnd RVA 0x1b565a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b665a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01b667a8 + 0x1b665b8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b667ac + 0x1b665cc));
    func_0x01384978(*(undefined4 *)(_UNK_01b667b0 + 0x1b665d8));
    func_0x01384978(*(undefined4 *)(_UNK_01b667b4 + 0x1b665e4));
    func_0x01384978(*(undefined4 *)(_UNK_01b667b8 + 0x1b665f0));
    func_0x01384978(*(undefined4 *)(_UNK_01b667bc + 0x1b665fc));
    func_0x01384978(*(undefined4 *)(_UNK_01b667c0 + 0x1b66608));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x8cd1,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01b667c4 + 0x1b66668) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b667c8 + 0x1b66684));
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01b667cc + 0x1b66698));
    func_0x02450820(uVar2,param_1,**(undefined4 **)(_UNK_01b667d0 + 0x1b666b4),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a10dc(iVar1,uVar2,**(undefined4 **)(_UNK_01b667d4 + 0x1b666d8));
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x035d1208(iVar1,**(undefined4 **)(_UNK_01b667d8 + 0x1b666fc));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar2 = *(undefined4 *)(param_1 + 0x108);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbc0ec(iVar1,uVar2,0);
    iVar1 = FUN_01b64314(param_1);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x4c) == '\0') {
        func_0x01b66930(param_1,&uStack_14);
        func_0x01b66b60(param_1,uStack_14);
        uVar2 = *(undefined4 *)(param_1 + 0x110);
        *(undefined1 *)(param_1 + 0x49) = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x110);
      }
      func_0x02b64cc4(param_1 + 0xbc,0,uVar2,0);
      func_0x01b667dc(param_1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8cd1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityTileBingo$$TrackEnd RVA 0x1b567dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b667dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar3 = (char *)(_UNK_01b6690c + 0x1b667f4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b66910 + 0x1b66808));
    func_0x01384978(*(undefined4 *)(_UNK_01b66914 + 0x1b66814));
    func_0x01384978(*(undefined4 *)(_UNK_01b66918 + 0x1b66820));
    func_0x01384978(*(undefined4 *)(_UNK_01b6691c + 0x1b6682c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cd3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cd3,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x110);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar6 = *(undefined4 *)(param_1 + 0x84);
  if (iVar1 == 0) {
    uVar4 = **(undefined4 **)(_UNK_01b6692c + 0x1b668ec);
  }
  else {
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0x10);
    if (*(int *)(**(int **)(_UNK_01b66920 + 0x1b6689c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar4 = func_0x01a32f1c(**(undefined4 **)(_UNK_01b66928 + 0x1b668d4),uVar7,uVar4,
                            **(undefined4 **)(_UNK_01b66924 + 0x1b668c8));
  }
  uStack_20 = 0;
  func_0x0231ada8(param_1,uVar2,uVar6,uVar4);
  return;
}



// ===== FAT.ActivityTileBingo$$CollectRecycleItems RVA 0x1b56930 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b66930(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_01b66b2c + 0x1b66948);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b66b30 + 0x1b6695c));
    func_0x01384978(*(undefined4 *)(_UNK_01b66b34 + 0x1b66968));
    func_0x01384978(*(undefined4 *)(_UNK_01b66b38 + 0x1b66974));
    func_0x01384978(*(undefined4 *)(_UNK_01b66b3c + 0x1b66980));
    func_0x01384978(*(undefined4 *)(_UNK_01b66b40 + 0x1b6698c));
    func_0x01384978(*(undefined4 *)(_UNK_01b66b44 + 0x1b66998));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cd4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cd4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02261634 + 0x226151c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02261638 + 0x2261530),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    func_0x01485238(&uStack_38,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,1,0);
    uVar6 = func_0x0245498c(&uStack_38,0,0);
    uVar3 = **(undefined4 **)(_UNK_0226163c + 0x226161c);
    *param_2 = uVar6;
    uVar6 = func_0x02f5db90(&uStack_38,1,uVar3);
    return uVar6;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b66b48 + 0x1b669f4));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = *(undefined4 **)(_UNK_01b66b4c + 0x1b66a20);
  *(int *)(iVar1 + 8) = param_1;
  uVar6 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar6,**(undefined4 **)(_UNK_01b66b50 + 0x1b66a38));
  iVar5 = *(int *)(param_1 + 0x108);
  *(undefined4 *)(iVar1 + 0xc) = uVar6;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    iVar5 = func_0x02139cf4(iVar5,0);
    puVar2 = *(undefined4 **)(_UNK_01b66b54 + 0x1b66a6c);
    uVar6 = func_0x01384be4(*puVar2);
    func_0x02450194(uVar6,iVar1,**(undefined4 **)(_UNK_01b66b58 + 0x1b66a88),0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x020dba14(iVar5,uVar6,0);
    iVar5 = *(int *)(param_1 + 0x108);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x02141880(iVar5,0);
    uVar6 = func_0x01384be4(*puVar2);
    func_0x02450194(uVar6,iVar1,**(undefined4 **)(_UNK_01b66b5c + 0x1b66aec),0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x021131f8(iVar5,uVar6,0);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    uVar3 = *(undefined4 *)(iVar1 + 0x10);
  }
  *param_2 = uVar3;
  return uVar6;
}



// ===== FAT.ActivityTileBingo$$TryBeginRecycleReward RVA 0x1b56b60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b66b60(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01b66d9c + 0x1b66b7c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b66da0 + 0x1b66b90));
    func_0x01384978(*(undefined4 *)(_UNK_01b66da4 + 0x1b66b9c));
    func_0x01384978(*(undefined4 *)(_UNK_01b66da8 + 0x1b66ba8));
    func_0x01384978(*(undefined4 *)(_UNK_01b66dac + 0x1b66bb4));
    func_0x01384978(*(undefined4 *)(_UNK_01b66db0 + 0x1b66bc0));
    func_0x01384978(*(undefined4 *)(_UNK_01b66db4 + 0x1b66bcc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cd8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cd8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
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
    return;
  }
  if ((0 < param_2) && (iVar1 = *(int *)(param_1 + 0x54), iVar1 != 0)) {
    iVar3 = 0;
    puVar6 = *(undefined4 **)(_UNK_01b66db8 + 0x1b66c48);
    piVar7 = *(int **)(_UNK_01b66dbc + 0x1b66c50);
    while( true ) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar3) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x03653d1c(iVar1,iVar3,*puVar6);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&iStack_2c,uVar5,0);
      if (param_2 <= iStack_2c) break;
      iVar1 = *(int *)(param_1 + 0x54);
      iVar3 = iVar3 + 1;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = *(int **)(_UNK_01b66dc0 + 0x1b66d10);
    iVar3 = *(int *)(iVar1 + 0x40);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x314);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = **(undefined4 **)(_UNK_01b66dc4 + 0x1b66d50);
    uStack_34 = **(undefined4 **)(_UNK_01b66dc8 + 0x1b66d5c);
    uStack_3c = 0x222;
    uStack_30 = 0;
    uStack_48 = 0;
    iStack_44 = 0;
    uStack_40 = 0;
    uVar5 = func_0x01cdcbac(iVar3,uStack_28,uStack_24,uVar5);
    *(undefined4 *)(param_1 + 0x110) = uVar5;
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  return;
}



// ===== FAT.ActivityTileBingo$$SubmitTile RVA 0x1b56dcc =====

/* WARNING: Removing unreachable block (ram,0x01b67800) */
/* WARNING: Removing unreachable block (ram,0x01b6780c) */
/* WARNING: Removing unreachable block (ram,0x01b67814) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b66dcc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01b67ae4 + 0x1b66dec);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b67ae8 + 0x1b66e04));
    func_0x01384978(*(undefined4 *)(_UNK_01b67aec + 0x1b66e10));
    func_0x01384978(*(undefined4 *)(_UNK_01b67af0 + 0x1b66e1c));
    func_0x01384978(*(undefined4 *)(_UNK_01b67af4 + 0x1b66e28));
    func_0x01384978(*(undefined4 *)(_UNK_01b67af8 + 0x1b66e34));
    func_0x01384978(*(undefined4 *)(_UNK_01b67afc + 0x1b66e40));
    func_0x01384978(*(undefined4 *)(_UNK_01b67b00 + 0x1b66e4c));
    func_0x01384978(*(undefined4 *)(_UNK_01b67b04 + 0x1b66e58));
    func_0x01384978(*(undefined4 *)(_UNK_01b67b08 + 0x1b66e64));
    func_0x01384978(*(undefined4 *)(_UNK_01b67b0c + 0x1b66e70));
    func_0x01384978(*(undefined4 *)(_UNK_01b67b10 + 0x1b66e7c));
    func_0x01384978(*(undefined4 *)(_UNK_01b67b14 + 0x1b66e88));
    func_0x01384978(*(undefined4 *)(_UNK_01b67b18 + 0x1b66e94));
    func_0x01384978(*(undefined4 *)(_UNK_01b67b1c + 0x1b66ea0));
    func_0x01384978(*(undefined4 *)(_UNK_01b67b20 + 0x1b66eac));
    func_0x01384978(*(undefined4 *)(_UNK_01b67b24 + 0x1b66eb8));
    func_0x01384978(*(undefined4 *)(_UNK_01b67b28 + 0x1b66ec4));
    func_0x01384978(*(undefined4 *)(_UNK_01b67b2c + 0x1b66ed0));
    *pcVar9 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x8cda,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01b67b30 + 0x1b66f6c));
    func_0x01b67b98();
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(param_1 + 0x68);
    *(undefined4 *)(iVar2 + 0xc) = param_2;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = FUN_01b5f744(iVar10,param_2);
    if ((((iVar10 != 0) && (*(char *)(iVar10 + 0x28) == '\0')) &&
        (iVar3 = FUN_01b5f834(param_1,param_2), iVar3 != 0)) &&
       (iVar3 = FUN_01b5f8b8(param_1,*(undefined4 *)(iVar10 + 0x18)), iVar3 != 0)) {
      piVar11 = *(int **)(_UNK_01b67b34 + 0x1b66ff4);
      iVar3 = *piVar11;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar11;
      }
      iVar3 = **(int **)(iVar3 + 0x5c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_60,iVar3,&iStack_28,**(undefined4 **)(_UNK_01b67b38 + 0x1b67030));
      iVar3 = iStack_28;
      uVar8 = *(undefined4 *)(iVar10 + 0x18);
      uStack_2c = uStack_5c;
      uStack_30 = uStack_60;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      uVar4 = *(uint *)(iVar3 + 0xc);
      iVar12 = *(int *)(iVar3 + 8);
      piVar11 = *(int **)(_UNK_01b67b3c + 0x1b67084);
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      iVar6 = *piVar11;
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      if (uVar4 < *(uint *)(iVar12 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar4 + 1;
        iVar12 = iVar12 + uVar4 * 8;
        *(undefined4 *)(iVar12 + 0x10) = uVar8;
        *(undefined4 *)(iVar12 + 0x14) = 1;
      }
      else {
        func_0x0326a8b0(iVar3,uVar8,1,
                        *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
      }
      iVar3 = *(int *)(param_1 + 0x78);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x035d1598(iVar3,param_3,param_4,param_5,**(undefined4 **)(_UNK_01b67b40 + 0x1b67104));
      iVar3 = iStack_28;
      iVar12 = *(int *)(param_1 + 0x108);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x021491b8(iVar12,iVar3,0,0,0);
      if (iVar3 == 0) {
        iVar10 = *(int *)(param_1 + 0x78);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar10 + 0x14)) {
          iVar10 = *(int *)(param_1 + 0x78);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          func_0x035d17d4(&uStack_60,iVar10,**(undefined4 **)(_UNK_01b67b44 + 0x1b67298));
        }
        func_0x028c98a0(&uStack_30,0);
      }
      else {
        func_0x028c98a0(&uStack_30,0);
        iVar3 = *(int *)(param_1 + 0x68);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x01b67c78(iVar3,param_2);
        iVar3 = *(int *)(param_1 + 0x68);
        uVar8 = FUN_01b61988(param_1);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        FUN_01b61a78(iVar3,uVar8);
        piVar11 = *(int **)(_UNK_01b67b48 + 0x1b671bc);
        *(int *)(iVar2 + 0x10) = iVar10;
        uVar8 = *(undefined4 *)(iVar10 + 0x1c);
        iVar3 = *piVar11;
        iVar12 = *(int *)(iVar3 + 0x74);
        *(undefined1 *)(iVar2 + 8) = 1;
        if (iVar12 == 0) {
          func_0x01384ab4();
          iVar3 = *piVar11;
        }
        uVar8 = func_0x01b67dc8(param_1,uVar8,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x308));
        iVar3 = *(int *)(param_1 + 0x70);
        *(undefined4 *)(iVar2 + 0x14) = uVar8;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(iVar3 + 8);
        uVar4 = *(uint *)(iVar3 + 0xc);
        piVar11 = *(int **)(_UNK_01b67b4c + 0x1b6722c);
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        iVar6 = *piVar11;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        if (uVar4 < *(uint *)(iVar12 + 0xc)) {
          *(uint *)(iVar3 + 0xc) = uVar4 + 1;
          *(undefined4 *)(iVar12 + uVar4 * 4 + 0x10) = uVar8;
        }
        else {
          func_0x0328f170(iVar3,uVar8,
                          *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
        }
        iVar3 = func_0x01b67f00(param_1,iVar10);
        if (iVar3 != 0) {
          piVar11 = *(int **)(_UNK_01b67b50 + 0x1b672f0);
          uVar8 = *(undefined4 *)(iVar10 + 0x20);
          iVar10 = *piVar11;
          if (*(int *)(iVar10 + 0x74) == 0) {
            func_0x01384ab4();
            iVar10 = *piVar11;
          }
          uVar8 = func_0x01b67dc8(param_1,uVar8,*(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x30c));
          iVar10 = *(int *)(param_1 + 0x70);
          *(undefined4 *)(iVar2 + 0x18) = uVar8;
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar4 = *(uint *)(iVar10 + 0xc);
          piVar11 = *(int **)(_UNK_01b67b54 + 0x1b67358);
          *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
          iVar12 = *piVar11;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (uVar4 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar10 + 0xc) = uVar4 + 1;
            *(undefined4 *)(iVar3 + uVar4 * 4 + 0x10) = uVar8;
          }
          else {
            func_0x0328f170(iVar10,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
          }
        }
        iVar10 = *(int *)(param_1 + 0x68);
        iVar3 = *(int *)(param_1 + 0x6c);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar8 = *(undefined4 *)(iVar10 + 0xc);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01b67f78(iVar3,uVar8);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x032dbd94(&uStack_60,iVar10,**(undefined4 **)(_UNK_01b67b58 + 0x1b673ec));
        uStack_48 = uStack_60;
        uStack_44 = uStack_5c;
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        while (iVar10 = func_0x01471388(&uStack_48,**(undefined4 **)(_UNK_01b67b80 + 0x1b67414)),
              uVar8 = uStack_3c, iVar10 != 0) {
          uVar1 = (undefined4)uStack_38;
          piVar11 = uStack_38._4_4_;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar2 + 0x1c);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar4 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_01b67b5c + 0x1b6746c);
          *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
          iVar12 = *piVar7;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (uVar4 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar10 + 0xc) = uVar4 + 1;
            iVar3 = iVar3 + uVar4 * 0xc;
            *(undefined4 *)(iVar3 + 0x10) = uVar8;
            *(undefined4 *)(iVar3 + 0x14) = uVar1;
            *(int **)(iVar3 + 0x18) = piVar11;
          }
          else {
            func_0x032daed4(iVar10,uVar8,uVar1,piVar11,
                            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
          }
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
          if (piVar11 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar10 = *piVar11;
          uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01b67b60 + 0x1b674f4)) {
                puVar5 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
                goto LAB_01b6753c;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_01b67b60 + 0x1b674f4),0);
LAB_01b6753c:
          piVar11 = (int *)(*(code *)*puVar5)(piVar11,puVar5[1]);
LAB_01b67550:
          if (piVar11 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar10 = *piVar11;
          uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01b67b78 + 0x1b6756c)) {
                puVar5 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
                goto LAB_01b675b4;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_01b67b78 + 0x1b6756c),0);
LAB_01b675b4:
          iVar10 = (*(code *)*puVar5)(piVar11,puVar5[1]);
          if (iVar10 != 0) {
            if (piVar11 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar10 = *piVar11;
            uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
              do {
                if (piVar7[-1] == **(int **)(_UNK_01b67b64 + 0x1b675e8)) {
                  puVar5 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
                  goto LAB_01b67630;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_01b67b64 + 0x1b675e8),0);
LAB_01b67630:
            uVar8 = (*(code *)*puVar5)(piVar11,puVar5[1]);
            iVar10 = **(int **)(_UNK_01b67b68 + 0x1b67650);
            if (*(int *)(iVar10 + 0x74) == 0) {
              func_0x01384ab4();
              iVar10 = **(int **)(_UNK_01b67b6c + 0x1b6766c);
            }
            uVar8 = func_0x01b67dc8(param_1,uVar8,*(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x310));
            iVar10 = *(int *)(param_1 + 0x74);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar12 = *(int *)(iVar10 + 8);
            uVar4 = *(uint *)(iVar10 + 0xc);
            piVar7 = *(int **)(_UNK_01b67b70 + 0x1b676b8);
            *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
            iVar3 = *piVar7;
            if (iVar12 == 0) {
              func_0x01384bf0();
            }
            if (uVar4 < *(uint *)(iVar12 + 0xc)) {
              *(uint *)(iVar10 + 0xc) = uVar4 + 1;
              *(undefined4 *)(iVar12 + uVar4 * 4 + 0x10) = uVar8;
            }
            else {
              func_0x0328f170(iVar10,uVar8,
                              *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
            }
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar10 = *(int *)(iVar2 + 0x20);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar10 + 8);
            uVar4 = *(uint *)(iVar10 + 0xc);
            piVar7 = *(int **)(_UNK_01b67b74 + 0x1b67738);
            *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
            iVar12 = *piVar7;
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            if (uVar4 < *(uint *)(iVar3 + 0xc)) {
              *(uint *)(iVar10 + 0xc) = uVar4 + 1;
              *(undefined4 *)(iVar3 + uVar4 * 4 + 0x10) = uVar8;
            }
            else {
              func_0x0328f170(iVar10,uVar8,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
            goto LAB_01b67550;
          }
          if (piVar11 != (int *)0x0) {
            iVar10 = *piVar11;
            uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
              do {
                if (piVar7[-1] == **(int **)(_UNK_01b67b7c + 0x1b677a0)) {
                  puVar5 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
                  goto LAB_01b677e8;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_01b67b7c + 0x1b677a0),0);
LAB_01b677e8:
            (*(code *)*puVar5)(piVar11,puVar5[1]);
          }
        }
        func_0x02450e48(&uStack_48,**(undefined4 **)(_UNK_01b67b84 + 0x1b6786c));
        iVar10 = *(int *)(param_1 + 0x68);
        if (iVar10 == 0) {
          func_0x01384bf0();
          iVar3 = iRam0000000c;
          iVar10 = *(int *)(param_1 + 0x68);
          if (iVar10 == 0) {
            func_0x01384bf0();
            iVar10 = 0;
          }
        }
        else {
          iVar3 = *(int *)(iVar10 + 0xc);
        }
        iVar10 = FUN_01b62a90(iVar10);
        if (iVar10 <= iVar3) {
          iVar10 = *(int *)(param_1 + 0x68);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar10 = FUN_01b62a90(iVar10);
          if (0 < iVar10) {
            func_0x01b68300(param_1,iVar2);
          }
        }
        func_0x01b683f8(param_1,iVar2);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(char *)(iVar2 + 0x24) != '\0') {
          *(undefined4 *)(param_1 + 0x88) = 0;
        }
        FUN_01b5e954();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8cda,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02261894(iVar2,param_1,param_2,param_3,param_4,param_5,0);
  }
  return iVar2;
}



// ===== FAT.ActivityTileBingo$$BeginReward RVA 0x1b57dc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b67dc8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01b67eec + 0x1b67de8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b67ef0 + 0x1b67dfc));
    func_0x01384978(*(undefined4 *)(_UNK_01b67ef4 + 0x1b67e08));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cdd,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(param_2 + 8);
      iVar1 = *(int *)(iVar1 + 0x40);
      uVar2 = *(undefined4 *)(param_2 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdcbac(iVar1,uVar3,uVar2,param_3,0,0,0,0x1eb,
                      **(undefined4 **)(_UNK_01b67ef8 + 0x1b67eac),
                      **(undefined4 **)(_UNK_01b67efc + 0x1b67eb8),0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8cdd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02261640(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityTileBingo$$IsSpecialRewardAvailable RVA 0x1b57f00 =====

uint FUN_01b67f00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar1 = func_0x0229f06c(0x8cde,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cde,0);
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
  uVar7 = func_0x01b6a588(param_1,param_2);
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  bVar6 = (int)uVar7 != 0;
  return (uint)((int)-(iVar1 + (uint)bVar6) < 0 !=
               (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar6)));
}



// ===== FAT.ActivityTileBingo$$CompleteBoard RVA 0x1b58300 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b68300(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01b683f0 + 0x1b68318);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b683f4 + 0x1b6832c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8ce4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8ce4,0);
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
    return;
  }
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x5c) + 0x18);
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 + 1 < *(int *)(iVar3 + 0xc)) {
      *(undefined1 *)(param_1 + 0x48) = 1;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined1 *)(param_2 + 0x24) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  *(undefined1 *)(param_2 + 0x25) = 1;
  return;
}



// ===== FAT.ActivityTileBingo$$TrackSubmit RVA 0x1b583f8 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b683f8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(iRam01b68794 + 0x1b68414);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b68798 + 0x1b68428));
    func_0x01384978(*(undefined4 *)(_UNK_01b6879c + 0x1b68434));
    func_0x01384978(*(undefined4 *)(_UNK_01b687a0 + 0x1b68440));
    func_0x01384978(*(undefined4 *)(_UNK_01b687a4 + 0x1b6844c));
    func_0x01384978(*(undefined4 *)(_UNK_01b687a8 + 0x1b68458));
    func_0x01384978(*(undefined4 *)(_UNK_01b687ac + 0x1b68464));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8ce5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8ce5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = iStack_44;
    uStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar7,0,0);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  bVar15 = *(char *)(param_2 + 8) == '\0';
  iVar1 = 0;
  if (!bVar15) {
    iVar1 = *(int *)(param_2 + 0x10);
  }
  if (bVar15 || iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01b6a49c();
  iVar10 = *(int *)(param_2 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
    uVar11 = uRam00000018;
    iVar10 = *(int *)(param_2 + 0x10);
    if (iVar10 != 0) goto LAB_01b68504;
    func_0x01384bf0();
    uVar7 = uRam0000000c;
    iVar10 = *(int *)(param_2 + 0x10);
    iVar3 = iVar10;
    if (iVar10 == 0) {
      func_0x01384bf0();
      iVar3 = *(int *)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x10) == 0) goto LAB_01b68790;
    }
  }
  else {
    uVar11 = *(undefined4 *)(iVar10 + 0x18);
LAB_01b68504:
    uVar7 = *(undefined4 *)(iVar10 + 0xc);
    iVar3 = iVar10;
  }
  uVar12 = *(undefined4 *)(iVar3 + 0x14);
  uVar9 = *(undefined4 *)(iVar10 + 0x10);
  if (*(int *)(**(int **)(_UNK_01b687b0 + 0x1b68518) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar11 = func_0x01b74be4(**(undefined4 **)(_UNK_01b687b4 + 0x1b68544),uVar11,uVar7,uVar9,uVar12,
                           **(undefined4 **)(_UNK_01b687b8 + 0x1b68550));
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01b687bc + 0x1b68574),1);
  iVar10 = *(int *)(param_2 + 0x14);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar10 != 0) && (iVar3 = func_0x01384ab8(iVar10,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)
     ) {
    uVar7 = func_0x01384c10();
    func_0x01384aa0(uVar7,0);
  }
  if (piVar2[3] == 0) {
    func_0x01384bf4();
  }
  piVar2[4] = iVar10;
  uVar7 = func_0x01b6ab28(piVar2);
  iVar10 = *(int *)(param_1 + 0x68);
  if (iVar10 == 0) {
    func_0x01384bf0();
    uStack_2c = uRam0000000c;
    iVar10 = *(int *)(param_1 + 0x68);
    if (iVar10 == 0) {
      func_0x01384bf0();
      iVar10 = 0;
    }
  }
  else {
    uStack_2c = *(undefined4 *)(iVar10 + 0xc);
  }
  iStack_30 = FUN_01b62a90(iVar10);
  iVar10 = iStack_30;
  if (iVar1 != 0) {
    iVar10 = *(int *)(param_2 + 0x18);
  }
  uStack_34 = func_0x01b6ab80(param_2);
  iVar13 = *(int *)(param_2 + 0x1c);
  iVar3 = iVar13;
  if (iVar13 == 0) {
    func_0x01384bf0();
    iVar3 = *(int *)(param_2 + 0x1c);
    if (iVar3 == 0) {
LAB_01b68790:
      func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar14 = *(int *)(iVar13 + 0xc);
  iVar13 = *(int *)(param_1 + 0x6c);
  if (*(int *)(iVar3 + 0xc) < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)(param_1 + 0x88);
  }
  uStack_28 = uVar7;
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)FUN_01b62ccc(iVar13);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar2;
  uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01b687c0 + 0x1b686b4)) {
        puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
        goto LAB_01b686fc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b687c0 + 0x1b686b4),0);
LAB_01b686fc:
  uStack_48 = (*(code *)*puVar4)(piVar2,puVar4[1]);
  iStack_40 = *(int *)(param_1 + 0x24) + 1;
  uStack_3c = 0;
  iStack_44 = *(int *)(param_1 + 0x44) + 1;
  uStack_50 = (uint)(0 < iVar14);
  uStack_4c = uVar9;
  func_0x0231aa98(param_1,uVar11,uStack_28,uStack_2c,iStack_30,iVar1,iVar1 != 0 && iVar10 == 0,
                  uStack_34);
  return;
}



// ===== FAT.ActivityTileBingo$$TryCollectSubmitTileInventoryItems RVA 0x1b587c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b687c4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_01b68aa4 + 0x1b687e4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b68aa8 + 0x1b687f8));
    func_0x01384978(*(undefined4 *)(_UNK_01b68aac + 0x1b68804));
    func_0x01384978(*(undefined4 *)(_UNK_01b68ab0 + 0x1b68810));
    func_0x01384978(*(undefined4 *)(_UNK_01b68ab4 + 0x1b6881c));
    *pcVar4 = '\x01';
  }
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x8ce9,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01b5f744(iVar1,param_2);
    uVar2 = 0;
    if ((((iVar1 != 0) && (*(char *)(iVar1 + 0x28) == '\0')) &&
        (iVar3 = FUN_01b5f834(param_1,param_2), iVar3 != 0)) &&
       (iVar3 = FUN_01b5f8b8(param_1,*(undefined4 *)(iVar1 + 0x18)), iVar3 != 0)) {
      piVar5 = *(int **)(_UNK_01b68ab8 + 0x1b688f4);
      iVar3 = *piVar5;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar5;
      }
      iVar3 = **(int **)(iVar3 + 0x5c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_30,iVar3,&iStack_28,**(undefined4 **)(_UNK_01b68abc + 0x1b68930));
      iVar3 = iStack_28;
      uVar2 = *(undefined4 *)(iVar1 + 0x18);
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar3 + 8);
      uVar6 = *(uint *)(iVar3 + 0xc);
      piVar5 = *(int **)(_UNK_01b68ac0 + 0x1b6896c);
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      iVar7 = *piVar5;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (uVar6 < *(uint *)(iVar1 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar6 + 1;
        iVar1 = iVar1 + uVar6 * 8;
        *(undefined4 *)(iVar1 + 0x10) = uVar2;
        *(undefined4 *)(iVar1 + 0x14) = 1;
      }
      else {
        func_0x0326a8b0(iVar3,uVar2,1,
                        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
      }
      iVar1 = iStack_28;
      iVar3 = *(int *)(param_1 + 0x108);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      iVar1 = func_0x021491b8(iVar3,iVar1,param_3,1,0);
      if (iVar1 != 0) {
        if (param_3 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 0;
        if (0 < *(int *)(param_3 + 0xc)) {
          uVar2 = 1;
        }
      }
      func_0x028c98a0(&uStack_30,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8ce9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021846e8(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ActivityTileBingo$$GetTileTotalNum RVA 0x1b58ac4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b68ac4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8cea,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x68);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_01b62b1c + 0x1b62aa4);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b62b20 + 0x1b62ab8));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x8c7c,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      return *(undefined4 *)(iVar1 + 0xc);
    }
    iVar1 = func_0x0229f13c(0x8c7c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8cea,0);
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
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  uVar5 = func_0x0245498c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.ActivityTileBingo$$GetCompletedTileCount RVA 0x1b58b2c =====

undefined4 FUN_01b68b2c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8ceb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8ceb,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0xc);
}



// ===== FAT.ActivityTileBingo$$IsTileCompleted RVA 0x1b58b90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b68b90(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x8cec,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x68);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01b68d00 + 0x1b68c1c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b68d04 + 0x1b68c30));
      func_0x01384978(*(undefined4 *)(_UNK_01b68d08 + 0x1b68c3c));
      *pcVar4 = '\x01';
    }
    uVar5 = 0;
    iVar1 = func_0x0229f06c(0x8ced,0);
    if (iVar1 == 0) {
      if (-1 < param_2) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (param_2 < *(int *)(iVar1 + 0xc)) {
          iVar1 = *(int *)(param_1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0328eea8(iVar1,param_2,**(undefined4 **)(_UNK_01b68d0c + 0x1b68cd4));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar5 = 0;
          if (*(char *)(iVar1 + 0x28) != '\0') {
            uVar5 = 1;
          }
        }
      }
      return uVar5;
    }
    iVar1 = func_0x0229f13c(0x8ced,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8cec,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  uVar5 = func_0x0245496c(&uStack_38,0,0);
  return uVar5;
}



// ===== FAT.ActivityTileBingo$$GetTileWaitCommitRewards RVA 0x1b58da0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b68da0(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01b68ea4 + 0x1b68db4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b68ea8 + 0x1b68dc8));
    func_0x01384978(*(undefined4 *)(_UNK_01b68eac + 0x1b68dd4));
    func_0x01384978(*(undefined4 *)(_UNK_01b68eb0 + 0x1b68de0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cee,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cee,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021cb2a0 + 0x21cb1c0);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021cb2a4 + 0x21cb1d4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021cb2a8 + 0x21cb290));
    return uVar5;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x70);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b68eb4 + 0x1b68e38));
  func_0x0328ea74(uVar5,uVar2,**(undefined4 **)(_UNK_01b68eb8 + 0x1b68e54));
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  return uVar5;
}



// ===== FAT.ActivityTileBingo$$GetMilestoneWaitCommitRewards RVA 0x1b58ebc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b68ebc(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01b68fc0 + 0x1b68ed0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b68fc4 + 0x1b68ee4));
    func_0x01384978(*(undefined4 *)(_UNK_01b68fc8 + 0x1b68ef0));
    func_0x01384978(*(undefined4 *)(_UNK_01b68fcc + 0x1b68efc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cef,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cef,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021cb2a0 + 0x21cb1c0);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021cb2a4 + 0x21cb1d4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021cb2a8 + 0x21cb290));
    return uVar5;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b68fd0 + 0x1b68f54));
  func_0x0328ea74(uVar5,uVar2,**(undefined4 **)(_UNK_01b68fd4 + 0x1b68f70));
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  return uVar5;
}



// ===== FAT.ActivityTileBingo$$GetRecycleReward RVA 0x1b58fd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b68fd8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x8cf0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cf0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217a1dc + 0x217a0fc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217a1e0 + 0x217a110),param_1,0);
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
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a1e4 + 0x217a1cc));
    return uVar5;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x110) = 0;
  return uVar5;
}



// ===== FAT.ActivityTileBingo$$EnterNextBoard RVA 0x1b59034 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b69034(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
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
  
  pcVar4 = (char *)(_UNK_01b691a0 + 0x1b69048);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b691a4 + 0x1b6905c));
    func_0x01384978(*(undefined4 *)(_UNK_01b691a8 + 0x1b69068));
    func_0x01384978(*(undefined4 *)(_UNK_01b691ac + 0x1b69074));
    func_0x01384978(*(undefined4 *)(_UNK_01b691b0 + 0x1b69080));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cf1,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      return;
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 0x18);
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar5 + 0xc) <= iVar1 + 1) {
      return;
    }
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01b691b4 + 0x1b69108));
    func_0x0328e950(uVar6,**(undefined4 **)(_UNK_01b691b8 + 0x1b6911c));
    FUN_01b60770(param_1,uVar6);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    FUN_01b64428(param_1);
    puVar2 = *(undefined4 **)(_UNK_01b691bc + 0x1b69154);
    *(undefined1 *)(param_1 + 0x48) = 0;
    iVar1 = func_0x03668dfc(*puVar2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01c359e8(iVar1,0);
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    FUN_01b60c34(param_1);
    FUN_01b5fc08(param_1,uVar6);
    iVar1 = func_0x0229f06c(0x8c33,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x114);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x01b5e9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x8c33,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8cf1,0);
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
  return;
}



// ===== FAT.ActivityTileBingo$$FinishRound RVA 0x1b591c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b691c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01b69300 + 0x1b691d8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b69304 + 0x1b691ec));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0x8cf2,0);
  if (iVar1 == 0) {
    uVar2 = FUN_01b66930(param_1,&uStack_1c);
    FUN_01b66b60(param_1,uStack_1c);
    iVar4 = *(int *)(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x49) = 0;
    iVar1 = *(int *)(param_1 + 0x24) + 1;
    *(int *)(param_1 + 0x24) = iVar1;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x14);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 < *(int *)(iVar4 + 0xc)) {
      *(undefined1 *)(param_1 + 0x4b) = 1;
      func_0x01b69308(param_1);
    }
    else {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xd8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b49350(iVar1,param_1,0,0);
    }
    FUN_01b5e954(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0x8cf2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0224f9b8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.ActivityTileBingo$$EnterNextRound RVA 0x1b59308 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b69308(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
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
  
  pcVar4 = (char *)(_UNK_01b69578 + 0x1b6931c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6957c + 0x1b69330));
    func_0x01384978(*(undefined4 *)(_UNK_01b69580 + 0x1b6933c));
    func_0x01384978(*(undefined4 *)(_UNK_01b69584 + 0x1b69348));
    func_0x01384978(*(undefined4 *)(_UNK_01b69588 + 0x1b69354));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cf3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar6 = *(undefined4 *)(param_1 + 0x108);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbc0ec(iVar1,uVar6,0);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    FUN_01b63dbc(param_1);
    FUN_01b64428(param_1);
    iVar1 = *(int *)(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x48) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar5) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
    }
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0xc);
    uVar3 = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar5) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
    }
    FUN_01b60934(param_1);
    if ((*(int *)(param_1 + 0x54) != 0) &&
       (uVar3 = 0, 0 < *(int *)(*(int *)(param_1 + 0x54) + 0x28))) {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x4a) = uVar3;
    FUN_01b60efc(param_1);
    FUN_01b5e740(param_1);
    iVar1 = FUN_01b64314(param_1);
    if (iVar1 == 0) {
      FUN_01b5fa0c(param_1);
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01b69590 + 0x1b6952c));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x01c359e8(iVar1,0);
      *(undefined4 *)(param_1 + 0x80) = uVar6;
    }
    else {
      iVar1 = FUN_01b6318c(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) == 1) {
        uVar6 = func_0x03259410(iVar1,0,**(undefined4 **)(_UNK_01b6958c + 0x1b69500));
        FUN_01b63c80(param_1,uVar6);
      }
    }
    func_0x02b64cc4(param_1 + 0xa0,0,0,0);
    func_0x01b6a524(param_1);
    iVar1 = func_0x0229f06c(0x8c33,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x114);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x01b5e9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x8c33,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8cf3,0);
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.ActivityTileBingo$$GetTotalRewardPreview RVA 0x1b59594 =====

/* WARNING: Removing unreachable block (ram,0x01b69d18) */
/* WARNING: Removing unreachable block (ram,0x01b69978) */
/* WARNING: Removing unreachable block (ram,0x01b69d0c) */
/* WARNING: Removing unreachable block (ram,0x01b69988) */
/* WARNING: Removing unreachable block (ram,0x01b69d20) */
/* WARNING: Removing unreachable block (ram,0x01b69dd8) */
/* WARNING: Removing unreachable block (ram,0x01b69de4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b69594(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar11 = (char *)(_UNK_01b6a20c + 0x1b695ac);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6a210 + 0x1b695c0));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a214 + 0x1b695cc));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a218 + 0x1b695d8));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a21c + 0x1b695e4));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a220 + 0x1b695f0));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a224 + 0x1b695fc));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a228 + 0x1b69608));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a22c + 0x1b69614));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a230 + 0x1b69620));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a234 + 0x1b6962c));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a238 + 0x1b69638));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a23c + 0x1b69644));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a240 + 0x1b69650));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a244 + 0x1b6965c));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a248 + 0x1b69668));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a24c + 0x1b69674));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a250 + 0x1b69680));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a254 + 0x1b6968c));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a258 + 0x1b69698));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a25c + 0x1b696a4));
    *pcVar11 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  piStack_38 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x8cf5,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8cf5,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0218d2e8(iVar2,param_1,0);
    return iVar2;
  }
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01b6a260 + 0x1b6971c));
  func_0x024509b4(iVar2,**(undefined4 **)(_UNK_01b6a264 + 0x1b69730));
  iVar12 = *(int *)(param_1 + 0x68);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)FUN_01b5ebb4(iVar12);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar3;
  uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_01b6a268 + 0x1b69770)) {
        puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
        goto LAB_01b697b8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b6a268 + 0x1b69770),0);
LAB_01b697b8:
  piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
  piVar14 = *(int **)(_UNK_01b6a26c + 0x1b697d8);
  piVar8 = *(int **)(_UNK_01b6a270 + 0x1b697e0);
LAB_01b697dc:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar3;
  uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar9[-1] == *piVar14) {
        puVar4 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
        goto LAB_01b69838;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar14,0);
LAB_01b69838:
  iVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar12 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar8) {
          puVar4 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
          goto LAB_01b698ac;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar8,0);
LAB_01b698ac:
    iVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x01b6a2c0(iVar2,*(undefined4 *)(iVar12 + 0x1c));
    iVar5 = func_0x01b6a49c(iVar12);
    if (iVar5 != 0) {
      func_0x01b6a2c0(iVar2,*(undefined4 *)(iVar12 + 0x20));
    }
    goto LAB_01b697dc;
  }
  if (piVar3 != (int *)0x0) {
    iVar12 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01b6a274 + 0x1b69918)) {
          puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
          goto LAB_01b69960;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b6a274 + 0x1b69918),0);
LAB_01b69960:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  iVar12 = *(int *)(param_1 + 0x6c);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)FUN_01b62ccc(iVar12);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar3;
  uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_01b6a278 + 0x1b699c8)) {
        puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
        goto LAB_01b69a10;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b6a278 + 0x1b699c8),0);
LAB_01b69a10:
  piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
  piVar8 = *(int **)(_UNK_01b6a27c + 0x1b69a30);
LAB_01b69a2c:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar3;
  uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar9[-1] == *piVar14) {
        puVar4 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
        goto LAB_01b69a88;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar14,0);
LAB_01b69a88:
  iVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar12 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01b6a284 + 0x1b69ac4)) {
          puVar4 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
          goto LAB_01b69b0c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b6a284 + 0x1b69ac4),0);
LAB_01b69b0c:
    (*(code *)*puVar4)(&uStack_58,piVar3,puVar4[1]);
    piVar9 = piStack_50;
    if (piStack_50 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01b6a288 + 0x1b69b40)) {
          puVar4 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
          goto LAB_01b69b88;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01b6a288 + 0x1b69b40),0);
LAB_01b69b88:
    piVar9 = (int *)(*(code *)*puVar4)(piVar9,puVar4[1]);
    do {
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar12 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          if (piVar10[-1] == *piVar14) {
            puVar4 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
            goto LAB_01b69bf8;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar9,*piVar14,0);
LAB_01b69bf8:
      iVar12 = (*(code *)*puVar4)(piVar9,puVar4[1]);
      if (iVar12 == 0) goto LAB_01b69c8c;
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar12 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          if (piVar10[-1] == *piVar8) {
            puVar4 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
            goto LAB_01b69c6c;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar9,*piVar8,0);
LAB_01b69c6c:
      uVar6 = (*(code *)*puVar4)(piVar9,puVar4[1]);
      func_0x01b6a2c0(iVar2,uVar6);
    } while( true );
  }
  if (piVar3 == (int *)0x0) goto LAB_01b69dcc;
  iVar12 = *piVar3;
  uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar7 == 0) {
LAB_01b69da0:
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01b6a294 + 0x1b69d74),0);
  }
  else {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    while (piVar8[-1] != **(int **)(_UNK_01b6a294 + 0x1b69d74)) {
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
      if (uVar7 == 0) goto LAB_01b69da0;
    }
    puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
  }
  (*(code *)*puVar4)(piVar3,puVar4[1]);
LAB_01b69dcc:
  iVar12 = func_0x01384be4(**(undefined4 **)(_UNK_01b6a298 + 0x1b69df8));
  func_0x0328e950(iVar12,**(undefined4 **)(_UNK_01b6a29c + 0x1b69e0c));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02450598(&uStack_58,iVar2,**(undefined4 **)(_UNK_01b6a2a0 + 0x1b69e34));
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  piStack_38 = piStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  puVar4 = *(undefined4 **)(_UNK_01b6a2a4 + 0x1b69e60);
  piVar3 = *(int **)(_UNK_01b6a2a8 + 0x1b69e68);
  while (iVar2 = func_0x01475638(&uStack_40,*puVar4), uVar6 = uStack_34, iVar2 != 0) {
    uVar1 = (undefined4)uStack_30;
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01b6a2b0 + 0x1b69e8c));
    func_0x028ba15c(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar2 + 8) = uVar6;
    *(undefined4 *)(iVar2 + 0xc) = uVar1;
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar12 + 8);
    uVar7 = *(uint *)(iVar12 + 0xc);
    iVar13 = *piVar3;
    *(int *)(iVar12 + 0x10) = *(int *)(iVar12 + 0x10) + 1;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (uVar7 < *(uint *)(iVar5 + 0xc)) {
      *(uint *)(iVar12 + 0xc) = uVar7 + 1;
      *(int *)(iVar5 + uVar7 * 4 + 0x10) = iVar2;
    }
    else {
      func_0x0328f170(iVar12,iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38))
      ;
    }
  }
  func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01b6a2b4 + 0x1b69f28));
  return iVar12;
LAB_01b69c8c:
  if (piVar9 != (int *)0x0) {
    iVar12 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01b6a28c + 0x1b69cac)) {
          puVar4 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
          goto LAB_01b69cf4;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01b6a28c + 0x1b69cac),0);
LAB_01b69cf4:
    (*(code *)*puVar4)(piVar9,puVar4[1]);
  }
  goto LAB_01b69a2c;
}



// ===== FAT.ActivityTileBingo$$AddReward RVA 0x1b5a2c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b6a2c0(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01b6a470 + 0x1b6a2d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6a474 + 0x1b6a2ec));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a478 + 0x1b6a2f8));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a47c + 0x1b6a304));
    func_0x01384978(*(undefined4 *)(_UNK_01b6a480 + 0x1b6a310));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cf6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cf6,0);
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
    return;
  }
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 8);
    iVar1 = iVar3;
    if (0 < iVar3) {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    if (0 < iVar1) {
      if (param_1 == 0) {
        func_0x01384bf0();
        iVar1 = func_0x02450998(0,iVar3,**(undefined4 **)(_UNK_01b6a484 + 0x1b6a3e4));
        uVar5 = *(undefined4 *)(param_2 + 8);
        if (iVar1 == 0) {
          uVar2 = *(undefined4 *)(param_2 + 0xc);
          func_0x01384bf0();
          goto LAB_01b6a450;
        }
        func_0x01384bf0();
        iVar1 = func_0x0245099c(0,uVar5,**(undefined4 **)(_UNK_01b6a488 + 0x1b6a40c));
        iVar3 = *(int *)(param_2 + 0xc);
        func_0x01384bf0();
      }
      else {
        iVar1 = func_0x02450998(param_1,iVar3,**(undefined4 **)(_UNK_01b6a48c + 0x1b6a398));
        uVar5 = *(undefined4 *)(param_2 + 8);
        if (iVar1 == 0) {
          uVar2 = *(undefined4 *)(param_2 + 0xc);
LAB_01b6a450:
          func_0x03d5a8e0(param_1,uVar5,uVar2,2);
          return;
        }
        iVar1 = func_0x0245099c(param_1,uVar5,**(undefined4 **)(_UNK_01b6a490 + 0x1b6a3bc));
        iVar3 = *(int *)(param_2 + 0xc);
      }
      func_0x03d5a8e0(param_1,uVar5,iVar1 + iVar3,1);
      return;
    }
  }
  return;
}



// ===== FAT.ActivityTileBingo$$TrackRestart RVA 0x1b5a524 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b6a524(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x8cf4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cf4,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  pcVar6 = (char *)(_UNK_0231ad8c + 0x231ac90);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0231ad90 + 0x231aca4),iVar1,0);
    func_0x01384978(*(undefined4 *)(_UNK_0231ad94 + 0x231acb0));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xa85,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa85,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,iVar1,0);
    iVar4 = *(int *)(iVar3 + 8);
    uVar5 = *(undefined4 *)(iVar3 + 0xc);
    iVar1 = *(int *)(iVar3 + 0x10);
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
  if (*(int *)(**(int **)(_UNK_0231ad98 + 0x231ad10) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x02f74dec(**(undefined4 **)(_UNK_0231ad9c + 0x231ad2c));
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  func_0x02b489c0(&uStack_24,param_1,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar3 + 0x48) = uStack_24;
  *(undefined4 *)(iVar3 + 0x4c) = uStack_20;
  *(undefined4 *)(iVar3 + 0x50) = uStack_1c;
  *(int *)(iVar3 + 0x54) = iVar1;
  func_0x019930d8(iVar3,0,0);
  return;
}



// ===== FAT.ActivityTileBingo$$GetSpecialRewardCountdown RVA 0x1b5a588 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b6a588(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
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
  
  pcVar4 = (char *)(_UNK_01b6a69c + 0x1b6a5a0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6a6a0 + 0x1b6a5b4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8cdf,0);
  if (iVar1 == 0) {
    if (((param_2 != 0) && (iVar1 = FUN_01b6a49c(param_2), iVar1 != 0)) &&
       (uVar5 = *(uint *)(param_1 + 0x80), 0 < (int)uVar5)) {
      uVar7 = *(uint *)(param_2 + 0x24);
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01b6a6a4 + 0x1b6a634));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x01c359e8(iVar1,0);
      iVar1 = (uVar7 + uVar5) - (uint)uVar8;
      iVar3 = (((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar7,uVar5)) -
              ((int)((ulonglong)uVar8 >> 0x20) + (uint)(uVar7 + uVar5 < (uint)uVar8));
      if ((int)-(iVar3 + (uint)(iVar1 != 0)) < 0 ==
          (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)(iVar1 != 0)))) {
        iVar1 = 0;
      }
      return iVar1;
    }
    return 0;
  }
  iVar1 = func_0x0229f13c(0x8cdf,0);
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
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar6,&uStack_38,uVar2,0,0);
  iVar1 = func_0x0245499c(&uStack_38,0,0);
  return iVar1;
}



// ===== FAT.ActivityTileBingo$$GetSpecialRewardLeftSeconds RVA 0x1b5a6a8 =====

/* WARNING: Removing unreachable block (ram,0x01b6aa0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b6a6a8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  pcVar10 = (char *)(_UNK_01b6aaf0 + 0x1b6a6c0);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6aaf4 + 0x1b6a6d4));
    func_0x01384978(*(undefined4 *)(_UNK_01b6aaf8 + 0x1b6a6e0));
    func_0x01384978(*(undefined4 *)(_UNK_01b6aafc + 0x1b6a6ec));
    func_0x01384978(*(undefined4 *)(_UNK_01b6ab00 + 0x1b6a6f8));
    func_0x01384978(*(undefined4 *)(_UNK_01b6ab04 + 0x1b6a704));
    *pcVar10 = '\x01';
  }
  uVar14 = 0;
  iVar1 = func_0x0229f06c(0x8cf7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8cf7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar1 == 0) {
      uVar9 = 1;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_30,uVar9,0,0);
    uVar14 = func_0x0245499c(&uStack_30,0,0);
    return uVar14;
  }
  if (0 < *(int *)(param_1 + 0x80)) {
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01b6ab08 + 0x1b6a770));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar15 = func_0x01c359e8(iVar1,0);
    uStack_28 = (uint)uVar15;
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)FUN_01b5ebb4(iVar1);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar14 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar14 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01b6ab0c + 0x1b6a7d0)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01b6a820;
        }
        uVar14 = uVar14 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar14 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b6ab0c + 0x1b6a7d0),0);
LAB_01b6a820:
    piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
    piVar7 = *(int **)(_UNK_01b6ab10 + 0x1b6a848);
    piVar13 = *(int **)(_UNK_01b6ab14 + 0x1b6a850);
    iVar1 = 0;
    uVar14 = 0;
LAB_01b6a84c:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar3 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
          goto LAB_01b6a8a8;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar7,0);
LAB_01b6a8a8:
    iVar11 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar11 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar2;
      uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar8[-1] == *piVar13) {
            puVar3 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
            goto LAB_01b6a91c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar13,0);
LAB_01b6a91c:
      iVar11 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if ((*(char *)(iVar11 + 0x28) == '\0') && (iVar4 = FUN_01b6a49c(iVar11), iVar4 != 0)) {
        uVar6 = *(int *)(iVar11 + 0x24) + *(int *)(param_1 + 0x80);
        uVar5 = uVar6 - uStack_28;
        iVar11 = ((int)uVar6 >> 0x1f) -
                 ((int)((ulonglong)uVar15 >> 0x20) + (uint)(uVar6 < uStack_28));
        if ((int)(iVar1 - (iVar11 + (uint)(uVar14 < uVar5))) < 0 !=
            (SBORROW4(iVar1,iVar11) != SBORROW4(iVar1 - iVar11,(uint)(uVar14 < uVar5)))) {
          iVar1 = iVar11;
          uVar14 = uVar5;
        }
      }
      goto LAB_01b6a84c;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01b6ab18 + 0x1b6a9ac)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
            goto LAB_01b6a9f4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b6ab18 + 0x1b6a9ac),0);
LAB_01b6a9f4:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return uVar14;
}



// ===== FAT.ActivityTileBingo.<>c__DisplayClass182_0$$.ctor RVA 0x1b5ab20 =====

void FUN_01b6ab20(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityTileBingo$$RewardInfo RVA 0x1b5ab28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b6ab28(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
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
  
  iVar1 = func_0x0229f06c(0x8ce6,0);
  if (iVar1 == 0) {
    pcVar4 = (char *)(_UNK_01b6ae64 + 0x1b6ac00);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b6ae68 + 0x1b6ac14));
      func_0x01384978(*(undefined4 *)(_UNK_01b6ae6c + 0x1b6ac20));
      func_0x01384978(*(undefined4 *)(_UNK_01b6ae70 + 0x1b6ac2c));
      func_0x01384978(*(undefined4 *)(_UNK_01b6ae74 + 0x1b6ac38));
      func_0x01384978(*(undefined4 *)(_UNK_01b6ae78 + 0x1b6ac44));
      func_0x01384978(*(undefined4 *)(_UNK_01b6ae7c + 0x1b6ac50));
      func_0x01384978(*(undefined4 *)(_UNK_01b6ae80 + 0x1b6ac5c));
      func_0x01384978(*(undefined4 *)(_UNK_01b6ae84 + 0x1b6ac68));
      func_0x01384978(*(undefined4 *)(_UNK_01b6ae88 + 0x1b6ac74));
      func_0x01384978(*(undefined4 *)(_UNK_01b6ae8c + 0x1b6ac80));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x8ce7,0);
    if (iVar1 == 0) {
      if (param_1 == 0) {
        return **(undefined4 **)(_UNK_01b6aeb4 + 0x1b6ae60);
      }
      piVar6 = *(int **)(_UNK_01b6ae90 + 0x1b6ace0);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar3 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar6;
        }
        uVar5 = **(undefined4 **)(iVar1 + 0x5c);
        iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01b6ae94 + 0x1b6ad28));
        func_0x0244f8d0(iVar3,uVar5,**(undefined4 **)(_UNK_01b6ae98 + 0x1b6ad48),0);
        *(int *)(*(int *)(*piVar6 + 0x5c) + 8) = iVar3;
      }
      uVar5 = func_0x02fb7b18(param_1,iVar3,**(undefined4 **)(_UNK_01b6ae9c + 0x1b6ad6c));
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xc);
      if (iVar3 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar6;
        }
        uVar2 = **(undefined4 **)(iVar1 + 0x5c);
        iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01b6aea0 + 0x1b6adc4));
        func_0x0244fb14(iVar3,uVar2,**(undefined4 **)(_UNK_01b6aea4 + 0x1b6ade4),0);
        *(int *)(*(int *)(*piVar6 + 0x5c) + 0xc) = iVar3;
      }
      uVar5 = func_0x02fab288(uVar5,iVar3,**(undefined4 **)(_UNK_01b6aea8 + 0x1b6ae08));
      uVar5 = func_0x02fb2f10(uVar5,**(undefined4 **)(_UNK_01b6aeac + 0x1b6ae1c));
      if (*(int *)(**(int **)(_UNK_01b6aeb0 + 0x1b6ae30) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar5 = (*(code *)&UNK_054d33a0)(0x2c,uVar5,0);
      return uVar5;
    }
    iVar1 = func_0x0229f13c(0x8ce7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8ce6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
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
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
  return uVar5;
}



// ===== FAT.ActivityTileBingo$$RewardInfo RVA 0x1b5abec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b6abec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
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
  
  pcVar3 = (char *)(_UNK_01b6ae64 + 0x1b6ac00);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6ae68 + 0x1b6ac14));
    func_0x01384978(*(undefined4 *)(_UNK_01b6ae6c + 0x1b6ac20));
    func_0x01384978(*(undefined4 *)(_UNK_01b6ae70 + 0x1b6ac2c));
    func_0x01384978(*(undefined4 *)(_UNK_01b6ae74 + 0x1b6ac38));
    func_0x01384978(*(undefined4 *)(_UNK_01b6ae78 + 0x1b6ac44));
    func_0x01384978(*(undefined4 *)(_UNK_01b6ae7c + 0x1b6ac50));
    func_0x01384978(*(undefined4 *)(_UNK_01b6ae80 + 0x1b6ac5c));
    func_0x01384978(*(undefined4 *)(_UNK_01b6ae84 + 0x1b6ac68));
    func_0x01384978(*(undefined4 *)(_UNK_01b6ae88 + 0x1b6ac74));
    func_0x01384978(*(undefined4 *)(_UNK_01b6ae8c + 0x1b6ac80));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8ce7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8ce7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar5;
  }
  if (param_1 != 0) {
    piVar6 = *(int **)(_UNK_01b6ae90 + 0x1b6ace0);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
    if (iVar4 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      uVar5 = **(undefined4 **)(iVar1 + 0x5c);
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01b6ae94 + 0x1b6ad28));
      func_0x0244f8d0(iVar4,uVar5,**(undefined4 **)(_UNK_01b6ae98 + 0x1b6ad48),0);
      *(int *)(*(int *)(*piVar6 + 0x5c) + 8) = iVar4;
    }
    uVar5 = func_0x02fb7b18(param_1,iVar4,**(undefined4 **)(_UNK_01b6ae9c + 0x1b6ad6c));
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xc);
    if (iVar4 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      uVar2 = **(undefined4 **)(iVar1 + 0x5c);
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01b6aea0 + 0x1b6adc4));
      func_0x0244fb14(iVar4,uVar2,**(undefined4 **)(_UNK_01b6aea4 + 0x1b6ade4),0);
      *(int *)(*(int *)(*piVar6 + 0x5c) + 0xc) = iVar4;
    }
    uVar5 = func_0x02fab288(uVar5,iVar4,**(undefined4 **)(_UNK_01b6aea8 + 0x1b6ae08));
    uVar5 = func_0x02fb2f10(uVar5,**(undefined4 **)(_UNK_01b6aeac + 0x1b6ae1c));
    if (*(int *)(**(int **)(_UNK_01b6aeb0 + 0x1b6ae30) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar5 = (*(code *)&UNK_054d33a0)(0x2c,uVar5,0);
    return uVar5;
  }
  return **(undefined4 **)(_UNK_01b6aeb4 + 0x1b6ae60);
}



// ===== FAT.ActivityTileBingo$$<>iFixBaseProxy_get_GuideRes RVA 0x1b5aeb8 =====

void FUN_01b6aeb8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  *param_1 = *(undefined4 *)(param_2 + 0x1c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityTileBingo$$<>iFixBaseProxy_get_Visual RVA 0x1b5aecc =====

undefined4 FUN_01b6aecc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.ActivityTileBingo$$<>iFixBaseProxy_TryPopup RVA 0x1b5aed4 =====

void FUN_01b6aed4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x1aa2,0,param_3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1aa2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityTileBingo$$<>iFixBaseProxy_WhenReset RVA 0x1b5aedc =====

void FUN_01b6aedc(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x13ac,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x13ac,0);
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



// ===== FAT.ActivityTileBingo$$<>iFixBaseProxy_SetupFresh RVA 0x1b5aee4 =====

void FUN_01b6aee4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1f0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f0,0);
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



// ===== FAT.ActivityTileBingo$$<>iFixBaseProxy_WhenEnd RVA 0x1b5aeec =====

void FUN_01b6aeec(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1a2,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1a2,0);
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



// ===== FAT.ActivityTileBingo.<>c$$.cctor RVA 0x1b5aef4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b6aef4(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01b6af4c + 0x1b6af04);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6af50 + 0x1b6af18));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01b6af54 + 0x1b6af2c);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.ActivityTileBingo.<>c$$.ctor RVA 0x1b5af58 =====

void FUN_01b6af58(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityTileBingo.<>c$$<FillGroupDetailID>b__28_0 RVA 0x1b5af60 =====

void FUN_01b6af60(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x02450830(&uStack_20,0);
  *param_1 = uStack_20;
  param_1[1] = uStack_18;
  return;
}



// ===== FAT.ActivityTileBingo.<>c$$<RewardInfo>b__189_0 RVA 0x1b5af8c =====

bool FUN_01b6af8c(undefined4 param_1,int param_2)

{
  return param_2 != 0;
}



// ===== FAT.ActivityTileBingo.<>c$$<RewardInfo>b__189_1 RVA 0x1b5af9c =====

/* WARNING: Removing unreachable block (ram,0x01a3300c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b6af9c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01b6b03c + 0x1b6afb0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6b040 + 0x1b6afc4));
    func_0x01384978(*(undefined4 *)(_UNK_01b6b044 + 0x1b6afd0));
    func_0x01384978(*(undefined4 *)(_UNK_01b6b048 + 0x1b6afdc));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(**(int **)(_UNK_01b6b04c + 0x1b6affc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = **(int **)(_UNK_01b6b050 + 0x1b6b028);
  uVar1 = **(undefined4 **)(_UNK_01b6b054 + 0x1b6b034);
  if ((*(int *)(iVar2 + 0x1c) == 0) &&
     (func_0x01384978(*(undefined4 *)(_UNK_01a33090 + 0x1a32f4c)), *(int *)(iVar2 + 0x1c) == 0)) {
    func_0x0140024c(iVar2);
  }
  piVar6 = *(int **)(_UNK_01a33094 + 0x1a32f70);
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x01a33098(&uStack_28,1,0);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x030c1e2c(&uStack_28,uVar1,uVar5,uVar3,*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8));
  uVar3 = func_0x0148d6d8(&uStack_28,0);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x019a8084(&uStack_28,0);
  return uVar3;
}



// ===== FAT.ActivityTileBingo.<>c__DisplayClass12_0$$<IsItemNeeded>b__0 RVA 0x1b5b058 =====

bool FUN_01b6b058(int param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(param_2 + 0x28) != '\0') {
    return false;
  }
  return *(int *)(param_2 + 0x18) == *(int *)(param_1 + 8);
}



// ===== FAT.ActivityTileBingo.<>c__DisplayClass12_0$$<IsItemNeeded>b__1 RVA 0x1b5b098 =====

void FUN_01b6b098(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0210e2d4(param_2,0);
  if (iVar1 == *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}



// ===== FAT.ActivityTileBingo.<>c__DisplayClass17_0$$<RefreshBoardSpawnerItems>b__0 RVA 0x1b5b0d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b6b0d4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01b6b2cc + 0x1b6b0f0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6b2d0 + 0x1b6b104));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e2d4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dd0230(iVar1,uVar2,0);
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_1 + 8);
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450590(iVar4,uVar2,&iStack_1c,**(undefined4 **)(_UNK_01b6b2d4 + 0x1b6b198));
    if ((iVar1 != 0) && (0 < iStack_1c)) {
      if (param_2 == 0) {
        func_0x01384bf0();
        iVar1 = func_0x0210e2d4(0,0);
        if (iVar1 == iStack_1c) {
          return;
        }
        func_0x01384bf0();
      }
      else {
        iVar1 = func_0x0210e2d4(param_2,0);
        if (iVar1 == iStack_1c) {
          return;
        }
      }
      func_0x0210cd7c(&uStack_28,param_2,0);
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x108);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x020dd560(iVar1,param_2,4,0);
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x108);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x02139cf4(iVar1,0);
      iVar1 = iStack_1c;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x020ddf40(iVar4,iVar1,uStack_28,uStack_24,0,0,0);
    }
  }
  return;
}



// ===== FAT.ActivityTileBingo.<>c__DisplayClass182_0$$<CollectRecycleItems>b__0 RVA 0x1b5b2d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b6b2d8(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_01b6b42c + 0x1b6b2f4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6b430 + 0x1b6b308));
    *pcVar3 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 8);
  iStack_24 = 0;
  uStack_28 = 0;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = FUN_01b6035c(iVar5,param_2);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar5 + 8);
    uVar4 = *(uint *)(iVar5 + 0xc);
    piVar2 = *(int **)(_UNK_01b6b434 + 0x1b6b370);
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    iVar7 = *piVar2;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (uVar4 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar4 + 1;
      *(int *)(iVar6 + uVar4 * 4 + 0x10) = param_2;
    }
    else {
      func_0x0328f170(iVar5,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar5 = func_0x01c24918(0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x58);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x0210e2d4(param_2,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc688c(iVar5,uVar1,&uStack_28,&iStack_24,0);
    *(int *)(param_1 + 0x10) = iStack_24 + *(int *)(param_1 + 0x10);
  }
  return;
}



// ===== FAT.ActivityTileBingo.<>c__DisplayClass182_0$$<CollectRecycleItems>b__1 RVA 0x1b5b438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b6b438(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_01b6b568 + 0x1b6b454);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6b56c + 0x1b6b468));
    *pcVar3 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0xc);
  iStack_24 = 0;
  uStack_28 = 0;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar6 + 8);
  uVar4 = *(uint *)(iVar6 + 0xc);
  piVar2 = *(int **)(_UNK_01b6b570 + 0x1b6b4ac);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  iVar5 = *piVar2;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  if (uVar4 < *(uint *)(iVar7 + 0xc)) {
    *(uint *)(iVar6 + 0xc) = uVar4 + 1;
    *(int *)(iVar7 + uVar4 * 4 + 0x10) = param_2;
  }
  else {
    func_0x0328f170(iVar6,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
  }
  iVar6 = func_0x01c24918(0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar6 + 0x58);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  func_0x01dc688c(iVar6,uVar1,&uStack_28,&iStack_24,0);
  *(int *)(param_1 + 0x10) = iStack_24 + *(int *)(param_1 + 0x10);
  return;
}



// ===== FAT.ActivityTileBingo.<>c__DisplayClass19_0$$<CollectCurrentSpawnerItems>b__0 RVA 0x1b5b574 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b6b574(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r7;
  uint uVar6;
  undefined4 unaff_r8;
  int iVar7;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_01b6b644 + 0x1b6b58c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b6b648 + 0x1b6b5a0));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = FUN_01b6035c(iVar4,param_2);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0xc);
    uVar2 = extraout_r3;
    if (iVar4 == 0) {
      func_0x01384bf0();
      uVar2 = extraout_r3_00;
    }
    iVar5 = *(int *)(iVar4 + 8);
    uVar6 = *(uint *)(iVar4 + 0xc);
    piVar1 = *(int **)(_UNK_01b6b64c + 0x1b6b5fc);
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    iVar7 = *piVar1;
    if (iVar5 == 0) {
      func_0x01384bf0();
      uVar2 = extraout_r3_01;
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar6) {
      uVar6 = *(uint *)(iVar4 + 0xc);
      func_0x0328f754(iVar4,uVar6 + 1,
                      *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38) +
                                         0x10) + 0x60) + 0x3c),uVar2,unaff_r4,unaff_r5,unaff_r6,
                      unaff_r7,unaff_r8,unaff_lr);
      iVar5 = *(int *)(iVar4 + 8);
      *(uint *)(iVar4 + 0xc) = uVar6 + 1;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar6) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = param_2;
      return;
    }
    *(uint *)(iVar4 + 0xc) = uVar6 + 1;
    *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = param_2;
  }
  return;
}



// ===== FAT.ActivityTileBingo.<>c__DisplayClass8_0$$<CheckIndicator>b__0 RVA 0x1b5b650 =====

uint FUN_01b6b650(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if ((*(char *)(param_2 + 0x28) != '\0') || (*(int *)(param_2 + 0x18) != *(int *)(param_1 + 8))) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x8c40,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar4 + 0x68);
    uVar3 = FUN_01b61988(iVar4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x8c43,0);
    if (iVar4 == 0) {
      iVar4 = FUN_01b5f744(iVar1,uVar5);
      if (iVar4 != 0) {
        uVar2 = 0;
        iVar1 = func_0x0229f06c(0x8c45,0);
        if (iVar1 == 0) {
          if (*(char *)(iVar4 + 0x28) == '\0') {
            uVar2 = (uint)(*(char *)(iVar4 + 0x29) == '\0');
          }
          return uVar2;
        }
        iVar1 = func_0x0229f13c(0x8c45,0);
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
        func_0x01485278(&uStack_30,iVar4,0);
        iVar6 = *(int *)(iVar1 + 8);
        uVar5 = *(undefined4 *)(iVar1 + 0xc);
        iVar4 = *(int *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar3 = 2;
        if (iVar4 == 0) {
          uVar3 = 1;
        }
        uStack_50 = 0;
        uStack_4c = 0;
        func_0x0245495c(iVar6,uVar5,&uStack_30,uVar3);
        uVar2 = func_0x0245496c(&uStack_30,0,0);
        return uVar2;
      }
      uVar2 = 0;
    }
    else {
      iVar4 = func_0x0229f13c(0x8c43,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      uVar2 = func_0x0217a5ac(iVar4,iVar1,uVar5,uVar3);
    }
    return uVar2;
  }
  iVar1 = func_0x0229f13c(0x8c40,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,uVar5,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar4,0);
  func_0x01485238(&uStack_38,uVar5,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar4 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar4 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar6,uVar5,&uStack_38,uVar3,0,0);
  uVar2 = func_0x0245496c(&uStack_38,0,0);
  return uVar2;
}



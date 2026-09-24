/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ScoreEntity$$roundScoreVisitor RVA 0x2ae6b80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02af6b80(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02af6c3c + 0x2af6b98);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af6c40 + 0x2af6bac));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x16ce,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x16ce,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0328eea8(iVar1,param_2,**(undefined4 **)(_UNK_02af6c44 + 0x2af6c1c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x14);
}



// ===== FAT.ScoreEntity$$Setup RVA 0x2ae6c48 =====

/* WARNING: Removing unreachable block (ram,0x032907dc) */
/* WARNING: Removing unreachable block (ram,0x032907ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af6c48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  
  pcVar14 = (char *)(_UNK_02af72ec + 0x2af6c74);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af72f0 + 0x2af6cb0));
    func_0x01384978(*(undefined4 *)(_UNK_02af72f4 + 0x2af6cbc));
    func_0x01384978(*(undefined4 *)(_UNK_02af72f8 + 0x2af6cc8));
    func_0x01384978(*(undefined4 *)(_UNK_02af72fc + 0x2af6cd4));
    func_0x01384978(*(undefined4 *)(_UNK_02af7300 + 0x2af6ce0));
    func_0x01384978(*(undefined4 *)(_UNK_02af7304 + 0x2af6cec));
    func_0x01384978(*(undefined4 *)(_UNK_02af7308 + 0x2af6cf8));
    func_0x01384978(*(undefined4 *)(_UNK_02af730c + 0x2af6d04));
    func_0x01384978(*(undefined4 *)(_UNK_02af7310 + 0x2af6d10));
    func_0x01384978(*(undefined4 *)(_UNK_02af7314 + 0x2af6d1c));
    func_0x01384978(*(undefined4 *)(_UNK_02af7318 + 0x2af6d28));
    func_0x01384978(*(undefined4 *)(_UNK_02af731c + 0x2af6d34));
    func_0x01384978(*(undefined4 *)(_UNK_02af7320 + 0x2af6d40));
    func_0x01384978(*(undefined4 *)(_UNK_02af7324 + 0x2af6d4c));
    func_0x01384978(*(undefined4 *)(_UNK_02af7328 + 0x2af6d58));
    func_0x01384978(*(undefined4 *)(_UNK_02af732c + 0x2af6d64));
    func_0x01384978(*(undefined4 *)(_UNK_02af7330 + 0x2af6d70));
    func_0x01384978(*(undefined4 *)(_UNK_02af7334 + 0x2af6d7c));
    func_0x01384978(*(undefined4 *)(_UNK_02af7338 + 0x2af6d88));
    func_0x01384978(*(undefined4 *)(_UNK_02af733c + 0x2af6d94));
    func_0x01384978(*(undefined4 *)(_UNK_02af7340 + 0x2af6da0));
    func_0x01384978(*(undefined4 *)(_UNK_02af7344 + 0x2af6dac));
    func_0x01384978(*(undefined4 *)(_UNK_02af7348 + 0x2af6db8));
    func_0x01384978(*(undefined4 *)(_UNK_02af734c + 0x2af6dc4));
    func_0x01384978(*(undefined4 *)(_UNK_02af7350 + 0x2af6dd0));
    func_0x01384978(*(undefined4 *)(_UNK_02af7354 + 0x2af6ddc));
    func_0x01384978(*(undefined4 *)(_UNK_02af7358 + 0x2af6de8));
    func_0x01384978(*(undefined4 *)(_UNK_02af735c + 0x2af6df4));
    func_0x01384978(*(undefined4 *)(_UNK_02af7360 + 0x2af6e00));
    func_0x01384978(*(undefined4 *)(_UNK_02af7364 + 0x2af6e0c));
    *pcVar14 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x16b9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x16b9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021d2144(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    param_10,param_11,param_12,param_13,0);
    return;
  }
  piVar2 = *(int **)(_UNK_02af7368 + 0x2af6eb4);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x4c) = param_13;
  iVar1 = *piVar2;
  *(char *)(param_1 + 0x48) = (char)param_12;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  iVar1 = *(int *)(iVar1 + 0x74);
  *(undefined4 *)(param_1 + 0x44) = param_11;
  *(undefined4 *)(param_1 + 0x24) = param_10;
  *(char *)(param_1 + 0x20) = (char)param_9;
  *(undefined4 *)(param_1 + 0x1c) = param_7;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  *(undefined4 *)(param_1 + 0xc) = param_8;
  *(undefined4 *)(param_1 + 8) = param_4;
  if (iVar1 == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af736c + 0x2af6f18));
  puVar12 = *(undefined4 **)(_UNK_02af7370 + 0x2af6f2c);
  uVar3 = func_0x01384be4(*puVar12);
  func_0x03cd4cd0(uVar3,param_1,**(undefined4 **)(_UNK_02af7374 + 0x2af6f48),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar16 = *(undefined4 **)(_UNK_02af7378 + 0x2af6f70);
  func_0x034a1c10(iVar1,uVar3,*puVar16);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af737c + 0x2af6f80));
  uVar3 = func_0x01384be4(*puVar12);
  func_0x03cd4cd0(uVar3,param_1,**(undefined4 **)(_UNK_02af7380 + 0x2af6fa8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a1c10(iVar1,uVar3,*puVar16);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af7384 + 0x2af6fd8));
  puVar12 = *(undefined4 **)(_UNK_02af7388 + 0x2af6fec);
  uVar3 = func_0x01384be4(*puVar12);
  func_0x03cd3a48(uVar3,param_1,**(undefined4 **)(_UNK_02af738c + 0x2af7008),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar17 = *(undefined4 **)(_UNK_02af7390 + 0x2af7030);
  func_0x034a07cc(iVar1,uVar3,*puVar17);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af7394 + 0x2af7040));
  puVar13 = *(undefined4 **)(_UNK_02af7398 + 0x2af7054);
  uVar3 = func_0x01384be4(*puVar13);
  func_0x03ccab14(uVar3,param_1,**(undefined4 **)(_UNK_02af739c + 0x2af7070),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar15 = *(undefined4 **)(_UNK_02af73a0 + 0x2af7098);
  func_0x0349dde4(iVar1,uVar3,*puVar15);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af73a4 + 0x2af70a8));
  uVar3 = func_0x01384be4(*puVar12);
  func_0x03cd3a48(uVar3,param_1,**(undefined4 **)(_UNK_02af73a8 + 0x2af70d0),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a07cc(iVar1,uVar3,*puVar17);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af73ac + 0x2af7100));
  uVar3 = func_0x01384be4(*puVar13);
  func_0x03ccab14(uVar3,param_1,**(undefined4 **)(_UNK_02af73b0 + 0x2af7128),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349dde4(iVar1,uVar3,*puVar15);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af73b4 + 0x2af7158));
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02af73b8 + 0x2af716c));
  func_0x03cd4cd0(uVar3,param_1,**(undefined4 **)(_UNK_02af73bc + 0x2af7188),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a1c10(iVar1,uVar3,*puVar16);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af73c0 + 0x2af71b8));
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02af73c4 + 0x2af71cc));
  func_0x03cd5e78(uVar3,param_1,**(undefined4 **)(_UNK_02af73c8 + 0x2af71e8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a3060(iVar1,uVar3,**(undefined4 **)(_UNK_02af73cc + 0x2af720c));
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af73d0 + 0x2af7220));
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02af73d4 + 0x2af7234));
  func_0x03cd5f38(uVar3,param_1,**(undefined4 **)(_UNK_02af73d8 + 0x2af7250),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a33d8(iVar1,uVar3,**(undefined4 **)(_UNK_02af73dc + 0x2af7274));
  func_0x02af73e4(param_1);
  piVar2 = *(int **)(param_1 + 0x3c);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca6cbc(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar8 = piVar2[3];
  iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_02af73e0 + 0x2af72dc) + 0x10) + 0x60) + 0x48);
  pcVar14 = (char *)(_UNK_032908e8 + 0x3290348);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_032908ec + 0x3290360));
    func_0x01384978(*(undefined4 *)(_UNK_032908f0 + 0x329036c));
    *pcVar14 = '\x01';
  }
  if (piVar4 == (int *)0x0) {
    func_0x04839ccc(6,0);
  }
  if ((uint)piVar2[3] < uVar8) {
    func_0x0484c9cc(0);
  }
  iVar9 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = func_0x014001f0(iVar9);
  }
  piVar5 = (int *)func_0x01384ab8(piVar4,iVar9);
  if (piVar5 == (int *)0x0) {
    if ((int)uVar8 < piVar2[3]) {
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = func_0x014001f0(iVar9);
      }
      iVar6 = *piVar4;
      uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar10 != 0) {
        piVar5 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar9) {
            puVar12 = (undefined4 *)(iVar6 + *piVar5 * 8 + 0xc0);
            goto LAB_03290618;
          }
          uVar10 = uVar10 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined4 *)func_0x014002dc(piVar4,iVar9,0);
LAB_03290618:
      piVar4 = (int *)(*(code *)*puVar12)(piVar4,puVar12[1]);
      piVar5 = *(int **)(_UNK_032908f4 + 0x3290638);
      do {
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar9 = *piVar4;
        uVar10 = (uint)*(ushort *)(iVar9 + 0xb6);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(int *)(iVar9 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar5) {
              puVar12 = (undefined4 *)(iVar9 + *piVar11 * 8 + 0xc0);
              goto LAB_03290690;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined4 *)func_0x014002dc(piVar4,*piVar5,0);
LAB_03290690:
        iVar9 = (*(code *)*puVar12)(piVar4,puVar12[1]);
        if (iVar9 == 0) goto LAB_0329075c;
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
        if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
          iVar9 = func_0x014001f0(iVar9);
        }
        iVar6 = *piVar4;
        uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar11[-1] == iVar9) {
              puVar12 = (undefined4 *)(iVar6 + *piVar11 * 8 + 0xc0);
              goto LAB_03290724;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined4 *)func_0x014002dc(piVar4,iVar9,0);
LAB_03290724:
        uVar3 = (*(code *)*puVar12)(piVar4,puVar12[1]);
        func_0x032900e0(piVar2,uVar8,uVar3,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
        uVar8 = uVar8 + 1;
      } while( true );
    }
    func_0x032910b0(piVar2,piVar4,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20));
  }
  else {
    iVar9 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
    if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
      iVar9 = func_0x014001f0(iVar9);
    }
    iVar6 = *piVar5;
    uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar10 != 0) {
      piVar4 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar4[-1] == iVar9) {
          puVar12 = (undefined4 *)(iVar6 + *piVar4 * 8 + 0xc0);
          goto LAB_032904c0;
        }
        uVar10 = uVar10 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar5,iVar9,0);
LAB_032904c0:
    iVar9 = (*(code *)*puVar12)(piVar5,puVar12[1]);
    if (0 < iVar9) {
      func_0x0328f754(piVar2,piVar2[3] + iVar9,
                      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
      if ((int)uVar8 < piVar2[3]) {
        func_0x0484e904(piVar2[2],uVar8,piVar2[2],iVar9 + uVar8,piVar2[3] - uVar8,0);
      }
      if (piVar2 == piVar5) {
        func_0x0484e904(piVar2[2],0,piVar2[2],uVar8,uVar8,0);
        func_0x0484e904(piVar2[2],iVar9 + uVar8,piVar2[2],uVar8 << 1,piVar2[3] - uVar8,0);
      }
      else {
        iVar6 = piVar2[2];
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar7 = *piVar5;
        uVar10 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar10 != 0) {
          piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar4[-1] == iVar1) {
              puVar12 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xe8);
              goto LAB_032905e4;
            }
            uVar10 = uVar10 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined4 *)func_0x014002dc(piVar5,iVar1,5);
LAB_032905e4:
        (*(code *)*puVar12)(piVar5,iVar6,uVar8,puVar12[1]);
      }
      piVar2[3] = piVar2[3] + iVar9;
    }
  }
LAB_0329080c:
  piVar2[4] = piVar2[4] + 1;
  return;
LAB_0329075c:
  if (piVar4 != (int *)0x0) {
    iVar1 = *piVar4;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_032908f8 + 0x329077c)) {
          puVar12 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_032907c4;
        }
        uVar8 = uVar8 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_032908f8 + 0x329077c),0);
LAB_032907c4:
    (*(code *)*puVar12)(piVar4,puVar12[1]);
  }
  goto LAB_0329080c;
}



// ===== FAT.ScoreEntity$$SetupBonusHandler RVA 0x2ae73e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af73e4(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
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
  
  pcVar10 = (char *)(_UNK_02af7514 + 0x2af73f8);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af7518 + 0x2af740c));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x16ba,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x16ba,0);
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
    iVar8 = *(int *)(iVar3 + 8);
    uVar11 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar8,uVar11,&uStack_30,uVar6);
    return;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01ca84e4(iVar3,uVar11,0);
  cVar1 = '\0';
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + 0x1c);
  }
  if (iVar3 != 0 && cVar1 != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    return;
  }
  uVar11 = func_0x01384be4(**(undefined4 **)(_UNK_02af751c + 0x2af74bc));
  func_0x02140c18(uVar11,0);
  *(undefined4 *)(param_1 + 0x30) = uVar11;
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x4c);
  piVar7 = *(int **)(param_1 + 0x30);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_01dbb728 + 0x1dbb624);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbb72c + 0x1dbb638),piVar7,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbb730 + 0x1dbb644));
    *pcVar10 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x16bb,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0x16bb,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar7,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar3,0);
    func_0x01485278(&uStack_38,piVar7,0);
    iVar9 = *(int *)(iVar8 + 8);
    uVar11 = *(undefined4 *)(iVar8 + 0xc);
    iVar3 = *(int *)(iVar8 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar3 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar6,0,0);
    return;
  }
  iVar3 = func_0x02f6252c(*(undefined4 *)(iVar3 + 0x30),piVar7,
                          **(undefined4 **)(_UNK_01dbb734 + 0x1dbb6a4));
  if (piVar7 == (int *)0x0 || iVar3 == 0) {
    return;
  }
  iVar3 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01dbb738 + 0x1dbb6cc)) {
        puVar2 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xd0);
        goto LAB_01dbb714;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01dbb738 + 0x1dbb6cc),2);
LAB_01dbb714:
                    /* WARNING: Could not recover jumptable at 0x01dbb724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar7,puVar2[1]);
  return;
}



// ===== FAT.ScoreEntity$$Clear RVA 0x2ae7520 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af7520(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02af7aec + 0x2af7538);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af7af0 + 0x2af754c));
    func_0x01384978(*(undefined4 *)(_UNK_02af7af4 + 0x2af7558));
    func_0x01384978(*(undefined4 *)(_UNK_02af7af8 + 0x2af7564));
    func_0x01384978(*(undefined4 *)(_UNK_02af7afc + 0x2af7570));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b00 + 0x2af757c));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b04 + 0x2af7588));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b08 + 0x2af7594));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b0c + 0x2af75a0));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b10 + 0x2af75ac));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b14 + 0x2af75b8));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b18 + 0x2af75c4));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b1c + 0x2af75d0));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b20 + 0x2af75dc));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b24 + 0x2af75e8));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b28 + 0x2af75f4));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b2c + 0x2af7600));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b30 + 0x2af760c));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b34 + 0x2af7618));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b38 + 0x2af7624));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b3c + 0x2af7630));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b40 + 0x2af763c));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b44 + 0x2af7648));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b48 + 0x2af7654));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b4c + 0x2af7660));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b50 + 0x2af766c));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b54 + 0x2af7678));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b58 + 0x2af7684));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b5c + 0x2af7690));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b60 + 0x2af769c));
    func_0x01384978(*(undefined4 *)(_UNK_02af7b64 + 0x2af76a8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x725,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x725,0);
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
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  piVar2 = *(int **)(_UNK_02af7b68 + 0x2af7708);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af7b6c + 0x2af772c));
  puVar7 = *(undefined4 **)(_UNK_02af7b70 + 0x2af7740);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x03cd4cd0(uVar6,param_1,**(undefined4 **)(_UNK_02af7b74 + 0x2af775c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar10 = *(undefined4 **)(_UNK_02af7b78 + 0x2af7784);
  func_0x034a1e68(iVar1,uVar6,*puVar10);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af7b7c + 0x2af7794));
  uVar6 = func_0x01384be4(*puVar7);
  func_0x03cd4cd0(uVar6,param_1,**(undefined4 **)(_UNK_02af7b80 + 0x2af77bc),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a1e68(iVar1,uVar6,*puVar10);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af7b84 + 0x2af77ec));
  puVar7 = *(undefined4 **)(_UNK_02af7b88 + 0x2af7800);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x03cd3a48(uVar6,param_1,**(undefined4 **)(_UNK_02af7b8c + 0x2af781c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar11 = *(undefined4 **)(_UNK_02af7b90 + 0x2af7844);
  func_0x034a0a24(iVar1,uVar6,*puVar11);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af7b94 + 0x2af7854));
  puVar8 = *(undefined4 **)(_UNK_02af7b98 + 0x2af7868);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccab14(uVar6,param_1,**(undefined4 **)(_UNK_02af7b9c + 0x2af7884),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(_UNK_02af7ba0 + 0x2af78ac);
  func_0x0349e03c(iVar1,uVar6,*puVar9);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af7ba4 + 0x2af78bc));
  uVar6 = func_0x01384be4(*puVar7);
  func_0x03cd3a48(uVar6,param_1,**(undefined4 **)(_UNK_02af7ba8 + 0x2af78e4),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a0a24(iVar1,uVar6,*puVar11);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af7bac + 0x2af7914));
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccab14(uVar6,param_1,**(undefined4 **)(_UNK_02af7bb0 + 0x2af793c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e03c(iVar1,uVar6,*puVar9);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af7bb4 + 0x2af796c));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02af7bb8 + 0x2af7980));
  func_0x03cd4cd0(uVar6,param_1,**(undefined4 **)(_UNK_02af7bbc + 0x2af799c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a1e68(iVar1,uVar6,*puVar10);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af7bc0 + 0x2af79cc));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02af7bc4 + 0x2af79e0));
  func_0x03cd5e78(uVar6,param_1,**(undefined4 **)(_UNK_02af7bc8 + 0x2af79fc),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a32b8(iVar1,uVar6,**(undefined4 **)(_UNK_02af7bcc + 0x2af7a20));
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af7bd0 + 0x2af7a34));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02af7bd4 + 0x2af7a48));
  func_0x03cd5f38(uVar6,param_1,**(undefined4 **)(_UNK_02af7bd8 + 0x2af7a64),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a3630(iVar1,uVar6,**(undefined4 **)(_UNK_02af7bdc + 0x2af7a88));
  func_0x02af7be0(param_1);
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



// ===== FAT.ScoreEntity$$ClearBonusHandler RVA 0x2ae7be0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af7be0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
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
  
  iVar2 = func_0x0229f06c(0x735,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x735,0);
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar10,&uStack_30,uVar5);
    return;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  piVar6 = *(int **)(param_1 + 0x30);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01dbb868 + 0x1dbb754);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbb86c + 0x1dbb768),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbb870 + 0x1dbb774));
    *pcVar9 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x736,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x736,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,piVar6,0);
    iVar8 = *(int *)(iVar7 + 8);
    uVar10 = *(undefined4 *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = *(int *)(iVar2 + 0x30);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x03290900(iVar2,piVar6,**(undefined4 **)(_UNK_01dbb874 + 0x1dbb7e4));
  if (piVar6 == (int *)0x0 || iVar2 == 0) {
    return;
  }
  iVar2 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbb878 + 0x1dbb80c)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xd8);
        goto LAB_01dbb854;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbb878 + 0x1dbb80c),3);
LAB_01dbb854:
                    /* WARNING: Could not recover jumptable at 0x01dbb864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar6,puVar1[1]);
  return;
}



// ===== FAT.ScoreEntity$$OnUseJokerItemTryAddScore RVA 0x2ae7c6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af7c6c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02af7e64 + 0x2af7c8c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af7e68 + 0x2af7ca0));
    func_0x01384978(*(undefined4 *)(_UNK_02af7e6c + 0x2af7cac));
    func_0x01384978(*(undefined4 *)(_UNK_02af7e70 + 0x2af7cb8));
    func_0x01384978(*(undefined4 *)(_UNK_02af7e74 + 0x2af7cc4));
    func_0x01384978(*(undefined4 *)(_UNK_02af7e78 + 0x2af7cd0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x726,0);
  if (iVar1 == 0) {
    piVar6 = *(int **)(_UNK_02af7e7c + 0x2af7d34);
    piVar2 = (int *)func_0x01384ab8(*(undefined4 *)(param_1 + 0x14),*piVar6);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      iVar4 = *piVar6;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 200);
            goto LAB_02af7d98;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,1);
LAB_02af7d98:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) {
        return;
      }
    }
    iVar1 = func_0x02af7e90(param_1,0x20,param_3);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02af7e80 + 0x2af7dd8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar4 = func_0x0300d558(**(undefined4 **)(_UNK_02af7e84 + 0x2af7df4));
      uStack_24 = 0;
      uStack_28 = 0;
      uStack_20 = 0;
      func_0x039394cc(&uStack_28,param_2,iVar1,*(undefined4 *)(param_1 + 0x1c),
                      **(undefined4 **)(_UNK_02af7e88 + 0x2af7e10));
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0349c530(iVar4,uStack_28,uStack_24,uStack_20,
                      **(undefined4 **)(_UNK_02af7e8c + 0x2af7e50));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x726,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ScoreEntity$$AddScore RVA 0x2ae7e90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02af7e90(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar9 = (char *)(_UNK_02af849c + 0x2af7eb0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af84a0 + 0x2af7ec4));
    func_0x01384978(*(undefined4 *)(_UNK_02af84a4 + 0x2af7ed0));
    func_0x01384978(*(undefined4 *)(_UNK_02af84a8 + 0x2af7edc));
    func_0x01384978(*(undefined4 *)(_UNK_02af84ac + 0x2af7ee8));
    func_0x01384978(*(undefined4 *)(_UNK_02af84b0 + 0x2af7ef4));
    func_0x01384978(*(undefined4 *)(_UNK_02af84b4 + 0x2af7f00));
    func_0x01384978(*(undefined4 *)(_UNK_02af84b8 + 0x2af7f0c));
    func_0x01384978(*(undefined4 *)(_UNK_02af84bc + 0x2af7f18));
    func_0x01384978(*(undefined4 *)(_UNK_02af84c0 + 0x2af7f24));
    func_0x01384978(*(undefined4 *)(_UNK_02af84c4 + 0x2af7f30));
    func_0x01384978(*(undefined4 *)(_UNK_02af84c8 + 0x2af7f3c));
    func_0x01384978(*(undefined4 *)(_UNK_02af84cc + 0x2af7f48));
    func_0x01384978(*(undefined4 *)(_UNK_02af84d0 + 0x2af7f54));
    func_0x01384978(*(undefined4 *)(_UNK_02af84d4 + 0x2af7f60));
    func_0x01384978(*(undefined4 *)(_UNK_02af84d8 + 0x2af7f6c));
    func_0x01384978(*(undefined4 *)(_UNK_02af84dc + 0x2af7f78));
    func_0x01384978(*(undefined4 *)(_UNK_02af84e0 + 0x2af7f84));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x727,0);
  if (iVar1 == 0) {
    iVar2 = func_0x02af9740(param_1,param_2);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01dbb000(iVar1,0);
      if (param_2 != 1) {
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = *(int *)(param_1 + 0xc);
        }
        if (iVar1 != 0 && iVar2 != 0) {
          iVar2 = func_0x02139cf4(iVar1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 8);
          if (((iVar2 != *(int *)(param_1 + 0xc)) && (iVar3 = func_0x02141ef4(iVar1,0), iVar3 == 0))
             && ((iVar3 = *(int *)(param_1 + 0x4c), iVar3 == 0 ||
                 (iVar1 = (**(code **)(iVar3 + 0xc))
                                    (*(undefined4 *)(iVar3 + 0x20),iVar1,
                                     *(undefined4 *)(iVar3 + 0x14)), iVar1 == 0)))) {
            piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02af84e4 + 0x2af8358),2);
            puVar6 = *(undefined4 **)(_UNK_02af84e8 + 0x2af8370);
            iStack_30 = iVar2;
            iVar1 = func_0x01384abc(*puVar6,&iStack_30);
            if (piVar4 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar1 != 0) &&
               (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar2 == 0)) {
              uVar10 = func_0x01384c10();
              func_0x01384aa0(uVar10,0);
            }
            if (piVar4[3] == 0) {
              func_0x01384bf4();
            }
            piVar4[4] = iVar1;
            uStack_24 = *(undefined4 *)(param_1 + 0xc);
            iVar1 = func_0x01384abc(*puVar6,&uStack_24);
            if ((iVar1 != 0) &&
               (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar2 == 0)) {
              uVar10 = func_0x01384c10();
              func_0x01384aa0(uVar10,0);
            }
            if ((uint)piVar4[3] < 2) {
              func_0x01384bf4();
            }
            piVar4[5] = iVar1;
            if (*(int *)(**(int **)(_UNK_02af84ec + 0x2af842c) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2f28(**(undefined4 **)(_UNK_02af84f0 + 0x2af8454),piVar4,0);
            return 0;
          }
        }
      }
      iVar2 = func_0x02af97a4(param_1,param_2,param_3);
      iVar1 = 0;
      if (0 < iVar2) {
        iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02af84f4 + 0x2af8070));
        func_0x04874ed4(iVar3,0);
        uVar10 = *(undefined4 *)(param_1 + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        piVar4 = *(int **)(_UNK_02af84f8 + 0x2af809c);
        *(int *)(iVar3 + 0xc) = iVar2;
        iVar7 = *(int *)(param_1 + 0x28);
        iVar1 = *piVar4;
        *(undefined4 *)(iVar3 + 8) = uVar10;
        *(int *)(param_1 + 0x2c) = iVar7;
        iVar1 = *(int *)(iVar1 + 0x74);
        *(int *)(param_1 + 0x28) = iVar7 + iVar2;
        if (iVar1 == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af84fc + 0x2af80d0));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0349e46c(iVar1,param_2,**(undefined4 **)(_UNK_02af8500 + 0x2af80f4));
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af8504 + 0x2af8108));
        uStack_2c = 0;
        iStack_30 = 0;
        iStack_28 = 0;
        func_0x03923edc(&iStack_30,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28),
                        *(undefined4 *)(param_1 + 8),**(undefined4 **)(_UNK_02af8508 + 0x2af8120));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0349be40(iVar1,iStack_30,uStack_2c,iStack_28,
                        **(undefined4 **)(_UNK_02af850c + 0x2af8164));
        iVar1 = *(int *)(param_1 + 0x44);
        if (param_2 == 0x20) {
          param_2 = 0x10;
        }
        if ((iVar1 == 0) ||
           (iVar1 = (**(code **)(iVar1 + 0xc))
                              (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14)),
           iVar1 == 0)) {
          uVar10 = *(undefined4 *)(param_1 + 0x18);
          uStack_2c = 0xffffffff;
          iStack_30 = **(int **)(_UNK_02af8510 + 0x2af81b8);
          iStack_28 = param_2;
          iVar1 = func_0x04866158(&iStack_30,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar5 = func_0x04676434(iVar1,0);
          if (*(int *)(**(int **)(_UNK_02af8514 + 0x2af81fc) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar10 = func_0x030df410(uVar10,**(undefined4 **)(_UNK_02af851c + 0x2af8228),uVar5,
                                   **(undefined4 **)(_UNK_02af8518 + 0x2af821c));
          iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02af8520 + 0x2af8240));
          func_0x023ebac0(iVar1,uVar10,0);
        }
        func_0x019a4b9c(*(undefined4 *)(param_1 + 8),iVar2,*(undefined4 *)(param_1 + 0x28),iVar1,0);
        iVar1 = 0;
        if (*(char *)(param_1 + 0x40) == '\0') {
          piVar11 = *(int **)(_UNK_02af8524 + 0x2af8288);
          piVar4 = (int *)func_0x01384ab8(*(undefined4 *)(param_1 + 0x14),*piVar11);
          iVar1 = iVar3;
          if (piVar4 != (int *)0x0) {
            iVar2 = *piVar4;
            iVar3 = *piVar11;
            uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar11[-1] == iVar3) {
                  puVar6 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
                  goto LAB_02af8468;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 2;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined4 *)func_0x014002dc(piVar4,iVar3,0);
LAB_02af8468:
            iVar2 = (*(code *)*puVar6)(piVar4,puVar6[1]);
            if (iVar2 != 0) {
              *(undefined1 *)(param_1 + 0x40) = 1;
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x727,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0219432c(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.ScoreEntity$$OnUseSpeedUpItemTryAddScore RVA 0x2ae8528 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af8528(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02af8720 + 0x2af8548);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af8724 + 0x2af855c));
    func_0x01384978(*(undefined4 *)(_UNK_02af8728 + 0x2af8568));
    func_0x01384978(*(undefined4 *)(_UNK_02af872c + 0x2af8574));
    func_0x01384978(*(undefined4 *)(_UNK_02af8730 + 0x2af8580));
    func_0x01384978(*(undefined4 *)(_UNK_02af8734 + 0x2af858c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x72b,0);
  if (iVar1 == 0) {
    piVar6 = *(int **)(_UNK_02af8738 + 0x2af85f0);
    piVar2 = (int *)func_0x01384ab8(*(undefined4 *)(param_1 + 0x14),*piVar6);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      iVar4 = *piVar6;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 200);
            goto LAB_02af8654;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,1);
LAB_02af8654:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) {
        return;
      }
    }
    iVar1 = FUN_02af7e90(param_1,8,param_3);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02af873c + 0x2af8694) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar4 = func_0x0300d558(**(undefined4 **)(_UNK_02af8740 + 0x2af86b0));
      uStack_24 = 0;
      uStack_28 = 0;
      uStack_20 = 0;
      func_0x039394cc(&uStack_28,param_2,iVar1,*(undefined4 *)(param_1 + 0x1c),
                      **(undefined4 **)(_UNK_02af8744 + 0x2af86cc));
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0349c530(iVar4,uStack_28,uStack_24,uStack_20,
                      **(undefined4 **)(_UNK_02af8748 + 0x2af870c));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x72b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ScoreEntity$$OnMergeItemTryAddScore RVA 0x2ae874c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af874c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02af8944 + 0x2af876c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af8948 + 0x2af8780));
    func_0x01384978(*(undefined4 *)(_UNK_02af894c + 0x2af878c));
    func_0x01384978(*(undefined4 *)(_UNK_02af8950 + 0x2af8798));
    func_0x01384978(*(undefined4 *)(_UNK_02af8954 + 0x2af87a4));
    func_0x01384978(*(undefined4 *)(_UNK_02af8958 + 0x2af87b0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x731,0);
  if (iVar1 == 0) {
    piVar6 = *(int **)(_UNK_02af895c + 0x2af8814);
    piVar2 = (int *)func_0x01384ab8(*(undefined4 *)(param_1 + 0x14),*piVar6);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      iVar4 = *piVar6;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 200);
            goto LAB_02af8878;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,1);
LAB_02af8878:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) {
        return;
      }
    }
    iVar1 = FUN_02af7e90(param_1,0x10,param_3);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02af8960 + 0x2af88b8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar4 = func_0x0300d558(**(undefined4 **)(_UNK_02af8964 + 0x2af88d4));
      uStack_24 = 0;
      uStack_28 = 0;
      uStack_20 = 0;
      func_0x039394cc(&uStack_28,param_2,iVar1,*(undefined4 *)(param_1 + 0x1c),
                      **(undefined4 **)(_UNK_02af8968 + 0x2af88f0));
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0349c530(iVar4,uStack_28,uStack_24,uStack_20,
                      **(undefined4 **)(_UNK_02af896c + 0x2af8930));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x731,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ScoreEntity$$OnBuyShopItemTryAddScore RVA 0x2ae8970 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af8970(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
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
  
  pcVar10 = (char *)(_UNK_02af8b90 + 0x2af8990);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af8b94 + 0x2af89a4));
    func_0x01384978(*(undefined4 *)(_UNK_02af8b98 + 0x2af89b0));
    func_0x01384978(*(undefined4 *)(_UNK_02af8b9c + 0x2af89bc));
    func_0x01384978(*(undefined4 *)(_UNK_02af8ba0 + 0x2af89c8));
    func_0x01384978(*(undefined4 *)(_UNK_02af8ba4 + 0x2af89d4));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x72c,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(_UNK_02af8ba8 + 0x2af8a38);
    piVar2 = (int *)func_0x01384ab8(*(undefined4 *)(param_1 + 0x14),*piVar8);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      iVar4 = *piVar8;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 200);
            goto LAB_02af8a9c;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,1);
LAB_02af8a9c:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) {
        return;
      }
    }
    if (((*(int *)(param_1 + 0xc) == param_3) ||
        (iVar1 = func_0x02af8bbc(param_1,param_3), iVar1 != 0)) &&
       (iVar1 = FUN_02af7e90(param_1,1,param_2), iVar1 != 0)) {
      if (*(int *)(**(int **)(_UNK_02af8bac + 0x2af8af8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af8bb0 + 0x2af8b14));
      uVar9 = *(undefined4 *)(param_1 + 0x28);
      uVar6 = *(undefined4 *)(param_1 + 0x2c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = **(undefined4 **)(_UNK_02af8bb4 + 0x2af8b48);
      func_0x034a575c(iVar1,uVar6,uVar9,1);
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af8bb8 + 0x2af8b60));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0229f06c(0x3f,0);
      if (iVar4 == 0) {
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      iVar4 = func_0x0229f13c(0x3f,0);
      if (iVar4 == 0) {
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
      if (*(int *)(iVar4 + 0x10) != 0) {
        func_0x01485278(&uStack_30,*(int *)(iVar4 + 0x10),0);
      }
      func_0x01485278(&uStack_30,iVar1,0);
      iVar7 = *(int *)(iVar4 + 8);
      uVar6 = *(undefined4 *)(iVar4 + 0xc);
      iVar1 = *(int *)(iVar4 + 0x10);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar9 = 2;
      if (iVar1 == 0) {
        uVar9 = 1;
      }
      func_0x0245495c(iVar7,uVar6,&uStack_30,uVar9,0,0);
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x72c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02179a68(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.ScoreEntity$$IsEquivalentMainBoardShop RVA 0x2ae8bbc =====

uint FUN_02af8bbc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
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
  
  iVar2 = func_0x0229f06c(0x72d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x72d,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    return uVar1;
  }
  if ((*(char *)(param_1 + 0x48) != '\0') && (*(int *)(param_1 + 0xc) == 1)) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01dbb000(iVar2,0);
    if (((iVar2 != 0) && (iVar5 = func_0x02139cf4(iVar2,0), iVar5 != 0)) &&
       (*(int *)(iVar5 + 8) == param_2)) {
      iVar5 = func_0x0229f06c(0x144,0);
      if (iVar5 != 0) {
        iVar5 = func_0x0229f13c(0x144,0);
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
        func_0x01485278(&uStack_30,iVar2,0);
        iVar4 = *(int *)(iVar5 + 8);
        uVar6 = *(undefined4 *)(iVar5 + 0xc);
        iVar2 = *(int *)(iVar5 + 0x10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar3 = 2;
        if (iVar2 == 0) {
          uVar3 = 1;
        }
        uStack_50 = 0;
        uStack_4c = 0;
        func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3);
        uVar1 = func_0x0245496c(&uStack_30,0,0);
        return uVar1;
      }
      iVar2 = *(int *)(iVar2 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      return (uint)*(byte *)(iVar2 + 0xa0);
    }
  }
  return 0;
}



// ===== FAT.ScoreEntity$$OnCommitOrderTryAddScore RVA 0x2ae8c9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af8c9c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  int iStack_1c;
  
  pcVar7 = (char *)(_UNK_02af8e3c + 0x2af8cb8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af8e40 + 0x2af8ccc));
    func_0x01384978(*(undefined4 *)(_UNK_02af8e44 + 0x2af8cd8));
    *pcVar7 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x72e,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) != '\0') {
      piVar8 = *(int **)(_UNK_02af8e48 + 0x2af8d48);
      piVar2 = (int *)func_0x01384ab8(*(undefined4 *)(param_1 + 0x14),*piVar8);
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        iVar5 = *piVar8;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar8[-1] == iVar5) {
              puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 200);
              goto LAB_02af8dac;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar5,1);
LAB_02af8dac:
        iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar1 == 0) {
          return;
        }
      }
      piVar2 = *(int **)(param_1 + 0x14);
      if (piVar2 != (int *)0x0) {
        uVar6 = (uint)*(byte *)(**(int **)(_UNK_02af8e4c + 0x2af8ddc) + 0xb8);
        if (((uVar6 <= *(byte *)(*piVar2 + 0xb8)) &&
            (*(int *)(*(int *)(*piVar2 + 100) + uVar6 * 4 + -4) ==
             **(int **)(_UNK_02af8e4c + 0x2af8ddc))) &&
           (iVar1 = FUN_02756fa0(piVar2,*(undefined4 *)(param_1 + 8),&iStack_1c,0), iVar1 != 0)) {
          param_2 = iStack_1c * param_2;
        }
      }
      uVar4 = FUN_02af7e90(param_1,2,param_2);
      *(undefined4 *)(param_1 + 0x34) = uVar4;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x72e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ScoreEntity$$OnCommitOrderTryAddScoreV2 RVA 0x2ae8e50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af8e50(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_1c;
  
  pcVar8 = (char *)(_UNK_02af9064 + 0x2af8e70);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af9068 + 0x2af8e84));
    func_0x01384978(*(undefined4 *)(_UNK_02af906c + 0x2af8e90));
    func_0x01384978(*(undefined4 *)(_UNK_02af9070 + 0x2af8e9c));
    func_0x01384978(*(undefined4 *)(_UNK_02af9074 + 0x2af8ea8));
    func_0x01384978(*(undefined4 *)(_UNK_02af9078 + 0x2af8eb4));
    *pcVar8 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x72f,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar2 = func_0x02b449f8(*(int *)(param_1 + 0x14),0);
      iStack_24 = 0;
      uStack_28 = 0;
      func_0x03507d38(&uStack_28,uVar2,**(undefined4 **)(_UNK_02af907c + 0x2af8f3c));
      if (((char)uStack_28 != '\0') && (iStack_24 == param_2)) {
        piVar7 = *(int **)(_UNK_02af9080 + 0x2af8f70);
        piVar3 = (int *)func_0x01384ab8(*(undefined4 *)(param_1 + 0x14),*piVar7);
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          iVar5 = *piVar7;
          uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == iVar5) {
                puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 200);
                goto LAB_02af8fd4;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar5,1);
LAB_02af8fd4:
          iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if (iVar1 == 0) {
            return;
          }
        }
        piVar3 = *(int **)(param_1 + 0x14);
        if (piVar3 != (int *)0x0) {
          uVar6 = (uint)*(byte *)(**(int **)(_UNK_02af9084 + 0x2af9004) + 0xb8);
          if (((uVar6 <= *(byte *)(*piVar3 + 0xb8)) &&
              (*(int *)(*(int *)(*piVar3 + 100) + uVar6 * 4 + -4) ==
               **(int **)(_UNK_02af9084 + 0x2af9004))) &&
             (iVar1 = FUN_02756fa0(piVar3,*(undefined4 *)(param_1 + 8),&iStack_1c,0), iVar1 != 0)) {
            param_3 = iStack_1c * param_3;
          }
        }
        uVar2 = FUN_02af7e90(param_1,2,param_3);
        *(undefined4 *)(param_1 + 0x34) = uVar2;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x72f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ScoreEntity$$OnCommitOrderTryAddScoreBR RVA 0x2ae9088 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af9088(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
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
  
  pcVar8 = (char *)(_UNK_02af91b0 + 0x2af90a0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af91b4 + 0x2af90b4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x730,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x730,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar5,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    return;
  }
  piVar9 = *(int **)(_UNK_02af91b8 + 0x2af911c);
  piVar2 = (int *)func_0x01384ab8(*(undefined4 *)(param_1 + 0x14),*piVar9);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    iVar6 = *piVar9;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar6) {
          puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 200);
          goto LAB_02af9180;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar6,1);
LAB_02af9180:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) {
      return;
    }
  }
  uVar7 = FUN_02af7e90(param_1,4,param_2);
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  return;
}



// ===== FAT.ScoreEntity$$OnCommitOrderAnimComplete RVA 0x2ae91bc =====

void FUN_02af91bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x732,0);
  if (iVar1 == 0) {
    if (param_5 == 0) {
      if (*(int *)(param_1 + 0x38) != 0) {
        func_0x02af928c(param_1,*(int *)(param_1 + 0x38),param_2,param_3,param_4);
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x34) != 0) {
      func_0x02af928c(param_1,*(int *)(param_1 + 0x34),param_2,param_3,param_4);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x732,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02194460(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ScoreEntity$$TryFlyOrderScore RVA 0x2ae928c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af928c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_02af9568 + 0x2af92ac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af956c + 0x2af92c4));
    func_0x01384978(*(undefined4 *)(_UNK_02af9570 + 0x2af92d0));
    func_0x01384978(*(undefined4 *)(_UNK_02af9574 + 0x2af92dc));
    func_0x01384978(*(undefined4 *)(_UNK_02af9578 + 0x2af92e8));
    func_0x01384978(*(undefined4 *)(_UNK_02af957c + 0x2af92f4));
    func_0x01384978(*(undefined4 *)(_UNK_02af9580 + 0x2af9300));
    func_0x01384978(*(undefined4 *)(_UNK_02af9584 + 0x2af930c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x733,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *(undefined4 *)(param_2 + 8);
      iVar1 = *(int *)(iVar1 + 0x40);
      uVar4 = *(undefined4 *)(param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x01cdcbac(iVar1,uVar5,uVar4,uVar3,0,0,0,0x104,
                              **(undefined4 **)(_UNK_02af9588 + 0x2af93c0),
                              **(undefined4 **)(_UNK_02af958c + 0x2af93cc),0);
      if (*(char *)(param_1 + 0x20) == '\0') {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01dbb000(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02139cf4(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 8) == 1) {
          if (*(int *)(**(int **)(_UNK_02af95a0 + 0x2af9528) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x0206de24(uVar3,param_3,param_4,param_5,0,0,0,0);
        }
      }
      else {
        if (*(int *)(**(int **)(_UNK_02af9590 + 0x2af9414) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02af9594 + 0x2af9430));
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0393d160(&uStack_38,param_3,param_4,param_5,uVar3,*(undefined4 *)(param_1 + 0x14),
                        **(undefined4 **)(_UNK_02af9598 + 0x2af9448));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0349c8a0(iVar1,uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,
                        **(undefined4 **)(_UNK_02af959c + 0x2af949c));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x733,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218baa0(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ScoreEntity$$OnCommitOrderAnimCompleteV2 RVA 0x2ae95a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af95a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_02af96d0 + 0x2af95c4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af96d4 + 0x2af95dc));
    func_0x01384978(*(undefined4 *)(_UNK_02af96d8 + 0x2af95e8));
    func_0x01384978(*(undefined4 *)(_UNK_02af96dc + 0x2af95f4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x734,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar2 = func_0x02b449f8(*(int *)(param_1 + 0x14),0);
      iStack_24 = 0;
      uStack_28 = 0;
      func_0x03507d38(&uStack_28,uVar2,**(undefined4 **)(_UNK_02af96e0 + 0x2af9678));
      if ((((char)uStack_28 != '\0') && (iStack_24 == param_5)) && (*(int *)(param_1 + 0x34) != 0))
      {
        FUN_02af928c(param_1,*(int *)(param_1 + 0x34),param_2,param_3,param_4);
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x734,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0219459c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ScoreEntity$$UpdateScore RVA 0x2ae96e4 =====

void FUN_02af96e4(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(299,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(299,0);
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
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ===== FAT.ScoreEntity$$_IsIgnoreScoreType RVA 0x2ae9740 =====

uint FUN_02af9740(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
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
  
  iVar2 = func_0x0229f06c(0x728,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x728,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    return uVar1;
  }
  return (uint)((*(uint *)(param_1 + 0x24) & param_2) != 0);
}



// ===== FAT.ScoreEntity$$CalculateScoreByType RVA 0x2ae97a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02af97a4(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  iVar1 = func_0x0229f06c(0x729,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x729,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02194234(iVar1,param_1,param_2,param_3,0);
    return iVar1;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01ca84e4(iVar1,uVar3,0);
  if (iVar1 == 0) {
    return param_3;
  }
  fVar5 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  if (param_2 < 0x10) {
    if (param_2 == 1) {
      iVar1 = *(int *)(iVar1 + 0x18);
    }
    else {
      if (param_2 != 8) goto LAB_02af98b8;
      iVar1 = *(int *)(iVar1 + 0x14);
    }
    if (iVar1 == 0) {
      return 0;
    }
    fVar4 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (fVar5 / fVar4) * 10.0;
  }
  else if ((param_2 == 0x10 || param_2 == 0x20) && (*(char *)(iVar1 + 0x1c) != '\0')) {
    return 0;
  }
LAB_02af98b8:
  pcVar2 = (char *)(_UNK_02af993c + 0x2af98c4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af9940 + 0x2af98d8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02af9944 + 0x2af98ec) + 0x74) == 0) {
    func_0x01384ab4();
  }
  fVar5 = (float)func_0x02450728(fVar5);
  iVar1 = (int)fVar5;
  if (fVar5 == _UNK_02af9938) {
    iVar1 = -0x80000000;
  }
  return iVar1;
}



// ===== FAT.ScoreEntity.ScoreFlyRewardData$$.ctor RVA 0x2ae9948 =====

void FUN_02af9948(void)

{
  return;
}



// ===== FAT.ScoreEntity$$GetCalcScoreByType RVA 0x2ae9950 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02af9950(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  iVar1 = func_0x0229f06c(0x4d08,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4d08,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02194234(iVar1,param_1,param_2,param_3,0);
    return iVar1;
  }
  iVar1 = func_0x0229f06c(0x729,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x729,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02194234(iVar1,param_1,param_2,param_3,0);
    return iVar1;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01ca84e4(iVar1,uVar3,0);
  if (iVar1 == 0) {
    return param_3;
  }
  fVar5 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  if (param_2 < 0x10) {
    if (param_2 == 1) {
      iVar1 = *(int *)(iVar1 + 0x18);
    }
    else {
      if (param_2 != 8) goto LAB_02af98b8;
      iVar1 = *(int *)(iVar1 + 0x14);
    }
    if (iVar1 == 0) {
      return 0;
    }
    fVar4 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (fVar5 / fVar4) * 10.0;
  }
  else if ((param_2 == 0x10 || param_2 == 0x20) && (*(char *)(iVar1 + 0x1c) != '\0')) {
    return 0;
  }
LAB_02af98b8:
  pcVar2 = (char *)(_UNK_02af993c + 0x2af98c4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af9940 + 0x2af98d8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02af9944 + 0x2af98ec) + 0x74) == 0) {
    func_0x01384ab4();
  }
  fVar5 = (float)func_0x02450728(fVar5);
  iVar1 = (int)fVar5;
  if (fVar5 == _UNK_02af9938) {
    iVar1 = -0x80000000;
  }
  return iVar1;
}



// ===== FAT.ScoreEntity$$CalcOrderScore RVA 0x2ae99d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02af99d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  
  pcVar4 = (char *)(_UNK_02af9aec + 0x2af99f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af9af0 + 0x2af9a04));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x16d3,0);
  if (iVar1 == 0) {
    uVar2 = func_0x02af9af8(param_1,param_2,param_3,0);
    piVar5 = *(int **)(_UNK_02af9af4 + 0x2af9a80);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    iVar6 = *(int *)(param_1 + 0x14);
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02b449f8(iVar6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e4b9c8(iVar1,param_2,uVar3,uVar2,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x16d3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ScoreEntity$$CalcOrderScoreValue RVA 0x2ae9af8 =====

/* WARNING: Removing unreachable block (ram,0x02afa384) */
/* WARNING: Removing unreachable block (ram,0x02afa374) */
/* WARNING: Removing unreachable block (ram,0x02af9f0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02af9af8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  undefined4 uVar14;
  int iVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  undefined8 unaff_d9;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_28;
  
  pcVar13 = (char *)(_UNK_02af9ff8 + 0x2af9b20);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02af9ffc + 0x2af9b38));
    func_0x01384978(*(undefined4 *)(_UNK_02afa000 + 0x2af9b44));
    func_0x01384978(*(undefined4 *)(_UNK_02afa004 + 0x2af9b50));
    func_0x01384978(*(undefined4 *)(_UNK_02afa008 + 0x2af9b5c));
    *pcVar13 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x16c4,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x16c4,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x021d2734(iVar3,param_1,param_2,param_3,param_4,0);
    return iVar3;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  uVar14 = *(undefined4 *)(param_1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01ca84e4(iVar3,uVar14,0);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    piVar5 = (int *)(iVar3 + 0x30);
  }
  else {
    if (0 < *(int *)(iVar3 + 0x28)) {
      pcVar13 = (char *)(_UNK_02afa498 + 0x2afa040);
      if (*pcVar13 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02afa49c + 0x2afa054));
        func_0x01384978(*(undefined4 *)(_UNK_02afa4a0 + 0x2afa060));
        func_0x01384978(*(undefined4 *)(_UNK_02afa4a4 + 0x2afa06c));
        func_0x01384978(*(undefined4 *)(_UNK_02afa4a8 + 0x2afa078));
        *pcVar13 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x16c5,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x16c5,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x021806fc(iVar3,param_1,param_2,param_3,0);
        return iVar3;
      }
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      uVar14 = *(undefined4 *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01ca84e4(iVar3,uVar14,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      piVar5 = (int *)func_0x01e3e370(param_2,0);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar5;
      uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar11[-1] == **(int **)(_UNK_02afa4ac + 0x2afa148)) {
            puVar7 = (undefined4 *)(iVar6 + *piVar11 * 8 + 0xc0);
            goto LAB_02afa198;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02afa4ac + 0x2afa148),0);
LAB_02afa198:
      piVar5 = (int *)(*(code *)*puVar7)(piVar5,puVar7[1]);
      iVar15 = 0;
      iVar6 = 0;
      piVar11 = *(int **)(_UNK_02afa4b0 + 0x2afa1c4);
      do {
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar8 = *piVar5;
        uVar10 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar12[-1] == *piVar11) {
              puVar7 = (undefined4 *)(iVar8 + *piVar12 * 8 + 0xc0);
              goto LAB_02afa21c;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined4 *)func_0x014002dc(piVar5,*piVar11,0);
LAB_02afa21c:
        iVar8 = (*(code *)*puVar7)(piVar5,puVar7[1]);
        if (iVar8 == 0) goto LAB_02afa2f4;
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar8 = *piVar5;
        uVar10 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar12[-1] == **(int **)(_UNK_02afa4b4 + 0x2afa250)) {
              puVar7 = (undefined4 *)(iVar8 + *piVar12 * 8 + 0xc0);
              goto LAB_02afa298;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02afa4b4 + 0x2afa250),0);
LAB_02afa298:
        iVar8 = (*(code *)*puVar7)(piVar5,puVar7[1]);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x01e714c8(&stack0xffffffd0,*(undefined4 *)(iVar8 + 8),param_3,0);
        iVar9 = func_0x01e7139c((int)unaff_d9,(int)((ulonglong)unaff_d9 >> 0x20),uStack_28,0);
        iVar15 = *(int *)(iVar8 + 0x10) * iVar9 + iVar15;
        iVar6 = *(int *)(iVar8 + 0x10) * (int)unaff_d9 + iVar6;
      } while( true );
    }
    piVar5 = (int *)(iVar3 + 0x24);
  }
  if (*piVar5 != 0) {
    iVar3 = *(int *)(iVar3 + 0x20);
  }
  if (*piVar5 == 0 || iVar3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  piVar5 = (int *)func_0x01e3e370(param_2,0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar5;
  uVar10 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar11[-1] == **(int **)(_UNK_02afa00c + 0x2af9ca0)) {
        puVar7 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xc0);
        goto LAB_02af9ce8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02afa00c + 0x2af9ca0),0);
LAB_02af9ce8:
  piVar5 = (int *)(*(code *)*puVar7)(piVar5,puVar7[1]);
  fVar2 = _UNK_02af9ff4;
  fVar1 = _UNK_02af9ff0;
  iVar3 = 0;
  piVar11 = *(int **)(_UNK_02afa010 + 0x2af9d14);
  do {
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar5;
    uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar12[-1] == *piVar11) {
          puVar7 = (undefined4 *)(iVar6 + *piVar12 * 8 + 0xc0);
          goto LAB_02af9d6c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar5,*piVar11,0);
LAB_02af9d6c:
    iVar6 = (*(code *)*puVar7)(piVar5,puVar7[1]);
    if (iVar6 == 0) goto LAB_02af9e90;
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar5;
    uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_02afa014 + 0x2af9da0)) {
          puVar7 = (undefined4 *)(iVar6 + *piVar12 * 8 + 0xc0);
          goto LAB_02af9de8;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02afa014 + 0x2af9da0),0);
LAB_02af9de8:
    iVar6 = (*(code *)*puVar7)(piVar5,puVar7[1]);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x01e714c8(&uStack_44,*(undefined4 *)(iVar6 + 8),param_3,0);
    uVar14 = uStack_44;
    uVar4 = func_0x01e7139c(uStack_44,uStack_40,uStack_3c,0);
    fVar16 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    fVar17 = (float)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
    fVar17 = (fVar16 * fVar1) / fVar17;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar17 == fVar2) << 0x1e;
    iVar15 = (int)fVar17;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      iVar15 = -0x80000000;
    }
    if (param_4 == 0) {
      iVar15 = func_0x02afa4c0(param_1,uVar14,iVar15);
    }
    else {
      iVar15 = func_0x02afa5c8(param_1,uVar14);
    }
    iVar3 = *(int *)(iVar6 + 0x10) * iVar15 + iVar3;
  } while( true );
LAB_02afa2f4:
  if (piVar5 != (int *)0x0) {
    iVar8 = *piVar5;
    uVar10 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_02afa4b8 + 0x2afa314)) {
          puVar7 = (undefined4 *)(iVar8 + *piVar11 * 8 + 0xc0);
          goto LAB_02afa35c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02afa4b8 + 0x2afa314),0);
LAB_02afa35c:
    (*(code *)*puVar7)(piVar5,puVar7[1]);
  }
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_44 = *(undefined4 *)(iVar3 + 0x2c);
  iVar3 = func_0x02afb114(param_1,*(undefined4 *)(iVar3 + 0x28),iVar6,iVar15,
                          *(undefined4 *)(iVar3 + 0x20));
  return iVar3;
LAB_02af9e90:
  if (piVar5 != (int *)0x0) {
    iVar6 = *piVar5;
    uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_02afa018 + 0x2af9eac)) {
          puVar7 = (undefined4 *)(iVar6 + *piVar11 * 8 + 0xc0);
          goto LAB_02af9ef4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02afa018 + 0x2af9eac),0);
LAB_02af9ef4:
    (*(code *)*puVar7)(piVar5,puVar7[1]);
  }
  return iVar3;
}



// ===== FAT.ScoreEntity$$CalculateOrderScoreBRFix RVA 0x2aea020 =====

/* WARNING: Removing unreachable block (ram,0x02afa374) */
/* WARNING: Removing unreachable block (ram,0x02afa384) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02afa020(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uVar12;
  int iVar13;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_02afa498 + 0x2afa040);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02afa49c + 0x2afa054));
    func_0x01384978(*(undefined4 *)(_UNK_02afa4a0 + 0x2afa060));
    func_0x01384978(*(undefined4 *)(_UNK_02afa4a4 + 0x2afa06c));
    func_0x01384978(*(undefined4 *)(_UNK_02afa4a8 + 0x2afa078));
    *pcVar11 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x16c5,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x16c5,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021806fc(iVar2,param_1,param_2,param_3,0);
    return;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  uVar12 = *(undefined4 *)(param_1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01ca84e4(iVar2,uVar12,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x01e3e370(param_2,0);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = *piVar3;
  uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_02afa4ac + 0x2afa148)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
        goto LAB_02afa198;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02afa4ac + 0x2afa148),0);
LAB_02afa198:
  piVar3 = (int *)(*(code *)*puVar5)(piVar3,puVar5[1]);
  iVar13 = 0;
  iVar4 = 0;
  piVar9 = *(int **)(_UNK_02afa4b0 + 0x2afa1c4);
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar10[-1] == *piVar9) {
          puVar5 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xc0);
          goto LAB_02afa21c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar3,*piVar9,0);
LAB_02afa21c:
    iVar6 = (*(code *)*puVar5)(piVar3,puVar5[1]);
    if (iVar6 == 0) break;
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_02afa4b4 + 0x2afa250)) {
          puVar5 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xc0);
          goto LAB_02afa298;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02afa4b4 + 0x2afa250),0);
LAB_02afa298:
    iVar6 = (*(code *)*puVar5)(piVar3,puVar5[1]);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x01e714c8(&iStack_30,*(undefined4 *)(iVar6 + 8),param_3,0);
    iVar1 = iStack_30;
    iVar7 = func_0x01e7139c(iStack_30,uStack_2c,uStack_28,0);
    iVar13 = *(int *)(iVar6 + 0x10) * iVar7 + iVar13;
    iVar4 = *(int *)(iVar6 + 0x10) * iVar1 + iVar4;
  } while( true );
  if (piVar3 != (int *)0x0) {
    iVar6 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_02afa4b8 + 0x2afa314)) {
          puVar5 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
          goto LAB_02afa35c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02afa4b8 + 0x2afa314),0);
LAB_02afa35c:
    (*(code *)*puVar5)(piVar3,puVar5[1]);
  }
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02afb114(param_1,*(undefined4 *)(iVar2 + 0x28),iVar4,iVar13,*(undefined4 *)(iVar2 + 0x20),
                  *(undefined4 *)(iVar2 + 0x2c));
  return;
}



// ===== FAT.ScoreEntity$$CalculateOrderScore RVA 0x2aea4c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02afa4c0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = func_0x0229f06c(0x16cc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x16cc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02180128(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01ca84e4(iVar1,uVar6,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  fVar7 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x30),(byte)(in_fpscr >> 0x16) & 3);
  if (param_3 < *(int *)(iVar1 + 0x20)) {
    param_3 = *(int *)(iVar1 + 0x20);
  }
  fVar9 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = ((fVar7 / _UNK_02afa5c4) * (fVar8 / _UNK_02afa5c4) * fVar9) / _UNK_02afa5c4;
  pcVar5 = (char *)(_UNK_02afb0d0 + 0x2afae00);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02afb0d4 + 0x2afae14));
    func_0x01384978(*(undefined4 *)(_UNK_02afb0d8 + 0x2afae20));
    func_0x01384978(*(undefined4 *)(_UNK_02afb0dc + 0x2afae2c));
    func_0x01384978(*(undefined4 *)(_UNK_02afb0e0 + 0x2afae38));
    func_0x01384978(*(undefined4 *)(_UNK_02afb0e4 + 0x2afae44));
    func_0x01384978(*(undefined4 *)(_UNK_02afb0e8 + 0x2afae50));
    func_0x01384978(*(undefined4 *)(_UNK_02afb0ec + 0x2afae5c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x16cd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x16cd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    fStack_34 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    func_0x0245494c(&uStack_50,0,fVar7,0);
    uStack_38 = uStack_50;
    fStack_34 = fStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,fVar7,0);
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
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02afb0f0 + 0x2afaed4));
  func_0x041cd7ac(uVar6,param_1,**(undefined4 **)(_UNK_02afb0f4 + 0x2afaef4),0);
  iVar1 = func_0x02afb2a0(param_1,fVar7,uVar3,uVar6);
  if (iVar1 < 0) {
    fStack_34 = fVar7;
    uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_02afb0f8 + 0x2afaff4),&fStack_34);
    uVar6 = func_0x046604e4(**(undefined4 **)(_UNK_02afb0fc + 0x2afb010),uVar6,0);
    if (*(int *)(**(int **)(_UNK_02afb100 + 0x2afb024) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar6,0);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0328eea8(iVar4,iVar1,**(undefined4 **)(_UNK_02afb104 + 0x2afaf3c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  pcVar5 = (char *)(_UNK_02afb108 + 0x2afaf68);
  fVar8 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02afb10c + 0x2afaf80));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02afb110 + 0x2afaf98) + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar10 = (double)(fVar7 / fVar8);
  dVar11 = (double)func_0x0148e1a4(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),&uStack_30);
  if (0.0 <= fVar7 / fVar8) {
    if (dVar11 != 0.5) {
      dVar10 = (double)func_0x02450740(SUB84(dVar10 + 0.5,0),
                                       (int)((ulonglong)(dVar10 + 0.5) >> 0x20));
      goto LAB_02afb098;
    }
    dVar10 = 1.0;
  }
  else {
    if (dVar11 != -0.5) {
      dVar10 = (double)func_0x0148df24(SUB84(dVar10 + -0.5,0),
                                       (int)((ulonglong)(dVar10 + -0.5) >> 0x20));
      goto LAB_02afb098;
    }
    dVar10 = -1.0;
  }
  uVar2 = func_0x01457ce4(uStack_30,uStack_2c);
  dVar10 = (double)CONCAT44(uStack_2c,uStack_30) + dVar10;
  if ((uVar2 & 1) == 0) {
    dVar10 = (double)CONCAT44(uStack_2c,uStack_30);
  }
LAB_02afb098:
  iVar4 = (int)(longlong)dVar10;
  if (dVar10 == _UNK_02afb0c8) {
    iVar4 = -0x80000000;
  }
  iVar4 = iVar4 * iVar1;
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  return iVar4;
}



// ===== FAT.ScoreEntity$$CalculateOrderScoreBR RVA 0x2aea5c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02afa5c8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = func_0x0229f06c(0x16d0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ca84e4(iVar1,uVar3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0x20);
    pcVar2 = (char *)(_UNK_02afa738 + 0x2afa688);
    uVar3 = *(undefined4 *)(iVar1 + 0x24);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02afa73c + 0x2afa6a0));
      *pcVar2 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_02afa740 + 0x2afa6b4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    fVar5 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    if (param_3 < iVar4) {
      param_3 = iVar4;
    }
    fVar6 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (float)func_0x02450364(((fVar6 / _UNK_02afa730) * (fVar5 / _UNK_02afa730) * fVar7) /
                                   _UNK_02afa730);
    iVar1 = (int)fVar5;
    if (fVar5 == _UNK_02afa734) {
      iVar1 = -0x80000000;
    }
    if (iVar1 < 2) {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x16d0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02180128(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.ScoreEntity$$CalcOrderScoreBR RVA 0x2aea744 =====

/* WARNING: Removing unreachable block (ram,0x02afabbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02afa744(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar11 = (char *)(_UNK_02afaca4 + 0x2afa76c);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02afaca8 + 0x2afa784));
    func_0x01384978(*(undefined4 *)(_UNK_02afacac + 0x2afa790));
    func_0x01384978(*(undefined4 *)(_UNK_02afacb0 + 0x2afa79c));
    func_0x01384978(*(undefined4 *)(_UNK_02afacb4 + 0x2afa7a8));
    func_0x01384978(*(undefined4 *)(_UNK_02afacb8 + 0x2afa7b4));
    *pcVar11 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x5cbe,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x5cbe,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0218a160(iVar3,param_1,param_2,param_3,param_4,0);
    return;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  uVar12 = *(undefined4 *)(param_1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01ca84e4(iVar3,uVar12,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar3 + 0x28) < 1) {
    iVar4 = 0;
    bVar14 = *(int *)(iVar3 + 0x20) != 0;
    iVar13 = 0;
    if (bVar14) {
      iVar13 = *(int *)(iVar3 + 0x24);
    }
    if (bVar14 && iVar13 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      piVar10 = (int *)func_0x01e3e370(param_2,0);
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar10;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02afacbc + 0x2afa954)) {
            puVar5 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
            goto LAB_02afa9a4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_02afacbc + 0x2afa954),0);
LAB_02afa9a4:
      piVar10 = (int *)(*(code *)*puVar5)(piVar10,puVar5[1]);
      fVar2 = _UNK_02afaca0;
      fVar1 = _UNK_02afac9c;
      iVar4 = 0;
      piVar8 = *(int **)(_UNK_02afacc0 + 0x2afa9d0);
      do {
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar8) {
              puVar5 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_02afaa2c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar10,*piVar8,0);
LAB_02afaa2c:
        iVar3 = (*(code *)*puVar5)(piVar10,puVar5[1]);
        if (iVar3 == 0) goto LAB_02afab38;
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_02afacc4 + 0x2afaa60)) {
              puVar5 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_02afaaa8;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_02afacc4 + 0x2afaa60),0);
LAB_02afaaa8:
        iVar3 = (*(code *)*puVar5)(piVar10,puVar5[1]);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x01e714c8(&uStack_44,*(undefined4 *)(iVar3 + 8),param_3,0);
        uVar12 = uStack_44;
        uVar6 = func_0x01e7139c(uStack_44,uStack_40,uStack_3c,0);
        fVar15 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
        fVar16 = (float)VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
        fVar16 = (fVar15 * fVar1) / fVar16;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar16 == fVar2) << 0x1e;
        iVar13 = (int)fVar16;
        if (SUB41(in_fpscr >> 0x1e,0)) {
          iVar13 = -0x80000000;
        }
        iVar13 = FUN_02afa5c8(param_1,uVar12,iVar13);
        iVar4 = *(int *)(iVar3 + 0x10) * iVar13 + iVar4;
      } while( true );
    }
  }
  else {
    iVar4 = FUN_02afa020(param_1,param_2,param_3);
  }
  goto LAB_02afa898;
LAB_02afab38:
  if (piVar10 != (int *)0x0) {
    iVar3 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02afacc8 + 0x2afab5c)) {
          puVar5 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_02afaba4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_02afacc8 + 0x2afab5c),0);
LAB_02afaba4:
    (*(code *)*puVar5)(piVar10,puVar5[1]);
  }
LAB_02afa898:
  piVar10 = *(int **)(_UNK_02afaccc + 0x2afa8a4);
  iVar3 = *piVar10;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar10;
  }
  iVar13 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x02b449f8(iVar13,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4b8f0(iVar3,param_2,uVar12,iVar4,param_4,0);
  return;
}



// ===== FAT.ScoreEntity$$CalcOrderScoreV2 RVA 0x2aeacd4 =====

void FUN_02afacd4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = func_0x0229f06c(0x16c3,0);
  if (iVar1 == 0) {
    uVar2 = FUN_02af9af8(param_1,param_2,param_3,param_5);
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02b449f8(iVar1,0);
    iVar1 = func_0x01e4b758(param_2,uVar3,0);
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02b449f8(iVar4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e4ba84(iVar1,param_2,uVar3,uVar2,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x16c3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021d2940(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ScoreEntity$$RoundScore RVA 0x2aeade0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02afade0(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint in_fpscr;
  double dVar7;
  float fVar8;
  double dVar9;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_02afb0d0 + 0x2afae00);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02afb0d4 + 0x2afae14));
    func_0x01384978(*(undefined4 *)(_UNK_02afb0d8 + 0x2afae20));
    func_0x01384978(*(undefined4 *)(_UNK_02afb0dc + 0x2afae2c));
    func_0x01384978(*(undefined4 *)(_UNK_02afb0e0 + 0x2afae38));
    func_0x01384978(*(undefined4 *)(_UNK_02afb0e4 + 0x2afae44));
    func_0x01384978(*(undefined4 *)(_UNK_02afb0e8 + 0x2afae50));
    func_0x01384978(*(undefined4 *)(_UNK_02afb0ec + 0x2afae5c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x16cd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x16cd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    fStack_34 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    fStack_34 = fStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
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
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02afb0f0 + 0x2afaed4));
  func_0x041cd7ac(uVar5,param_1,**(undefined4 **)(_UNK_02afb0f4 + 0x2afaef4),0);
  iVar1 = func_0x02afb2a0(param_1,param_2,uVar3,uVar5);
  if (iVar1 < 0) {
    fStack_34 = param_2;
    uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02afb0f8 + 0x2afaff4),&fStack_34);
    uVar5 = func_0x046604e4(**(undefined4 **)(_UNK_02afb0fc + 0x2afb010),uVar5,0);
    if (*(int *)(**(int **)(_UNK_02afb100 + 0x2afb024) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar5,0);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0328eea8(iVar4,iVar1,**(undefined4 **)(_UNK_02afb104 + 0x2afaf3c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  pcVar6 = (char *)(_UNK_02afb108 + 0x2afaf68);
  fVar8 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02afb10c + 0x2afaf80));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02afb110 + 0x2afaf98) + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar7 = (double)(param_2 / fVar8);
  dVar9 = (double)func_0x0148e1a4(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),&uStack_30);
  if (0.0 <= param_2 / fVar8) {
    if (dVar9 != 0.5) {
      dVar7 = (double)func_0x02450740(SUB84(dVar7 + 0.5,0),(int)((ulonglong)(dVar7 + 0.5) >> 0x20));
      goto LAB_02afb098;
    }
    dVar7 = 1.0;
  }
  else {
    if (dVar9 != -0.5) {
      dVar7 = (double)func_0x0148df24(SUB84(dVar7 + -0.5,0),(int)((ulonglong)(dVar7 + -0.5) >> 0x20)
                                     );
      goto LAB_02afb098;
    }
    dVar7 = -1.0;
  }
  uVar2 = func_0x01457ce4(uStack_30,uStack_2c);
  dVar7 = (double)CONCAT44(uStack_2c,uStack_30) + dVar7;
  if ((uVar2 & 1) == 0) {
    dVar7 = (double)CONCAT44(uStack_2c,uStack_30);
  }
LAB_02afb098:
  iVar4 = (int)(longlong)dVar7;
  if (dVar7 == _UNK_02afb0c8) {
    iVar4 = -0x80000000;
  }
  iVar4 = iVar4 * iVar1;
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  return iVar4;
}



// ===== FAT.ScoreEntity$$CalculateOrderLowerRightScoreFix RVA 0x2aeb114 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02afb114(undefined4 param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
                int param_6)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = 0;
  iVar1 = func_0x0229f06c(0x16cb,0);
  if (iVar1 == 0) {
    iVar1 = param_2;
    if (0 < param_2) {
      iVar1 = param_3;
    }
    if (0 < iVar1) {
      fVar6 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
      fVar4 = (float)VectorSignedToFloat(param_4 & ~((int)param_4 >> 0x1f),
                                         (byte)(in_fpscr >> 0x16) & 3);
      pcVar2 = (char *)(_UNK_02afb294 + 0x2afb1e0);
      fVar7 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
      fVar5 = (fVar4 * _UNK_02afb28c) / fVar6;
      fVar4 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
      if (fVar4 < fVar5) {
        fVar4 = fVar5;
      }
      fVar4 = ((fVar7 / _UNK_02afb28c) * (fVar6 / _UNK_02afb28c) * fVar4) / _UNK_02afb28c;
      if (*pcVar2 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02afb298 + 0x2afb22c));
        *pcVar2 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_02afb29c + 0x2afb244) + 0x74) == 0) {
        func_0x01384ab4();
      }
      fVar4 = (float)func_0x02450364(fVar4 + 0.5);
      iVar3 = (int)fVar4;
      if (fVar4 == _UNK_02afb290) {
        iVar3 = -0x80000000;
      }
      if ((param_6 != 0) && (iVar3 < 2)) {
        iVar3 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x16cb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x021d260c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return iVar3;
}



// ===== FAT.ScoreEntity$$FindBoundIndex RVA 0x2aeb2a0 =====

int FUN_02afb2a0(undefined4 param_1,float param_2,int param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  
  iVar3 = func_0x0229f06c(0x16cf,0);
  if (iVar3 == 0) {
    param_3 = param_3 + -1;
    if (-1 < param_3) {
      iVar5 = 0;
      iVar3 = param_3;
      param_3 = param_3 / 2;
      do {
        while( true ) {
          if (param_4 == 0) {
            func_0x01384bf0();
          }
          uVar4 = (**(code **)(param_4 + 0xc))
                            (*(undefined4 *)(param_4 + 0x20),param_3,*(undefined4 *)(param_4 + 0x14)
                            );
          fVar6 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 < param_2) << 0x1f;
          if (!SUB41(in_fpscr >> 0x1f,0)) break;
          iVar5 = param_3 + 1;
LAB_02afb3b8:
          param_3 = iVar5 + (iVar3 - iVar5) / 2;
          if (iVar3 < iVar5) {
            return iVar3;
          }
        }
        uVar4 = (**(code **)(param_4 + 0xc))
                          (*(undefined4 *)(param_4 + 0x20),param_3,*(undefined4 *)(param_4 + 0x14));
        fVar6 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < param_2) << 0x1f |
                (uint)(fVar6 == param_2) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar6) || NAN(param_2)) << 0x1c;
        bVar2 = (byte)(uVar1 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          iVar3 = param_3 + -1;
          goto LAB_02afb3b8;
        }
        uVar4 = (**(code **)(param_4 + 0xc))
                          (*(undefined4 *)(param_4 + 0x20),param_3,*(undefined4 *)(param_4 + 0x14));
        fVar6 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 == param_2) << 0x1e;
      } while (!SUB41(in_fpscr >> 0x1e,0));
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x16cf,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    param_3 = func_0x02175fd4(iVar3,param_1,param_2,param_3,param_4,0);
  }
  return param_3;
}



// ===== FAT.ScoreEntity$$.ctor RVA 0x2aeb3e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02afb3e0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02afb458 + 0x2afb3f4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02afb45c + 0x2afb408));
    func_0x01384978(*(undefined4 *)(_UNK_02afb460 + 0x2afb414));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02afb464 + 0x2afb428));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_02afb468 + 0x2afb43c));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  return param_1;
}



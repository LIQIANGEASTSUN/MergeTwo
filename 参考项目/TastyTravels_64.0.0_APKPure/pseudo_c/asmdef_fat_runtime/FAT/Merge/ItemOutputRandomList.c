/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemOutputRandomList$$.ctor RVA 0x2133214 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02143214(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02143340 + 0x214322c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02143344 + 0x2143240));
    func_0x01384978(*(undefined4 *)(_UNK_02143348 + 0x214324c));
    func_0x01384978(*(undefined4 *)(_UNK_0214334c + 0x2143258));
    func_0x01384978(*(undefined4 *)(_UNK_02143350 + 0x2143264));
    func_0x01384978(*(undefined4 *)(_UNK_02143354 + 0x2143270));
    func_0x01384978(*(undefined4 *)(_UNK_02143358 + 0x214327c));
    func_0x01384978(*(undefined4 *)(_UNK_0214335c + 0x2143288));
    *pcVar3 = '\x01';
  }
  uVar1 = **(undefined4 **)(_UNK_02143360 + 0x214329c);
  *(undefined4 *)(param_1 + 8) = **(undefined4 **)(_UNK_02143364 + 0x21432a8);
  uVar1 = func_0x01384be4(uVar1);
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_02143368 + 0x21432c0));
  puVar2 = *(undefined4 **)(_UNK_0214336c + 0x21432d8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_02143370 + 0x21432f4));
  puVar2 = *(undefined4 **)(_UNK_02143374 + 0x2143308);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_02143378 + 0x2143320));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.Merge.ItemOutputRandomList.OutputConstraitFixCount$$.ctor RVA 0x213337c =====

void FUN_0214337c(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemOutputRandomList$$AddConstraitFixCount RVA 0x2133384 =====

/* WARNING: Removing unreachable block (ram,0x032907dc) */
/* WARNING: Removing unreachable block (ram,0x032907ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02143384(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar13 = (char *)(_UNK_02143478 + 0x214339c);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214347c + 0x21433b0));
    func_0x01384978(*(undefined4 *)(_UNK_02143480 + 0x21433bc));
    *pcVar13 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x384e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x384e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
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
    iVar12 = *(int *)(iVar1 + 8);
    uVar14 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar12,uVar14,&uStack_38,uVar8,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar12) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar12,0);
  }
  piVar11 = *(int **)(param_1 + 0x18);
  if (piVar11 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar6 = piVar11[3];
  iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_02143484 + 0x214346c) + 0x10) + 0x60) + 0x48);
  pcVar13 = (char *)(_UNK_032908e8 + 0x3290348);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_032908ec + 0x3290360));
    func_0x01384978(*(undefined4 *)(_UNK_032908f0 + 0x329036c));
    *pcVar13 = '\x01';
  }
  if (param_2 == (int *)0x0) {
    func_0x04839ccc(6,0);
  }
  if ((uint)piVar11[3] < uVar6) {
    func_0x0484c9cc(0);
  }
  iVar12 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
    iVar12 = func_0x014001f0(iVar12);
  }
  piVar2 = (int *)func_0x01384ab8(param_2,iVar12);
  if (piVar2 == (int *)0x0) {
    if ((int)uVar6 < piVar11[3]) {
      if (param_2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
      if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
        iVar12 = func_0x014001f0(iVar12);
      }
      iVar3 = *param_2;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar12) {
            puVar4 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
            goto LAB_03290618;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(param_2,iVar12,0);
LAB_03290618:
      piVar2 = (int *)(*(code *)*puVar4)(param_2,puVar4[1]);
      piVar9 = *(int **)(_UNK_032908f4 + 0x3290638);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar12 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
          do {
            if (piVar10[-1] == *piVar9) {
              puVar4 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
              goto LAB_03290690;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_03290690:
        iVar12 = (*(code *)*puVar4)(piVar2,puVar4[1]);
        if (iVar12 == 0) goto LAB_0329075c;
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
        if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
          iVar12 = func_0x014001f0(iVar12);
        }
        iVar3 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar12) {
              puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_03290724;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar12,0);
LAB_03290724:
        uVar14 = (*(code *)*puVar4)(piVar2,puVar4[1]);
        func_0x032900e0(piVar11,uVar6,uVar14,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
        uVar6 = uVar6 + 1;
      } while( true );
    }
    func_0x032910b0(piVar11,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20))
    ;
  }
  else {
    iVar12 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
    if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
      iVar12 = func_0x014001f0(iVar12);
    }
    iVar3 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar12) {
          puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
          goto LAB_032904c0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar12,0);
LAB_032904c0:
    iVar12 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    if (0 < iVar12) {
      func_0x0328f754(piVar11,piVar11[3] + iVar12,
                      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
      if ((int)uVar6 < piVar11[3]) {
        uStack_30 = piVar11[3] - uVar6;
        uStack_2c = 0;
        func_0x0484e904(piVar11[2],uVar6,piVar11[2],iVar12 + uVar6);
      }
      if (piVar11 == piVar2) {
        uStack_2c = 0;
        uStack_30 = uVar6;
        func_0x0484e904(piVar11[2],0,piVar11[2],uVar6);
        uStack_30 = piVar11[3] - uVar6;
        uStack_2c = 0;
        func_0x0484e904(piVar11[2],iVar12 + uVar6,piVar11[2],uVar6 << 1);
      }
      else {
        iVar3 = piVar11[2];
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar5 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xe8);
              goto LAB_032905e4;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,5);
LAB_032905e4:
        (*(code *)*puVar4)(piVar2,iVar3,uVar6,puVar4[1]);
      }
      piVar11[3] = piVar11[3] + iVar12;
    }
  }
LAB_0329080c:
  piVar11[4] = piVar11[4] + 1;
  return;
LAB_0329075c:
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_032908f8 + 0x329077c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_032907c4;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_032908f8 + 0x329077c),0);
LAB_032907c4:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  goto LAB_0329080c;
}



// ===== FAT.Merge.ItemOutputRandomList$$get_randomOutputNextIdx RVA 0x2138a58 =====

undefined4 FUN_02148a58(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c75,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c75,0);
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
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.Merge.ItemOutputRandomList$$get_randomOutputSeed RVA 0x2138aac =====

undefined4 FUN_02148aac(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c76,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c76,0);
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
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.Merge.ItemOutputRandomList$$SetParam RVA 0x213c448 =====

void FUN_0214c448(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x384f,0);
  if (iVar1 == 0) {
    if (-1 < param_3) {
      *(undefined4 *)(param_1 + 0x14) = param_2;
      func_0x02152ab4(param_1);
    }
    *(int *)(param_1 + 0x10) = param_3;
  }
  else {
    iVar1 = func_0x0229f13c(0x384f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemOutputRandomList$$FillPossibleOutput RVA 0x2141f5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02151f5c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_02152198 + 0x2151f78);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215219c + 0x2151f8c));
    func_0x01384978(*(undefined4 *)(_UNK_021521a0 + 0x2151f98));
    func_0x01384978(*(undefined4 *)(_UNK_021521a4 + 0x2151fa4));
    func_0x01384978(*(undefined4 *)(_UNK_021521a8 + 0x2151fb0));
    func_0x01384978(*(undefined4 *)(_UNK_021521ac + 0x2151fbc));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x14a3,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_38,iVar2,**(undefined4 **)(_UNK_021521b0 + 0x2152040));
    iVar2 = 0;
    puVar8 = *(undefined4 **)(_UNK_021521b4 + 0x2152058);
    while (iVar3 = func_0x03f5f428(&uStack_38,*puVar8), iVar1 = iStack_2c, iVar3 != 0) {
      if (param_2 != 0) {
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(param_2 + 8);
        uVar7 = *(uint *)(param_2 + 0xc);
        iVar3 = **(int **)(_UNK_021521b8 + 0x215208c);
        uVar6 = *(undefined4 *)(iVar1 + 8);
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (uVar7 < *(uint *)(iVar5 + 0xc)) {
          *(uint *)(param_2 + 0xc) = uVar7 + 1;
          *(undefined4 *)(iVar5 + uVar7 * 4 + 0x10) = uVar6;
        }
        else {
          func_0x0325970c(param_2,uVar6,
                          *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
        }
      }
      iVar2 = iVar2 + 1;
    }
    func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_021521bc + 0x21520fc));
  }
  else {
    iVar2 = func_0x0229f13c(0x14a3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0217bafc(iVar2,param_1,param_2,0);
  }
  return iVar2;
}



// ===== FAT.Merge.ItemOutputRandomList$$MergeToWeightDictionary RVA 0x21421c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021521c8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  
  pcVar3 = (char *)(_UNK_021529f8 + 0x21521e4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021529fc + 0x21521f8));
    func_0x01384978(*(undefined4 *)(_UNK_02152a00 + 0x2152204));
    func_0x01384978(*(undefined4 *)(_UNK_02152a04 + 0x2152210));
    func_0x01384978(*(undefined4 *)(_UNK_02152a08 + 0x215221c));
    func_0x01384978(*(undefined4 *)(_UNK_02152a0c + 0x2152228));
    func_0x01384978(*(undefined4 *)(_UNK_02152a10 + 0x2152234));
    func_0x01384978(*(undefined4 *)(_UNK_02152a14 + 0x2152240));
    func_0x01384978(*(undefined4 *)(_UNK_02152a18 + 0x215224c));
    func_0x01384978(*(undefined4 *)(_UNK_02152a1c + 0x2152258));
    func_0x01384978(*(undefined4 *)(_UNK_02152a20 + 0x2152264));
    func_0x01384978(*(undefined4 *)(_UNK_02152a24 + 0x2152270));
    func_0x01384978(*(undefined4 *)(_UNK_02152a28 + 0x215227c));
    func_0x01384978(*(undefined4 *)(_UNK_02152a2c + 0x2152288));
    *pcVar3 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_50 = 0;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  iStack_34 = iStack_44;
  iVar1 = func_0x0229f06c(0xb44d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_02152a30 + 0x215231c));
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_68,param_2,**(undefined4 **)(_UNK_02152a34 + 0x2152344));
    iVar1 = 0;
    uStack_40 = uStack_68;
    uStack_3c = uStack_64;
    uStack_38 = uStack_60;
    iStack_34 = iStack_5c;
    uStack_30 = uStack_58;
    while (iVar2 = func_0x03f9975c(&uStack_40,**(undefined4 **)(_UNK_02152a3c + 0x2152374)),
          iVar5 = iStack_34, iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x1c);
      iVar2 = (int)uStack_30;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar4,iVar5,iVar2,**(undefined4 **)(_UNK_02152a38 + 0x21523a8));
      iVar1 = iVar1 + iVar2;
    }
    func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_02152a40 + 0x21523cc));
    iVar5 = *(int *)(param_1 + 0x18);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_68,iVar5,**(undefined4 **)(_UNK_02152a48 + 0x21523fc));
    iVar5 = 0;
    uStack_50 = uStack_68;
    uStack_4c = uStack_64;
    uStack_48 = uStack_60;
    iStack_44 = iStack_5c;
    puVar10 = *(undefined4 **)(_UNK_02152a4c + 0x2152420);
    piVar6 = *(int **)(_UNK_02152a50 + 0x2152428);
    while (iVar4 = func_0x03f5f428(&uStack_50,*puVar10), iVar2 = iStack_44, iVar4 != 0) {
      if (iVar5 == 0) {
        if (iStack_44 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar2 + 0xc);
      }
      else {
        if (iStack_44 == 0) {
          func_0x01384bf0();
        }
        uVar8 = *(undefined4 *)(iVar2 + 0xc);
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar8 = func_0x028d445c(uVar8,iVar5,0);
        iVar5 = func_0x01457ae8(iVar5,uVar8);
        iVar5 = iVar5 * *(int *)(iVar2 + 0xc);
      }
    }
    func_0x03f5f424(&uStack_50,**(undefined4 **)(_UNK_02152a58 + 0x21524b0));
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_68,iVar2,**(undefined4 **)(_UNK_02152a64 + 0x21524e0));
    uStack_50 = uStack_68;
    uStack_4c = uStack_64;
    uStack_48 = uStack_60;
    iStack_44 = iStack_5c;
    puVar7 = *(undefined4 **)(_UNK_02152a68 + 0x2152504);
    iStack_6c = iVar5;
    while (iVar4 = func_0x03f5f428(&uStack_50,*puVar10), iVar2 = iStack_44, iVar4 != 0) {
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar2 + 0x10);
      if (0 < iVar4) {
        iVar2 = func_0x01457ae8(iVar5,*(undefined4 *)(iVar2 + 0xc));
        iStack_6c = iStack_6c - iVar2 * iVar4;
      }
    }
    func_0x03f5f424(&uStack_50,**(undefined4 **)(_UNK_02152a70 + 0x2152558));
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(param_2,*puVar7);
    iVar2 = iVar1;
    if (0 < iVar1) {
      iVar2 = iStack_6c;
    }
    if (iVar2 < 1) {
      puVar10 = *(undefined4 **)(_UNK_02152a98 + 0x2152594);
    }
    else {
      if (*(int *)(**(int **)(_UNK_02152a7c + 0x21525a0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar8 = func_0x028d445c(iStack_6c,iVar1,0);
      iVar2 = func_0x01457ae8(iStack_6c,uVar8);
      iVar5 = func_0x01457ae8(iVar5 * iVar1,uVar8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(param_2,*puVar7);
      iVar1 = *(int *)(param_1 + 0x1c);
      puVar10 = *(undefined4 **)(_UNK_02152a80 + 0x2152614);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5a200(&uStack_68,iVar1,**(undefined4 **)(_UNK_02152a84 + 0x215262c));
      uStack_40 = uStack_68;
      uStack_3c = uStack_64;
      uStack_38 = uStack_60;
      iStack_34 = iStack_5c;
      uStack_30 = uStack_58;
      while (iVar4 = func_0x03f9975c(&uStack_40,**(undefined4 **)(_UNK_02152a8c + 0x2152654)),
            iVar1 = iStack_34, iVar4 != 0) {
        iVar4 = (int)uStack_30;
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(param_2,iVar1,iVar2 * iVar4,*puVar10);
      }
      func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_02152a90 + 0x215269c));
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_68,iVar1,**(undefined4 **)(_UNK_02152a9c + 0x21526cc));
    uStack_50 = uStack_68;
    uStack_4c = uStack_64;
    uStack_48 = uStack_60;
    iStack_44 = iStack_5c;
    while (iVar2 = func_0x03f5f428(&uStack_50,**(undefined4 **)(_UNK_02152aa4 + 0x21526ec)),
          iVar1 = iStack_44, iVar2 != 0) {
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      uVar8 = *(undefined4 *)(iVar1 + 8);
      uVar9 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x01457ae8(iVar1 * iVar5,uVar9);
      func_0x03d59d54(param_2,uVar8,uVar9,*puVar10);
    }
    func_0x03f5f424(&uStack_50,**(undefined4 **)(_UNK_02152aa8 + 0x2152754));
  }
  else {
    iVar1 = func_0x0229f13c(0xb44d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.ItemOutputRandomList$$_GenerateRandomOutputList RVA 0x2142ab4 =====

/* WARNING: Removing unreachable block (ram,0x02153270) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02152ab4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_34 [4];
  
  pcVar4 = (char *)(_UNK_021533d8 + 0x2152acc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021533dc + 0x2152ae0));
    func_0x01384978(*(undefined4 *)(_UNK_021533e0 + 0x2152aec));
    func_0x01384978(*(undefined4 *)(_UNK_021533e4 + 0x2152af8));
    func_0x01384978(*(undefined4 *)(_UNK_021533e8 + 0x2152b04));
    func_0x01384978(*(undefined4 *)(_UNK_021533ec + 0x2152b10));
    func_0x01384978(*(undefined4 *)(_UNK_021533f0 + 0x2152b1c));
    func_0x01384978(*(undefined4 *)(_UNK_021533f4 + 0x2152b28));
    func_0x01384978(*(undefined4 *)(_UNK_021533f8 + 0x2152b34));
    func_0x01384978(*(undefined4 *)(_UNK_021533fc + 0x2152b40));
    func_0x01384978(*(undefined4 *)(_UNK_02153400 + 0x2152b4c));
    func_0x01384978(*(undefined4 *)(_UNK_02153404 + 0x2152b58));
    func_0x01384978(*(undefined4 *)(_UNK_02153408 + 0x2152b64));
    func_0x01384978(*(undefined4 *)(_UNK_0215340c + 0x2152b70));
    func_0x01384978(*(undefined4 *)(_UNK_02153410 + 0x2152b7c));
    func_0x01384978(*(undefined4 *)(_UNK_02153414 + 0x2152b88));
    func_0x01384978(*(undefined4 *)(_UNK_02153418 + 0x2152b94));
    *pcVar4 = '\x01';
  }
  aiStack_34[3] = 0;
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  iVar1 = func_0x0229f06c(0x3850,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    iVar9 = *(int *)(param_1 + 0x18);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar9 + 0xc)) {
      piVar5 = *(int **)(_UNK_0215341c + 0x2152c48);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar5;
      }
      iVar1 = **(int **)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(aiStack_34 + 1,iVar1,aiStack_34 + 3,
                      **(undefined4 **)(_UNK_02153420 + 0x2152c84));
      piVar5 = *(int **)(_UNK_02153424 + 0x2152c98);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar5;
      }
      iVar1 = **(int **)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_48,iVar1,aiStack_34,**(undefined4 **)(_UNK_02153428 + 0x2152ccc));
      iVar1 = aiStack_34[3];
      uVar10 = *(undefined4 *)(param_1 + 0x14);
      uStack_3c = uStack_44;
      uStack_40 = uStack_48;
      if (aiStack_34[3] == 0) {
        func_0x01384bf0();
      }
      func_0x028ced38(iVar1,uVar10,0,0);
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar15 = *(undefined4 **)(_UNK_0215342c + 0x2152d34);
      iVar1 = func_0x0328eea8(iVar1,0,*puVar15);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      iVar9 = 1;
      piVar5 = *(int **)(_UNK_02153430 + 0x2152d64);
      while( true ) {
        iVar6 = *(int *)(param_1 + 0x18);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0xc) <= iVar9) break;
        iVar6 = *(int *)(param_1 + 0x18);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x0328eea8(iVar6,iVar9,*puVar15);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        iVar11 = *(int *)(param_1 + 0x18);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = func_0x0328eea8(iVar11,iVar9,*puVar15);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        uVar10 = *(undefined4 *)(iVar11 + 0xc);
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar11 = func_0x028d445c(iVar1,uVar10,0);
        iVar6 = iVar6 * iVar1;
        iVar1 = func_0x01458584(iVar6,iVar6 >> 0x1f,iVar11,iVar11 >> 0x1f);
        iVar9 = iVar9 + 1;
      }
      if (0 < iVar1) {
        piVar5 = *(int **)(_UNK_02153434 + 0x2152e58);
        iVar9 = iVar1;
        do {
          iVar6 = *(int *)(param_1 + 0xc);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar6 + 8);
          uVar7 = *(uint *)(iVar6 + 0xc);
          iVar16 = *piVar5;
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          if (uVar7 < *(uint *)(iVar11 + 0xc)) {
            *(uint *)(iVar6 + 0xc) = uVar7 + 1;
            *(undefined4 *)(iVar11 + uVar7 * 4 + 0x10) = 0;
          }
          else {
            func_0x0325970c(iVar6,0,*(undefined4 *)(*(int *)(*(int *)(iVar16 + 0x10) + 0x60) + 0x38)
                           );
          }
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar9 = 0;
      puVar15 = *(undefined4 **)(_UNK_02153438 + 0x2152ee0);
      while( true ) {
        iVar6 = *(int *)(param_1 + 0x18);
        puVar13 = *(undefined4 **)(_UNK_0215343c + 0x2152ef4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0xc) <= iVar9) break;
        iVar6 = *(int *)(param_1 + 0x18);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x0328eea8(iVar6,iVar9,*puVar13);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(param_1 + 0x18);
        iVar6 = *(int *)(iVar6 + 0xc);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = func_0x0328eea8(iVar11,iVar9,*puVar13);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar16 = *(int *)(param_1 + 0x18);
        iStack_4c = *(int *)(iVar11 + 0x10);
        if (iVar16 == 0) {
          func_0x01384bf0();
        }
        iVar11 = func_0x0328eea8(iVar16,iVar9,**(undefined4 **)(_UNK_02153440 + 0x2152f90));
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        if (0 < iVar1) {
          uVar10 = *(undefined4 *)(iVar11 + 8);
          iVar11 = 0;
          do {
            iVar16 = aiStack_34[0];
            if (aiStack_34[0] == 0) {
              func_0x01384bf0();
            }
            *(undefined4 *)(iVar16 + 0xc) = 0;
            *(int *)(iVar16 + 0x10) = *(int *)(iVar16 + 0x10) + 1;
            iVar16 = iVar11 + iVar6;
            if (iVar11 < iVar16) {
              iVar17 = 0;
              do {
                iVar8 = *(int *)(param_1 + 0xc);
                if (iVar8 == 0) {
                  func_0x01384bf0();
                }
                iVar12 = iVar11 + iVar17;
                iVar2 = func_0x03259410(iVar8,iVar12,*puVar15);
                iVar8 = aiStack_34[0];
                if (iVar2 == 0) {
                  if (aiStack_34[0] == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *(int *)(iVar8 + 8);
                  uVar7 = *(uint *)(iVar8 + 0xc);
                  piVar5 = *(int **)(_UNK_02153444 + 0x2153068);
                  *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
                  iVar14 = *piVar5;
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  if (uVar7 < *(uint *)(iVar2 + 0xc)) {
                    *(uint *)(iVar8 + 0xc) = uVar7 + 1;
                    *(int *)(iVar2 + uVar7 * 4 + 0x10) = iVar12;
                  }
                  else {
                    func_0x0325970c(iVar8,iVar12,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38)
                                   );
                  }
                }
                iVar17 = iVar17 + 1;
              } while (iVar6 != iVar17);
            }
            iVar11 = aiStack_34[0];
            if (aiStack_34[0] == 0) {
              func_0x01384bf0();
            }
            func_0x03004950(iVar11,0,*(undefined4 *)(iVar11 + 0xc),aiStack_34[3],
                            **(undefined4 **)(_UNK_02153448 + 0x21530d8));
            iVar11 = aiStack_34[0];
            if (aiStack_34[0] == 0) {
              func_0x01384bf0();
            }
            puVar13 = *(undefined4 **)(_UNK_0215344c + 0x2153120);
            if (*(int *)(iVar11 + 0xc) < iStack_4c) {
              piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02153450 + 0x2153130),1);
              iVar11 = *(int *)(param_1 + 8);
              if (piVar5 == (int *)0x0) {
                func_0x01384bf0();
              }
              if ((iVar11 != 0) &&
                 (iVar17 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar5 + 0x20)), iVar17 == 0)) {
                uVar3 = func_0x01384c10();
                func_0x01384aa0(uVar3,0);
              }
              if (piVar5[3] == 0) {
                func_0x01384bf4();
              }
              piVar5[4] = iVar11;
              if (*(int *)(**(int **)(_UNK_02153454 + 0x2153198) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x028c23bc(**(undefined4 **)(_UNK_02153458 + 0x21531b4),piVar5,0);
              iVar11 = aiStack_34[0];
              if (aiStack_34[0] == 0) {
                func_0x01384bf0();
              }
              iStack_4c = *(int *)(iVar11 + 0xc);
            }
            if (0 < iStack_4c) {
              iVar11 = 0;
              do {
                iVar17 = aiStack_34[0];
                iVar8 = *(int *)(param_1 + 0xc);
                if (aiStack_34[0] == 0) {
                  func_0x01384bf0();
                }
                uVar3 = func_0x03259410(iVar17,iVar11,*puVar15);
                if (iVar8 == 0) {
                  func_0x01384bf0();
                }
                func_0x0325945c(iVar8,uVar3,uVar10,*puVar13);
                iVar11 = iVar11 + 1;
              } while (iStack_4c != iVar11);
            }
            iVar11 = iVar16;
          } while (iVar16 < iVar1);
        }
        iVar9 = iVar9 + 1;
      }
      func_0x028c98a0(&uStack_40,0);
      func_0x028c98a0(aiStack_34 + 1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3850,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Merge.ItemOutputRandomList$$PeekNext RVA 0x214345c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215345c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
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
  
  pcVar4 = (char *)(_UNK_02153588 + 0x2153470);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215358c + 0x2153484));
    func_0x01384978(*(undefined4 *)(_UNK_02153590 + 0x2153490));
    func_0x01384978(*(undefined4 *)(_UNK_02153594 + 0x215349c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3851,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3851,0);
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
    uVar6 = func_0x0245498c(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (-1 < iVar1) {
    iVar5 = *(int *)(param_1 + 0xc);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 < *(int *)(iVar5 + 0xc)) goto LAB_02153550;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar6 = func_0x02450284(1,0x100,0);
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  FUN_02152ab4(param_1);
LAB_02153550:
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar3) {
    func_0x0484c9cc(0,uVar3,**(undefined4 **)(_UNK_02153598 + 0x2153574));
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar3) {
    func_0x01384bf4();
  }
  return *(undefined4 *)(iVar1 + uVar3 * 4 + 0x10);
}



// ===== FAT.Merge.ItemOutputRandomList$$TakeNext RVA 0x214359c =====

void FUN_0215359c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x3852,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3852,0);
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
    func_0x0245498c(&uStack_30,0,0);
    return;
  }
  FUN_0215345c(param_1);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}



// ===== FAT.Merge.ItemOutputRandomList$$TakeNextIdx RVA 0x2143600 =====

void FUN_02153600(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x3853,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3853,0);
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
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}



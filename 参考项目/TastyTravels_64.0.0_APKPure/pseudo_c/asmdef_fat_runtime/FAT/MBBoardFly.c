/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardFly$$Setup RVA 0x1f08f20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f18f20(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01f18fe0 + 0x1f18f38);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f18fe4 + 0x1f18f4c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x251a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x251a,0);
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
  puVar2 = *(undefined4 **)(_UNK_01f18fe8 + 0x1f18fa8);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  iVar1 = func_0x034aaa34(*puVar2);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_0243bd68 + 0x243bcc0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0243bd6c + 0x243bcd4),uVar6,uVar3,0);
    *pcVar5 = '\x01';
  }
  iVar4 = func_0x0229f06c(0xa93,0);
  if (iVar4 == 0) {
    uStack_24 = **(undefined4 **)(_UNK_0243bd70 + 0x243bd3c);
    uStack_20 = 0xffffffff;
    uStack_1c = uVar6;
    uVar6 = func_0x0244f5f4(&uStack_24,0);
    func_0x0244a6f8(iVar1,uVar6,uVar3);
  }
  else {
    iVar4 = func_0x0229f13c(0xa93,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x021872a4(iVar4,iVar1,uVar6,uVar3);
  }
  return;
}



// ===== FAT.MBBoardFly$$InitOnPreOpen RVA 0x1f08fec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f18fec(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01f19120 + 0x1f19000);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f19124 + 0x1f19014));
    func_0x01384978(*(undefined4 *)(_UNK_01f19128 + 0x1f19020));
    func_0x01384978(*(undefined4 *)(_UNK_01f1912c + 0x1f1902c));
    func_0x01384978(*(undefined4 *)(_UNK_01f19130 + 0x1f19038));
    func_0x01384978(*(undefined4 *)(_UNK_01f19134 + 0x1f19044));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa573,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01f19138 + 0x1f1909c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f1913c + 0x1f190b8));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f19140 + 0x1f190cc));
    func_0x03cc80cc(uVar5,param_1,**(undefined4 **)(_UNK_01f19144 + 0x1f190e8),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349c574(iVar1,uVar5,**(undefined4 **)(_UNK_01f19148 + 0x1f1910c));
    iVar1 = func_0x0229f06c(0xa581,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450790(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_05189da8)(iVar1,0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0xa581,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa573,0);
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
  return;
}



// ===== FAT.MBBoardFly$$_FirstTimeShow RVA 0x1f0914c =====

void FUN_01f1914c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa581,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa581,0);
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
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450790(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,0,0);
  return;
}



// ===== FAT.MBBoardFly$$CleanupOnPostClose RVA 0x1f091d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f191d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01f19574 + 0x1f191f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f19578 + 0x1f19204));
    func_0x01384978(*(undefined4 *)(_UNK_01f1957c + 0x1f19210));
    func_0x01384978(*(undefined4 *)(_UNK_01f19580 + 0x1f1921c));
    func_0x01384978(*(undefined4 *)(_UNK_01f19584 + 0x1f19228));
    func_0x01384978(*(undefined4 *)(_UNK_01f19588 + 0x1f19234));
    func_0x01384978(*(undefined4 *)(_UNK_01f1958c + 0x1f19240));
    func_0x01384978(*(undefined4 *)(_UNK_01f19590 + 0x1f1924c));
    func_0x01384978(*(undefined4 *)(_UNK_01f19594 + 0x1f19258));
    func_0x01384978(*(undefined4 *)(_UNK_01f19598 + 0x1f19264));
    func_0x01384978(*(undefined4 *)(_UNK_01f1959c + 0x1f19270));
    *pcVar4 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xa582,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01f195a0 + 0x1f192d4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f195a4 + 0x1f192f0));
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01f195a8 + 0x1f19304));
    func_0x03cc80cc(uVar2,param_1,**(undefined4 **)(_UNK_01f195ac + 0x1f19320),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349c7cc(iVar1,uVar2,**(undefined4 **)(_UNK_01f195b0 + 0x1f19344));
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_38,iVar1,**(undefined4 **)(_UNK_01f195b4 + 0x1f19370));
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    iStack_1c = iStack_2c;
    puVar5 = *(undefined4 **)(_UNK_01f195b8 + 0x1f1938c);
    while (iVar3 = func_0x0145b12c(&uStack_28,*puVar5), iVar1 = iStack_1c, iVar3 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,0,0);
    }
    func_0x0145b14c(&uStack_28,**(undefined4 **)(_UNK_01f195bc + 0x1f193e8));
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450790(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,0,0);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450790(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,0,0);
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xa582,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardFly$$ShowFlyCenterReward RVA 0x1f095c8 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f195c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  int extraout_r12;
  bool bVar15;
  undefined4 in_cr12;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  pcVar11 = (char *)(iRam01f19e04 + 0x1f195f0);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f19e08 + 0x1f19608));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e0c + 0x1f19614));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e10 + 0x1f19620));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e14 + 0x1f1962c));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e18 + 0x1f19638));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e1c + 0x1f19644));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e20 + 0x1f19650));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e24 + 0x1f1965c));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e28 + 0x1f19668));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e2c + 0x1f19674));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e30 + 0x1f19680));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e34 + 0x1f1968c));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e38 + 0x1f19698));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e3c + 0x1f196a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e40 + 0x1f196b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e44 + 0x1f196bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f19e48 + 0x1f196c8));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa574,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f19e4c + 0x1f1973c));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_01f19e50 + 0x1f19764);
    *(undefined4 *)(iVar1 + 0x14) = param_3;
    *(undefined4 *)(iVar1 + 0x10) = param_2;
    uVar3 = *puVar2;
    *(undefined4 *)(iVar1 + 0x18) = param_4;
    *(undefined4 *)(iVar1 + 0x1c) = param_5;
    *(undefined4 *)(iVar1 + 0x20) = param_6;
    *(int *)(iVar1 + 8) = param_1;
    iVar4 = func_0x034aaa34(uVar3);
    iVar9 = *(int *)(param_1 + 0x20);
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x024504c0(iVar9,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0243c430(iVar4,uVar3,uVar5,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x024504c0(iVar4,0);
    piVar7 = (int *)0x0;
    if ((piVar6 != (int *)0x0) &&
       (piVar7 = piVar6, *piVar6 != **(int **)(_UNK_01f19e54 + 0x1f19800))) {
      piVar7 = (int *)0x0;
    }
    piVar6 = *(int **)(_UNK_01f19e58 + 0x1f1981c);
    iVar4 = *(int *)(*piVar6 + 0x74);
    *(int **)(iVar1 + 0xc) = piVar7;
    if (iVar4 == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0145b1cc(piVar7,0,0);
    if (iVar4 != 0) {
      piVar12 = *(int **)(_UNK_01f19e5c + 0x1f19854);
      piVar7 = (int *)func_0x01384ab8(*(undefined4 *)(iVar1 + 0x20),*piVar12);
      if (piVar7 == (int *)0x0) {
        uVar3 = 0x40000000;
      }
      else {
        iVar4 = *(int *)(iVar1 + 0xc);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x02f67194(iVar4,**(undefined4 **)(_UNK_01f19e60 + 0x1f19884));
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar9 = func_0x0145b1cc(iVar4,0,0);
        uVar3 = 0x40000000;
        if (iVar9 != 0) {
          iVar9 = *piVar7;
          uVar8 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar8 != 0) {
            piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar12) {
                puVar2 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
                goto LAB_01f19918;
              }
              uVar8 = uVar8 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar12,0);
LAB_01f19918:
          iVar9 = (*(code *)*puVar2)(piVar7,puVar2[1]);
          if (1 < iVar9) {
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uVar3 = func_0x02b6d094(iVar4,0);
          }
        }
        iVar4 = *piVar7;
        uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar8 != 0) {
          piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar12) {
              puVar2 = (undefined4 *)(iVar4 + *piVar6 * 8 + 200);
              goto LAB_01f1999c;
            }
            uVar8 = uVar8 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar12,1);
LAB_01f1999c:
        (*(code *)*puVar2)(piVar7,puVar2[1]);
      }
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar1 + 0xc);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0244ffd4(iVar4,0);
      uVar13 = *(undefined4 *)(param_1 + 0x28);
      if (*(int *)(**(int **)(_UNK_01f19e64 + 0x1f199e4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dda87c(uVar5,uVar3,uVar13,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar1 + 0xc);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0244ffd4(iVar4,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar4,1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar1 + 0xc);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0244fc34(iVar4,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(iVar1 + 0x10);
      uVar5 = *(undefined4 *)(iVar1 + 0x14);
      uVar13 = *(undefined4 *)(iVar1 + 0x18);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x024503d4(iVar4,uVar3,uVar5,uVar13,0);
      iVar4 = *(int *)(iVar1 + 0xc);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0244fc34(iVar4,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x02450158(iVar4,0,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x02f67194(iVar4,**(undefined4 **)(_UNK_01f19e68 + 0x1f19b14));
      iVar9 = func_0x01c24918(0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar1 + 0x1c);
      iVar14 = *(int *)(iVar9 + 0x40);
      iVar9 = iVar10;
      if (iVar10 == 0) {
        func_0x01384bf0();
        iVar9 = *(int *)(iVar1 + 0x1c);
        bVar15 = true;
        if (iVar9 == 0) {
          func_0x01384bf0();
          if (!bVar15) {
            coprocessor_storelong(0xc,in_cr12,extraout_r12 + 0x334);
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      uVar5 = *(undefined4 *)(iVar9 + 0x10);
      uVar3 = *(undefined4 *)(iVar10 + 8);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x01ce5a10(iVar14,uVar3,uVar5,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0267c9b0(iVar4,uVar3,0);
      if (*(int *)(**(int **)(_UNK_01f19e6c + 0x1f19bb0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0204f2f0(&uStack_50,0xb,0);
      piVar7 = *(int **)(_UNK_01f19e70 + 0x1f19be4);
      *(undefined4 *)(iVar1 + 0x2c) = uStack_48;
      *(undefined8 *)(iVar1 + 0x24) = uStack_50;
      uStack_38 = uStack_48;
      uStack_40 = uStack_50;
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar3 = func_0x02ce71fc(0);
      iVar4 = *(int *)(iVar1 + 0xc);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0244fc34(iVar4,0);
      uVar5 = func_0x02cf3d80(uVar5,0x3f800000,0x3e800000,0);
      pcVar11 = (char *)(_UNK_01f19e74 + 0x1f19c54);
      if (*pcVar11 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f19e78 + 0x1f19c68));
        *pcVar11 = '\x01';
      }
      iVar4 = *(int *)(**(int **)(_UNK_01f19e7c + 0x1f19c84) + 0x5c);
      uVar5 = func_0x0309e924(uVar5,*(float *)(iVar4 + 0xc) * fRam01f19e00,
                              *(float *)(iVar4 + 0x10) * fRam01f19e00,
                              *(float *)(iVar4 + 0x14) * fRam01f19e00,1,
                              **(undefined4 **)(_UNK_01f19e80 + 0x1f19cac));
      func_0x02cf668c(uVar3,uVar5,0);
      uVar5 = func_0x02cf24e8(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x24),
                              *(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x2c),0x3e800000
                              ,0,0);
      uVar5 = func_0x0309f0f8(uVar5,1,**(undefined4 **)(_UNK_01f19e84 + 0x1f19d00));
      func_0x02cf66d8(uVar3,uVar5,0);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f19e88 + 0x1f19d24));
      func_0x02ce3d80(uVar5,iVar1,**(undefined4 **)(_UNK_01f19e8c + 0x1f19d40),0);
      func_0x0309ead4(uVar3,uVar5,**(undefined4 **)(_UNK_01f19e90 + 0x1f19d58));
      func_0x03074b50(uVar3,**(undefined4 **)(_UNK_01f19e94 + 0x1f19d6c));
      iVar4 = *(int *)(param_1 + 0x24);
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar4 + 8);
      uVar8 = *(uint *)(iVar4 + 0xc);
      piVar7 = *(int **)(_UNK_01f19e98 + 0x1f19da8);
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
      iVar1 = *piVar7;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (uVar8 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar4 + 0xc) = uVar8 + 1;
        *(undefined4 *)(iVar9 + uVar8 * 4 + 0x10) = uVar3;
      }
      else {
        func_0x0328f170(iVar4,uVar3,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38))
        ;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa574,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0229269c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.MBBoardFly.<>c__DisplayClass10_0$$.ctor RVA 0x1f09e9c =====

void FUN_01f19e9c(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardFly$$_OnFlyCenterComplete RVA 0x1f09ea4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f19ea4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01f19f8c + 0x1f19ec4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f19f90 + 0x1f19edc));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa577,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f19f94 + 0x1f19f54));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = param_7;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x24) = param_4;
    *(undefined4 *)(iVar1 + 0x28) = param_5;
    *(undefined4 *)(iVar1 + 0x2c) = param_6;
    *(undefined4 *)(iVar1 + 0x14) = param_3;
    *(undefined4 *)(iVar1 + 0x18) = param_1;
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
  }
  else {
    iVar1 = func_0x0229f13c(0xa577,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02292508(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return iVar1;
}



// ===== FAT.MBBoardFly.<_OnFlyCenterComplete>d__11$$.ctor RVA 0x1f09f98 =====

void FUN_01f19f98(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MBBoardFly$$.ctor RVA 0x1f09fb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f19fb4(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01f1a02c + 0x1f19fc8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1a030 + 0x1f19fdc));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a034 + 0x1f19fe8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f1a038 + 0x1f19ffc));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01f1a03c + 0x1f1a010));
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.MBBoardFly.<>c__DisplayClass10_0$$<ShowFlyCenterReward>b__0 RVA 0x1f0a040 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1a040(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  
  pcVar2 = (char *)(_UNK_01f1a0f0 + 0x1f1a058);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1a0f4 + 0x1f1a06c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01f1a0f8 + 0x1f1a080));
  iVar4 = *(int *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  uStack_30 = *(undefined4 *)(param_1 + 0x20);
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  uStack_38 = *(undefined4 *)(param_1 + 0x28);
  uStack_34 = *(undefined4 *)(param_1 + 0x2c);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = FUN_01f19ea4(iVar4,uVar6,uVar5,uVar7);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0229f06c(0xcb,0,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0xcb,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    pcVar2 = (char *)(_UNK_021786c4 + 0x21785d0);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021786c8 + 0x21785e4),iVar1,uVar5,0);
      *pcVar2 = '\x01';
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,uVar5,0);
    iVar3 = *(int *)(iVar4 + 8);
    uVar5 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar6,0,0);
    func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021786cc + 0x21786b4));
    return;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0518b080)(iVar1,uVar5,0);
  return;
}



// ===== FAT.MBBoardFly.<>c__DisplayClass11_0$$.ctor RVA 0x1f0a0fc =====

void FUN_01f1a0fc(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardFly.<>c__DisplayClass11_0$$<_OnFlyCenterComplete>b__0 RVA 0x1f0a104 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1a104(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01f1a1a8 + 0x1f1a118);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1a1ac + 0x1f1a12c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a1b0 + 0x1f1a138));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a1b4 + 0x1f1a144));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01f1a1b8 + 0x1f1a158) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f1a1bc + 0x1f1a174));
  uVar2 = *(undefined4 *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar2,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.MBBoardFly.<>c__DisplayClass11_0$$<_OnFlyCenterComplete>b__1 RVA 0x1f0a1c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1a1c4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
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
  
  pcVar7 = (char *)(_UNK_01f1a4b4 + 0x1f1a1d8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1a4b8 + 0x1f1a1ec));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a4bc + 0x1f1a1f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a4c0 + 0x1f1a204));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a4c4 + 0x1f1a210));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a4c8 + 0x1f1a21c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a4cc + 0x1f1a228));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a4d0 + 0x1f1a234));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a4d4 + 0x1f1a240));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a4d8 + 0x1f1a24c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a4dc + 0x1f1a258));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a4e0 + 0x1f1a264));
    func_0x01384978(*(undefined4 *)(_UNK_01f1a4e4 + 0x1f1a270));
    *pcVar7 = '\x01';
  }
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar8;
  uVar5 = (uint)*(byte *)(**(int **)(_UNK_01f1a4e8 + 0x1f1a290) + 0xb8);
  uVar4 = (uint)*(byte *)(iVar1 + 0xb8);
  if ((uVar4 < uVar5) ||
     (*(int *)(*(int *)(iVar1 + 100) + uVar5 * 4 + -4) != **(int **)(_UNK_01f1a4e8 + 0x1f1a290))) {
    uVar5 = (uint)*(byte *)(**(int **)(_UNK_01f1a4f4 + 0x1f1a2c4) + 0xb8);
    if ((uVar4 < uVar5) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar5 * 4 + -4) != **(int **)(_UNK_01f1a4f4 + 0x1f1a2c4)))
    {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_01f1a500 + 0x1f1a2f0) + 0xb8);
      if ((uVar5 <= uVar4) &&
         (*(int *)(*(int *)(iVar1 + 100) + uVar5 * 4 + -4) == **(int **)(_UNK_01f1a500 + 0x1f1a2f0))
         ) {
        return;
      }
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_01f1a504 + 0x1f1a31c) + 0xb8);
      if ((uVar4 < uVar5) ||
         (*(int *)(*(int *)(iVar1 + 100) + uVar5 * 4 + -4) != **(int **)(_UNK_01f1a504 + 0x1f1a31c))
         ) {
        uVar5 = (uint)*(byte *)(**(int **)(_UNK_01f1a510 + 0x1f1a348) + 0xb8);
        if ((uVar4 < uVar5) ||
           (*(int *)(*(int *)(iVar1 + 100) + uVar5 * 4 + -4) !=
            **(int **)(_UNK_01f1a510 + 0x1f1a348))) {
          uVar5 = (uint)*(byte *)(**(int **)(_UNK_01f1a51c + 0x1f1a374) + 0xb8);
          if (uVar4 < uVar5) {
            return;
          }
          if (*(int *)(*(int *)(iVar1 + 100) + uVar5 * 4 + -4) !=
              **(int **)(_UNK_01f1a51c + 0x1f1a374)) {
            return;
          }
          if (*(int *)(**(int **)(_UNK_01f1a520 + 0x1f1a3a0) + 0x74) == 0) {
            func_0x01384ab4();
          }
          puVar2 = *(undefined4 **)(_UNK_01f1a524 + 0x1f1a3bc);
        }
        else {
          if (*(int *)(**(int **)(_UNK_01f1a514 + 0x1f1a474) + 0x74) == 0) {
            func_0x01384ab4();
          }
          puVar2 = *(undefined4 **)(_UNK_01f1a518 + 0x1f1a490);
        }
      }
      else {
        if (*(int *)(**(int **)(_UNK_01f1a508 + 0x1f1a44c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        puVar2 = *(undefined4 **)(_UNK_01f1a50c + 0x1f1a468);
      }
    }
    else {
      if (*(int *)(**(int **)(_UNK_01f1a4f8 + 0x1f1a424) + 0x74) == 0) {
        func_0x01384ab4();
      }
      puVar2 = *(undefined4 **)(_UNK_01f1a4fc + 0x1f1a440);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = piVar8[0xf];
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 != *(int *)(iVar3 + 0x50)) {
      return;
    }
    if (*(int *)(**(int **)(_UNK_01f1a4ec + 0x1f1a3f8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar2 = *(undefined4 **)(_UNK_01f1a4f0 + 0x1f1a414);
  }
  iVar1 = func_0x0300d558(*puVar2);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0229f06c(0x3f,0);
  if (iVar3 == 0) {
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  iVar3 = func_0x0229f13c(0x3f,0);
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
  func_0x01485278(&uStack_30,iVar1,0);
  iVar9 = *(int *)(iVar3 + 8);
  uVar10 = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = *(int *)(iVar3 + 0x10);
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



// ===== FAT.MBBoardFly.<_OnFlyCenterComplete>d__11$$System.IDisposable.Dispose RVA 0x1f0a528 =====

void FUN_01f1a528(void)

{
  return;
}



// ===== FAT.MBBoardFly.<_OnFlyCenterComplete>d__11$$MoveNext RVA 0x1f0a52c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f1a52c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *extraout_r3;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uStack_34;
  
  pcVar7 = (char *)(_UNK_01f1b200 + 0x1f1a54c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1b204 + 0x1f1a560));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b208 + 0x1f1a56c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b20c + 0x1f1a578));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b210 + 0x1f1a584));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b214 + 0x1f1a590));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b218 + 0x1f1a59c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b21c + 0x1f1a5a8));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b220 + 0x1f1a5b4));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b224 + 0x1f1a5c0));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b228 + 0x1f1a5cc));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b22c + 0x1f1a5d8));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b230 + 0x1f1a5e4));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b234 + 0x1f1a5f0));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b238 + 0x1f1a5fc));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b23c + 0x1f1a608));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b240 + 0x1f1a614));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b244 + 0x1f1a620));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b248 + 0x1f1a62c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b24c + 0x1f1a638));
    *pcVar7 = '\x01';
  }
  iVar13 = *(int *)(param_1 + 0x18);
  uStack_34 = 0;
  uVar4 = 0xffffffff;
  uVar1 = 0;
  uVar3 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    puVar2 = *(undefined4 **)(&UNK_01f1a688 + _UNK_01f1b250);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar10 = func_0x01384be4(*puVar2);
    func_0x0244f5a0(iVar10,0);
    piVar11 = *(int **)(param_1 + 0x10);
    *(int *)(param_1 + 0x20) = iVar10;
    if (iVar10 == 0) {
      func_0x01384bf0();
      iVar10 = *(int *)(param_1 + 0x20);
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      piRam00000008 = piVar11;
      if (iVar10 != 0) goto code_r0x01f1aae4;
      func_0x01384bf0();
      iVar10 = *(int *)(param_1 + 0x20);
      uRam0000000c = uVar3;
      if (iVar10 != 0) goto code_r0x01f1aae8;
      iVar8 = func_0x01384bf0();
      iVar10 = 0;
      piVar6 = extraout_r3;
code_r0x01f1b13c:
      puVar2 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
code_r0x01f1b148:
      uVar3 = (*(code *)*puVar2)(piVar11,puVar2[1]);
      iVar8 = *(int *)(param_1 + 0x20);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar1 = *(undefined4 *)(iVar8 + 0xc);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      uVar15 = *(undefined4 *)(iVar13 + 0x14);
      uVar16 = *(undefined4 *)(param_1 + 0x20);
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_01f1b188 + _UNK_01f1b27c));
      func_0x024500b4(uVar4,uVar16,**(undefined4 **)(&UNK_01f1b1b0 + _UNK_01f1b280),0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      func_0x02b6cd60(iVar10,uVar3,uVar1,uVar15,uVar4,0);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      *(int **)(iVar10 + 8) = piVar11;
code_r0x01f1aae4:
      *(undefined4 *)(iVar10 + 0xc) = uVar3;
code_r0x01f1aae8:
      if (*(int *)(iVar10 + 8) == 0) {
code_r0x01f1ab30:
        iVar10 = func_0x01c24918(0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(iVar10 + 8);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x01bf3284(iVar10,**(undefined4 **)(&UNK_01f1ab68 + _UNK_01f1b254),0);
      }
      else {
        iVar10 = *(int *)(param_1 + 0x20);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        piVar11 = *(int **)(iVar10 + 8);
        if (piVar11 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar10 = (**(code **)(*piVar11 + 0x110))(piVar11,*(undefined4 *)(*piVar11 + 0x114));
        if (iVar10 != 0) goto code_r0x01f1ab30;
      }
      if (*(int *)(**(int **)(&UNK_01f1ab7c + _UNK_01f1b258) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar10 = func_0x0300d558(**(undefined4 **)(&UNK_01f1ab98 + _UNK_01f1b25c));
      iVar8 = *(int *)(param_1 + 0x20);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(iVar8 + 8);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar10,uVar3,**(undefined4 **)(&UNK_01f1abd0 + _UNK_01f1b260));
      iVar10 = *(int *)(param_1 + 0x20);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      piVar12 = *(int **)(&UNK_01f1abf4 + _UNK_01f1b264);
      piVar11 = (int *)func_0x01384ab8(*(undefined4 *)(iVar10 + 8),*piVar12);
      if (piVar11 == (int *)0x0) {
        uVar3 = 0x3f800000;
      }
      else {
        iVar10 = *piVar11;
        uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar12) {
              puVar2 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
              goto code_r0x01f1ac60;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar11,*piVar12,0);
code_r0x01f1ac60:
        iVar10 = (*(code *)*puVar2)(piVar11,puVar2[1]);
        uVar3 = 0x3fc00000;
        if (iVar10 < 2) {
          uVar3 = 0x3f800000;
        }
      }
      uVar1 = func_0x01384be4(**(undefined4 **)(&UNK_01f1ac8c + _UNK_01f1b268));
      func_0x0245031c(uVar1,uVar3,0);
      *(undefined4 *)(param_1 + 0x30) = uVar1;
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar13 + 0x14);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = func_0x0244ffd4(iVar10,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar10,1,0);
      iVar10 = *(int *)(param_1 + 0x20);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      piVar11 = *(int **)(iVar10 + 8);
      if (piVar11 == (int *)0x0) {
code_r0x01f1ae0c:
        iVar10 = *(int *)(param_1 + 0x20);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        piVar11 = *(int **)(iVar10 + 8);
        if (piVar11 != (int *)0x0) {
          uVar5 = (uint)*(byte *)(**(int **)(&UNK_01f1ae34 + _UNK_01f1b270) + 0xb8);
          if ((uVar5 <= *(byte *)(*piVar11 + 0xb8)) &&
             (*(int *)(*(int *)(*piVar11 + 100) + uVar5 * 4 + -4) ==
              **(int **)(&UNK_01f1ae34 + _UNK_01f1b270))) {
            iVar10 = *(int *)(param_1 + 0x20);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar10 = *(int *)(iVar10 + 0xc);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            uVar3 = func_0x02756fa0(piVar11,*(undefined4 *)(iVar10 + 8),&uStack_34,0);
            uVar3 = func_0x027566c0(piVar11,uVar3,0);
            iVar10 = (**(code **)(*piVar11 + 0x118))(piVar11,*(undefined4 *)(*piVar11 + 0x11c));
            uVar1 = *(undefined4 *)(iVar13 + 0x14);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            func_0x02b62de4(iVar10,uVar1,uVar3,0);
          }
        }
        iVar10 = *(int *)(iVar13 + 0x18);
      }
      else {
        uVar5 = (uint)*(byte *)(**(int **)(&UNK_01f1ad14 + _UNK_01f1b26c) + 0xb8);
        if ((*(byte *)(*piVar11 + 0xb8) < uVar5) ||
           (*(int *)(*(int *)(*piVar11 + 100) + uVar5 * 4 + -4) !=
            **(int **)(&UNK_01f1ad14 + _UNK_01f1b26c))) goto code_r0x01f1ae0c;
        iVar10 = *(int *)(param_1 + 0x20);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        piVar6 = *(int **)(iVar10 + 8);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar10 = (**(code **)(*piVar6 + 0x108))(piVar6,*(undefined4 *)(*piVar6 + 0x10c));
        if (iVar10 == 0) goto code_r0x01f1ae0c;
        iVar10 = *(int *)(param_1 + 0x20);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(iVar10 + 0xc);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar8 = piVar11[0xf];
        iVar10 = *(int *)(iVar10 + 8);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (iVar10 != *(int *)(iVar8 + 0x50)) goto code_r0x01f1ae0c;
        iVar10 = (**(code **)(*piVar11 + 0x118))(piVar11,*(undefined4 *)(*piVar11 + 0x11c));
        uVar1 = *(undefined4 *)(iVar13 + 0x14);
        uVar3 = func_0x02ad4d60(piVar11,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x02b62de4(iVar10,uVar1,uVar3,0);
        iVar10 = *(int *)(iVar13 + 0x1c);
      }
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = func_0x02450790(iVar10,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar10,1,0);
      iVar10 = *(int *)(param_1 + 0x20);
      piVar11 = *(int **)(iVar13 + 0x14);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar10 + 0xc);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x014867c8(iVar10 + 0x10,0);
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar11 + 0x2d0))(piVar11,uVar3,*(undefined4 *)(*piVar11 + 0x2d4));
      iVar10 = *(int *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x34) = 0;
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      piVar11 = (int *)func_0x01384ab8(*(undefined4 *)(iVar10 + 8),*piVar12);
      if (piVar11 == (int *)0x0) {
        iVar10 = *(int *)(param_1 + 0x20);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        piVar11 = *(int **)(iVar10 + 8);
        if (piVar11 != (int *)0x0) {
          iVar10 = *piVar11;
          uVar5 = (uint)*(byte *)(**(int **)(&UNK_01f1b074 + _UNK_01f1b284) + 0xb8);
          if ((uVar5 <= *(byte *)(iVar10 + 0xb8)) &&
             (*(int *)(*(int *)(iVar10 + 100) + uVar5 * 4 + -4) ==
              **(int **)(&UNK_01f1b074 + _UNK_01f1b284))) {
            iVar10 = *(int *)(param_1 + 0x20);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar10 = *(int *)(iVar10 + 0xc);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            if (999 < *(int *)(iVar10 + 0x10)) {
              iVar10 = *(int *)(param_1 + 0x20);
              piVar11 = *(int **)(iVar13 + 0x14);
              if (iVar10 == 0) {
                func_0x01384bf0();
              }
              iVar13 = *(int *)(iVar10 + 0xc);
              if (iVar13 == 0) {
                func_0x01384bf0();
              }
              uVar3 = func_0x028a3194(*(undefined4 *)(iVar13 + 0x10),0);
              if (piVar11 == (int *)0x0) {
                func_0x01384bf0();
              }
              (**(code **)(*piVar11 + 0x2d0))(piVar11,uVar3,*(undefined4 *)(*piVar11 + 0x2d4));
            }
          }
        }
      }
      else {
        iVar10 = *(int *)(param_1 + 0x1c);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x02f67194(iVar10,**(undefined4 **)(&UNK_01f1afc0 + _UNK_01f1b274));
        piVar6 = *(int **)(&UNK_01f1afd8 + _UNK_01f1b278);
        *(undefined4 *)(param_1 + 0x34) = uVar3;
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar10 = func_0x0145b1cc(uVar3,0,0);
        if (iVar10 != 0) {
          iVar8 = *piVar11;
          iVar10 = *(int *)(param_1 + 0x34);
          uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar12) goto code_r0x01f1b13c;
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar11,*piVar12,0);
          goto code_r0x01f1b148;
        }
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    uVar4 = 1;
    break;
  case 1:
    iVar10 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    fVar17 = _UNK_01f1aac4;
    piVar11 = *(int **)(iVar10 + 8);
    if (piVar11 != (int *)0x0) {
      uVar5 = (uint)*(byte *)(**(int **)(&UNK_01f1a6ec + _UNK_01f1b288) + 0xb8);
      if ((uVar5 <= *(byte *)(*piVar11 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar11 + 100) + uVar5 * 4 + -4) ==
          **(int **)(&UNK_01f1a6ec + _UNK_01f1b288))) {
        iVar10 = func_0x01c24918(0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(iVar10 + 0xe4);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(iVar10 + 0x14);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01d64a88(iVar10,0);
        if (iVar10 != 0) {
          if (*(int *)(**(int **)(&UNK_01f1a76c + _UNK_01f1b28c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar10 = func_0x0300d558(**(undefined4 **)(&UNK_01f1a788 + _UNK_01f1b290));
          iVar8 = *(int *)(param_1 + 0x20);
          iVar14 = piVar11[0x1f];
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar8 + 0xc);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar9 = piVar11[0x1f];
          iVar8 = *(int *)(iVar8 + 0x10);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          func_0x034a575c(iVar10,iVar14 - iVar8,iVar9,0,
                          **(undefined4 **)(&UNK_01f1a7e0 + _UNK_01f1b294));
          fVar17 = 0.5;
        }
      }
    }
    iVar10 = *(int *)(param_1 + 0x1c);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x0244ffd4(iVar10,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar10,0,0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar13 + 0x18);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02450790(iVar10,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar10,0,0);
    iVar10 = *(int *)(iVar13 + 0x1c);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02450790(iVar10,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar10,0,0);
    iVar13 = *(int *)(iVar13 + 0x14);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = func_0x0244ffd4(iVar13,0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar13,0,0);
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    if (*(int *)(**(int **)(&UNK_01f1a8f8 + _UNK_01f1b298) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar13 = func_0x0145b1cc(uVar3,0,0);
    if (iVar13 != 0) {
      iVar13 = *(int *)(param_1 + 0x34);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      func_0x02b6d194(iVar13,0);
    }
    iVar13 = *(int *)(param_1 + 0x20);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar13 + 0xc);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar3 = *(undefined4 *)(iVar13 + 8);
    if (*(int *)(**(int **)(&UNK_01f1a96c + _UNK_01f1b29c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar13 = func_0x02050728(uVar3,0);
    if (iVar13 == 0) {
      iVar13 = func_0x01c24918(0);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(param_1 + 0x20);
      iVar13 = *(int *)(iVar13 + 0x40);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(iVar10 + 0xc);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdf088(iVar13,uVar3,0);
      goto code_r0x01f1aab8;
    }
    if (fVar17 <= 0.0) goto code_r0x01f1a9d0;
    uVar3 = func_0x01384be4(**(undefined4 **)(&UNK_01f1a9ac + _UNK_01f1b2a0));
    func_0x0245031c(uVar3,fVar17,0);
    uVar4 = 2;
    break;
  case 2:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
code_r0x01f1a9d0:
    iVar10 = *(int *)(param_1 + 0x20);
    iVar13 = iVar10;
    if (iVar10 == 0) {
      func_0x01384bf0();
      iVar13 = *(int *)(param_1 + 0x20);
    }
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    uVar15 = *(undefined4 *)(param_1 + 0x28);
    uVar16 = *(undefined4 *)(param_1 + 0x2c);
    uVar1 = *(undefined4 *)(iVar10 + 0xc);
    uVar3 = func_0x01384be4(**(undefined4 **)(&UNK_01f1aa4c + _UNK_01f1b2a4));
    func_0x024500b4(uVar3,iVar13,**(undefined4 **)(&UNK_01f1aa74 + _UNK_01f1b2a8),0);
    if (*(int *)(**(int **)(&UNK_01f1aa88 + _UNK_01f1b2ac) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0206de24(uVar1,uVar4,uVar15,uVar16,uVar3,0,0,0);
code_r0x01f1aab8:
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    uVar4 = 3;
    break;
  case 3:
    goto code_r0x01f1b1ec;
  default:
    goto LAB_01f1b1f0;
  }
  uVar1 = 1;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
code_r0x01f1b1ec:
  *(undefined4 *)(param_1 + 8) = uVar4;
  uVar3 = uVar1;
LAB_01f1b1f0:
  return uVar3;
}



// ===== FAT.MBBoardFly.<_OnFlyCenterComplete>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1f0b2b0 =====

undefined4 FUN_01f1b2b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBBoardFly.<_OnFlyCenterComplete>d__11$$System.Collections.IEnumerator.Reset RVA 0x1f0b2b8 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1b2b8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01f1b2f4 + 0x1f1b2c8));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01f1b2f8 + 0x1f1b2e4));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.MBBoardFly.<_OnFlyCenterComplete>d__11$$System.Collections.IEnumerator.get_Current RVA 0x1f0b2fc =====

undefined4 FUN_01f1b2fc(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



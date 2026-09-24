/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideRequireChecker$$Reset RVA 0x1c655c8 =====

void FUN_01c755c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x94bb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94bb,0);
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
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.GuideRequireChecker$$IsMatchRequirement RVA 0x1c69100 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c79100(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
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
  
  iVar1 = func_0x0229f06c(0x94c0,0);
  if (iVar1 == 0) {
    pcVar8 = (char *)(_UNK_01c7b0b8 + 0x1c7aee0);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c7b0bc + 0x1c7aef4));
      func_0x01384978(*(undefined4 *)(_UNK_01c7b0c0 + 0x1c7af00));
      func_0x01384978(*(undefined4 *)(_UNK_01c7b0c4 + 0x1c7af0c));
      *pcVar8 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x94c1,0);
    if (iVar1 == 0) {
      piVar11 = *(int **)(_UNK_01c7b0c8 + 0x1c7af70);
      piVar12 = *(int **)(_UNK_01c7b0cc + 0x1c7af78);
      piVar13 = *(int **)(_UNK_01c7b0d0 + 0x1c7af80);
      iVar1 = 0;
      do {
        iVar9 = iVar1;
        if (param_2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *param_2;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar11) {
              puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto LAB_01c7afdc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_2,*piVar11,0);
LAB_01c7afdc:
        iVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
        if (iVar3 <= iVar9) break;
        if (param_2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *param_2;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar12) {
              puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto LAB_01c7b054;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_2,*piVar12,0);
LAB_01c7b054:
        uVar10 = (*(code *)*puVar2)(param_2,iVar9,puVar2[1]);
        if (*(int *)(*piVar13 + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar10 = func_0x02565ec0(uVar10,0);
        iVar4 = func_0x01c7b0d4(param_1,uVar10);
        iVar1 = iVar9 + 1;
      } while (iVar4 != 0);
      return (uint)(iVar3 <= iVar9);
    }
    iVar1 = func_0x0229f13c(0x94c1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94c0,0);
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
  func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7,0,0);
  uVar5 = func_0x0245496c(&uStack_38,0,0);
  return uVar5;
}



// ===== FAT.GuideRequireChecker$$IsMatchUIState RVA 0x1c691f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c791f4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int aiStack_24 [3];
  
  iVar1 = func_0x0229f06c(0x942b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x942b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    aiStack_24[1] = 0;
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3);
    return uVar2;
  }
  pcVar8 = (char *)(_UNK_01c7c870 + 0x1c7b89c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7c874 + 0x1c7b8b0));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c878 + 0x1c7b8bc));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c87c + 0x1c7b8c8));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c880 + 0x1c7b8d4));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c884 + 0x1c7b8e0));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c888 + 0x1c7b8ec));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c88c + 0x1c7b8f8));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c890 + 0x1c7b904));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c894 + 0x1c7b910));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c898 + 0x1c7b91c));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c89c + 0x1c7b928));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8a0 + 0x1c7b934));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8a4 + 0x1c7b940));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8a8 + 0x1c7b94c));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8ac + 0x1c7b958));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8b0 + 0x1c7b964));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8b4 + 0x1c7b970));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8b8 + 0x1c7b97c));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8bc + 0x1c7b988));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8c0 + 0x1c7b994));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8c4 + 0x1c7b9a0));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9a0 + 0x1c7b9ac));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9a4 + 0x1c7b9b8));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9a8 + 0x1c7b9c4));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9ac + 0x1c7b9d0));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9b0 + 0x1c7b9dc));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9b4 + 0x1c7b9e8));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9b8 + 0x1c7b9f4));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9bc + 0x1c7ba00));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9c0 + 0x1c7ba0c));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9c4 + 0x1c7ba18));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9c8 + 0x1c7ba24));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9cc + 0x1c7ba30));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9d0 + 0x1c7ba3c));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9d4 + 0x1c7ba48));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9d8 + 0x1c7ba54));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9dc + 0x1c7ba60));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9e0 + 0x1c7ba6c));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9e4 + 0x1c7ba78));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9e8 + 0x1c7ba84));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9ec + 0x1c7ba90));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9f0 + 0x1c7ba9c));
    *pcVar8 = '\x01';
  }
  aiStack_24[0] = 0;
  iVar1 = func_0x0229f06c(0x942c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x942c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  puVar12 = *(undefined4 **)(_UNK_01c7cacc + 0x1c7bb0c);
  iVar1 = func_0x034aaa34(*puVar12);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 0;
  iVar1 = func_0x01ee76dc(iVar1,0);
  if (iVar1 != 0) {
    return 0;
  }
  switch(param_2) {
  case 0:
    piVar7 = *(int **)(&UNK_01c7bddc + _UNK_01c7cd88);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    uVar2 = func_0x01c8560c(param_1,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x3c));
    return uVar2;
  case 1:
    uVar2 = func_0x01c85f38(param_1);
    return uVar2;
  case 2:
    iVar1 = func_0x01c85f38(param_1);
    if (iVar1 != 0) {
      uVar2 = func_0x01c85ffc(param_1,param_3);
      return uVar2;
    }
    return 0;
  case 3:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7be48 + _UNK_01c7cd8c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x13c);
    break;
  case 4:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7be80 + _UNK_01c7cd90);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xf0);
    break;
  case 5:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7beb8 + _UNK_01c7cd94);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xec);
    break;
  case 6:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7bef0 + _UNK_01c7cd98);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x2b8);
    break;
  case 7:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7bf28 + _UNK_01c7cef4);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x2a0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,uVar11,0);
    if (iVar1 != 0) {
      uVar2 = func_0x01c86178(param_1);
      return uVar2;
    }
    return 0;
  case 8:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7bf90 + _UNK_01c7cef8);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x2a0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,uVar11,0);
    if (iVar1 != 0) {
      uVar2 = func_0x01c863e4(param_1);
      return uVar2;
    }
    return 0;
  case 9:
    iVar1 = func_0x034aaa34(*puVar12);
    iVar9 = func_0x01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0xa8);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x80);
    if (iVar9 != 0) {
      iVar9 = *(int *)(iVar9 + 0x4c);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c048 + _UNK_01c7cfd4);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x140);
    break;
  case 10:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xb0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02379644(iVar1,param_3,0);
    return uVar2;
  case 0xb:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01aa631c(iVar1,0);
    return uVar2;
  case 0xc:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x1c,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c12c + _UNK_01c7d0ec) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c12c + _UNK_01c7d0ec))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x2a];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c194 + _UNK_01c7d0f0);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x470);
    break;
  case 0xd:
    iVar1 = func_0x034aaa34(*puVar12);
    iVar9 = func_0x01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0xcc);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x0261faa4(iVar9,0);
    if (iVar9 != 0) {
      iVar9 = *(int *)(iVar9 + 0x80);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c224 + _UNK_01c7d1d8);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x4ac);
    break;
  case 0xe:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01ab8388(iVar1,0);
    return uVar2;
  case 0xf:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x28,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c2cc + _UNK_01c7d2b4) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c2cc + _UNK_01c7d2b4))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x13];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c334 + _UNK_01c7d2b8);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x1c);
    break;
  case 0x10:
    uVar2 = func_0x01c864d8(param_1);
    return uVar2;
  case 0x11:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x02b43c64(iVar1,0x2b,0);
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c3b4 + _UNK_01c7d394) + 0xb8);
    if (*(byte *)(*piVar7 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) !=
        **(int **)(&UNK_01c7c3b4 + _UNK_01c7d394)) {
      return 0;
    }
    if (piVar7[0xf] == 0) {
      return 0;
    }
    if (*(int *)(piVar7[0xf] + 0x48) != param_3) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    iVar9 = piVar7[0x25];
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0xc);
    if (iVar9 == 0) {
      piVar7 = *(int **)(&UNK_01c7c428 + _UNK_01c7d398);
      iVar9 = *piVar7;
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4();
        iVar9 = *piVar7;
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x664);
    }
    break;
  case 0x12:
    uVar2 = func_0x01c8592c(param_1);
    return uVar2;
  case 0x13:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x36,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c4a4 + _UNK_01c7d474) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c4a4 + _UNK_01c7d474))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
code_r0x01c7c500:
      piVar6 = *(int **)(&UNK_01c7c50c + _UNK_01c7d4f4);
      iVar9 = *piVar6;
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4();
        iVar9 = *piVar6;
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x694);
    }
    else {
      iVar9 = piVar7[0x18];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 == 0) goto code_r0x01c7c500;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,iVar9,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
      uVar11 = 0;
    }
    else {
      iVar9 = piVar7[0x18];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar11 = *(undefined4 *)(iVar9 + 0xc);
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x01ee8b58(iVar1,uVar11,0);
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e948 + _UNK_01c7ebf8) + 0xb8);
    if (*(byte *)(*piVar7 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) !=
        **(int **)(&UNK_01c7e948 + _UNK_01c7ebf8)) {
      return 0;
    }
    piVar7 = (int *)piVar7[0x25];
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e988 + _UNK_01c7ebfc) + 0xb8);
    if (*(byte *)(*piVar7 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) !=
        **(int **)(&UNK_01c7e988 + _UNK_01c7ebfc)) {
      return 0;
    }
    uVar2 = func_0x028f437c(piVar7,0);
code_r0x01c7e720:
    return uVar2 ^ 1;
  case 0x14:
    uVar2 = func_0x01c85b30(param_1);
    return uVar2;
  case 0x15:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x3c,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c5d8 + _UNK_01c7d530) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c5d8 + _UNK_01c7d530))) {
        piVar7 = (int *)0x0;
      }
    }
    if (0 < param_3) {
      if (piVar7 == (int *)0x0) {
        return 0;
      }
      iVar1 = func_0x02aa2ce8(piVar7,0);
      if (iVar1 != param_3) {
        return 0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0xf];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) goto joined_r0x01c7cd80;
    }
    piVar7 = *(int **)(&UNK_01c7c668 + _UNK_01c7d5f0);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 2000);
    goto joined_r0x01c7cd80;
  case 0x16:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xb0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x023755c0(iVar1,0);
    return uVar2;
  case 0x17:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x3b,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c710 + _UNK_01c7d708) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c710 + _UNK_01c7d708))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x20];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c778 + _UNK_01c7d70c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x6e0);
    break;
  case 0x18:
  case 0x22:
  case 0x23:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dbb000(iVar1,0);
    if (iVar1 != 0) {
      piVar7 = *(int **)(&UNK_01c7bcd4 + _UNK_01c7cba8);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      iVar1 = func_0x01c8560c(param_1,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x3c));
      uVar2 = 0;
      if (iVar1 != 0) {
        iVar1 = func_0x034aaa34(*puVar12);
        iVar9 = *piVar7;
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x01384ab4();
          iVar9 = *piVar7;
        }
        uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x3c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x01eead9c(iVar1,uVar11,0);
      }
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
      iVar1 = func_0x02141ef4(iVar1,0);
      if (iVar1 != 0) {
        iVar1 = func_0x01c85560(param_1,5);
        if (iVar1 != 0) {
          uVar3 = func_0x01c85560(param_1,10);
          return uVar2 | uVar3;
        }
        return uVar2;
      }
      return uVar2;
    }
    return 0;
  case 0x19:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x47,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c7e8 + _UNK_01c7d794) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c7e8 + _UNK_01c7d794))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x2a];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c850 + _UNK_01c7d820);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x840);
    break;
  case 0x1a:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x45,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c918 + _UNK_01c7d8cc) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c918 + _UNK_01c7d8cc))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x15];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c980 + _UNK_01c7d8d0);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x830);
    break;
  case 0x1b:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x4a,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7ca44 + _UNK_01c7d9ac) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7ca44 + _UNK_01c7d9ac))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x12];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7caac + _UNK_01c7da88);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x56c);
    break;
  default:
    goto LAB_01c7bb38;
  case 0x1d:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x49,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7cb20 + _UNK_01c7da8c) + 0xb8);
      if ((*(byte *)(*piVar6 + 0xb8) < uVar2) ||
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7cb20 + _UNK_01c7da8c))) {
        func_0x01384fb4();
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x24];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) goto code_r0x01c7d0ac;
    }
    piVar7 = *(int **)(&UNK_01c7cb88 + _UNK_01c7db68);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x5dc);
    goto code_r0x01c7d0ac;
  case 0x1e:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x36,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7cbfc + _UNK_01c7db6c) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7cbfc + _UNK_01c7db6c))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x18];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) goto code_r0x01c7cc80;
    }
    piVar6 = *(int **)(&UNK_01c7cc64 + _UNK_01c7dc48);
    iVar9 = *piVar6;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar6;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x694);
code_r0x01c7cc80:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,iVar9,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
      uVar11 = 0;
    }
    else {
      iVar9 = piVar7[0x18];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar11 = *(undefined4 *)(iVar9 + 0xc);
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x01ee8b58(iVar1,uVar11,0);
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e9fc + _UNK_01c7ec00) + 0xb8);
    if (*(byte *)(*piVar7 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) !=
        **(int **)(&UNK_01c7e9fc + _UNK_01c7ec00)) {
      return 0;
    }
    if ((int *)piVar7[0x25] == (int *)0x0) {
      return 0;
    }
    iVar1 = *(int *)piVar7[0x25];
    uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7ea3c + _UNK_01c7ec04) + 0xb8);
    if (uVar2 <= *(byte *)(iVar1 + 0xb8)) {
      return (uint)(*(int *)(*(int *)(iVar1 + 100) + uVar2 * 4 + -4) ==
                   **(int **)(&UNK_01c7ea3c + _UNK_01c7ec04));
    }
    return 0;
  case 0x1f:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x02b43c64(iVar1,0x53,0);
    if (piVar7 == (int *)0x0) {
code_r0x01c7cd48:
      piVar7 = *(int **)(&UNK_01c7cd54 + _UNK_01c7dc88);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x878);
    }
    else {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7cd20 + _UNK_01c7dc84) + 0xb8);
      if ((*(byte *)(*piVar7 + 0xb8) < uVar2) ||
         (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) !=
          **(int **)(&UNK_01c7cd20 + _UNK_01c7dc84))) goto code_r0x01c7cd48;
      iVar1 = piVar7[0x26];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar1 + 0xc);
      if (iVar9 == 0) goto code_r0x01c7cd48;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    goto joined_r0x01c7cd80;
  case 0x20:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x54,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7cdec + _UNK_01c7dd64) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7cdec + _UNK_01c7dd64))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
code_r0x01c7ce48:
      piVar6 = *(int **)(&UNK_01c7ce54 + _UNK_01c7ddf8);
      iVar9 = *piVar6;
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4();
        iVar9 = *piVar6;
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x8a8);
    }
    else {
      iVar9 = piVar7[0x17];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 == 0) goto code_r0x01c7ce48;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,iVar9,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x14];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7ced4 + _UNK_01c7ddfc);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x88c);
    break;
  case 0x21:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x58,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7cf4c + _UNK_01c7df28) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7cf4c + _UNK_01c7df28))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x10];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7cfb4 + _UNK_01c7df2c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x3a8);
    break;
  case 0x24:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x55,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d028 + _UNK_01c7e008) + 0xb8);
      if ((*(byte *)(*piVar6 + 0xb8) < uVar2) ||
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d028 + _UNK_01c7e008))) {
        func_0x01384fb4();
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x1e];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) goto code_r0x01c7d0ac;
    }
    piVar7 = *(int **)(&UNK_01c7d090 + _UNK_01c7e00c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x8c8);
code_r0x01c7d0ac:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,iVar9,0);
    if (iVar1 == 0) {
      return 0;
    }
    uVar11 = 5;
code_r0x01c7d5e8:
    uVar2 = func_0x01c85560(param_1,uVar11);
    return uVar2;
  case 0x25:
    uVar2 = func_0x01c85d34(param_1);
    return uVar2;
  case 0x26:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x59,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d144 + _UNK_01c7e120) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d144 + _UNK_01c7e120))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x24];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7d1ac + _UNK_01c7e124);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x970);
    break;
  case 0x27:
    uVar2 = func_0x01c866c0(param_1);
    return uVar2;
  case 0x28:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x2f,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d22c + _UNK_01c7e200) + 0xb8);
      if ((*(byte *)(*piVar6 + 0xb8) < uVar2) ||
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d22c + _UNK_01c7e200))) {
        func_0x01384fb4();
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x14];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7d294 + _UNK_01c7e23c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x574);
    break;
  case 0x29:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x5c,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d30c + _UNK_01c7e240) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d30c + _UNK_01c7e240))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x19];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7d374 + _UNK_01c7e31c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x430);
    break;
  case 0x2a:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x5c,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d3ec + _UNK_01c7e320) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d3ec + _UNK_01c7e320))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x1c];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7d454 + _UNK_01c7e3fc);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x438);
    break;
  case 0x2b:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d490 + _UNK_01c7e400);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x860);
    break;
  case 0x2c:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d4c8 + _UNK_01c7e404);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x32c);
    break;
  case 0x2d:
    uVar2 = func_0x01c86860(param_1);
    return uVar2;
  case 0x2e:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d510 + _UNK_01c7e4e0);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x9cc);
    break;
  case 0x2f:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d54c + _UNK_01c7e51c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x2a0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,uVar11,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x01c7ae30(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ee906c(iVar1,5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450148(iVar1,0);
    if (1 < iVar1) {
      return 0;
    }
    uVar11 = 6;
    goto code_r0x01c7d5e8;
  case 0x30:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x6e,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d644 + _UNK_01c7e624) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d644 + _UNK_01c7e624))) {
        piVar7 = (int *)0x0;
      }
    }
    if (0 < param_3) {
      if (piVar7 == (int *)0x0) {
        return 0;
      }
      iVar1 = func_0x019fee4c(piVar7,0);
      if (iVar1 != param_3) {
        return 0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x2b];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) goto joined_r0x01c7cd80;
    }
    piVar7 = *(int **)(&UNK_01c7d6d4 + _UNK_01c7e628);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xa80);
    goto joined_r0x01c7cd80;
  case 0x31:
    iVar1 = func_0x034aaa34(*puVar12);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ee906c(iVar1,6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x02450148(iVar1,0);
    if (0 < iVar9) {
      iVar9 = 0;
      puVar12 = *(undefined4 **)(&UNK_01c7d774 + _UNK_01c7e728);
      do {
        if (iVar1 == 0) {
          func_0x01384bf0();
          iVar4 = func_0x02450148(0,0);
          if (iVar4 <= iVar9) {
            return 0;
          }
          func_0x01384bf0();
        }
        else {
          iVar4 = func_0x02450148(iVar1,0);
          if (iVar4 <= iVar9) {
            return 0;
          }
        }
        iVar4 = func_0x02450158(iVar1,iVar9,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x02f68304(iVar4,aiStack_24,*puVar12);
        iVar4 = aiStack_24[0];
        iVar9 = iVar9 + 1;
      } while (iVar5 == 0);
      if (aiStack_24[0] == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x02012e54(iVar4,param_3,0);
      return uVar2 & uVar2 >> 8 & 1;
    }
    return 0;
  case 0x32:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d83c + _UNK_01c7e820);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x9ec);
    break;
  case 0x33:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d874 + _UNK_01c7e824);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xac4);
    break;
  case 0x34:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d8ac + _UNK_01c7e828);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xadc);
    break;
  case 0x35:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x72,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d924 + _UNK_01c7e908) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d924 + _UNK_01c7e908))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x17];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7d98c + _UNK_01c7e90c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xab8);
    break;
  case 0x36:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x75,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7da00 + _UNK_01c7e9bc) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7da00 + _UNK_01c7e9bc))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x2d];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7da68 + _UNK_01c7e9c0);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xa0c);
    break;
  case 0x37:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x30,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7dae0 + _UNK_01c7ea6c) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7dae0 + _UNK_01c7ea6c))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x15];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7db48 + _UNK_01c7eb24);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x6c4);
    break;
  case 0x38:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x74,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7dbc0 + _UNK_01c7eb78) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7dbc0 + _UNK_01c7eb78))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x1b];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7dc28 + _UNK_01c7ebec);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xaa4);
    break;
  case 0x39:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7dc64 + _UNK_01c7ec28);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xaec);
    break;
  case 0x3a:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x78,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7dcdc + _UNK_01c7ec2c) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7dcdc + _UNK_01c7ec2c))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x38];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7dd44 + _UNK_01c7ec30);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xb00);
    break;
  case 0x3b:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x02b43c64(iVar1,0x79,0);
    if (piVar7 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7ddb4 + _UNK_01c7ec3c) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar7 + 0xb8)) &&
         (iVar1 = *(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4),
         iVar1 == **(int **)(&UNK_01c7ddb4 + _UNK_01c7ec3c))) {
        iVar9 = piVar7[0x35];
        if (iVar9 != 0) {
          iVar1 = piVar7[0x33];
        }
        if (iVar9 != 0 && iVar1 != 0) {
          uVar11 = *(undefined4 *)(iVar1 + 0xc);
          uVar10 = *(undefined4 *)(iVar9 + 0xc);
          iVar1 = func_0x034aaa34(*puVar12);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01eea2b8(iVar1,uVar10,0);
          if (iVar1 == 0) {
            iVar1 = func_0x034aaa34(*puVar12);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01eea2b8(iVar1,uVar11,0);
            return (uint)(iVar1 != 0);
          }
          return 1;
        }
      }
    }
    return 0;
  case 0x3c:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x36,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7de50 + _UNK_01c7ec08) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7de50 + _UNK_01c7ec08))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x18];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) goto code_r0x01c7ded4;
    }
    piVar6 = *(int **)(&UNK_01c7deb8 + _UNK_01c7ec0c);
    iVar9 = *piVar6;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar6;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x694);
code_r0x01c7ded4:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,iVar9,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
      uVar11 = 0;
    }
    else {
      iVar9 = piVar7[0x18];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar11 = *(undefined4 *)(iVar9 + 0xc);
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x01ee8b58(iVar1,uVar11,0);
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7eaa8 + _UNK_01c7ec10) + 0xb8);
    if (*(byte *)(*piVar7 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) ==
        **(int **)(&UNK_01c7eaa8 + _UNK_01c7ec10)) {
      piVar7 = (int *)piVar7[0x25];
      if (piVar7 == (int *)0x0) {
        return 0;
      }
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7eae8 + _UNK_01c7ec14) + 0xb8);
      if (uVar2 <= *(byte *)(*piVar7 + 0xb8)) {
        if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) ==
            **(int **)(&UNK_01c7eae8 + _UNK_01c7ec14)) {
          uVar2 = func_0x028f437c(piVar7,0);
          return uVar2;
        }
        return 0;
      }
      return 0;
    }
    return 0;
  case 0x3d:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x7e,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7df80 + _UNK_01c7ec44) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7df80 + _UNK_01c7ec44))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x47];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7dfe8 + _UNK_01c7ec48);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xb5c);
    break;
  case 0x3e:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x7a,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e060 + _UNK_01c7ec34) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7e060 + _UNK_01c7ec34))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x16];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7e0c8 + _UNK_01c7ec38);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x770);
    break;
  case 0x3f:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7e100 + _UNK_01c7ec40);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xb40);
    break;
  case 0x40:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x7d,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e178 + _UNK_01c7ec58) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7e178 + _UNK_01c7ec58))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x26];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7e1e0 + _UNK_01c7ec5c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xb84);
    break;
  case 0x42:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7e21c + _UNK_01c7ec4c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x9c);
    break;
  case 0x43:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x83,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e294 + _UNK_01c7ec50) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7e294 + _UNK_01c7ec50))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x22];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7e2fc + _UNK_01c7ec54);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x158);
    break;
  case 0x45:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x82,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e374 + _UNK_01c7ec60) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7e374 + _UNK_01c7ec60))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x2c];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7e3dc + _UNK_01c7ec64);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x790);
    break;
  case 0x46:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x87,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e458 + _UNK_01c7ec68) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7e458 + _UNK_01c7ec68))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x19];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7e4c0 + _UNK_01c7ec6c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xbd8);
    break;
  case 0x47:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7e4fc + _UNK_01c7ec70);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xbf0);
    break;
  case 0x48:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02b404cc(iVar1,0x89,0);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xc) < 1) {
      return 0;
    }
    piVar7 = (int *)func_0x0328eea8(iVar1,0,**(undefined4 **)(&UNK_01c7e580 + _UNK_01c7ec20));
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e5a0 + _UNK_01c7ec24) + 0xb8);
    if (*(byte *)(*piVar7 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) !=
        **(int **)(&UNK_01c7e5a0 + _UNK_01c7ec24)) {
      return 0;
    }
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02b48934(piVar7,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = piVar7[0x25];
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0xc);
joined_r0x01c7cd80:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto code_r0x01c7e814;
  case 0x49:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x02b43c64(iVar1,0x8f,0);
    if (piVar7 == (int *)0x0) {
code_r0x01c7e6a0:
      piVar7 = *(int **)(&UNK_01c7e6ac + _UNK_01c7ebf4);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xa40);
    }
    else {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e678 + _UNK_01c7ebf0) + 0xb8);
      if ((*(byte *)(*piVar7 + 0xb8) < uVar2) ||
         (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) !=
          **(int **)(&UNK_01c7e678 + _UNK_01c7ebf0))) goto code_r0x01c7e6a0;
      iVar1 = piVar7[0x2e];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) goto code_r0x01c7e6a0;
    }
    iVar9 = func_0x034aaa34(*puVar12);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar9,iVar1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01ee77d0(iVar1,0);
    goto code_r0x01c7e720;
  case 0x4a:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x8c,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e77c + _UNK_01c7ec18) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7e77c + _UNK_01c7ec18))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x25];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7e7e4 + _UNK_01c7ec1c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xbc8);
    break;
  case 0x4b:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x91,0);
    piVar7 = (int *)0x0;
    if ((piVar6 != (int *)0x0) &&
       (piVar7 = piVar6, *piVar6 != **(int **)(&UNK_01c7e87c + _UNK_01c7ec74))) {
      piVar7 = (int *)0x0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
code_r0x01c7e8bc:
      piVar7 = *(int **)(&UNK_01c7e8c8 + _UNK_01c7ec78);
      iVar9 = *piVar7;
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4();
        iVar9 = *piVar7;
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x9b8);
    }
    else {
      iVar9 = piVar7[0x27];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 == 0) goto code_r0x01c7e8bc;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01eeaa54(iVar1,iVar9,0,0);
    goto LAB_01c7bb38;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
code_r0x01c7e814:
  uVar2 = func_0x01eea2b8(iVar1,iVar9,0);
LAB_01c7bb38:
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$.ctor RVA 0x1c6ac9c =====

void FUN_01c7ac9c(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.GuideRequireChecker$$get_uiMan RVA 0x1c6ae30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c7ae30(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
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
  
  pcVar5 = (char *)(_UNK_01c7aeb8 + 0x1c7ae44);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7aebc + 0x1c7ae58));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x942e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x942e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02269830 + 0x2269750);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02269834 + 0x2269764),param_1,0);
      *pcVar5 = '\x01';
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
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    uVar7 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02269838 + 0x2269820));
    return uVar7;
  }
  iVar1 = **(int **)(_UNK_01c7aec0 + 0x1c7aeb0);
  pcVar5 = (char *)(_UNK_034aad50 + 0x34aaa48);
  if (*pcVar5 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_034aad54 + 0x34aaa5c));
    func_0x02457d54(*(undefined4 *)(_UNK_034aad58 + 0x34aaa68));
    func_0x02457d54(*(undefined4 *)(_UNK_034aad5c + 0x34aaa74));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(iVar1 + 0x10);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x02457d84();
  }
  iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 8);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x02457d84();
  }
  piVar8 = *(int **)(_UNK_034aad60 + 0x34aaab4);
  uVar7 = **(undefined4 **)(iVar6 + 0x5c);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x02457d48(*piVar8);
  }
  iVar6 = func_0x05190404(uVar7,0,0);
  if (iVar6 == 0) {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x02457d48();
    }
    iVar6 = *(int *)(iVar1 + 0x10);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84();
    }
    uVar7 = func_0x03015750(*(undefined4 *)(*(int *)(iVar6 + 0x60) + 0xc));
    iVar6 = *(int *)(iVar1 + 0x10);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84();
    }
    iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 8);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84();
    }
    iVar2 = *(int *)(iVar1 + 0x10);
    **(undefined4 **)(iVar6 + 0x5c) = uVar7;
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    if ((*(ushort *)(*(int *)(*(int *)(iVar2 + 0x60) + 8) + 0xbd) & 1) == 0) {
      func_0x02457d84();
    }
    iVar6 = *(int *)(iVar1 + 0x10);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84();
    }
    iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 8);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84();
    }
    iVar6 = func_0x05190404(**(undefined4 **)(iVar6 + 0x5c),0,0);
    iVar2 = *(int *)(iVar1 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    if (iVar6 != 0) {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
      goto LAB_034aac08;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x10);
    if (*(int *)(**(int **)(_UNK_034aad64 + 0x34aac30) + 0x74) == 0) {
      func_0x02457d48();
    }
    piVar3 = (int *)func_0x04836854(uVar7,0);
    if (piVar3 == (int *)0x0) {
      func_0x02457d50();
    }
    uVar7 = (**(code **)(*piVar3 + 0xd8))(piVar3,*(undefined4 *)(*piVar3 + 0xdc));
    iVar6 = func_0x02457d58(**(undefined4 **)(_UNK_034aad68 + 0x34aac84));
    func_0x05189f44(iVar6,uVar7,0);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x02457d48();
    }
    func_0x0518fb88(iVar6,0);
    if (iVar6 == 0) {
      func_0x02457d50();
    }
    iVar2 = *(int *)(iVar1 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    uVar7 = func_0x02fe26b4(iVar6,*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x14));
    iVar6 = *(int *)(iVar1 + 0x10);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84();
    }
    iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 8);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84();
    }
    iVar2 = *(int *)(iVar1 + 0x10);
    **(undefined4 **)(iVar6 + 0x5c) = uVar7;
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    if ((*(ushort *)(*(int *)(*(int *)(iVar2 + 0x60) + 8) + 0xbd) & 1) == 0) {
      func_0x02457d84();
    }
  }
  iVar1 = *(int *)(iVar1 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x02457d84();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
LAB_034aac08:
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x02457d84();
  }
  return **(undefined4 **)(iVar1 + 0x5c);
}



// ===== FAT.GuideRequireChecker$$_IsMatchRequirement RVA 0x1c6aec4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c7aec4(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
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
  
  pcVar8 = (char *)(_UNK_01c7b0b8 + 0x1c7aee0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7b0bc + 0x1c7aef4));
    func_0x01384978(*(undefined4 *)(_UNK_01c7b0c0 + 0x1c7af00));
    func_0x01384978(*(undefined4 *)(_UNK_01c7b0c4 + 0x1c7af0c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94c1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94c1,0);
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
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7,0,0);
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  piVar11 = *(int **)(_UNK_01c7b0c8 + 0x1c7af70);
  piVar12 = *(int **)(_UNK_01c7b0cc + 0x1c7af78);
  piVar13 = *(int **)(_UNK_01c7b0d0 + 0x1c7af80);
  iVar1 = 0;
  do {
    iVar9 = iVar1;
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01c7afdc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,*piVar11,0);
LAB_01c7afdc:
    iVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (iVar3 <= iVar9) break;
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01c7b054;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,*piVar12,0);
LAB_01c7b054:
    uVar10 = (*(code *)*puVar2)(param_2,iVar9,puVar2[1]);
    if (*(int *)(*piVar13 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar10 = func_0x02565ec0(uVar10,0);
    iVar4 = func_0x01c7b0d4(param_1,uVar10);
    iVar1 = iVar9 + 1;
  } while (iVar4 != 0);
  return (uint)(iVar3 <= iVar9);
}



// ===== FAT.GuideRequireChecker$$_CheckRequire RVA 0x1c6b0d4 =====
DECOMPILE_FAILED: Exception while decompiling 01c7b0d4: Response buffer size exceeded for: libil2cpp.so



// ===== FAT.GuideRequireChecker$$_IsRequireUIState RVA 0x1c6b87c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c7b87c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_01c7c870 + 0x1c7b89c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7c874 + 0x1c7b8b0));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c878 + 0x1c7b8bc));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c87c + 0x1c7b8c8));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c880 + 0x1c7b8d4));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c884 + 0x1c7b8e0));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c888 + 0x1c7b8ec));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c88c + 0x1c7b8f8));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c890 + 0x1c7b904));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c894 + 0x1c7b910));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c898 + 0x1c7b91c));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c89c + 0x1c7b928));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8a0 + 0x1c7b934));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8a4 + 0x1c7b940));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8a8 + 0x1c7b94c));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8ac + 0x1c7b958));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8b0 + 0x1c7b964));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8b4 + 0x1c7b970));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8b8 + 0x1c7b97c));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8bc + 0x1c7b988));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8c0 + 0x1c7b994));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c8c4 + 0x1c7b9a0));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9a0 + 0x1c7b9ac));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9a4 + 0x1c7b9b8));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9a8 + 0x1c7b9c4));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9ac + 0x1c7b9d0));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9b0 + 0x1c7b9dc));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9b4 + 0x1c7b9e8));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9b8 + 0x1c7b9f4));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9bc + 0x1c7ba00));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9c0 + 0x1c7ba0c));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9c4 + 0x1c7ba18));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9c8 + 0x1c7ba24));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9cc + 0x1c7ba30));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9d0 + 0x1c7ba3c));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9d4 + 0x1c7ba48));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9d8 + 0x1c7ba54));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9dc + 0x1c7ba60));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9e0 + 0x1c7ba6c));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9e4 + 0x1c7ba78));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9e8 + 0x1c7ba84));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9ec + 0x1c7ba90));
    func_0x01384978(*(undefined4 *)(_UNK_01c7c9f0 + 0x1c7ba9c));
    *pcVar8 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x942c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x942c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  puVar12 = *(undefined4 **)(_UNK_01c7cacc + 0x1c7bb0c);
  iVar1 = func_0x034aaa34(*puVar12);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 0;
  iVar1 = func_0x01ee76dc(iVar1,0);
  if (iVar1 != 0) {
    return 0;
  }
  switch(param_2) {
  case 0:
    piVar7 = *(int **)(&UNK_01c7bddc + _UNK_01c7cd88);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    uVar2 = func_0x01c8560c(param_1,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x3c));
    return uVar2;
  case 1:
    uVar2 = func_0x01c85f38(param_1);
    return uVar2;
  case 2:
    iVar1 = func_0x01c85f38(param_1);
    if (iVar1 != 0) {
      uVar2 = func_0x01c85ffc(param_1,param_3);
      return uVar2;
    }
    return 0;
  case 3:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7be48 + _UNK_01c7cd8c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x13c);
    break;
  case 4:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7be80 + _UNK_01c7cd90);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xf0);
    break;
  case 5:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7beb8 + _UNK_01c7cd94);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xec);
    break;
  case 6:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7bef0 + _UNK_01c7cd98);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x2b8);
    break;
  case 7:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7bf28 + _UNK_01c7cef4);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x2a0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,uVar11,0);
    if (iVar1 != 0) {
      uVar2 = func_0x01c86178(param_1);
      return uVar2;
    }
    return 0;
  case 8:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7bf90 + _UNK_01c7cef8);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x2a0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,uVar11,0);
    if (iVar1 != 0) {
      uVar2 = func_0x01c863e4(param_1);
      return uVar2;
    }
    return 0;
  case 9:
    iVar1 = func_0x034aaa34(*puVar12);
    iVar9 = func_0x01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0xa8);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x80);
    if (iVar9 != 0) {
      iVar9 = *(int *)(iVar9 + 0x4c);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c048 + _UNK_01c7cfd4);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x140);
    break;
  case 10:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xb0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02379644(iVar1,param_3,0);
    return uVar2;
  case 0xb:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01aa631c(iVar1,0);
    return uVar2;
  case 0xc:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x1c,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c12c + _UNK_01c7d0ec) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c12c + _UNK_01c7d0ec))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x2a];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c194 + _UNK_01c7d0f0);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x470);
    break;
  case 0xd:
    iVar1 = func_0x034aaa34(*puVar12);
    iVar9 = func_0x01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0xcc);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x0261faa4(iVar9,0);
    if (iVar9 != 0) {
      iVar9 = *(int *)(iVar9 + 0x80);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c224 + _UNK_01c7d1d8);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x4ac);
    break;
  case 0xe:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01ab8388(iVar1,0);
    return uVar2;
  case 0xf:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x28,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c2cc + _UNK_01c7d2b4) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c2cc + _UNK_01c7d2b4))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x13];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c334 + _UNK_01c7d2b8);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x1c);
    break;
  case 0x10:
    uVar2 = func_0x01c864d8(param_1);
    return uVar2;
  case 0x11:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x02b43c64(iVar1,0x2b,0);
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c3b4 + _UNK_01c7d394) + 0xb8);
    if (*(byte *)(*piVar7 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) !=
        **(int **)(&UNK_01c7c3b4 + _UNK_01c7d394)) {
      return 0;
    }
    if (piVar7[0xf] == 0) {
      return 0;
    }
    if (*(int *)(piVar7[0xf] + 0x48) != param_3) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    iVar9 = piVar7[0x25];
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0xc);
    if (iVar9 == 0) {
      piVar7 = *(int **)(&UNK_01c7c428 + _UNK_01c7d398);
      iVar9 = *piVar7;
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4();
        iVar9 = *piVar7;
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x664);
    }
    break;
  case 0x12:
    uVar2 = func_0x01c8592c(param_1);
    return uVar2;
  case 0x13:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x36,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c4a4 + _UNK_01c7d474) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c4a4 + _UNK_01c7d474))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
code_r0x01c7c500:
      piVar6 = *(int **)(&UNK_01c7c50c + _UNK_01c7d4f4);
      iVar9 = *piVar6;
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4();
        iVar9 = *piVar6;
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x694);
    }
    else {
      iVar9 = piVar7[0x18];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 == 0) goto code_r0x01c7c500;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,iVar9,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
      uVar11 = 0;
    }
    else {
      iVar9 = piVar7[0x18];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar11 = *(undefined4 *)(iVar9 + 0xc);
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x01ee8b58(iVar1,uVar11,0);
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e948 + _UNK_01c7ebf8) + 0xb8);
    if (*(byte *)(*piVar7 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) !=
        **(int **)(&UNK_01c7e948 + _UNK_01c7ebf8)) {
      return 0;
    }
    piVar7 = (int *)piVar7[0x25];
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e988 + _UNK_01c7ebfc) + 0xb8);
    if (*(byte *)(*piVar7 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) !=
        **(int **)(&UNK_01c7e988 + _UNK_01c7ebfc)) {
      return 0;
    }
    uVar2 = func_0x028f437c(piVar7,0);
code_r0x01c7e720:
    return uVar2 ^ 1;
  case 0x14:
    uVar2 = func_0x01c85b30(param_1);
    return uVar2;
  case 0x15:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x3c,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c5d8 + _UNK_01c7d530) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c5d8 + _UNK_01c7d530))) {
        piVar7 = (int *)0x0;
      }
    }
    if (0 < param_3) {
      if (piVar7 == (int *)0x0) {
        return 0;
      }
      iVar1 = func_0x02aa2ce8(piVar7,0);
      if (iVar1 != param_3) {
        return 0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0xf];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) goto joined_r0x01c7cd80;
    }
    piVar7 = *(int **)(&UNK_01c7c668 + _UNK_01c7d5f0);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 2000);
    goto joined_r0x01c7cd80;
  case 0x16:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xb0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x023755c0(iVar1,0);
    return uVar2;
  case 0x17:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x3b,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c710 + _UNK_01c7d708) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c710 + _UNK_01c7d708))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x20];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c778 + _UNK_01c7d70c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x6e0);
    break;
  case 0x18:
  case 0x22:
  case 0x23:
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
      return 0;
    }
    piVar7 = *(int **)(&UNK_01c7bcd4 + _UNK_01c7cba8);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    iVar1 = func_0x01c8560c(param_1,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x3c));
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = func_0x034aaa34(*puVar12);
      iVar9 = *piVar7;
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4();
        iVar9 = *piVar7;
      }
      uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x01eead9c(iVar1,uVar11,0);
    }
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
    iVar1 = func_0x02141ef4(iVar1,0);
    if (iVar1 != 0) {
      iVar1 = func_0x01c85560(param_1,5);
      if (iVar1 != 0) {
        uVar3 = func_0x01c85560(param_1,10);
        return uVar2 | uVar3;
      }
      return uVar2;
    }
    return uVar2;
  case 0x19:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x47,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c7e8 + _UNK_01c7d794) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c7e8 + _UNK_01c7d794))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x2a];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c850 + _UNK_01c7d820);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x840);
    break;
  case 0x1a:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x45,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7c918 + _UNK_01c7d8cc) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7c918 + _UNK_01c7d8cc))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x15];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7c980 + _UNK_01c7d8d0);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x830);
    break;
  case 0x1b:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x4a,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7ca44 + _UNK_01c7d9ac) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7ca44 + _UNK_01c7d9ac))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x12];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7caac + _UNK_01c7da88);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x56c);
    break;
  default:
    goto LAB_01c7bb38;
  case 0x1d:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x49,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7cb20 + _UNK_01c7da8c) + 0xb8);
      if ((*(byte *)(*piVar6 + 0xb8) < uVar2) ||
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7cb20 + _UNK_01c7da8c))) {
        func_0x01384fb4();
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x24];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) goto code_r0x01c7d0ac;
    }
    piVar7 = *(int **)(&UNK_01c7cb88 + _UNK_01c7db68);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x5dc);
    goto code_r0x01c7d0ac;
  case 0x1e:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x36,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7cbfc + _UNK_01c7db6c) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7cbfc + _UNK_01c7db6c))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x18];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) goto code_r0x01c7cc80;
    }
    piVar6 = *(int **)(&UNK_01c7cc64 + _UNK_01c7dc48);
    iVar9 = *piVar6;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar6;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x694);
code_r0x01c7cc80:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,iVar9,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
      uVar11 = 0;
    }
    else {
      iVar9 = piVar7[0x18];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar11 = *(undefined4 *)(iVar9 + 0xc);
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x01ee8b58(iVar1,uVar11,0);
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e9fc + _UNK_01c7ec00) + 0xb8);
    if (*(byte *)(*piVar7 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) ==
        **(int **)(&UNK_01c7e9fc + _UNK_01c7ec00)) {
      if ((int *)piVar7[0x25] == (int *)0x0) {
        return 0;
      }
      iVar1 = *(int *)piVar7[0x25];
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7ea3c + _UNK_01c7ec04) + 0xb8);
      if (uVar2 <= *(byte *)(iVar1 + 0xb8)) {
        return (uint)(*(int *)(*(int *)(iVar1 + 100) + uVar2 * 4 + -4) ==
                     **(int **)(&UNK_01c7ea3c + _UNK_01c7ec04));
      }
      return 0;
    }
    return 0;
  case 0x1f:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x02b43c64(iVar1,0x53,0);
    if (piVar7 == (int *)0x0) {
code_r0x01c7cd48:
      piVar7 = *(int **)(&UNK_01c7cd54 + _UNK_01c7dc88);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x878);
    }
    else {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7cd20 + _UNK_01c7dc84) + 0xb8);
      if ((*(byte *)(*piVar7 + 0xb8) < uVar2) ||
         (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) !=
          **(int **)(&UNK_01c7cd20 + _UNK_01c7dc84))) goto code_r0x01c7cd48;
      iVar1 = piVar7[0x26];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar1 + 0xc);
      if (iVar9 == 0) goto code_r0x01c7cd48;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    goto joined_r0x01c7cd80;
  case 0x20:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x54,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7cdec + _UNK_01c7dd64) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7cdec + _UNK_01c7dd64))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
code_r0x01c7ce48:
      piVar6 = *(int **)(&UNK_01c7ce54 + _UNK_01c7ddf8);
      iVar9 = *piVar6;
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4();
        iVar9 = *piVar6;
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x8a8);
    }
    else {
      iVar9 = piVar7[0x17];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 == 0) goto code_r0x01c7ce48;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,iVar9,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x14];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7ced4 + _UNK_01c7ddfc);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x88c);
    break;
  case 0x21:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x58,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7cf4c + _UNK_01c7df28) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7cf4c + _UNK_01c7df28))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x10];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7cfb4 + _UNK_01c7df2c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x3a8);
    break;
  case 0x24:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x55,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d028 + _UNK_01c7e008) + 0xb8);
      if ((*(byte *)(*piVar6 + 0xb8) < uVar2) ||
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d028 + _UNK_01c7e008))) {
        func_0x01384fb4();
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x1e];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) goto code_r0x01c7d0ac;
    }
    piVar7 = *(int **)(&UNK_01c7d090 + _UNK_01c7e00c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x8c8);
code_r0x01c7d0ac:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,iVar9,0);
    if (iVar1 == 0) {
      return 0;
    }
    uVar11 = 5;
code_r0x01c7d5e8:
    uVar2 = func_0x01c85560(param_1,uVar11);
    return uVar2;
  case 0x25:
    uVar2 = func_0x01c85d34(param_1);
    return uVar2;
  case 0x26:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x59,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d144 + _UNK_01c7e120) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d144 + _UNK_01c7e120))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x24];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7d1ac + _UNK_01c7e124);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x970);
    break;
  case 0x27:
    uVar2 = func_0x01c866c0(param_1);
    return uVar2;
  case 0x28:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x2f,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d22c + _UNK_01c7e200) + 0xb8);
      if ((*(byte *)(*piVar6 + 0xb8) < uVar2) ||
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d22c + _UNK_01c7e200))) {
        func_0x01384fb4();
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x14];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7d294 + _UNK_01c7e23c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x574);
    break;
  case 0x29:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x5c,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d30c + _UNK_01c7e240) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d30c + _UNK_01c7e240))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x19];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7d374 + _UNK_01c7e31c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x430);
    break;
  case 0x2a:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x5c,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d3ec + _UNK_01c7e320) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d3ec + _UNK_01c7e320))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x1c];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7d454 + _UNK_01c7e3fc);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x438);
    break;
  case 0x2b:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d490 + _UNK_01c7e400);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x860);
    break;
  case 0x2c:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d4c8 + _UNK_01c7e404);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x32c);
    break;
  case 0x2d:
    uVar2 = func_0x01c86860(param_1);
    return uVar2;
  case 0x2e:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d510 + _UNK_01c7e4e0);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x9cc);
    break;
  case 0x2f:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d54c + _UNK_01c7e51c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x2a0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,uVar11,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_01c7ae30(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ee906c(iVar1,5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450148(iVar1,0);
    if (1 < iVar1) {
      return 0;
    }
    uVar11 = 6;
    goto code_r0x01c7d5e8;
  case 0x30:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x6e,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d644 + _UNK_01c7e624) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d644 + _UNK_01c7e624))) {
        piVar7 = (int *)0x0;
      }
    }
    if (0 < param_3) {
      if (piVar7 == (int *)0x0) {
        return 0;
      }
      iVar1 = func_0x019fee4c(piVar7,0);
      if (iVar1 != param_3) {
        return 0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x2b];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) goto joined_r0x01c7cd80;
    }
    piVar7 = *(int **)(&UNK_01c7d6d4 + _UNK_01c7e628);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xa80);
    goto joined_r0x01c7cd80;
  case 0x31:
    iVar1 = func_0x034aaa34(*puVar12);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ee906c(iVar1,6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x02450148(iVar1,0);
    if (0 < iVar9) {
      iVar9 = 0;
      puVar12 = *(undefined4 **)(&UNK_01c7d774 + _UNK_01c7e728);
      do {
        if (iVar1 == 0) {
          func_0x01384bf0();
          iVar4 = func_0x02450148(0,0);
          if (iVar4 <= iVar9) {
            return 0;
          }
          func_0x01384bf0();
        }
        else {
          iVar4 = func_0x02450148(iVar1,0);
          if (iVar4 <= iVar9) {
            return 0;
          }
        }
        iVar4 = func_0x02450158(iVar1,iVar9,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x02f68304(iVar4,&iStack_24,*puVar12);
        iVar4 = iStack_24;
        iVar9 = iVar9 + 1;
      } while (iVar5 == 0);
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x02012e54(iVar4,param_3,0);
      return uVar2 & uVar2 >> 8 & 1;
    }
    return 0;
  case 0x32:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d83c + _UNK_01c7e820);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x9ec);
    break;
  case 0x33:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d874 + _UNK_01c7e824);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xac4);
    break;
  case 0x34:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7d8ac + _UNK_01c7e828);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xadc);
    break;
  case 0x35:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x72,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7d924 + _UNK_01c7e908) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7d924 + _UNK_01c7e908))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x17];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7d98c + _UNK_01c7e90c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xab8);
    break;
  case 0x36:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x75,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7da00 + _UNK_01c7e9bc) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7da00 + _UNK_01c7e9bc))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x2d];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7da68 + _UNK_01c7e9c0);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xa0c);
    break;
  case 0x37:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x30,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7dae0 + _UNK_01c7ea6c) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7dae0 + _UNK_01c7ea6c))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x15];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7db48 + _UNK_01c7eb24);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x6c4);
    break;
  case 0x38:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x74,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7dbc0 + _UNK_01c7eb78) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7dbc0 + _UNK_01c7eb78))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x1b];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7dc28 + _UNK_01c7ebec);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xaa4);
    break;
  case 0x39:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7dc64 + _UNK_01c7ec28);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xaec);
    break;
  case 0x3a:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x78,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7dcdc + _UNK_01c7ec2c) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7dcdc + _UNK_01c7ec2c))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x38];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7dd44 + _UNK_01c7ec30);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xb00);
    break;
  case 0x3b:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x02b43c64(iVar1,0x79,0);
    if (piVar7 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7ddb4 + _UNK_01c7ec3c) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar7 + 0xb8)) &&
         (iVar1 = *(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4),
         iVar1 == **(int **)(&UNK_01c7ddb4 + _UNK_01c7ec3c))) {
        iVar9 = piVar7[0x35];
        if (iVar9 != 0) {
          iVar1 = piVar7[0x33];
        }
        if (iVar9 != 0 && iVar1 != 0) {
          uVar11 = *(undefined4 *)(iVar1 + 0xc);
          uVar10 = *(undefined4 *)(iVar9 + 0xc);
          iVar1 = func_0x034aaa34(*puVar12);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01eea2b8(iVar1,uVar10,0);
          if (iVar1 == 0) {
            iVar1 = func_0x034aaa34(*puVar12);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01eea2b8(iVar1,uVar11,0);
            return (uint)(iVar1 != 0);
          }
          return 1;
        }
      }
    }
    return 0;
  case 0x3c:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x36,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7de50 + _UNK_01c7ec08) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7de50 + _UNK_01c7ec08))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x18];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) goto code_r0x01c7ded4;
    }
    piVar6 = *(int **)(&UNK_01c7deb8 + _UNK_01c7ec0c);
    iVar9 = *piVar6;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar6;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x694);
code_r0x01c7ded4:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,iVar9,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
      uVar11 = 0;
    }
    else {
      iVar9 = piVar7[0x18];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar11 = *(undefined4 *)(iVar9 + 0xc);
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x01ee8b58(iVar1,uVar11,0);
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7eaa8 + _UNK_01c7ec10) + 0xb8);
    if (*(byte *)(*piVar7 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) ==
        **(int **)(&UNK_01c7eaa8 + _UNK_01c7ec10)) {
      piVar7 = (int *)piVar7[0x25];
      if (piVar7 == (int *)0x0) {
        return 0;
      }
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7eae8 + _UNK_01c7ec14) + 0xb8);
      if (uVar2 <= *(byte *)(*piVar7 + 0xb8)) {
        if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) ==
            **(int **)(&UNK_01c7eae8 + _UNK_01c7ec14)) {
          uVar2 = func_0x028f437c(piVar7,0);
          return uVar2;
        }
        return 0;
      }
      return 0;
    }
    return 0;
  case 0x3d:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x7e,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7df80 + _UNK_01c7ec44) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7df80 + _UNK_01c7ec44))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x47];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7dfe8 + _UNK_01c7ec48);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xb5c);
    break;
  case 0x3e:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x7a,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e060 + _UNK_01c7ec34) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7e060 + _UNK_01c7ec34))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x16];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7e0c8 + _UNK_01c7ec38);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x770);
    break;
  case 0x3f:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7e100 + _UNK_01c7ec40);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xb40);
    break;
  case 0x40:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x7d,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e178 + _UNK_01c7ec58) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7e178 + _UNK_01c7ec58))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x26];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7e1e0 + _UNK_01c7ec5c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xb84);
    break;
  case 0x42:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7e21c + _UNK_01c7ec4c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x9c);
    break;
  case 0x43:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x83,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e294 + _UNK_01c7ec50) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7e294 + _UNK_01c7ec50))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x22];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7e2fc + _UNK_01c7ec54);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x158);
    break;
  case 0x45:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x82,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e374 + _UNK_01c7ec60) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7e374 + _UNK_01c7ec60))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x2c];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7e3dc + _UNK_01c7ec64);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x790);
    break;
  case 0x46:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x87,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e458 + _UNK_01c7ec68) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7e458 + _UNK_01c7ec68))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x19];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7e4c0 + _UNK_01c7ec6c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xbd8);
    break;
  case 0x47:
    iVar1 = func_0x034aaa34(*puVar12);
    piVar7 = *(int **)(&UNK_01c7e4fc + _UNK_01c7ec70);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xbf0);
    break;
  case 0x48:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02b404cc(iVar1,0x89,0);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xc) < 1) {
      return 0;
    }
    piVar7 = (int *)func_0x0328eea8(iVar1,0,**(undefined4 **)(&UNK_01c7e580 + _UNK_01c7ec20));
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e5a0 + _UNK_01c7ec24) + 0xb8);
    if (*(byte *)(*piVar7 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) !=
        **(int **)(&UNK_01c7e5a0 + _UNK_01c7ec24)) {
      return 0;
    }
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02b48934(piVar7,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = piVar7[0x25];
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0xc);
joined_r0x01c7cd80:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto code_r0x01c7e814;
  case 0x49:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x02b43c64(iVar1,0x8f,0);
    if (piVar7 == (int *)0x0) {
code_r0x01c7e6a0:
      piVar7 = *(int **)(&UNK_01c7e6ac + _UNK_01c7ebf4);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xa40);
    }
    else {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e678 + _UNK_01c7ebf0) + 0xb8);
      if ((*(byte *)(*piVar7 + 0xb8) < uVar2) ||
         (*(int *)(*(int *)(*piVar7 + 100) + uVar2 * 4 + -4) !=
          **(int **)(&UNK_01c7e678 + _UNK_01c7ebf0))) goto code_r0x01c7e6a0;
      iVar1 = piVar7[0x2e];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) goto code_r0x01c7e6a0;
    }
    iVar9 = func_0x034aaa34(*puVar12);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar9,iVar1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01ee77d0(iVar1,0);
    goto code_r0x01c7e720;
  case 0x4a:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x8c,0);
    piVar7 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(&UNK_01c7e77c + _UNK_01c7ec18) + 0xb8);
      if ((uVar2 <= *(byte *)(*piVar6 + 0xb8)) &&
         (piVar7 = piVar6,
         *(int *)(*(int *)(*piVar6 + 100) + uVar2 * 4 + -4) !=
         **(int **)(&UNK_01c7e77c + _UNK_01c7ec18))) {
        piVar7 = (int *)0x0;
      }
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 != (int *)0x0) {
      iVar9 = piVar7[0x25];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 != 0) break;
    }
    piVar7 = *(int **)(&UNK_01c7e7e4 + _UNK_01c7ec1c);
    iVar9 = *piVar7;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xbc8);
    break;
  case 0x4b:
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b43c64(iVar1,0x91,0);
    piVar7 = (int *)0x0;
    if ((piVar6 != (int *)0x0) &&
       (piVar7 = piVar6, *piVar6 != **(int **)(&UNK_01c7e87c + _UNK_01c7ec74))) {
      piVar7 = (int *)0x0;
    }
    iVar1 = func_0x034aaa34(*puVar12);
    if (piVar7 == (int *)0x0) {
code_r0x01c7e8bc:
      piVar7 = *(int **)(&UNK_01c7e8c8 + _UNK_01c7ec78);
      iVar9 = *piVar7;
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4();
        iVar9 = *piVar7;
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x9b8);
    }
    else {
      iVar9 = piVar7[0x27];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar9 == 0) goto code_r0x01c7e8bc;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01eeaa54(iVar1,iVar9,0,0);
    goto LAB_01c7bb38;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
code_r0x01c7e814:
  uVar2 = func_0x01eea2b8(iVar1,iVar9,0);
LAB_01c7bb38:
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_IsRequireBoardItem RVA 0x1c6ec7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c7ec7c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  pcVar4 = (char *)(_UNK_01c7ed7c + 0x1c7ec9c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7ed80 + 0x1c7ecb0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94c3,0);
  if (iVar1 == 0) {
    puVar5 = *(undefined4 **)(_UNK_01c7ed84 + 0x1c7ed14);
    iVar1 = func_0x03668dfc(*puVar5);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ddc564(iVar1,0);
    if (iVar1 != 0) {
      iVar1 = func_0x03668dfc(*puVar5);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      pcVar4 = (char *)(_UNK_01de5ee4 + 0x1de5dac);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01de5ee8 + 0x1de5dc0),param_2,param_3,0);
        func_0x01384978(*(undefined4 *)(_UNK_01de5eec + 0x1de5dcc));
        *pcVar4 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x228f,0);
      if (iVar3 == 0) {
        iVar1 = *(int *)(iVar1 + 0x3c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x03d59fc8(iVar1,param_2,**(undefined4 **)(_UNK_01de5ef0 + 0x1de5e44));
        if (param_3 < 1) {
          uVar2 = 1;
          if (iVar3 != 0) {
            if (iVar1 == 0) {
              func_0x01384bf0(1);
            }
            iVar1 = func_0x03d59cc4(iVar1,param_2,**(undefined4 **)(_UNK_01de5ef4 + 0x1de5ec4));
            uVar2 = 0;
            if (iVar1 < 1) {
              uVar2 = 1;
            }
          }
        }
        else {
          uVar2 = 0;
          if (iVar3 != 0) {
            if (iVar1 == 0) {
              func_0x01384bf0(0);
            }
            iVar1 = func_0x03d59cc4(iVar1,param_2,**(undefined4 **)(_UNK_01de5ef8 + 0x1de5e80));
            uVar2 = (uint)(param_3 <= iVar1);
          }
        }
      }
      else {
        iVar3 = func_0x0229f13c(0x228f,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x0217a5ac(iVar3,iVar1,param_2,param_3,0);
      }
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x94c3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_IsRequireBoardSandItem RVA 0x1c6ed88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c7ed88(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01c7ee88 + 0x1c7eda8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7ee8c + 0x1c7edbc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94c4,0);
  if (iVar1 == 0) {
    puVar5 = *(undefined4 **)(_UNK_01c7ee90 + 0x1c7ee20);
    iVar1 = func_0x03668dfc(*puVar5);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ddc564(iVar1,0);
    if (iVar1 != 0) {
      iVar1 = func_0x03668dfc(*puVar5);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      pcVar4 = (char *)(_UNK_01de5d80 + 0x1de5cb4);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01de5d84 + 0x1de5cc8),param_2,param_3,0);
        *pcVar4 = '\x01';
      }
      iStack_1c = 0;
      iVar3 = func_0x0229f06c(0x94c5,0);
      if (iVar3 == 0) {
        iVar1 = *(int *)(iVar1 + 0x40);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03d5bb20(iVar1,param_2,&iStack_1c,**(undefined4 **)(_UNK_01de5d88 + 0x1de5d4c));
        uVar2 = 0;
        if (param_3 < 1) {
          if (iStack_1c < 1) {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = (uint)(param_3 <= iStack_1c);
        }
      }
      else {
        iVar3 = func_0x0229f13c(0x94c5,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x0217a5ac(iVar3,iVar1,param_2,param_3,0);
      }
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x94c4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_IsRequireBubbleItem RVA 0x1c6ee94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c7ee94(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  pcVar3 = (char *)(_UNK_01c7ef9c + 0x1c7eeb4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7efa0 + 0x1c7eecc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94c6,0);
  if (iVar1 == 0) {
    puVar4 = *(undefined4 **)(_UNK_01c7efa4 + 0x1c7ef30);
    iVar1 = func_0x03668dfc(*puVar4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ddc564(iVar1,0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = func_0x03668dfc(*puVar4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x01de52b4(iVar1,param_2,param_3,param_4,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94c6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0226a278(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_IsRequireLoginGiftItem RVA 0x1c6efa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c7efa8(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01c7f238 + 0x1c7efc0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7f23c + 0x1c7efd4));
    func_0x01384978(*(undefined4 *)(_UNK_01c7f240 + 0x1c7efe0));
    func_0x01384978(*(undefined4 *)(_UNK_01c7f244 + 0x1c7efec));
    func_0x01384978(*(undefined4 *)(_UNK_01c7f248 + 0x1c7eff8));
    func_0x01384978(*(undefined4 *)(_UNK_01c7f24c + 0x1c7f004));
    func_0x01384978(*(undefined4 *)(_UNK_01c7f250 + 0x1c7f010));
    func_0x01384978(*(undefined4 *)(_UNK_01c7f254 + 0x1c7f01c));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x94c8,0);
  if (iVar2 == 0) {
    puVar6 = *(undefined4 **)(_UNK_01c7f258 + 0x1c7f084);
    iVar2 = func_0x03668dfc(*puVar6);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    iVar2 = func_0x01ddc564(iVar2,0);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_01c7f25c + 0x1c7f0bc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x036ae6c0(**(undefined4 **)(_UNK_01c7f260 + 0x1c7f0d8));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0325a3b4(&uStack_40,iVar2,**(undefined4 **)(_UNK_01c7f264 + 0x1c7f100));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      puVar5 = *(undefined4 **)(_UNK_01c7f268 + 0x1c7f11c);
      do {
        uVar3 = func_0x01470118(&uStack_30,*puVar5);
        uVar1 = uStack_24;
        if (uVar3 == 0) {
          iVar2 = 7;
          goto LAB_01c7f174;
        }
        iVar2 = func_0x03668dfc(*puVar6);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01de5d8c(iVar2,uVar1,1,0);
      } while (iVar2 == 0);
      iVar2 = 6;
LAB_01c7f174:
      func_0x02450828(&uStack_30,**(undefined4 **)(_UNK_01c7f26c + 0x1c7f180));
      uVar3 = uVar3 & iVar2 == 6;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x94c8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021742f8(iVar2,param_1,0);
  }
  return uVar3;
}



// ===== FAT.GuideRequireChecker$$_IsRequireOnGoingOrderNum RVA 0x1c6f278 =====

uint FUN_01c7f278(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
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
  
  iVar2 = func_0x0229f06c(0x94c9,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x68);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01e6bd48(iVar2,0);
    if (param_2 == 0) {
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = param_2 <= iVar2;
    }
    return (uint)bVar1;
  }
  iVar2 = func_0x0229f13c(0x94c9,0);
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
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
  uVar3 = func_0x0245496c(&uStack_38,0,0);
  return uVar3;
}



// ===== FAT.GuideRequireChecker$$_IsRequireOrderCommittable RVA 0x1c6f328 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c7f328(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
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
  
  pcVar9 = (char *)(_UNK_01c7f4c4 + 0x1c7f340);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7f4c8 + 0x1c7f354));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94cc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94cc,0);
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
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar6,0,0);
    uVar10 = func_0x0245496c(&uStack_38,0,0);
    return uVar10;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01e6c294(iVar1,param_2,0);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    piVar7 = *(int **)(_UNK_01c7f4cc + 0x1c7f3f8);
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar8 = *piVar7;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == iVar8) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01c7f440;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar8,0);
LAB_01c7f440:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 3) {
      iVar1 = *piVar2;
      iVar8 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar8) {
            puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x100);
            goto LAB_01c7f4b0;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar8,8);
LAB_01c7f4b0:
                    /* WARNING: Could not recover jumptable at 0x01c7f4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      return uVar10;
    }
  }
  return 0;
}



// ===== FAT.GuideRequireChecker$$_IsRequireOrderComplete RVA 0x1c6f4d0 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c7f4d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint extraout_r1;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar1 = func_0x0229f06c(0x94cf,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x68);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0xfd,0,0);
    if (iVar1 == 0) {
      param_1 = *(int *)(param_1 + 0x10);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0xfe,0,0);
      if (iVar1 == 0) {
        pcVar8 = (char *)(_UNK_01e53d7c + 0x1e53cec);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e53d80 + 0x1e53d00));
          *pcVar8 = '\x01';
        }
        iVar1 = func_0x0229f06c(0xff,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iStack_28 = **(int **)(_UNK_01e53d84 + 0x1e53d70);
          if (*(int *)(iVar1 + 8) != 0) {
            iVar7 = func_0x04222a4c(iVar1,param_2,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(iStack_28 + 0x10) + 0x60) + 0x58));
            iVar12 = *(int *)(iVar1 + 8);
            iVar10 = *(int *)(iVar1 + 0xc);
            iStack_2c = iVar1;
            if (iVar12 == 0) {
              func_0x02457d50();
              func_0x02457d50();
            }
            uVar11 = *(uint *)(iVar12 + 0xc);
            func_0x02457e94(iVar7,uVar11);
            if (uVar11 <= extraout_r1) {
              func_0x02457d5c();
            }
            uVar11 = *(int *)(iVar12 + extraout_r1 * 4 + 0x10) - 1;
            if (-1 < (int)uVar11) {
              iVar1 = 0;
              iStack_30 = iVar7;
              do {
                if (iVar10 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar10 + 0xc) <= uVar11) {
                  func_0x02457d5c();
                }
                iVar12 = iVar10 + uVar11 * 0xc;
                if (*(int *)(iVar12 + 0x10) == iVar7) {
                  piVar13 = *(int **)(iStack_2c + 0x1c);
                  if (*(uint *)(iVar10 + 0xc) <= uVar11) {
                    func_0x02457d5c();
                  }
                  uVar9 = *(undefined4 *)(iVar12 + 0x18);
                  if (piVar13 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar7 = *(int *)(*(int *)(*(int *)(iStack_28 + 0x10) + 0x60) + 0x10);
                  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
                    iVar7 = func_0x02457d84(iVar7);
                  }
                  iVar2 = *piVar13;
                  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
                  if (uVar4 != 0) {
                    piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                    do {
                      if (piVar6[-1] == iVar7) {
                        puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
                        goto LAB_0421f510;
                      }
                      uVar4 = uVar4 - 1;
                      piVar6 = piVar6 + 2;
                    } while (uVar4 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar13,iVar7,0);
LAB_0421f510:
                  iVar2 = (*(code *)*puVar3)(piVar13,uVar9,param_2,puVar3[1]);
                  iVar7 = iStack_30;
                  if (iVar2 != 0) {
                    return 1;
                  }
                }
                if (iVar10 == 0) {
                  func_0x02457d50();
                }
                if ((int)*(uint *)(iVar10 + 0xc) <= iVar1) {
                  func_0x02457d6c(*(undefined4 *)(_UNK_0421f5c4 + 0x421f590));
                  uVar9 = func_0x02457d58();
                  uVar5 = func_0x02457d6c(*(undefined4 *)(_UNK_0421f5c8 + 0x421f5a4));
                  func_0x04824950(uVar9,uVar5,0);
                  func_0x02457d90(uVar9,iStack_28);
                  func_0x02457d94();
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (*(uint *)(iVar10 + 0xc) <= uVar11) {
                  func_0x02457d5c();
                }
                uVar11 = *(uint *)(iVar12 + 0x14);
                iVar1 = iVar1 + 1;
              } while (uVar11 < 0x80000000);
            }
          }
          return 0;
        }
        iVar1 = func_0x0229f13c(0xff,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar1 = func_0x0229f13c(0xfe,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xfd,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94cf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  iStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iStack_28 = uStack_40;
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
  uVar5 = 3;
  if (iVar1 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
  uVar9 = func_0x0245496c(&uStack_38,0,0);
  return uVar9;
}



// ===== FAT.GuideRequireChecker$$_IsRequireOrderUncomplete RVA 0x1c6f560 =====

uint FUN_01c7f560(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x94d0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94d0,0);
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
  uVar2 = FUN_01c7f4d0(param_1,param_2);
  return uVar2 ^ 1;
}



// ===== FAT.GuideRequireChecker$$_IsRequireCanLevelUp RVA 0x1c6f5c8 =====

uint FUN_01c7f5c8(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x94d1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94d1,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x01dd29b8(0,0);
    if (iVar4 != 0) {
      func_0x01384bf0();
      goto LAB_01c7f674;
    }
  }
  else {
    iVar4 = func_0x01dd29b8(iVar1,0);
    if (iVar4 != 0) {
LAB_01c7f674:
      iVar1 = func_0x01dd2b98(iVar1,0);
      return (uint)(iVar1 + 1 == param_2);
    }
  }
  return 0;
}



// ===== FAT.GuideRequireChecker$$_IsRequireLevel RVA 0x1c6f69c =====

uint FUN_01c7f69c(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x94d2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94d2,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dd2c04(iVar1,0);
  return (uint)(param_2 <= iVar1);
}



// ===== FAT.GuideRequireChecker$$_IsRequireBoardReward RVA 0x1c6f738 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c7f738(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar5 = (char *)(_UNK_01c7f834 + 0x1c7f750);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7f838 + 0x1c7f764));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94d3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94d3,0);
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
  puVar7 = *(undefined4 **)(_UNK_01c7f83c + 0x1c7f7c0);
  iVar1 = func_0x03668dfc(*puVar7);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 0;
  iVar1 = func_0x01ddc564(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x03668dfc(*puVar7);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02141bc8(iVar1,0);
    uVar2 = (uint)(iVar1 == param_2);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_IsRequireSelectItem RVA 0x1c6f840 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c7f840(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar5 = (char *)(_UNK_01c7f92c + 0x1c7f858);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7f930 + 0x1c7f86c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94d4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94d4,0);
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
  puVar7 = *(undefined4 **)(_UNK_01c7f934 + 0x1c7f8c8);
  iVar1 = func_0x03668dfc(*puVar7);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 0;
  iVar1 = func_0x01ddc564(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x03668dfc(*puVar7);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01de349c(iVar1,0);
    uVar2 = (uint)(iVar1 == param_2);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_IsRequireSelectBubble RVA 0x1c6f938 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c7f938(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar5 = (char *)(_UNK_01c7fa64 + 0x1c7f950);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7fa68 + 0x1c7f964));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94d5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94d5,0);
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
  puVar7 = *(undefined4 **)(_UNK_01c7fa6c + 0x1c7f9c0);
  iVar1 = func_0x03668dfc(*puVar7);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 0;
  iVar1 = func_0x01ddc564(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x03668dfc(*puVar7);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x01de3448(iVar1,0);
    if (iVar1 != 0) {
      uVar2 = 0;
      iVar4 = func_0x021689a4(iVar1,0);
      if (iVar4 != 0) {
        if (param_2 < 1) {
          uVar2 = 1;
        }
        else {
          iVar1 = func_0x0210e2d4(iVar1,0);
          uVar2 = (uint)(iVar1 == param_2);
        }
      }
    }
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_IsRequireCollectItem RVA 0x1c6fa70 =====

uint FUN_01c7fa70(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x94d7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94d7,0);
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
  return (uint)(*(int *)(param_1 + 8) == param_2);
}



// ===== FAT.GuideRequireChecker$$_IsRequireBoardItemCoolDown RVA 0x1c6fad8 =====

/* WARNING: Possible PIC construction at 0x01de5f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01de5f8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c7fad8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_28 [4];
  undefined4 auStack_24 [4];
  
  pcVar5 = (char *)(_UNK_01c7fbbc + 0x1c7faf0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7fbc0 + 0x1c7fb04));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94d8,0);
  if (iVar1 == 0) {
    puVar6 = *(undefined4 **)(_UNK_01c7fbc4 + 0x1c7fb60);
    iVar1 = func_0x03668dfc(*puVar6);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ddc564(iVar1,0);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = func_0x03668dfc(*puVar6);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01de60ac + 0x1de5f18);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01de60b0 + 0x1de5f2c),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01de60b4 + 0x1de5f38));
      *pcVar5 = '\x01';
    }
    auStack_24[0] = 0;
    iVar1 = func_0x0229f06c(0x94d9,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03d59fc8(iVar1,param_2,**(undefined4 **)(_UNK_01de60b8 + 0x1de5fb0));
      if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 8), 0 < iVar1)) {
        iVar3 = *(int *)(param_1 + 0xc);
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_01de60bc + 0x1de5fec);
        do {
          if (0 < iVar3) {
            iVar1 = 0;
            do {
              iVar3 = *(int *)(param_1 + 0x7c);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x020e81ec(iVar3,iVar7,iVar1,0);
              if ((((iVar3 != 0) && (iVar2 = func_0x0210e2d4(iVar3,0), iVar2 == param_2)) &&
                  (iVar2 = func_0x02116ae0(iVar3,0), iVar2 != 0)) &&
                 ((iVar3 = func_0x02feb690(iVar3,auStack_24,0,*puVar6), iVar3 != 0 &&
                  (iVar3 = func_0x02168c38(auStack_24[0],0), iVar3 != 0)))) {
                return 1;
              }
              iVar3 = *(int *)(param_1 + 0xc);
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar3);
            iVar1 = *(int *)(param_1 + 8);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
      return 0;
    }
    iVar1 = func_0x0229f13c(0x94d9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1de5f8c;
    unaff_r4 = iVar1;
    unaff_r5 = param_1;
    unaff_r9 = param_2;
    register0x00000054 = (BADSPACEBASE *)auStack_28;
  }
  else {
    iVar1 = func_0x0229f13c(0x94d8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
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
  iVar3 = *(int *)(iVar1 + 0x10);
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
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar8,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  uVar8 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar8;
}



// ===== FAT.GuideRequireChecker$$_IsRequireBoardItemOutput RVA 0x1c6fbc8 =====

/* WARNING: Possible PIC construction at 0x01de615c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01de6160) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c7fbc8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_30 [4];
  int iStack_2c;
  int aiStack_28 [4];
  
  pcVar6 = (char *)(_UNK_01c7fcac + 0x1c7fbe0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7fcb0 + 0x1c7fbf4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94db,0);
  if (iVar1 == 0) {
    puVar7 = *(undefined4 **)(_UNK_01c7fcb4 + 0x1c7fc50);
    iVar1 = func_0x03668dfc(*puVar7);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ddc564(iVar1,0);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = func_0x03668dfc(*puVar7);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01de62e0 + 0x1de60dc);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01de62e4 + 0x1de60f0),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01de62e8 + 0x1de60fc));
      func_0x01384978(*(undefined4 *)(_UNK_01de62ec + 0x1de6108));
      *pcVar6 = '\x01';
    }
    aiStack_28[0] = 0;
    iStack_2c = 0;
    iVar1 = func_0x0229f06c(0x94dc,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03d59fc8(iVar1,param_2,**(undefined4 **)(_UNK_01de62f0 + 0x1de6184));
      if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 8), 0 < iVar1)) {
        iVar4 = *(int *)(param_1 + 0xc);
        iVar8 = 0;
        puVar7 = *(undefined4 **)(_UNK_01de62f4 + 0x1de61c4);
        do {
          if (0 < iVar4) {
            iVar1 = 0;
            do {
              iVar4 = *(int *)(param_1 + 0x7c);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              iVar4 = func_0x020e81ec(iVar4,iVar8,iVar1,0);
              if (((iVar4 != 0) && (iVar2 = func_0x0210e2d4(iVar4,0), iVar2 == param_2)) &&
                 (iVar2 = func_0x02116ae0(iVar4,0), iVar2 != 0)) {
                iVar3 = func_0x02feb690(iVar4,aiStack_28,0,*puVar7);
                iVar2 = aiStack_28[0];
                if (iVar3 == 0) {
                  iVar2 = func_0x02feb690(iVar4,&iStack_2c,0,
                                          **(undefined4 **)(_UNK_01de62f8 + 0x1de6278));
                  iVar4 = iStack_2c;
                  if (iVar2 != 0) {
                    if (iStack_2c == 0) {
                      func_0x01384bf0();
                    }
                    iVar4 = func_0x0212bdd0(iVar4,0);
                    if (iVar4 == 2) {
                      return 1;
                    }
                  }
                }
                else {
                  if (aiStack_28[0] == 0) {
                    func_0x01384bf0();
                  }
                  iVar4 = func_0x02122f9c(iVar2,0);
                  if (0 < iVar4) {
                    return 1;
                  }
                }
              }
              iVar4 = *(int *)(param_1 + 0xc);
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar4);
            iVar1 = *(int *)(param_1 + 8);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar1);
      }
      return 0;
    }
    iVar1 = func_0x0229f13c(0x94dc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1de6160;
    unaff_r4 = iVar1;
    unaff_r5 = param_1;
    unaff_r10 = param_2;
    register0x00000054 = (BADSPACEBASE *)auStack_30;
  }
  else {
    iVar1 = func_0x0229f13c(0x94db,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
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
  uVar5 = 3;
  if (iVar1 == 0) {
    uVar5 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x38),uVar5);
  uVar9 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar9;
}



// ===== FAT.GuideRequireChecker$$_IsRequireGiftBoxFirstItem RVA 0x1c6fcb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c7fcb8(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar5 = (char *)(_UNK_01c7fe04 + 0x1c7fcd0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7fe08 + 0x1c7fce4));
    func_0x01384978(*(undefined4 *)(_UNK_01c7fe0c + 0x1c7fcf0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94dd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94dd,0);
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
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c7fe10 + 0x1c7fd4c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01ddc564(iVar1,0);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_01c7fe14 + 0x1c7fd84) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x01dea7f8(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x02141d1c(0,0);
    if (0 < iVar4) {
      func_0x01384bf0();
      goto LAB_01c7fddc;
    }
  }
  else {
    iVar4 = func_0x02141d1c(iVar1,0);
    if (0 < iVar4) {
LAB_01c7fddc:
      iVar1 = func_0x02141bc8(iVar1,0);
      return (uint)(iVar1 == param_2);
    }
  }
  return 0;
}



// ===== FAT.GuideRequireChecker$$_IsRequireMainBoardEmptyGridNum RVA 0x1c6fe18 =====

uint FUN_01c7fe18(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
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
  
  iVar2 = func_0x0229f06c(0x94de,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01db7b78(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02139cf4(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x020d842c(iVar2,0);
    if (param_2 == 0) {
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = param_2 <= iVar2;
    }
    return (uint)bVar1;
  }
  iVar2 = func_0x0229f13c(0x94de,0);
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
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
  uVar3 = func_0x0245496c(&uStack_38,0,0);
  return uVar3;
}



// ===== FAT.GuideRequireChecker$$_IsRequireBoardNoMatch RVA 0x1c6ff00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c7ff00(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
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
  
  pcVar4 = (char *)(_UNK_01c7fff8 + 0x1c7ff14);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c7fffc + 0x1c7ff28));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94df,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94df,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  puVar6 = *(undefined4 **)(_UNK_01c80000 + 0x1c7ff80);
  iVar1 = func_0x03668dfc(*puVar6);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 0;
  iVar1 = func_0x01ddc564(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x03668dfc(*puVar6);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ddc2c0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01e241b4(iVar1,0);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_IsRequireBagEmptyGridNum RVA 0x1c70004 =====

uint FUN_01c80004(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x94e0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94e0,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (param_2 != 0) {
    return (uint)(param_2 <= iVar1);
  }
  return (uint)(iVar1 == 0);
}



// ===== FAT.GuideRequireChecker$$_IsRequireBagInUseGridNum RVA 0x1c700a8 =====

uint FUN_01c800a8(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x94e1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94e1,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x01c8de30(0,0);
    func_0x01384bf0();
  }
  else {
    iVar4 = func_0x01c8de30(iVar1,0);
  }
  if (param_2 != 0) {
    return (uint)(param_2 <= iVar4 - *(int *)(iVar1 + 8));
  }
  return (uint)(iVar4 == *(int *)(iVar1 + 8));
}



// ===== FAT.GuideRequireChecker$$_IsRequireBuildingCanBuy RVA 0x1c70178 =====

uint FUN_01c80178(undefined4 param_1,undefined4 param_2)

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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x94e2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94e2,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xe4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  iVar1 = func_0x01d7923c(iVar1,param_2,1,1);
  return (uint)(iVar1 == 1);
}



// ===== FAT.GuideRequireChecker$$_IsRequireBuildingCanUpgrade RVA 0x1c7022c =====

uint FUN_01c8022c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x0229f06c(0x94e4,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xe4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01d7923c(iVar1,param_2,param_3,0,0);
    uVar2 = (uint)(iVar1 == 1);
  }
  else {
    iVar1 = func_0x0229f13c(0x94e4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_IsRequireBuildingLevel RVA 0x1c702e8 =====

uint FUN_01c802e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x0229f06c(0x94e5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xe4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01d7923c(iVar1,param_2,param_3,0,0);
    uVar2 = (uint)(iVar1 == 2);
  }
  else {
    iVar1 = func_0x0229f13c(0x94e5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_IsRequireEventTypeActive RVA 0x1c703a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c803a4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x94e6,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02b438d8 + 0x2b437fc);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b438dc + 0x2b43810),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02b438e0 + 0x2b4381c));
      *pcVar5 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x59d,0);
    if (iVar3 == 0) {
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03dd1078(iVar1,param_2,&stack0xffffffec,
                              **(undefined4 **)(_UNK_02b438e4 + 0x2b43898));
      uVar4 = 0;
      if (iVar1 != 0) {
        func_0x01384bf0(0);
        uVar4 = 0;
        if (0 < iRam0000000c) {
          uVar4 = 1;
        }
      }
    }
    else {
      iVar3 = func_0x0229f13c(0x59d,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x02176ae0(iVar3,iVar1,param_2,0);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x94e6,0);
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
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.GuideRequireChecker$$_IsRequireNotNewUserActivity RVA 0x1c70434 =====

uint FUN_01c80434(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x94e7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94e7,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x02b437e0(iVar1,3,0);
  return uVar2 ^ 1;
}



// ===== FAT.GuideRequireChecker$$_isOnLackOfEnergy RVA 0x1c704c0 =====

uint FUN_01c804c0(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x94e8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94e8,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x90);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dc13cc(iVar1,0);
  return (uint)(iVar1 <= param_2);
}



// ===== FAT.GuideRequireChecker$$_CheckMiniBoardBoxNum RVA 0x1c7055c =====

undefined4 FUN_01c8055c(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x94e9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94e9,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = func_0x01aa4700(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar1 = func_0x02141d1c(iVar1,0);
    if (param_2 < iVar1) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.GuideRequireChecker$$_CheckMiniBoardItemSame RVA 0x1c70648 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c80648(int param_1)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar4 = (char *)(_UNK_01c8074c + 0x1c8065c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c80750 + 0x1c80670));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94ea,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01aa4700(iVar1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c80754 + 0x1c80704));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x01ddc2c0(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e242a8 + 0x1e241c8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e242ac + 0x1e241dc),0);
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x5ba8,0);
    if (iVar1 == 0) {
      piVar5 = *(int **)(_UNK_01e242b0 + 0x1e24234);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar4 = (char *)(_UNK_01e242b4 + 0x1e24250);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e242b8 + 0x1e24264));
        *pcVar4 = '\x01';
      }
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar5;
      }
      if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x24) != '\0') {
        return 0;
      }
      return (uint)(*(char *)(param_1 + 0x18) != '\0');
    }
    iVar1 = func_0x0229f13c(0x5ba8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94ea,0);
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
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_CheckDiggingTokenNum RVA 0x1c70758 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c80758(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int *piStack_14;
  
  pcVar7 = (char *)(_UNK_01c808dc + 0x1c80774);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c808e0 + 0x1c80788));
    func_0x01384978(*(undefined4 *)(_UNK_01c808e4 + 0x1c80794));
    *pcVar7 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar2 = func_0x0229f06c(0x94eb,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xd8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    uVar4 = func_0x02b404cc(iVar2,0x1c,0);
    func_0x03005894(uVar4,0,&piStack_14,**(undefined4 **)(_UNK_01c808e8 + 0x1c8083c));
    piVar1 = piStack_14;
    if (piStack_14 != (int *)0x0) {
      piVar6 = *(int **)(_UNK_01c808ec + 0x1c8085c);
      iVar2 = *piVar6;
      if (((uint)*(byte *)(*piStack_14 + 0xb8) < (uint)*(byte *)(iVar2 + 0xb8)) ||
         (*(int *)(*(int *)(*piStack_14 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
      {
        func_0x01384bf0();
        iVar2 = *piVar6;
      }
      iVar5 = *piVar1;
      uVar3 = 0;
      piVar6 = (int *)0x0;
      if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(iVar5 + 0xb8)) &&
         (piVar6 = piVar1,
         *(int *)(*(int *)(iVar5 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
        piVar6 = (int *)0x0;
      }
      iVar2 = func_0x023af514(piVar6,0);
      if (param_2 <= iVar2) {
        uVar3 = 1;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x94eb,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02179234(iVar2,param_1,param_2,0);
  }
  return uVar3;
}



// ===== FAT.GuideRequireChecker$$_CheckSceneReady RVA 0x1c708f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c808f0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
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
  
  iVar2 = func_0x0229f06c(0x94ec,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xe4);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x14);
    if (param_1 == 0) {
      return 0;
    }
    pcVar7 = (char *)(_UNK_01d64bbc + 0x1d64b04);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01d64bc0 + 0x1d64b18),0);
      *pcVar7 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x25eb,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x24);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01d59844(iVar2);
      cVar1 = '\0';
      if (iVar2 != 0) {
        cVar1 = *(char *)(param_1 + 0x30);
      }
      if (iVar2 != 0 && cVar1 != '\0') {
        iVar2 = *(int *)(param_1 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar2 + 0xc)) {
          pcVar7 = (char *)(_UNK_01d64c78 + 0x1d64bd8);
          if (*pcVar7 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01d64c7c + 0x1d64bec));
            func_0x01384978(*(undefined4 *)(_UNK_01d64c80 + 0x1d64bf8));
            *pcVar7 = '\x01';
          }
          iVar2 = func_0x0229f06c(0x25ec,0);
          if (iVar2 == 0) {
            if (*(int *)(**(int **)(_UNK_01d64c84 + 0x1d64c50) + 0x74) == 0) {
              func_0x01384ab4();
            }
            param_1 = **(int **)(_UNK_01d64c88 + 0x1d64c70);
            pcVar7 = (char *)(_UNK_029eb9c8 + 0x29eb8b8);
            if (*pcVar7 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_029eb9cc + 0x29eb8cc),0);
              func_0x01384978(*(undefined4 *)(_UNK_029eb9d0 + 0x29eb8d8));
              *pcVar7 = '\x01';
            }
            iVar2 = func_0x0229f06c(0xcaf,0);
            if (iVar2 == 0) {
              piVar9 = *(int **)(_UNK_029eb9d4 + 0x29eb930);
              iVar2 = *piVar9;
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar9;
              }
              piVar9 = *(int **)(*(int *)(iVar2 + 0x5c) + 0x14);
              if (piVar9 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar2 = *piVar9;
              uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
              if (uVar4 != 0) {
                piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                do {
                  if (piVar6[-1] == **(int **)(_UNK_029eb9d8 + 0x29eb968)) {
                    puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x100);
                    goto LAB_029eb9b0;
                  }
                  uVar4 = uVar4 - 1;
                  piVar6 = piVar6 + 2;
                } while (uVar4 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_029eb9d8 + 0x29eb968),8)
              ;
LAB_029eb9b0:
                    /* WARNING: Could not recover jumptable at 0x029eb9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar10 = (*(code *)*puVar3)(piVar9,param_1,puVar3[1]);
              return uVar10;
            }
            iVar2 = func_0x0229f13c(0xcaf,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
          }
          else {
            iVar2 = func_0x0229f13c(0x25ec,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
          }
          goto SUB_021742f8;
        }
      }
      return 0;
    }
    iVar2 = func_0x0229f13c(0x25eb,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x94ec,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
SUB_021742f8:
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
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  func_0x0245495c(iVar8,uVar10,&uStack_30,uVar5,0,0);
  uVar10 = func_0x0245496c(&uStack_30,0,0);
  return uVar10;
}



// ===== FAT.GuideRequireChecker$$_CheckPachinkoToken RVA 0x1c70984 =====

uint FUN_01c80984(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x94ed,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94ed,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xcc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0261eb7c(iVar1,0);
  return (uint)(param_2 <= iVar1);
}



// ===== FAT.GuideRequireChecker$$_CheckItemCanBoost RVA 0x1c70a20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c80a20(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_01c80b50 + 0x1c80a38);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c80b54 + 0x1c80a4c));
    func_0x01384978(*(undefined4 *)(_UNK_01c80b58 + 0x1c80a58));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x94ee,0);
  if (iVar1 == 0) {
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c80b5c + 0x1c80abc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x01de3448(iVar1,0);
    if (iVar1 != 0) {
      uVar2 = 0;
      iVar3 = func_0x02feb690(iVar1,&iStack_14,0,**(undefined4 **)(_UNK_01c80b60 + 0x1c80afc));
      iVar1 = iStack_14;
      if (iVar3 != 0) {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02123058(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 0;
        if (*(char *)(iVar1 + 0x2e) != '\0') {
          uVar2 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94ee,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_CheckMiniBoardMultiBoxNum RVA 0x1c70b64 =====

undefined4 FUN_01c80b64(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x94ef,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94ef,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = func_0x01ab27ec(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    uVar4 = 0;
    if ((iVar1 != 0) && (iVar1 = func_0x02141d1c(iVar1,0), param_2 < iVar1)) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.GuideRequireChecker$$_CheckMiniBoardMultiItemSame RVA 0x1c70c48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c80c48(int param_1)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar4 = (char *)(_UNK_01c80d4c + 0x1c80c5c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c80d50 + 0x1c80c70));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94f0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ab27ec(iVar1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c80d54 + 0x1c80d04));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x01ddc2c0(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e242a8 + 0x1e241c8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e242ac + 0x1e241dc),0);
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x5ba8,0);
    if (iVar1 == 0) {
      piVar5 = *(int **)(_UNK_01e242b0 + 0x1e24234);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar4 = (char *)(_UNK_01e242b4 + 0x1e24250);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e242b8 + 0x1e24264));
        *pcVar4 = '\x01';
      }
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar5;
      }
      if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x24) != '\0') {
        return 0;
      }
      return (uint)(*(char *)(param_1 + 0x18) != '\0');
    }
    iVar1 = func_0x0229f13c(0x5ba8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94f0,0);
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
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_CheckMiniBoardMultiEnterNext RVA 0x1c70d58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c80d58(int param_1)

{
  int iVar1;
  uint uVar2;
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
  undefined4 uStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x94f1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94f1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_021742f8:
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01ab27ec(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ab4f24(iVar1,0);
    if (iVar1 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      param_1 = *(int *)(iVar1 + 0xc4);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      pcVar4 = (char *)(_UNK_01ab55d4 + 0x1ab54c8);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ab55d8 + 0x1ab54dc),0);
        func_0x01384978(*(undefined4 *)(_UNK_01ab55dc + 0x1ab54e8));
        func_0x01384978(*(undefined4 *)(_UNK_01ab55e0 + 0x1ab54f4));
        *pcVar4 = '\x01';
      }
      uVar2 = 0;
      iVar1 = func_0x0229f06c(0x5f12,0);
      if (iVar1 == 0) {
        iVar1 = func_0x01ab27ec(param_1);
        if (iVar1 != 0) {
          iVar5 = func_0x01ab4dac(param_1);
          iVar1 = 0;
          if (iVar5 != 0) {
            iVar1 = *(int *)(iVar5 + 0x24);
          }
          if (iVar5 != 0 && iVar1 != 0) {
            uVar2 = 0;
            iStack_14 = 0;
            uStack_18 = 0;
            func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 0xc),
                            **(undefined4 **)(_UNK_01ab55e4 + 0x1ab558c));
            iVar1 = iStack_14;
            if (0 < iStack_14) {
              iVar5 = *(int *)(param_1 + 8);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              uVar2 = (uint)(iVar1 + -1 <= *(int *)(iVar5 + 0x4c));
            }
          }
        }
        return uVar2;
      }
      iVar1 = func_0x0229f13c(0x5f12,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      goto SUB_021742f8;
    }
  }
  return 0;
}



// ===== FAT.GuideRequireChecker$$_GuessColorTokenNum RVA 0x1c70e5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c80e5c(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int *piStack_14;
  
  pcVar5 = (char *)(_UNK_01c80f8c + 0x1c80e78);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c80f90 + 0x1c80e8c));
    *pcVar5 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar2 = func_0x0229f06c(0x94f2,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xd8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    iVar2 = func_0x02b3c518(iVar2,0x28,&piStack_14,0);
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = piStack_14;
    }
    if (iVar2 != 0 && piVar1 != (int *)0x0) {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_01c80f94 + 0x1c80f50) + 0xb8);
      if ((uVar4 <= *(byte *)(*piVar1 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar1 + 100) + uVar4 * 4 + -4) ==
          **(int **)(_UNK_01c80f94 + 0x1c80f50))) {
        uVar3 = (uint)(param_2 <= piVar1[0x2e]);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x94f2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02179234(iVar2,param_1,param_2,0);
  }
  return uVar3;
}



// ===== FAT.GuideRequireChecker$$_CheckMultiSpinTokeNum RVA 0x1c70f98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c80f98(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
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
  
  pcVar5 = (char *)(_UNK_01c81094 + 0x1c80fac);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c81098 + 0x1c80fc0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94f3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = (int *)func_0x02b43c64(iVar1,0x83,0);
    if (param_1 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(_UNK_01c8109c + 0x1c81058) + 0xb8);
      if ((uVar2 <= *(byte *)(*param_1 + 0xb8)) &&
         (*(int *)(*(int *)(*param_1 + 100) + uVar2 * 4 + -4) ==
          **(int **)(_UNK_01c8109c + 0x1c81058))) {
        iVar1 = func_0x0229f06c(0x6b9,0);
        if (iVar1 == 0) {
          uVar2 = 0;
          iVar1 = func_0x0229f06c(0x6ba,0);
          if (iVar1 == 0) {
            if (*(char *)((int)param_1 + 0x55) != '\0') {
              uVar2 = 0;
              iVar1 = func_0x02b48934(param_1,0);
              if (iVar1 != 0) {
                uVar3 = func_0x025a4538(param_1);
                bVar8 = uVar3 == 0;
                if (bVar8) {
                  uVar3 = (uint)*(byte *)((int)param_1 + 0x57);
                }
                if (((bVar8 && uVar3 == 0) && (iVar1 = func_0x025a44dc(param_1), iVar1 == 0)) &&
                   ((uint)param_1[0x1b] < 5)) {
                  iVar6 = param_1[0x1a];
                  iVar1 = func_0x025a7a50(param_1);
                  uVar2 = (uint)(iVar1 <= iVar6);
                }
              }
            }
            return uVar2;
          }
          iVar1 = func_0x0229f13c(0x6ba,0);
          if (iVar1 == 0) {
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
          if (*(int *)(iVar1 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
          }
          func_0x01485278(&uStack_38,param_1,0);
          func_0x01485228(&uStack_38,0,0);
          iVar6 = *(int *)(iVar1 + 8);
          uVar7 = *(undefined4 *)(iVar1 + 0xc);
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 3;
          if (iVar1 == 0) {
            uVar4 = 2;
          }
          func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
          uVar2 = func_0x0245496c(&uStack_38,0,0);
          return uVar2;
        }
        iVar1 = func_0x0229f13c(0x6b9,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        goto SUB_021742f8;
      }
    }
    return 0;
  }
  iVar1 = func_0x0229f13c(0x94f3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
SUB_021742f8:
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
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_GuessTotalRightItem RVA 0x1c710a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c810a0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  int *piStack_14;
  
  pcVar4 = (char *)(_UNK_01c811f0 + 0x1c810bc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c811f4 + 0x1c810d0));
    *pcVar4 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar1 = func_0x0229f06c(0x94f4,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar5 = *(int **)(iVar1 + 0xd8);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x02b3c518(piVar5,0x28,&piStack_14,0);
    if (iVar1 != 0) {
      piVar5 = piStack_14;
    }
    if (iVar1 != 0 && piVar5 != (int *)0x0) {
      uVar3 = (uint)*(byte *)(**(int **)(_UNK_01c811f8 + 0x1c81194) + 0xb8);
      if ((uVar3 <= *(byte *)(*piVar5 + 0xb8)) &&
         (uVar2 = 0,
         *(int *)(*(int *)(*piVar5 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_01c811f8 + 0x1c81194)
         )) {
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((char)piVar5[0x38] != '\0') {
          uVar2 = (uint)(param_2 <= piVar5[0x35]);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94f4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_GuessPutRepeatedItem RVA 0x1c711fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c811fc(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int *piStack_14;
  
  pcVar5 = (char *)(_UNK_01c81320 + 0x1c81214);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c81324 + 0x1c81228));
    *pcVar5 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar2 = func_0x0229f06c(0x94f7,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xd8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    iVar2 = func_0x02b3c518(iVar2,0x28,&piStack_14,0);
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = piStack_14;
    }
    if (iVar2 != 0 && piVar1 != (int *)0x0) {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_01c81328 + 0x1c812e8) + 0xb8);
      if ((uVar4 <= *(byte *)(*piVar1 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar1 + 100) + uVar4 * 4 + -4) ==
          **(int **)(_UNK_01c81328 + 0x1c812e8))) {
        uVar3 = (uint)((char)piVar1[0x36] != '\0');
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x94f7,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021742f8(iVar2,param_1,0);
  }
  return uVar3;
}



// ===== FAT.GuideRequireChecker$$_CheckBingoCompleteNum RVA 0x1c7132c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c8132c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piStack_14;
  
  pcVar5 = (char *)(_UNK_01c8146c + 0x1c81348);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c81470 + 0x1c8135c));
    *pcVar5 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar1 = func_0x0229f06c(0x94f8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar4 = *(int **)(iVar1 + 0xd8);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x02b3c518(piVar4,0x2a,&piStack_14,0);
    if (iVar1 != 0) {
      piVar4 = piStack_14;
    }
    if (iVar1 != 0 && piVar4 != (int *)0x0) {
      uVar3 = (uint)*(byte *)(**(int **)(_UNK_01c81474 + 0x1c81420) + 0xb8);
      if ((uVar3 <= *(byte *)(*piVar4 + 0xb8)) &&
         (uVar2 = 0,
         *(int *)(*(int *)(*piVar4 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_01c81474 + 0x1c81420)
         )) {
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x02b168b0(piVar4,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94f8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_CheckMineBonusItemMax RVA 0x1c71478 =====

/* WARNING: Removing unreachable block (ram,0x01c81870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01c81478(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piStack_28;
  
  pcVar9 = (char *)(_UNK_01c8195c + 0x1c81494);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c81960 + 0x1c814a8));
    func_0x01384978(*(undefined4 *)(_UNK_01c81964 + 0x1c814b4));
    func_0x01384978(*(undefined4 *)(_UNK_01c81968 + 0x1c814c0));
    func_0x01384978(*(undefined4 *)(_UNK_01c8196c + 0x1c814cc));
    func_0x01384978(*(undefined4 *)(_UNK_01c81970 + 0x1c814d8));
    func_0x01384978(*(undefined4 *)(_UNK_01c81974 + 0x1c814e4));
    *pcVar9 = '\x01';
  }
  piStack_28 = (int *)0x0;
  iVar1 = func_0x0229f06c(0x94f9,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar8 = *(int **)(iVar1 + 0xd8);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = 0;
    iVar2 = func_0x02b3c518(piVar8,0x2b,&piStack_28,0);
    if (iVar2 != 0) {
      piVar8 = piStack_28;
    }
    if (iVar2 != 0 && piVar8 != (int *)0x0) {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_01c81978 + 0x1c815a8) + 0xb8);
      if ((uVar5 <= *(byte *)(*piVar8 + 0xb8)) &&
         (iVar1 = 0,
         *(int *)(*(int *)(*piVar8 + 100) + uVar5 * 4 + -4) == **(int **)(_UNK_01c81978 + 0x1c815a8)
         )) {
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = piVar8[0xf];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar8 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01c8197c + 0x1c81610));
        piVar10 = *(int **)(_UNK_01c81980 + 0x1c81628);
        piVar11 = *(int **)(_UNK_01c81984 + 0x1c81630);
        piVar12 = *(int **)(_UNK_01c81988 + 0x1c81638);
        do {
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar8;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar10) {
                puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto LAB_01c81690;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar8,*piVar10,0);
LAB_01c81690:
          iVar1 = (*(code *)*puVar3)(piVar8,puVar3[1]);
          if (iVar1 == 0) {
            iVar1 = 0;
            break;
          }
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar8;
          uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar11) {
                puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
                goto LAB_01c81708;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0);
LAB_01c81708:
          uVar4 = (*(code *)*puVar3)(piVar8,puVar3[1]);
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x4c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01dbb4bc(iVar2,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          piVar6 = (int *)func_0x0214d864(iVar2,0);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar6;
          uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar12) {
                puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xe0);
                goto LAB_01c817cc;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar6,*piVar12,4);
LAB_01c817cc:
          iVar2 = (*(code *)*puVar3)(piVar6,uVar4,puVar3[1]);
        } while (iVar2 == 0);
        if (piVar8 != (int *)0x0) {
          iVar2 = *piVar8;
          uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar10[-1] == **(int **)(_UNK_01c8198c + 0x1c81810)) {
                puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
                goto LAB_01c81858;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01c8198c + 0x1c81810),0);
LAB_01c81858:
          (*(code *)*puVar3)(piVar8,puVar3[1]);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94f9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return iVar1;
}



// ===== FAT.GuideRequireChecker$$_CheckFirstFishUnlock RVA 0x1c71994 =====

/* WARNING: Removing unreachable block (ram,0x01c81d30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01c81994(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piStack_24;
  
  pcVar8 = (char *)(_UNK_01c81e10 + 0x1c819b0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c81e14 + 0x1c819c4));
    func_0x01384978(*(undefined4 *)(_UNK_01c81e18 + 0x1c819d0));
    func_0x01384978(*(undefined4 *)(_UNK_01c81e1c + 0x1c819dc));
    func_0x01384978(*(undefined4 *)(_UNK_01c81e20 + 0x1c819e8));
    func_0x01384978(*(undefined4 *)(_UNK_01c81e24 + 0x1c819f4));
    *pcVar8 = '\x01';
  }
  piStack_24 = (int *)0x0;
  iVar1 = func_0x0229f06c(0x94fa,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = 0;
    iVar1 = func_0x02b3c518(iVar1,0x31,&piStack_24,0);
    if (iVar1 != 0) {
      param_1 = piStack_24;
    }
    if (iVar1 != 0 && param_1 != (int *)0x0) {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_01c81e28 + 0x1c81ab8) + 0xb8);
      if ((uVar5 <= *(byte *)(*param_1 + 0xb8)) &&
         (iVar2 = 0,
         *(int *)(*(int *)(*param_1 + 100) + uVar5 * 4 + -4) ==
         **(int **)(_UNK_01c81e28 + 0x1c81ab8))) {
        if (param_1 == (int *)0x0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)func_0x02913dd4(param_1,0);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_01c81e2c + 0x1c81b20)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto LAB_01c81b68;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c81e2c + 0x1c81b20),0);
LAB_01c81b68:
        piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
        piVar6 = *(int **)(_UNK_01c81e30 + 0x1c81b88);
        piVar10 = *(int **)(_UNK_01c81e34 + 0x1c81b90);
        do {
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar6) {
                puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01c81be8;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar6,0);
LAB_01c81be8:
          iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if (iVar2 == 0) {
            iVar2 = 0;
            break;
          }
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar10) {
                puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01c81c60;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0);
LAB_01c81c60:
          iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar9 = *(undefined4 *)(iVar1 + 0xc);
          if (param_1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02919cf8(param_1,uVar9,0);
        } while (iVar1 == 0);
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar6[-1] == **(int **)(_UNK_01c81e38 + 0x1c81cd0)) {
                puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto LAB_01c81d18;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c81e38 + 0x1c81cd0),0);
LAB_01c81d18:
          (*(code *)*puVar4)(piVar3,puVar4[1]);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94fa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return iVar2;
}



// ===== FAT.GuideRequireChecker$$_CheckCanPreview RVA 0x1c71e40 =====

undefined4 FUN_01c81e40(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x94fb,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0xb0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x2636,0);
    if (iVar1 == 0) {
      param_1 = *(int *)(param_1 + 0x14);
      if (param_1 == 0) {
        return 0;
      }
      uVar4 = 0;
      iVar1 = func_0x0229f06c(0x25c6,0);
      if (iVar1 == 0) {
        if ((*(int *)(param_1 + 0x3c) != 0) &&
           (uVar4 = 0, *(int *)(*(int *)(param_1 + 0x3c) + 0x48) <= *(int *)(param_1 + 0x24))) {
          uVar4 = 1;
        }
        return uVar4;
      }
      iVar1 = func_0x0229f13c(0x25c6,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x2636,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94fb,0);
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
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.GuideRequireChecker$$_CheckStockItem RVA 0x1c71ec4 =====

undefined4 FUN_01c81ec4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x94fc,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x01dbb000(iVar1,0);
    if (iVar1 != 0) {
      uVar2 = 0;
      iVar1 = func_0x0214531c(iVar1,param_2,0);
      if (param_3 <= iVar1) {
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94fc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_CheckClawOrderPickSuccess RVA 0x1c71f8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c81f8c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_01c82094 + 0x1c81fa0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c82098 + 0x1c81fb4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9500,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9500,0);
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
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    uVar7 = func_0x0245496c(&uStack_30,0,0);
    return uVar7;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 0;
  piVar2 = (int *)func_0x02b43c64(iVar1,0x44,0);
  if (piVar2 != (int *)0x0) {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_01c8209c + 0x1c82050) + 0xb8);
    if ((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_01c8209c + 0x1c82050))
       ) {
      uVar7 = 0;
      iVar1 = func_0x0288fad0(piVar2,0);
      if (0 < iVar1) {
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}



// ===== FAT.GuideRequireChecker$$_CheckLevelCanBoost RVA 0x1c720a0 =====

undefined4 FUN_01c820a0(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x9501,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9501,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = func_0x01cab92c(iVar1,param_2,0);
  if (iVar1 != 0) {
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x48);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar3 = func_0x01dd2c04(iVar3,0);
    if (*(int *)(iVar1 + 0x14) <= iVar3) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.GuideRequireChecker$$_CheckMineCartBoardRoundFinish RVA 0x1c72188 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c82188(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  int *piStack_14;
  
  pcVar4 = (char *)(_UNK_01c822c0 + 0x1c821a0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c822c4 + 0x1c821b4));
    *pcVar4 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar1 = func_0x0229f06c(0x9502,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar5 = *(int **)(iVar1 + 0xd8);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x02b3c518(piVar5,0x45,&piStack_14,0);
    if (iVar1 != 0) {
      piVar5 = piStack_14;
    }
    if (iVar1 != 0 && piVar5 != (int *)0x0) {
      uVar3 = (uint)*(byte *)(**(int **)(_UNK_01c822c8 + 0x1c82274) + 0xb8);
      if ((uVar3 <= *(byte *)(*piVar5 + 0xb8)) &&
         (uVar2 = 0,
         *(int *)(*(int *)(*piVar5 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_01c822c8 + 0x1c82274)
         )) {
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        uVar2 = (uint)(*(char *)((int)piVar5 + 0xb3) != '\0');
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9502,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_CheckTrainMissionSpawnerNum RVA 0x1c722cc =====

/* WARNING: Removing unreachable block (ram,0x01c82914) */
/* WARNING: Removing unreachable block (ram,0x01c829f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c822cc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  uint uStack_28;
  
  pcVar11 = (char *)(_UNK_01c82b90 + 0x1c822e8);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c82b94 + 0x1c822fc));
    func_0x01384978(*(undefined4 *)(_UNK_01c82b98 + 0x1c82308));
    func_0x01384978(*(undefined4 *)(_UNK_01c82b9c + 0x1c82314));
    func_0x01384978(*(undefined4 *)(_UNK_01c82ba0 + 0x1c82320));
    func_0x01384978(*(undefined4 *)(_UNK_01c82ba4 + 0x1c8232c));
    func_0x01384978(*(undefined4 *)(_UNK_01c82ba8 + 0x1c82338));
    func_0x01384978(*(undefined4 *)(_UNK_01c82bac + 0x1c82344));
    func_0x01384978(*(undefined4 *)(_UNK_01c82bb0 + 0x1c82350));
    func_0x01384978(*(undefined4 *)(_UNK_01c82bb4 + 0x1c8235c));
    func_0x01384978(*(undefined4 *)(_UNK_01c82bb8 + 0x1c82368));
    func_0x01384978(*(undefined4 *)(_UNK_01c82bbc + 0x1c82374));
    func_0x01384978(*(undefined4 *)(_UNK_01c82bc0 + 0x1c82380));
    func_0x01384978(*(undefined4 *)(_UNK_01c82bc4 + 0x1c8238c));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9503,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9503,0);
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
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar10,uVar12,&uStack_38,uVar8,0,0);
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  piVar2 = (int *)func_0x02b43c64(iVar1,0x49,0);
  if (piVar2 != (int *)0x0) {
    uVar5 = (uint)*(byte *)(**(int **)(_UNK_01c82bc8 + 0x1c82434) + 0xb8);
    if (uVar5 <= *(byte *)(*piVar2 + 0xb8)) {
      uVar4 = 0;
      if (*(int *)(*(int *)(*piVar2 + 100) + uVar5 * 4 + -4) !=
          **(int **)(_UNK_01c82bc8 + 0x1c82434)) {
        piVar2 = (int *)0x0;
      }
      if (piVar2 != (int *)0x0) {
        iVar1 = piVar2[0x24];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          piVar9 = *(int **)(_UNK_01c82bcc + 0x1c82490);
          iVar1 = *piVar9;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar9;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x5dc);
        }
        puVar13 = *(undefined4 **)(_UNK_01c82bd0 + 0x1c824b8);
        iVar10 = func_0x034aaa34(*puVar13);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 0;
        piVar9 = (int *)func_0x01ee8b58(iVar10,iVar1,0);
        if (*(int *)(**(int **)(_UNK_01c82bd4 + 0x1c824f0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0244fb8c(piVar9,0,0);
        if ((iVar1 == 0) && (piVar9 != (int *)0x0)) {
          uVar5 = (uint)*(byte *)(**(int **)(_UNK_01c82bd8 + 0x1c8252c) + 0xb8);
          if ((uVar5 <= *(byte *)(*piVar9 + 0xb8)) &&
             (*(int *)(*(int *)(*piVar9 + 100) + uVar5 * 4 + -4) ==
              **(int **)(_UNK_01c82bd8 + 0x1c8252c))) {
            iVar1 = func_0x034aaa34(*puVar13);
            iVar10 = piVar2[0x26];
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            uVar12 = *(undefined4 *)(iVar10 + 0xc);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar4 = 0;
            iVar1 = func_0x01eea2b8(iVar1,uVar12,0);
            if (iVar1 == 0) {
              uVar4 = 0;
              uVar12 = func_0x02b87720(piVar2,0);
              if (*(int *)(**(int **)(_UNK_01c82bdc + 0x1c825bc) + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar10 = func_0x036a1750(uVar12,**(undefined4 **)(_UNK_01c82be0 + 0x1c825d8));
              iVar1 = 0;
              if (iVar10 != 0) {
                iVar1 = *(int *)(iVar10 + 0x18);
              }
              if (iVar10 != 0 && iVar1 != 0) {
                piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01c82be4 + 0x1c825fc));
                uStack_28 = 0;
                piVar14 = *(int **)(_UNK_01c82be8 + 0x1c8261c);
                piVar15 = *(int **)(_UNK_01c82bec + 0x1c82624);
                piVar9 = *(int **)(_UNK_01c82bf0 + 0x1c8262c);
                puVar13 = *(undefined4 **)(_UNK_01c82bf4 + 0x1c82634);
                do {
                  do {
                    if (piVar2 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar1 = *piVar2;
                    iVar10 = *piVar14;
                    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                    if (uVar4 != 0) {
                      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                      do {
                        if (piVar6[-1] == iVar10) {
                          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                          goto LAB_01c8268c;
                        }
                        uVar4 = uVar4 - 1;
                        piVar6 = piVar6 + 2;
                      } while (uVar4 != 0);
                    }
                    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar10,0);
LAB_01c8268c:
                    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
                    if (iVar1 == 0) {
                      iVar1 = 0x10;
                      goto LAB_01c8297c;
                    }
                    if (piVar2 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar1 = *piVar2;
                    iVar10 = *piVar15;
                    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                    if (uVar4 != 0) {
                      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                      do {
                        if (piVar6[-1] == iVar10) {
                          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                          goto LAB_01c82700;
                        }
                        uVar4 = uVar4 - 1;
                        piVar6 = piVar6 + 2;
                      } while (uVar4 != 0);
                    }
                    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar10,0);
LAB_01c82700:
                    uVar12 = (*(code *)*puVar3)(piVar2,puVar3[1]);
                    if (*(int *)(*piVar9 + 0x74) == 0) {
                      func_0x01384ab4();
                    }
                    iVar1 = func_0x036a1750(uVar12,*puVar13);
                  } while (iVar1 == 0);
                  iVar1 = *(int *)(iVar1 + 0x18);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  piVar6 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01c82bf8 + 0x1c82758)
                                                 );
                  do {
                    if (piVar6 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar1 = *piVar6;
                    iVar10 = *piVar14;
                    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                    if (uVar4 != 0) {
                      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == iVar10) {
                          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                          goto LAB_01c827c0;
                        }
                        uVar4 = uVar4 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar4 != 0);
                    }
                    puVar3 = (undefined4 *)func_0x014002dc(piVar6,iVar10,0);
LAB_01c827c0:
                    iVar1 = (*(code *)*puVar3)(piVar6,puVar3[1]);
                    if (iVar1 == 0) {
                      iStack_2c = 0xb;
                      goto LAB_01c82888;
                    }
                    if (piVar6 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar1 = *piVar6;
                    iVar10 = *piVar15;
                    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                    if (uVar4 != 0) {
                      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                      do {
                        if (piVar9[-1] == iVar10) {
                          puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
                          piVar9 = *(int **)(_UNK_01c82bfc + 0x1c8284c);
                          goto LAB_01c82848;
                        }
                        uVar4 = uVar4 - 1;
                        piVar9 = piVar9 + 2;
                      } while (uVar4 != 0);
                    }
                    piVar9 = *(int **)(_UNK_01c82c00 + 0x1c82830);
                    puVar3 = (undefined4 *)func_0x014002dc(piVar6,iVar10,0);
LAB_01c82848:
                    uVar12 = (*(code *)*puVar3)(piVar6,puVar3[1]);
                    uVar12 = func_0x02c05738(uVar12,1,0);
                    iVar1 = func_0x02b931f0(uVar12,0);
                  } while (iVar1 == 0);
                  uStack_28 = 1;
                  iStack_2c = 0xf;
LAB_01c82888:
                  if (piVar6 != (int *)0x0) {
                    iVar1 = *piVar6;
                    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                    if (uVar4 != 0) {
                      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                      do {
                        if (piVar9[-1] == **(int **)(_UNK_01c82c08 + 0x1c828a4)) {
                          puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
                          piVar9 = *(int **)(_UNK_01c82c0c + 0x1c82900);
                          goto LAB_01c828fc;
                        }
                        uVar4 = uVar4 - 1;
                        piVar9 = piVar9 + 2;
                      } while (uVar4 != 0);
                    }
                    puVar3 = (undefined4 *)
                             func_0x014002dc(piVar6,**(int **)(_UNK_01c82c08 + 0x1c828a4),0);
                    piVar9 = *(int **)(_UNK_01c82c10 + 0x1c828e8);
LAB_01c828fc:
                    (*(code *)*puVar3)(piVar6,puVar3[1]);
                  }
                  iVar1 = iStack_2c;
                } while (iStack_2c == 0xb || iStack_2c == 0);
LAB_01c8297c:
                if (piVar2 != (int *)0x0) {
                  iVar10 = *piVar2;
                  uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
                  if (uVar4 != 0) {
                    piVar9 = (int *)(*(int *)(iVar10 + 0x58) + 4);
                    do {
                      if (piVar9[-1] == **(int **)(_UNK_01c82c18 + 0x1c82994)) {
                        puVar13 = (undefined4 *)(iVar10 + *piVar9 * 8 + 0xc0);
                        goto LAB_01c829dc;
                      }
                      uVar4 = uVar4 - 1;
                      piVar9 = piVar9 + 2;
                    } while (uVar4 != 0);
                  }
                  puVar13 = (undefined4 *)
                            func_0x014002dc(piVar2,**(int **)(_UNK_01c82c18 + 0x1c82994),0);
LAB_01c829dc:
                  (*(code *)*puVar13)(piVar2,puVar13[1]);
                }
                uVar4 = iVar1 == 0xf & uStack_28;
              }
            }
          }
        }
      }
    }
  }
  return uVar4;
}



// ===== FAT.GuideRequireChecker$$_CheckEnergyBoostNum RVA 0x1c72c20 =====

uint FUN_01c82c20(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x9504,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9504,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x90);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dc13cc(iVar1,0);
  return (uint)(param_2 <= iVar1);
}



// ===== FAT.GuideRequireChecker$$_CheckIndepenBingoSpawnerNum RVA 0x1c72cbc =====

/* WARNING: Removing unreachable block (ram,0x01c832e8) */
/* WARNING: Removing unreachable block (ram,0x01c833c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c82cbc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  uint uStack_28;
  
  pcVar11 = (char *)(_UNK_01c83564 + 0x1c82cd8);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c83568 + 0x1c82cec));
    func_0x01384978(*(undefined4 *)(_UNK_01c8356c + 0x1c82cf8));
    func_0x01384978(*(undefined4 *)(_UNK_01c83570 + 0x1c82d04));
    func_0x01384978(*(undefined4 *)(_UNK_01c83574 + 0x1c82d10));
    func_0x01384978(*(undefined4 *)(_UNK_01c83578 + 0x1c82d1c));
    func_0x01384978(*(undefined4 *)(_UNK_01c8357c + 0x1c82d28));
    func_0x01384978(*(undefined4 *)(_UNK_01c83580 + 0x1c82d34));
    func_0x01384978(*(undefined4 *)(_UNK_01c83584 + 0x1c82d40));
    func_0x01384978(*(undefined4 *)(_UNK_01c83588 + 0x1c82d4c));
    func_0x01384978(*(undefined4 *)(_UNK_01c8358c + 0x1c82d58));
    func_0x01384978(*(undefined4 *)(_UNK_01c83590 + 0x1c82d64));
    func_0x01384978(*(undefined4 *)(_UNK_01c83594 + 0x1c82d70));
    func_0x01384978(*(undefined4 *)(_UNK_01c83598 + 0x1c82d7c));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9505,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9505,0);
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
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar10,uVar12,&uStack_38,uVar8,0,0);
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  piVar2 = (int *)func_0x02b43c64(iVar1,0x55,0);
  if (piVar2 != (int *)0x0) {
    uVar5 = (uint)*(byte *)(**(int **)(_UNK_01c8359c + 0x1c82e24) + 0xb8);
    if ((uVar5 <= *(byte *)(*piVar2 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar2 + 100) + uVar5 * 4 + -4) == **(int **)(_UNK_01c8359c + 0x1c82e24))
       ) {
      iVar1 = piVar2[0x1e];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        piVar9 = *(int **)(_UNK_01c835a0 + 0x1c82e74);
        iVar1 = *piVar9;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar9;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x8c8);
      }
      puVar13 = *(undefined4 **)(_UNK_01c835a4 + 0x1c82e9c);
      iVar10 = func_0x034aaa34(*puVar13);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 0;
      piVar9 = (int *)func_0x01ee8b58(iVar10,iVar1,0);
      if (*(int *)(**(int **)(_UNK_01c835a8 + 0x1c82ed4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0244fb8c(piVar9,0,0);
      if ((iVar1 == 0) && (piVar9 != (int *)0x0)) {
        uVar5 = (uint)*(byte *)(**(int **)(_UNK_01c835ac + 0x1c82f10) + 0xb8);
        if ((uVar5 <= *(byte *)(*piVar9 + 0xb8)) &&
           (*(int *)(*(int *)(*piVar9 + 100) + uVar5 * 4 + -4) ==
            **(int **)(_UNK_01c835ac + 0x1c82f10))) {
          iVar1 = func_0x034aaa34(*puVar13);
          iVar10 = piVar2[0x2e];
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uVar12 = *(undefined4 *)(iVar10 + 0xc);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 0;
          iVar1 = func_0x01eea2b8(iVar1,uVar12,0);
          if (iVar1 == 0) {
            iVar1 = piVar2[0x10];
            if (*(int *)(**(int **)(_UNK_01c835b0 + 0x1c82f8c) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar10 = func_0x036a1750(iVar1,**(undefined4 **)(_UNK_01c835b4 + 0x1c82fac));
            iVar1 = 0;
            if (iVar10 != 0) {
              iVar1 = *(int *)(iVar10 + 0x14);
            }
            if (iVar10 != 0 && iVar1 != 0) {
              piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01c835b8 + 0x1c82fd0));
              uStack_28 = 0;
              piVar14 = *(int **)(_UNK_01c835bc + 0x1c82ff0);
              piVar15 = *(int **)(_UNK_01c835c0 + 0x1c82ff8);
              piVar9 = *(int **)(_UNK_01c835c4 + 0x1c83000);
              puVar13 = *(undefined4 **)(_UNK_01c835c8 + 0x1c83008);
              do {
                do {
                  if (piVar2 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *piVar2;
                  iVar10 = *piVar14;
                  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar4 != 0) {
                    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar6[-1] == iVar10) {
                        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                        goto LAB_01c83060;
                      }
                      uVar4 = uVar4 - 1;
                      piVar6 = piVar6 + 2;
                    } while (uVar4 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar10,0);
LAB_01c83060:
                  iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
                  if (iVar1 == 0) {
                    iVar1 = 0x10;
                    goto LAB_01c83350;
                  }
                  if (piVar2 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *piVar2;
                  iVar10 = *piVar15;
                  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar4 != 0) {
                    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar6[-1] == iVar10) {
                        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                        goto LAB_01c830d4;
                      }
                      uVar4 = uVar4 - 1;
                      piVar6 = piVar6 + 2;
                    } while (uVar4 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar10,0);
LAB_01c830d4:
                  uVar12 = (*(code *)*puVar3)(piVar2,puVar3[1]);
                  if (*(int *)(*piVar9 + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  iVar1 = func_0x036a1750(uVar12,*puVar13);
                } while (iVar1 == 0);
                iVar1 = *(int *)(iVar1 + 0x20);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                piVar6 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01c835cc + 0x1c8312c));
                do {
                  if (piVar6 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *piVar6;
                  iVar10 = *piVar14;
                  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar4 != 0) {
                    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar7[-1] == iVar10) {
                        puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                        goto LAB_01c83194;
                      }
                      uVar4 = uVar4 - 1;
                      piVar7 = piVar7 + 2;
                    } while (uVar4 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x014002dc(piVar6,iVar10,0);
LAB_01c83194:
                  iVar1 = (*(code *)*puVar3)(piVar6,puVar3[1]);
                  if (iVar1 == 0) {
                    iStack_2c = 0xb;
                    goto LAB_01c8325c;
                  }
                  if (piVar6 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *piVar6;
                  iVar10 = *piVar15;
                  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar4 != 0) {
                    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar9[-1] == iVar10) {
                        puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
                        piVar9 = *(int **)(_UNK_01c835d0 + 0x1c83220);
                        goto LAB_01c8321c;
                      }
                      uVar4 = uVar4 - 1;
                      piVar9 = piVar9 + 2;
                    } while (uVar4 != 0);
                  }
                  piVar9 = *(int **)(_UNK_01c835d4 + 0x1c83204);
                  puVar3 = (undefined4 *)func_0x014002dc(piVar6,iVar10,0);
LAB_01c8321c:
                  uVar12 = (*(code *)*puVar3)(piVar6,puVar3[1]);
                  uVar12 = func_0x02c05738(uVar12,1,0);
                  iVar1 = func_0x01a47ef8(uVar12,0);
                } while (iVar1 == 0);
                uStack_28 = 1;
                iStack_2c = 0xf;
LAB_01c8325c:
                if (piVar6 != (int *)0x0) {
                  iVar1 = *piVar6;
                  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar4 != 0) {
                    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar9[-1] == **(int **)(_UNK_01c835dc + 0x1c83278)) {
                        puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
                        piVar9 = *(int **)(_UNK_01c835e0 + 0x1c832d4);
                        goto LAB_01c832d0;
                      }
                      uVar4 = uVar4 - 1;
                      piVar9 = piVar9 + 2;
                    } while (uVar4 != 0);
                  }
                  puVar3 = (undefined4 *)
                           func_0x014002dc(piVar6,**(int **)(_UNK_01c835dc + 0x1c83278),0);
                  piVar9 = *(int **)(_UNK_01c835e4 + 0x1c832bc);
LAB_01c832d0:
                  (*(code *)*puVar3)(piVar6,puVar3[1]);
                }
                iVar1 = iStack_2c;
              } while (iStack_2c == 0xb || iStack_2c == 0);
LAB_01c83350:
              if (piVar2 != (int *)0x0) {
                iVar10 = *piVar2;
                uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
                if (uVar4 != 0) {
                  piVar9 = (int *)(*(int *)(iVar10 + 0x58) + 4);
                  do {
                    if (piVar9[-1] == **(int **)(_UNK_01c835ec + 0x1c83368)) {
                      puVar13 = (undefined4 *)(iVar10 + *piVar9 * 8 + 0xc0);
                      goto LAB_01c833b0;
                    }
                    uVar4 = uVar4 - 1;
                    piVar9 = piVar9 + 2;
                  } while (uVar4 != 0);
                }
                puVar13 = (undefined4 *)
                          func_0x014002dc(piVar2,**(int **)(_UNK_01c835ec + 0x1c83368),0);
LAB_01c833b0:
                (*(code *)*puVar13)(piVar2,puVar13[1]);
              }
              uVar4 = iVar1 == 0xf & uStack_28;
            }
          }
        }
      }
    }
  }
  return uVar4;
}



// ===== FAT.GuideRequireChecker$$_CheckMonopolyGrid RVA 0x1c735f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c835f4(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  
  pcVar6 = (char *)(_UNK_01c839e8 + 0x1c83610);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c839ec + 0x1c83624));
    func_0x01384978(*(undefined4 *)(_UNK_01c839f0 + 0x1c83630));
    func_0x01384978(*(undefined4 *)(_UNK_01c839f4 + 0x1c8363c));
    func_0x01384978(*(undefined4 *)(_UNK_01c839f8 + 0x1c83648));
    func_0x01384978(*(undefined4 *)(_UNK_01c839fc + 0x1c83654));
    func_0x01384978(*(undefined4 *)(_UNK_01c83a00 + 0x1c83660));
    func_0x01384978(*(undefined4 *)(_UNK_01c83a04 + 0x1c8366c));
    func_0x01384978(*(undefined4 *)(_UNK_01c83a08 + 0x1c83678));
    func_0x01384978(*(undefined4 *)(_UNK_01c83a0c + 0x1c83684));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar7 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x9506,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c85d34(param_1);
    if (iVar1 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xd8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 0;
      piVar2 = (int *)func_0x02b43c64(iVar1,0x56,0);
      if (piVar2 != (int *)0x0) {
        uVar5 = (uint)*(byte *)(**(int **)(_UNK_01c83a10 + 0x1c8375c) + 0xb8);
        if (((uVar5 <= *(byte *)(*piVar2 + 0xb8)) &&
            (*(int *)(*(int *)(*piVar2 + 100) + uVar5 * 4 + -4) ==
             **(int **)(_UNK_01c83a10 + 0x1c8375c))) && (piVar2[0x40] != 0)) {
          iVar1 = piVar2[0x11];
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            piVar8 = *(int **)(_UNK_01c83a14 + 0x1c837c4);
            iVar1 = *piVar8;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar8;
            }
            iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x940);
          }
          iVar3 = func_0x034aaa34(**(undefined4 **)(_UNK_01c83a18 + 0x1c837ec));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          piVar4 = (int *)func_0x01ee8b58(iVar3,iVar1,0);
          piVar8 = (int *)0x0;
          if (piVar4 != (int *)0x0) {
            uVar7 = (uint)*(byte *)(**(int **)(_UNK_01c83a1c + 0x1c83828) + 0xb8);
            if ((uVar7 <= *(byte *)(*piVar4 + 0xb8)) &&
               (piVar8 = piVar4,
               *(int *)(*(int *)(*piVar4 + 100) + uVar7 * 4 + -4) !=
               **(int **)(_UNK_01c83a1c + 0x1c83828))) {
              piVar8 = (int *)0x0;
            }
          }
          if (*(int *)(**(int **)(_UNK_01c83a20 + 0x1c83860) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar7 = 0;
          iVar1 = func_0x02450910(piVar8,0);
          if (iVar1 != 0) {
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = piVar8[0x18];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar3 = piVar2[0x40];
            if (*(int *)(iVar1 + 0x68) == iVar3) {
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              iVar1 = *(int *)(iVar3 + 0x28);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x03320714(&uStack_50,iVar1,**(undefined4 **)(_UNK_01c83a24 + 0x1c838e4));
              uStack_38 = uStack_50;
              uStack_34 = uStack_4c;
              uStack_30 = uStack_48;
              iStack_2c = iStack_44;
              uStack_28 = uStack_40;
              puVar9 = *(undefined4 **)(_UNK_01c83a28 + 0x1c8390c);
              do {
                uVar7 = func_0x01472198(&uStack_38,*puVar9);
                if (uVar7 == 0) {
                  iVar1 = 0xd;
                  goto LAB_01c83938;
                }
              } while (iStack_2c != param_2);
              iVar1 = 0xc;
LAB_01c83938:
              func_0x024509e0(&uStack_38,**(undefined4 **)(_UNK_01c83a2c + 0x1c83944));
              uVar7 = uVar7 & iVar1 == 0xc;
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9506,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar7;
}



// ===== FAT.GuideRequireChecker$$_CheckMonopolyLap RVA 0x1c73a38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c83a38(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
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
  
  pcVar7 = (char *)(_UNK_01c83cd4 + 0x1c83a50);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c83cd8 + 0x1c83a64));
    func_0x01384978(*(undefined4 *)(_UNK_01c83cdc + 0x1c83a70));
    func_0x01384978(*(undefined4 *)(_UNK_01c83ce0 + 0x1c83a7c));
    func_0x01384978(*(undefined4 *)(_UNK_01c83ce4 + 0x1c83a88));
    func_0x01384978(*(undefined4 *)(_UNK_01c83ce8 + 0x1c83a94));
    *pcVar7 = '\x01';
  }
  uVar8 = 0;
  iVar1 = func_0x0229f06c(0x9507,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9507,0);
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
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar10,&uStack_38,uVar5,0,0);
    uVar8 = func_0x0245496c(&uStack_38,0,0);
    return uVar8;
  }
  iVar1 = func_0x01c85d34(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 0;
    piVar2 = (int *)func_0x02b43c64(iVar1,0x56,0);
    if (piVar2 != (int *)0x0) {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_01c83cec + 0x1c83b4c) + 0xb8);
      if (((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
          (*(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) ==
           **(int **)(_UNK_01c83cec + 0x1c83b4c))) && (piVar2[0x40] != 0)) {
        iVar1 = piVar2[0x11];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          piVar9 = *(int **)(_UNK_01c83cf0 + 0x1c83bb0);
          iVar1 = *piVar9;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar9;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x940);
        }
        iVar6 = func_0x034aaa34(**(undefined4 **)(_UNK_01c83cf4 + 0x1c83bd8));
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)func_0x01ee8b58(iVar6,iVar1,0);
        piVar9 = (int *)0x0;
        if (piVar3 != (int *)0x0) {
          uVar8 = (uint)*(byte *)(**(int **)(_UNK_01c83cf8 + 0x1c83c14) + 0xb8);
          if ((uVar8 <= *(byte *)(*piVar3 + 0xb8)) &&
             (piVar9 = piVar3,
             *(int *)(*(int *)(*piVar3 + 100) + uVar8 * 4 + -4) !=
             **(int **)(_UNK_01c83cf8 + 0x1c83c14))) {
            piVar9 = (int *)0x0;
          }
        }
        if (*(int *)(**(int **)(_UNK_01c83cfc + 0x1c83c4c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar8 = 0;
        iVar1 = func_0x02450910(piVar9,0);
        if (iVar1 != 0) {
          if (piVar9 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = piVar9[0x18];
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0x68) == piVar2[0x40]) {
            iVar1 = func_0x01ad61c8(piVar2,0);
            if (param_2 == -1) {
              uVar8 = (uint)(iVar1 == -1);
            }
            else {
              uVar8 = (uint)(param_2 <= iVar1);
            }
          }
        }
      }
    }
  }
  return uVar8;
}



// ===== FAT.GuideRequireChecker$$_IsRequireDeliveryTaskReady RVA 0x1c73d00 =====

uint FUN_01c83d00(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x9508,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9508,0);
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
  iVar1 = func_0x01c866c0(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xe0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0229f06c(0x5ae8,0);
    if (iVar5 != 0) {
      iVar5 = func_0x0229f13c(0x5ae8,0);
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
    return (uint)(*(int *)(iVar1 + 0x10) <= *(int *)(iVar1 + 0x14));
  }
  return 0;
}



// ===== FAT.GuideRequireChecker$$_CheckBoardToken RVA 0x1c73da4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c83da4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01c840d4 + 0x1c83dc4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c840d8 + 0x1c83dd8));
    func_0x01384978(*(undefined4 *)(_UNK_01c840dc + 0x1c83de4));
    func_0x01384978(*(undefined4 *)(_UNK_01c840e0 + 0x1c83df0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9509,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x01cd2b20(iVar1,param_2,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0x4e) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xd8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)func_0x02b43c64(iVar1,0x3c,0);
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        uVar2 = (uint)*(byte *)(**(int **)(_UNK_01c840e8 + 0x1c83fc0) + 0xb8);
        if (*(byte *)(*piVar3 + 0xb8) < uVar2) {
          return 0;
        }
        if (*(int *)(*(int *)(*piVar3 + 100) + uVar2 * 4 + -4) !=
            **(int **)(_UNK_01c840e8 + 0x1c83fc0)) {
          piVar3 = (int *)0x0;
        }
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        iVar1 = func_0x02a9ea20(piVar3,0);
        if (iVar1 == 0) {
          return 0;
        }
        iVar4 = func_0x02aa2dc4(piVar3,0);
        if (iVar4 < param_3) {
          return 0;
        }
        iVar1 = *(int *)(iVar1 + 0x5c);
      }
      else {
        if (iVar1 == 0x99) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xd8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          piVar3 = (int *)func_0x02b43c64(iVar1,0x6e,0);
          if (piVar3 == (int *)0x0) {
            return 0;
          }
          uVar2 = (uint)*(byte *)(**(int **)(_UNK_01c840ec + 0x1c8408c) + 0xb8);
          if (*(byte *)(*piVar3 + 0xb8) < uVar2) {
            return 0;
          }
          if (*(int *)(*(int *)(*piVar3 + 100) + uVar2 * 4 + -4) !=
              **(int **)(_UNK_01c840ec + 0x1c8408c)) {
            return 0;
          }
          iVar1 = func_0x019fef44(piVar3,0);
          if (iVar1 < param_3) {
            return 0;
          }
          return 1;
        }
        if (iVar1 != 0x76) {
          return 0;
        }
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xd8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)func_0x02b43c64(iVar1,0x59,0);
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        uVar2 = (uint)*(byte *)(**(int **)(_UNK_01c840e4 + 0x1c83efc) + 0xb8);
        if (*(byte *)(*piVar3 + 0xb8) < uVar2) {
          return 0;
        }
        if (*(int *)(*(int *)(*piVar3 + 100) + uVar2 * 4 + -4) !=
            **(int **)(_UNK_01c840e4 + 0x1c83efc)) {
          piVar3 = (int *)0x0;
        }
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        iVar1 = func_0x02bbfc04(piVar3,0);
        if (iVar1 == 0) {
          return 0;
        }
        iVar4 = func_0x02bc001c(piVar3,0);
        if (iVar4 < param_3) {
          return 0;
        }
        iVar1 = *(int *)(iVar1 + 100);
      }
      uVar2 = (uint)(iVar1 == param_2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9509,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_CheckBoardTokenEnable RVA 0x1c740f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c840f0(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01c84280 + 0x1c84110);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c84284 + 0x1c84124));
    func_0x01384978(*(undefined4 *)(_UNK_01c84288 + 0x1c84130));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x950a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x950a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x02b43c64(iVar1,param_3,0);
  if (param_3 == 0x3c) {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(_UNK_01c84290 + 0x1c84230) + 0xb8);
    if (*(byte *)(*piVar3 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar3 + 100) + uVar2 * 4 + -4) != **(int **)(_UNK_01c84290 + 0x1c84230))
    {
      return 0;
    }
    uVar2 = (uint)(piVar3[0x37] == 1);
  }
  else {
    if (param_3 != 0x59) {
      return 0;
    }
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(**(int **)(_UNK_01c8428c + 0x1c841e8) + 0xb8);
    if (*(byte *)(*piVar3 + 0xb8) < uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*piVar3 + 100) + uVar2 * 4 + -4) != **(int **)(_UNK_01c8428c + 0x1c841e8))
    {
      return 0;
    }
    uVar2 = func_0x02bc68d0(piVar3,0);
  }
  return (uint)(uVar2 == param_2);
}



// ===== FAT.GuideRequireChecker$$_IsOrderLikeComplete RVA 0x1c74294 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c84294(int *param_1)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar4 = (char *)(_UNK_01c84394 + 0x1c842a8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c84398 + 0x1c842bc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x950b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = (int *)func_0x02b43c64(iVar1,0x2f,0);
    if (param_1 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(_UNK_01c8439c + 0x1c84354) + 0xb8);
      if ((uVar2 <= *(byte *)(*param_1 + 0xb8)) &&
         (*(int *)(*(int *)(*param_1 + 100) + uVar2 * 4 + -4) ==
          **(int **)(_UNK_01c8439c + 0x1c84354))) {
        uVar6 = 0;
        iVar1 = func_0x0229f06c(0x4ff,0);
        if (iVar1 == 0) {
          iVar1 = func_0x0299e1dc(param_1);
          iVar5 = func_0x0299e230(param_1);
          if (iVar5 <= iVar1) {
            iVar1 = func_0x0299e230(param_1);
            uVar6 = 0;
            if (0 < iVar1) {
              uVar6 = 1;
            }
          }
          return uVar6;
        }
        iVar1 = func_0x0229f13c(0x4ff,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        goto SUB_021742f8;
      }
      func_0x01384fb4();
    }
    return 0;
  }
  iVar1 = func_0x0229f13c(0x950b,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
SUB_021742f8:
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
  uVar6 = func_0x0245496c(&uStack_30,0,0);
  return uVar6;
}



// ===== FAT.GuideRequireChecker$$_CheckIsSevenDayMilestone RVA 0x1c743a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c843a0(int *param_1)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar4 = (char *)(_UNK_01c8449c + 0x1c843b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c844a0 + 0x1c843c8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x950c,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = (int *)func_0x02b43c64(iVar1,0x51,0);
    if (param_1 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(_UNK_01c844a4 + 0x1c84460) + 0xb8);
      if ((uVar2 <= *(byte *)(*param_1 + 0xb8)) &&
         (*(int *)(*(int *)(*param_1 + 100) + uVar2 * 4 + -4) ==
          **(int **)(_UNK_01c844a4 + 0x1c84460))) {
        iVar1 = func_0x0229f06c(0x5019,0);
        if (iVar1 == 0) {
          iVar1 = param_1[0x17];
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          return (uint)*(byte *)(iVar1 + 0x34);
        }
        iVar1 = func_0x0229f13c(0x5019,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        goto SUB_021742f8;
      }
    }
    return 0;
  }
  iVar1 = func_0x0229f13c(0x950c,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
SUB_021742f8:
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
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_CheckSevenDayMilestoneNum RVA 0x1c744a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c844a8(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
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
  
  pcVar7 = (char *)(_UNK_01c845dc + 0x1c844c0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c845e0 + 0x1c844d4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x950d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x950d,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    uVar3 = func_0x0245496c(&uStack_38,0,0);
    return uVar3;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 0;
  piVar2 = (int *)func_0x02b43c64(iVar1,0x51,0);
  if (piVar2 != (int *)0x0) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_01c845e4 + 0x1c84578) + 0xb8);
    if (uVar4 <= *(byte *)(*piVar2 + 0xb8)) {
      uVar3 = 0;
      if (*(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) !=
          **(int **)(_UNK_01c845e4 + 0x1c84578)) {
        piVar2 = (int *)0x0;
      }
      if (piVar2 != (int *)0x0) {
        uVar3 = 0;
        iVar1 = func_0x027b3d78(piVar2,0);
        if (iVar1 == param_2) {
          uVar3 = func_0x027b3dfc(piVar2,0);
          uVar3 = uVar3 ^ 1;
        }
      }
    }
  }
  return uVar3;
}



// ===== FAT.GuideRequireChecker$$_isSpawnerExitEnable RVA 0x1c745e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c845e8(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
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
  
  pcVar4 = (char *)(_UNK_01c84798 + 0x1c845fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c8479c + 0x1c84610));
    func_0x01384978(*(undefined4 *)(_UNK_01c847a0 + 0x1c8461c));
    func_0x01384978(*(undefined4 *)(_UNK_01c847a4 + 0x1c84628));
    func_0x01384978(*(undefined4 *)(_UNK_01c847a8 + 0x1c84634));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x950e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x950e,0);
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
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  puVar7 = *(undefined4 **)(_UNK_01c847ac + 0x1c8468c);
  iVar1 = func_0x034aaa34(*puVar7);
  piVar5 = *(int **)(_UNK_01c847b0 + 0x1c846a0);
  iVar6 = *piVar5;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x01384ab4();
    iVar6 = *piVar5;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01eea2b8(iVar1,uVar8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x034aaa34(*puVar7);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ee906c(iVar1,2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450178(iVar1,**(undefined4 **)(_UNK_01c847b4 + 0x1c84728),0);
    if ((iVar1 == 0) || (iVar1 = func_0x02450148(iVar1,0), iVar1 != 0)) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xd4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      return (uint)(*(int *)(iVar1 + 0xc) != 0);
    }
  }
  return 0;
}



// ===== FAT.GuideRequireChecker$$_IsRequireBoardItemCategory RVA 0x1c747b8 =====

/* WARNING: Removing unreachable block (ram,0x01c84abc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01c847b8(undefined4 param_1,undefined4 param_2)

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
  undefined4 *puVar10;
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
  
  pcVar8 = (char *)(_UNK_01c84ba0 + 0x1c847d0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c84ba4 + 0x1c847e4));
    func_0x01384978(*(undefined4 *)(_UNK_01c84ba8 + 0x1c847f0));
    func_0x01384978(*(undefined4 *)(_UNK_01c84bac + 0x1c847fc));
    func_0x01384978(*(undefined4 *)(_UNK_01c84bb0 + 0x1c84808));
    func_0x01384978(*(undefined4 *)(_UNK_01c84bb4 + 0x1c84814));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x950f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x950f,0);
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
  puVar10 = *(undefined4 **)(_UNK_01c84bb8 + 0x1c84870);
  iVar1 = func_0x03668dfc(*puVar10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = 0;
  iVar1 = func_0x01ddc564(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = 0;
    iVar1 = func_0x01db1884(iVar1,param_2,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01c84bbc + 0x1c848fc));
      piVar11 = *(int **)(_UNK_01c84bc0 + 0x1c84914);
      piVar12 = *(int **)(_UNK_01c84bc4 + 0x1c8491c);
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
              goto LAB_01c84974;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01c84974:
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
            if (piVar5[-1] == *piVar12) {
              puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto LAB_01c849ec;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_01c849ec:
        uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        iVar1 = func_0x03668dfc(*puVar10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01de5d8c(iVar1,uVar9,1,0);
      } while (iVar1 == 0);
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar11[-1] == **(int **)(_UNK_01c84bc8 + 0x1c84a5c)) {
              puVar10 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
              goto LAB_01c84aa4;
            }
            uVar4 = uVar4 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar4 != 0);
        }
        puVar10 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01c84bc8 + 0x1c84a5c),0);
LAB_01c84aa4:
        (*(code *)*puVar10)(piVar2,puVar10[1]);
      }
    }
  }
  return iVar7;
}



// ===== FAT.GuideRequireChecker$$_CheckOrderAppear RVA 0x1c74bd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c84bd0(undefined4 param_1,undefined4 param_2)

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
  
  pcVar8 = (char *)(_UNK_01c84d4c + 0x1c84be8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c84d50 + 0x1c84bfc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9510,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9510,0);
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
    uVar9 = func_0x0245496c(&uStack_38,0,0);
    return uVar9;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 0;
  iVar1 = func_0x01e6c30c(iVar1,param_2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x01e6b6b8(iVar1,0);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01c84d54 + 0x1c84ce0)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01c84d34;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01c84d54 + 0x1c84ce0),0);
LAB_01c84d34:
                    /* WARNING: Could not recover jumptable at 0x01c84d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
      return uVar9;
    }
    uVar9 = 1;
  }
  return uVar9;
}



// ===== FAT.GuideRequireChecker$$_CheckFirstRescueMsscore RVA 0x1c74d58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c84d58(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_01c84e54 + 0x1c84d6c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c84e58 + 0x1c84d80));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9511,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = (int *)func_0x02b43c64(iVar1,0x75,0);
    if (param_1 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(_UNK_01c84e5c + 0x1c84e18) + 0xb8);
      if ((uVar2 <= *(byte *)(*param_1 + 0xb8)) &&
         (*(int *)(*(int *)(*param_1 + 100) + uVar2 * 4 + -4) ==
          **(int **)(_UNK_01c84e5c + 0x1c84e18))) {
        pcVar5 = (char *)(_UNK_01b0c290 + 0x1b0c15c);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01b0c294 + 0x1b0c170),0);
          func_0x01384978(*(undefined4 *)(_UNK_01b0c298 + 0x1b0c17c));
          func_0x01384978(*(undefined4 *)(_UNK_01b0c29c + 0x1b0c188));
          *pcVar5 = '\x01';
        }
        uVar2 = 0;
        iVar1 = func_0x0229f06c(0x887e,0);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
          if ((iVar1 != 0) && (0 < param_1[0x16])) {
            iVar1 = param_1[0x1a];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            if ((*(int *)(iVar1 + 0xc) < 1) && ((char)param_1[0x1c] == '\0')) {
              iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01b0c2a0 + 0x1b0c234));
              piVar4 = *(int **)(_UNK_01b0c2a4 + 0x1b0c248);
              iVar6 = *piVar4;
              if (*(int *)(iVar6 + 0x74) == 0) {
                func_0x01384ab4();
                iVar6 = *piVar4;
              }
              uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x1b4);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar2 = func_0x01eeaa54(iVar1,uVar7,1,0);
              uVar2 = uVar2 ^ 1;
            }
          }
          return uVar2;
        }
        iVar1 = func_0x0229f13c(0x887e,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        goto SUB_021742f8;
      }
    }
    return 0;
  }
  iVar1 = func_0x0229f13c(0x9511,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
SUB_021742f8:
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
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_CheckOrderCoopMatch RVA 0x1c74e60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c84e60(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  pcVar5 = (char *)(_UNK_01c84f7c + 0x1c84e78);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c84f80 + 0x1c84e8c));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x9512,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9512,0);
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
    uVar6 = func_0x0245496c(&uStack_38,0,0);
    return uVar6;
  }
  if (param_2 < 2) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 0;
    piVar2 = (int *)func_0x02b43c64(iVar1,0x7a,0);
    if (piVar2 != (int *)0x0) {
      uVar3 = (uint)*(byte *)(**(int **)(_UNK_01c84f84 + 0x1c84f38) + 0xb8);
      if ((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) ==
          **(int **)(_UNK_01c84f84 + 0x1c84f38))) {
        uVar6 = func_0x02307834(piVar2,0);
        uVar6 = param_2 != 1 ^ uVar6;
      }
    }
  }
  return uVar6;
}



// ===== FAT.GuideRequireChecker$$_CheckAvatarNew RVA 0x1c74f88 =====

uint FUN_01c84f88(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9515,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x88);
    if ((param_1 == 0) || (iVar1 = func_0x01e7c638(param_1,0), iVar1 == 0)) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x9517,0);
    if (iVar1 == 0) {
      return (uint)*(byte *)(param_1 + 0x34);
    }
    iVar1 = func_0x0229f13c(0x9517,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9515,0);
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



// ===== FAT.GuideRequireChecker$$_CheckAvatarFrameNew RVA 0x1c75024 =====

uint FUN_01c85024(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9518,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x88);
    if ((param_1 == 0) || (iVar1 = func_0x01e7c6c0(param_1,0), iVar1 == 0)) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x951a,0);
    if (iVar1 == 0) {
      return (uint)*(byte *)(param_1 + 0x35);
    }
    iVar1 = func_0x0229f13c(0x951a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9518,0);
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



// ===== FAT.GuideRequireChecker$$_CheckVineLeapExtraReward RVA 0x1c750c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c850c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  int *piStack_14;
  
  pcVar4 = (char *)(_UNK_01c851f8 + 0x1c850d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c851fc + 0x1c850ec));
    *pcVar4 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar1 = func_0x0229f06c(0x951b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar5 = *(int **)(iVar1 + 0xd8);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x02b3c518(piVar5,0x54,&piStack_14,0);
    if (iVar1 != 0) {
      piVar5 = piStack_14;
    }
    if (iVar1 != 0 && piVar5 != (int *)0x0) {
      uVar3 = (uint)*(byte *)(**(int **)(_UNK_01c85200 + 0x1c851ac) + 0xb8);
      if ((uVar3 <= *(byte *)(*piVar5 + 0xb8)) &&
         (uVar2 = 0,
         *(int *)(*(int *)(*piVar5 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_01c85200 + 0x1c851ac)
         )) {
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x027f0e50(piVar5,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x951b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_CheckClearFogSetUnlock RVA 0x1c75204 =====

/* WARNING: Possible PIC construction at 0x01fcb238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01fcb23c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c85204(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *unaff_r4;
  int unaff_r5;
  char *pcVar5;
  undefined4 unaff_r6;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 *puVar7;
  int *unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_01c85300 + 0x1c85218);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c85304 + 0x1c8522c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x951c,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = (int *)func_0x02b43c64(iVar1,0x87,0);
    if (param_1 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(_UNK_01c85308 + 0x1c852c4) + 0xb8);
      if ((uVar2 <= *(byte *)(*param_1 + 0xb8)) &&
         (*(int *)(*(int *)(*param_1 + 100) + uVar2 * 4 + -4) ==
          **(int **)(_UNK_01c85308 + 0x1c852c4))) {
        iVar1 = func_0x0229f06c(0x1c0e,0);
        if (iVar1 == 0) {
          param_1 = (int *)func_0x01e94d58(param_1);
          if (param_1 == (int *)0x0) {
            return 0;
          }
          unaff_r4 = (char *)(_UNK_01fcb3c0 + 0x1fcb1a4);
          if (*unaff_r4 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01fcb3c4 + 0x1fcb1b8),0);
            func_0x01384978(*(undefined4 *)(_UNK_01fcb3c8 + 0x1fcb1c4));
            func_0x01384978(*(undefined4 *)(_UNK_01fcb3cc + 0x1fcb1d0));
            func_0x01384978(*(undefined4 *)(_UNK_01fcb3d0 + 0x1fcb1dc));
            func_0x01384978(*(undefined4 *)(_UNK_01fcb3d4 + 0x1fcb1e8));
            *unaff_r4 = '\x01';
          }
          uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_28 = 0;
          iVar1 = func_0x0229f06c(0x1c0f,0);
          if (iVar1 == 0) {
            iVar1 = param_1[10];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_01fcb3d8 + 0x1fcb25c));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x0382ab5c(&uStack_28,iVar1,**(undefined4 **)(_UNK_01fcb3dc + 0x1fcb288));
            puVar7 = *(undefined4 **)(_UNK_01fcb3e0 + 0x1fcb29c);
            do {
              uVar2 = func_0x03f9b9f8(&uStack_28,*puVar7);
              iVar1 = iStack_1c;
              if (uVar2 == 0) {
                iVar1 = 6;
                goto LAB_01fcb300;
              }
              if (iStack_1c == 0) {
                func_0x01384bf0();
              }
            } while (((*(int *)(iVar1 + 0x18) != 1) ||
                     (iVar3 = func_0x01fc9fcc(param_1,*(undefined4 *)(iVar1 + 0xc)), iVar3 != 0)) ||
                    (iVar1 = func_0x01fca080(param_1,*(undefined4 *)(iVar1 + 0xc)), iVar1 == 0));
            iVar1 = 5;
LAB_01fcb300:
            func_0x03f9b9f4(&uStack_28,**(undefined4 **)(_UNK_01fcb3e4 + 0x1fcb30c));
            return uVar2 & iVar1 == 5;
          }
          iVar1 = func_0x0229f13c(0x1c0f,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          unaff_lr = 0x1fcb23c;
          unaff_r5 = iVar1;
          unaff_r8 = param_1;
          register0x00000054 = (BADSPACEBASE *)&uStack_28;
        }
        else {
          iVar1 = func_0x0229f13c(0x1c0e,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
        }
        goto SUB_021742f8;
      }
    }
    return 0;
  }
  iVar1 = func_0x0229f13c(0x951c,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
SUB_021742f8:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int **)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
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
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  uVar2 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
  return uVar2;
}



// ===== FAT.GuideRequireChecker$$_CheckClearFogMapUnlock RVA 0x1c7530c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c8530c(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
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
  
  pcVar7 = (char *)(_UNK_01c85420 + 0x1c85324);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c85424 + 0x1c85338));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x951d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x951d,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    uVar3 = func_0x0245496c(&uStack_38,0,0);
    return uVar3;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 0;
  piVar2 = (int *)func_0x02b43c64(iVar1,0x87,0);
  if (piVar2 != (int *)0x0) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_01c85428 + 0x1c853d8) + 0xb8);
    if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) == **(int **)(_UNK_01c85428 + 0x1c853d8))
       ) {
      iVar1 = func_0x01e94ea4(piVar2,0);
      uVar3 = (uint)(iVar1 - param_2 == -1);
    }
  }
  return uVar3;
}



// ===== FAT.GuideRequireChecker$$_CheckScoreCoopFirst RVA 0x1c7542c =====

uint FUN_01c8542c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iStack_14;
  
  uVar3 = 0;
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x951e,0);
  if (iVar1 == 0) {
    iVar2 = func_0x01c869bc(param_1,&iStack_14);
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x02745910(iVar1,0);
      uVar3 = uVar3 ^ 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x951e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar3;
}



// ===== FAT.GuideRequireChecker$$_CheckScoreCoopSecond RVA 0x1c754c8 =====

undefined4 FUN_01c854c8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_14;
  
  uVar3 = 0;
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9520,0);
  if (iVar1 == 0) {
    iVar2 = func_0x01c869bc(param_1,&iStack_14);
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x02745910(iVar1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9520,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar3;
}



// ===== FAT.GuideRequireChecker$$_IsLayerEmpty RVA 0x1c75560 =====

uint FUN_01c85560(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x9430,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9430,0);
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
  iVar1 = FUN_01c7ae30(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01ee906c(iVar1,param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450148(iVar1,0);
  return (uint)(iVar1 < 1);
}



// ===== FAT.GuideRequireChecker$$_IsBoardReady RVA 0x1c7560c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c8560c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar5 = (char *)(_UNK_01c8591c + 0x1c85624);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c85920 + 0x1c85638));
    func_0x01384978(*(undefined4 *)(_UNK_01c85924 + 0x1c85644));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x942d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x942d,0);
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
  iVar1 = FUN_01c7ae30(param_1);
  piVar7 = *(int **)(_UNK_01c85928 + 0x1c856ac);
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01eea2b8(iVar1,uVar6,0);
  iVar4 = FUN_01c7ae30(param_1);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01eea2b8(iVar4,param_2,0);
  if (iVar1 == 0) {
    if (iVar4 == 0) {
      return 0;
    }
    iVar1 = FUN_01c7ae30(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eeab9c(iVar1,param_2,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_01c85560(param_1,5);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_01c85560(param_1,10);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dbb000(iVar1,0);
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x5c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01db7b78(iVar4,0);
    if (iVar1 != iVar4) {
      return 0;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  else {
    if (iVar4 == 0) {
      return 0;
    }
    iVar1 = FUN_01c7ae30(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eeab9c(iVar1,param_2,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_01c85560(param_1,5);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_01c85560(param_1,10);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dbb000(iVar1,0);
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x5c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01db7b78(iVar4,0);
    iVar1 = iVar1 - iVar4;
  }
  return (uint)(iVar1 == 0);
}



// ===== FAT.GuideRequireChecker$$_IsFishBoardReady RVA 0x1c7592c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c8592c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
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
  
  pcVar5 = (char *)(_UNK_01c85b14 + 0x1c85940);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c85b18 + 0x1c85954));
    func_0x01384978(*(undefined4 *)(_UNK_01c85b1c + 0x1c85960));
    func_0x01384978(*(undefined4 *)(_UNK_01c85b20 + 0x1c8596c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9437,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9437,0);
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
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x02b43c64(iVar1,0x31,0);
  if (piVar2 != (int *)0x0) {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_01c85b24 + 0x1c85a04) + 0xb8);
    if ((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_01c85b24 + 0x1c85a04))
       ) {
      iVar1 = piVar2[0x11];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 != 0) goto LAB_01c85a54;
    }
  }
  piVar2 = *(int **)(_UNK_01c85b28 + 0x1c85a38);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x594);
LAB_01c85a54:
  puVar8 = *(undefined4 **)(_UNK_01c85b2c + 0x1c85a60);
  iVar6 = func_0x034aaa34(*puVar8);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 0;
  iVar1 = func_0x01eea2b8(iVar6,iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x034aaa34(*puVar8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    iVar1 = func_0x01ee77d0(iVar1,0);
    if (iVar1 == 0) {
      iVar1 = func_0x034aaa34(*puVar8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01ee76dc(iVar1,0);
      uVar3 = (uint)(iVar1 == 0);
    }
  }
  return uVar3;
}



// ===== FAT.GuideRequireChecker$$_IsFightBoardReady RVA 0x1c75b30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c85b30(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
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
  
  pcVar5 = (char *)(_UNK_01c85d18 + 0x1c85b44);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c85d1c + 0x1c85b58));
    func_0x01384978(*(undefined4 *)(_UNK_01c85d20 + 0x1c85b64));
    func_0x01384978(*(undefined4 *)(_UNK_01c85d24 + 0x1c85b70));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9438,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9438,0);
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
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x02b43c64(iVar1,0x35,0);
  if (piVar2 != (int *)0x0) {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_01c85d28 + 0x1c85c08) + 0xb8);
    if ((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_01c85d28 + 0x1c85c08))
       ) {
      iVar1 = piVar2[0x22];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 != 0) goto LAB_01c85c58;
    }
  }
  piVar2 = *(int **)(_UNK_01c85d2c + 0x1c85c3c);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x5b8);
LAB_01c85c58:
  puVar8 = *(undefined4 **)(_UNK_01c85d30 + 0x1c85c64);
  iVar6 = func_0x034aaa34(*puVar8);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 0;
  iVar1 = func_0x01eea2b8(iVar6,iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x034aaa34(*puVar8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    iVar1 = func_0x01ee77d0(iVar1,0);
    if (iVar1 == 0) {
      iVar1 = func_0x034aaa34(*puVar8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01ee76dc(iVar1,0);
      uVar3 = (uint)(iVar1 == 0);
    }
  }
  return uVar3;
}



// ===== FAT.GuideRequireChecker$$_IsMonopolyBoardReady RVA 0x1c75d34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c85d34(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
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
  
  pcVar5 = (char *)(_UNK_01c85f1c + 0x1c85d48);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c85f20 + 0x1c85d5c));
    func_0x01384978(*(undefined4 *)(_UNK_01c85f24 + 0x1c85d68));
    func_0x01384978(*(undefined4 *)(_UNK_01c85f28 + 0x1c85d74));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9439,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9439,0);
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
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x02b43c64(iVar1,0x56,0);
  if (piVar2 != (int *)0x0) {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_01c85f2c + 0x1c85e0c) + 0xb8);
    if ((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_01c85f2c + 0x1c85e0c))
       ) {
      iVar1 = piVar2[0x11];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 != 0) goto LAB_01c85e5c;
    }
  }
  piVar2 = *(int **)(_UNK_01c85f30 + 0x1c85e40);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x940);
LAB_01c85e5c:
  puVar8 = *(undefined4 **)(_UNK_01c85f34 + 0x1c85e68);
  iVar6 = func_0x034aaa34(*puVar8);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 0;
  iVar1 = func_0x01eea2b8(iVar6,iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x034aaa34(*puVar8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    iVar1 = func_0x01ee77d0(iVar1,0);
    if (iVar1 == 0) {
      iVar1 = func_0x034aaa34(*puVar8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01ee76dc(iVar1,0);
      uVar3 = (uint)(iVar1 == 0);
    }
  }
  return uVar3;
}



// ===== FAT.GuideRequireChecker$$_IsSceneReady RVA 0x1c75f38 =====

undefined4 FUN_01c85f38(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
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
  
  iVar1 = func_0x0229f06c(0x9431,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9431,0);
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
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  uVar3 = 2;
  do {
    if ((uVar3 | 4) != 7) {
      iVar1 = FUN_01c7ae30(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01ee906c(iVar1,uVar3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450148(iVar1,0);
      if (0 < iVar1) {
        return 0;
      }
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == 9) {
      return 1;
    }
  } while( true );
}



// ===== FAT.GuideRequireChecker$$_IsSceneBuildingPopUp RVA 0x1c75ffc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c85ffc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_01c8615c + 0x1c86018);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c86160 + 0x1c8602c));
    func_0x01384978(*(undefined4 *)(_UNK_01c86164 + 0x1c86038));
    func_0x01384978(*(undefined4 *)(_UNK_01c86168 + 0x1c86044));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9432,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9432,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xe4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01d794a4(iVar1,param_2,0);
  puVar7 = *(undefined4 **)(_UNK_01c8616c + 0x1c860e4);
  iStack_1c = iVar1;
  uVar6 = func_0x01384abc(*puVar7,&iStack_1c);
  uStack_20 = param_2;
  uVar3 = func_0x01384abc(*puVar7,&uStack_20);
  uVar6 = func_0x0244f690(**(undefined4 **)(_UNK_01c86170 + 0x1c86118),uVar6,uVar3,0);
  if (*(int *)(**(int **)(_UNK_01c86174 + 0x1c8612c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2874(uVar6,0);
  return (uint)(iVar1 == 1);
}



// ===== FAT.GuideRequireChecker$$_isCardAlbumPanel RVA 0x1c76178 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c86178(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01c863c0 + 0x1c8618c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c863c4 + 0x1c861a0));
    func_0x01384978(*(undefined4 *)(_UNK_01c863c8 + 0x1c861ac));
    func_0x01384978(*(undefined4 *)(_UNK_01c863cc + 0x1c861b8));
    func_0x01384978(*(undefined4 *)(_UNK_01c863d0 + 0x1c861c4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9434,0);
  if (iVar1 == 0) {
    puVar11 = *(undefined4 **)(_UNK_01c863d4 + 0x1c8621c);
    iVar1 = func_0x034aaa34(*puVar11);
    piVar9 = *(int **)(_UNK_01c863d8 + 0x1c86230);
    iVar7 = *piVar9;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x01384ab4();
      iVar7 = *piVar9;
    }
    uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x2a0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x01ee8b58(iVar1,uVar8,0);
    if (*(int *)(**(int **)(_UNK_01c863dc + 0x1c8627c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar10 = *(int **)(_UNK_01c863e0 + 0x1c8629c);
    piVar6 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      uVar3 = (uint)*(byte *)(*piVar10 + 0xb8);
      if ((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
         (piVar6 = piVar2, *(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) != *piVar10)) {
        piVar6 = (int *)0x0;
      }
    }
    iVar1 = func_0x0145b1cc(piVar6,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x034aaa34(*puVar11);
    iVar7 = *piVar9;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x01384ab4();
      iVar7 = *piVar9;
    }
    uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x2a0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar9 = (int *)func_0x01ee8b58(iVar1,uVar8,0);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
      param_1 = (int *)0x0;
    }
    else {
      iVar1 = *piVar10;
      if (((uint)*(byte *)(*piVar9 + 0xb8) < (uint)*(byte *)(iVar1 + 0xb8)) ||
         (*(int *)(*(int *)(*piVar9 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1)) {
        func_0x01384bf0();
        iVar1 = *piVar10;
      }
      param_1 = (int *)0x0;
      if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar9 + 0xb8)) &&
         (param_1 = piVar9,
         *(int *)(*(int *)(*piVar9 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1)) {
        param_1 = (int *)0x0;
      }
    }
    iVar1 = func_0x0229f06c(0x8f83,0);
    if (iVar1 == 0) {
      iVar1 = param_1[0x13];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar8 = (*(code *)&UNK_05189dfc)(iVar1,0);
      return uVar8;
    }
    iVar1 = func_0x0229f13c(0x8f83,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9434,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
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
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_30,uVar4,0,0);
  uVar8 = func_0x0245496c(&uStack_30,0,0);
  return uVar8;
}



// ===== FAT.GuideRequireChecker$$_isCardGroupInfoPanel RVA 0x1c763e4 =====

/* WARNING: Removing unreachable block (ram,0x01eeab58) */
/* WARNING: Removing unreachable block (ram,0x01eeab64) */
/* WARNING: Removing unreachable block (ram,0x01eeab68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c863e4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  int aiStack_1c [3];
  
  pcVar3 = (char *)(_UNK_01c864c4 + 0x1c863f8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c864c8 + 0x1c8640c));
    func_0x01384978(*(undefined4 *)(_UNK_01c864cc + 0x1c86418));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9435,0);
  if (iVar1 == 0) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01c864d0 + 0x1c86470));
    piVar4 = *(int **)(_UNK_01c864d4 + 0x1c86484);
    iVar5 = *piVar4;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar4;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x2a4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_01eeab88 + 0x1eeaa74);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01eeab8c + 0x1eeaa88),uVar6,0,0);
      func_0x01384978(*(undefined4 *)(_UNK_01eeab90 + 0x1eeaa94));
      *pcVar3 = '\x01';
    }
    aiStack_1c[0] = 0;
    iVar5 = func_0x0229f06c(0x509,0);
    if (iVar5 == 0) {
      iVar1 = *(int *)(iVar1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x03e220bc(iVar1,uVar6,aiStack_1c,**(undefined4 **)(_UNK_01eeab94 + 0x1eeab18));
      iVar1 = aiStack_1c[0];
      if (iVar5 != 0) {
        if (aiStack_1c[0] == 0) {
          func_0x01384bf0();
        }
        func_0x01ee30d0(iVar1);
      }
    }
    else {
      iVar5 = func_0x0229f13c(0x509,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x0218d1f0(iVar5,iVar1,uVar6,0);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x9435,0);
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
  func_0x0245496c(&uStack_30,0,0);
  return;
}



// ===== FAT.GuideRequireChecker$$_CheckBingoUIState RVA 0x1c764d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c864d8(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
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
  
  pcVar7 = (char *)(_UNK_01c866ac + 0x1c864ec);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c866b0 + 0x1c86500));
    func_0x01384978(*(undefined4 *)(_UNK_01c866b4 + 0x1c8650c));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9436,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xd8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    piVar3 = (int *)func_0x02b43c64(iVar2,0x2a,0);
    if (piVar3 != (int *)0x0) {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_01c866b8 + 0x1c865ac) + 0xb8);
      if (uVar5 <= *(byte *)(*piVar3 + 0xb8)) {
        uVar4 = 0;
        if (*(int *)(*(int *)(*piVar3 + 100) + uVar5 * 4 + -4) !=
            **(int **)(_UNK_01c866b8 + 0x1c865ac)) {
          piVar3 = (int *)0x0;
        }
        if (piVar3 != (int *)0x0) {
          puVar10 = *(undefined4 **)(_UNK_01c866bc + 0x1c865ec);
          iVar2 = func_0x034aaa34(*puVar10);
          iVar8 = piVar3[0x1e];
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          uVar9 = *(undefined4 *)(iVar8 + 0xc);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 0;
          iVar2 = func_0x01eea2b8(iVar2,uVar9,0);
          if (iVar2 != 0) {
            uVar4 = 0;
            iVar2 = func_0x02b12ae8(piVar3,0);
            cVar1 = '\0';
            if (iVar2 != 0) {
              cVar1 = (char)piVar3[0x14];
            }
            if (iVar2 != 0 && cVar1 != '\0') {
              iVar2 = func_0x034aaa34(*puVar10);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = func_0x01ee906c(iVar2,6,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = func_0x02450148(iVar2,0);
              uVar4 = (uint)(iVar2 < 1);
            }
          }
        }
      }
    }
    return uVar4;
  }
  iVar2 = func_0x0229f13c(0x9436,0);
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
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.GuideRequireChecker$$_IsEnergyDeliveryReady RVA 0x1c766c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c866c0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  pcVar6 = (char *)(_UNK_01c86844 + 0x1c866d4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c86848 + 0x1c866e8));
    func_0x01384978(*(undefined4 *)(_UNK_01c8684c + 0x1c866f4));
    func_0x01384978(*(undefined4 *)(_UNK_01c86850 + 0x1c86700));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x943a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x943a,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x02b43c64(iVar1,0x5d,0);
  if (piVar2 != (int *)0x0) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_01c86854 + 0x1c8679c) + 0xb8);
    if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) == **(int **)(_UNK_01c86854 + 0x1c8679c))
       ) {
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01c86858 + 0x1c867d8));
      iVar7 = piVar2[0x13];
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar7 + 0xc);
      if (iVar7 == 0) {
        piVar2 = *(int **)(_UNK_01c8685c + 0x1c86808);
        iVar7 = *piVar2;
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x01384ab4();
          iVar7 = *piVar2;
        }
        iVar7 = *(int *)(*(int *)(iVar7 + 0x5c) + 0x964);
      }
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      pcVar6 = (char *)(_UNK_01eea3ac + 0x1eea2d4);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01eea3b0 + 0x1eea2e8),iVar7,0);
        *pcVar6 = '\x01';
      }
      iStack_14 = 0;
      iVar3 = func_0x0229f06c(0x506,0);
      if (iVar3 == 0) {
        iVar1 = *(int *)(iVar1 + 0x80);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x03e220bc(iVar1,iVar7,&iStack_14,**(undefined4 **)(_UNK_01eea3b4 + 0x1eea364))
        ;
        iVar1 = iStack_14;
        if (iVar7 == 0) {
          uVar4 = 0;
        }
        else {
          if (iStack_14 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01ee3008(iVar1);
          uVar4 = (uint)(iVar1 != 0);
        }
      }
      else {
        iVar3 = func_0x0229f13c(0x506,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar4 = func_0x021734d8(iVar3,iVar1,iVar7,0);
      }
      return uVar4;
    }
  }
  return 0;
}



// ===== FAT.GuideRequireChecker$$_CheckRaceMultiMain RVA 0x1c76860 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c86860(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  int iStack_14;
  
  pcVar5 = (char *)(_UNK_01c869a8 + 0x1c86874);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c869ac + 0x1c86888));
    func_0x01384978(*(undefined4 *)(_UNK_01c869b0 + 0x1c86894));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x943b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x943b,0);
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
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x02b43c64(iVar1,0x67,0);
  if (piVar2 != (int *)0x0) {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_01c869b4 + 0x1c86930) + 0xb8);
    if ((uVar3 <= *(byte *)(*piVar2 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_01c869b4 + 0x1c86930))
       ) {
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01c869b8 + 0x1c8696c));
      iVar6 = piVar2[0x12];
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar6 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      pcVar5 = (char *)(_UNK_01eea3ac + 0x1eea2d4);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01eea3b0 + 0x1eea2e8),uVar7,0);
        *pcVar5 = '\x01';
      }
      iStack_14 = 0;
      iVar6 = func_0x0229f06c(0x506,0);
      if (iVar6 == 0) {
        iVar1 = *(int *)(iVar1 + 0x80);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x03e220bc(iVar1,uVar7,&iStack_14,**(undefined4 **)(_UNK_01eea3b4 + 0x1eea364))
        ;
        iVar1 = iStack_14;
        if (iVar6 == 0) {
          uVar3 = 0;
        }
        else {
          if (iStack_14 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01ee3008(iVar1);
          uVar3 = (uint)(iVar1 != 0);
        }
      }
      else {
        iVar6 = func_0x0229f13c(0x506,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x021734d8(iVar6,iVar1,uVar7,0);
      }
      return uVar3;
    }
  }
  return 0;
}



// ===== FAT.GuideRequireChecker$$TryGetScoreCoopMain RVA 0x1c769bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c869bc(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
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
  
  pcVar6 = (char *)(_UNK_01c86c0c + 0x1c869d4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c86c10 + 0x1c869e8));
    func_0x01384978(*(undefined4 *)(_UNK_01c86c14 + 0x1c869f4));
    func_0x01384978(*(undefined4 *)(_UNK_01c86c18 + 0x1c86a00));
    func_0x01384978(*(undefined4 *)(_UNK_01c86c1c + 0x1c86a0c));
    func_0x01384978(*(undefined4 *)(_UNK_01c86c20 + 0x1c86a18));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x951f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x951f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_0226a4b8 + 0x226a3a0);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0226a4bc + 0x226a3b4),param_1,param_2,0);
      *pcVar6 = '\x01';
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
    func_0x01485278(&uStack_38,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,1,0);
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0226a4c0 + 0x226a494));
    *param_2 = iVar1;
    uVar9 = func_0x0245496c(&uStack_38,1,0);
    return uVar9;
  }
  *param_2 = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x02b43c64(iVar1,0x8a,0);
  if (piVar2 != (int *)0x0) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_01c86c24 + 0x1c86abc) + 0xb8);
    if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) == **(int **)(_UNK_01c86c24 + 0x1c86abc))
       ) {
      iVar1 = piVar2[0x19];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 != 0) goto LAB_01c86b0c;
    }
  }
  piVar2 = *(int **)(_UNK_01c86c28 + 0x1c86af0);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x7a0);
LAB_01c86b0c:
  puVar8 = *(undefined4 **)(_UNK_01c86c2c + 0x1c86b18);
  iVar7 = func_0x034aaa34(*puVar8);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x01eea2b8(iVar7,iVar1,0);
  if (iVar7 == 0) {
    return 0;
  }
  iVar7 = func_0x034aaa34(*puVar8);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x01ee8b58(iVar7,iVar1,0);
  piVar2 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_01c86c30 + 0x1c86b84) + 0xb8);
    if ((uVar4 <= *(byte *)(*piVar3 + 0xb8)) &&
       (piVar2 = piVar3,
       *(int *)(*(int *)(*piVar3 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_01c86c30 + 0x1c86b84)))
    {
      piVar2 = (int *)0x0;
    }
  }
  *param_2 = (int)piVar2;
  if (*(int *)(**(int **)(_UNK_01c86c34 + 0x1c86bc0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar9 = (*(code *)&SUB_05190404)(piVar2,0,0);
  return uVar9;
}



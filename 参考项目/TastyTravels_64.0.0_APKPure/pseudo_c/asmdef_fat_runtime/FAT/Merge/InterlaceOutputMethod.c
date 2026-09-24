/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.InterlaceOutputMethod$$.ctor RVA 0x2132674 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02142674(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar3 = (char *)(_UNK_02142790 + 0x2142688);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02142794 + 0x214269c));
    func_0x01384978(*(undefined4 *)(_UNK_02142798 + 0x21426a8));
    func_0x01384978(*(undefined4 *)(_UNK_0214279c + 0x21426b4));
    func_0x01384978(*(undefined4 *)(_UNK_021427a0 + 0x21426c0));
    func_0x01384978(*(undefined4 *)(_UNK_021427a4 + 0x21426cc));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_021427a8 + 0x21426e0));
  func_0x028cefa0(uVar1,0x7b,0);
  puVar6 = *(undefined4 **)(_UNK_021427ac + 0x2142700);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_021427b0 + 0x2142718);
  func_0x03258eb8(uVar1,*puVar7);
  puVar4 = *(undefined4 **)(_UNK_021427b4 + 0x2142728);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = func_0x01384be4(*puVar4);
  puVar5 = *(undefined4 **)(_UNK_021427b8 + 0x2142740);
  func_0x03d59324(uVar1,*puVar5);
  uVar2 = *puVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03d59324(uVar1,*puVar5);
  uVar2 = *puVar6;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x03258eb8(uVar1,*puVar7);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 10;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.InterlaceOutputMethod$$InitConfig RVA 0x21327bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021427bc(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  
  pcVar7 = (char *)(_UNK_02142c38 + 0x21427dc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02142c3c + 0x21427f0));
    func_0x01384978(*(undefined4 *)(_UNK_02142c40 + 0x21427fc));
    func_0x01384978(*(undefined4 *)(_UNK_02142c44 + 0x2142808));
    func_0x01384978(*(undefined4 *)(_UNK_02142c48 + 0x2142814));
    func_0x01384978(*(undefined4 *)(_UNK_02142c4c + 0x2142820));
    func_0x01384978(*(undefined4 *)(_UNK_02142c50 + 0x214282c));
    func_0x01384978(*(undefined4 *)(_UNK_02142c54 + 0x2142838));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c54,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c54,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  puVar11 = *(undefined4 **)(_UNK_02142c58 + 0x21428d8);
  func_0x03d59f58(iVar8,*puVar11);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,*puVar11);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(param_1 + 0x1c);
  iVar8 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(int *)(iVar1 + 0x10) = iVar8 + 1;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x0325992c(iVar9,param_2,**(undefined4 **)(_UNK_02142c5c + 0x2142940));
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  piVar10 = *(int **)(_UNK_02142c60 + 0x2142964);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar8 = *piVar10;
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar8) {
        puVar11 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_021429ac;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar11 = (undefined4 *)func_0x014002dc(param_2,iVar8,0);
LAB_021429ac:
  piVar5 = (int *)(*(code *)*puVar11)(param_2,puVar11[1]);
  if (param_3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_3;
  iVar8 = *piVar10;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar8) {
        puVar11 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
        goto LAB_02142a1c;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar4 != 0);
  }
  puVar11 = (undefined4 *)func_0x014002dc(param_3,iVar8,0);
LAB_02142a1c:
  piVar10 = (int *)(*(code *)*puVar11)(param_3,puVar11[1]);
  piVar12 = *(int **)(_UNK_02142c64 + 0x2142a3c);
  piVar13 = *(int **)(_UNK_02142c68 + 0x2142a44);
  do {
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    iVar8 = *piVar12;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar8) {
          puVar11 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02142a9c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar5,iVar8,0);
LAB_02142a9c:
    iVar1 = (*(code *)*puVar11)(piVar5,puVar11[1]);
    if (iVar1 == 0) {
      return;
    }
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar10;
    iVar8 = *piVar12;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar8) {
          puVar11 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02142b10;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar10,iVar8,0);
LAB_02142b10:
    iVar1 = (*(code *)*puVar11)(piVar10,puVar11[1]);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar5;
    iVar9 = *piVar13;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar9) {
          puVar11 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
          goto LAB_02142b88;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar5,iVar9,0);
LAB_02142b88:
    uVar2 = (*(code *)*puVar11)(piVar5,puVar11[1]);
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar10;
    iVar9 = *piVar13;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar9) {
          puVar11 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
          goto LAB_02142bf8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar10,iVar9,0);
LAB_02142bf8:
    uVar3 = (*(code *)*puVar11)(piVar10,puVar11[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar1,uVar2,uVar3,**(undefined4 **)(_UNK_02142c6c + 0x2142c2c));
  } while( true );
}



// ===== FAT.Merge.InterlaceOutputMethod$$Serialize RVA 0x2138b00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02148b00(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar5 = (char *)(_UNK_02148da8 + 0x2148b1c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02148dac + 0x2148b30));
    func_0x01384978(*(undefined4 *)(_UNK_02148db0 + 0x2148b3c));
    func_0x01384978(*(undefined4 *)(_UNK_02148db4 + 0x2148b48));
    func_0x01384978(*(undefined4 *)(_UNK_02148db8 + 0x2148b54));
    func_0x01384978(*(undefined4 *)(_UNK_02148dbc + 0x2148b60));
    func_0x01384978(*(undefined4 *)(_UNK_02148dc0 + 0x2148b6c));
    func_0x01384978(*(undefined4 *)(_UNK_02148dc4 + 0x2148b78));
    func_0x01384978(*(undefined4 *)(_UNK_02148dc8 + 0x2148b84));
    *pcVar5 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x5c77,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_1 + 8);
    iVar6 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0xc) = 1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x028cea8c(iVar2,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    puVar4 = *(undefined4 **)(_UNK_02148dcc + 0x2148c4c);
    func_0x0364baf8(iVar6,uVar3,*puVar4);
    iVar2 = *(int *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0364baf8(iVar2,uVar3,*puVar4);
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_58,iVar2,**(undefined4 **)(_UNK_02148dd0 + 0x2148c98));
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puVar4 = *(undefined4 **)(_UNK_02148dd4 + 0x2148cc4);
    puVar7 = *(undefined4 **)(_UNK_02148dd8 + 0x2148ccc);
    while (iVar2 = func_0x03f9975c(&uStack_40,*puVar4), uVar3 = uStack_34, iVar2 != 0) {
      iVar2 = *(int *)(param_2 + 0x14);
      uVar1 = (undefined4)uStack_30;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0345f108(iVar2,uVar3,uVar1,*puVar7);
    }
    func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_02148ddc + 0x2148d14));
  }
  else {
    iVar2 = func_0x0229f13c(0x5c77,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.InterlaceOutputMethod$$Deserialize RVA 0x213c4c8 =====

/* WARNING: Removing unreachable block (ram,0x0214c850) */
/* WARNING: Removing unreachable block (ram,0x0214c85c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214c4c8(int param_1,int param_2)

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
  
  pcVar7 = (char *)(_UNK_0214c95c + 0x214c4e4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214c960 + 0x214c4f8));
    func_0x01384978(*(undefined4 *)(_UNK_0214c964 + 0x214c504));
    func_0x01384978(*(undefined4 *)(_UNK_0214c968 + 0x214c510));
    func_0x01384978(*(undefined4 *)(_UNK_0214c96c + 0x214c51c));
    func_0x01384978(*(undefined4 *)(_UNK_0214c970 + 0x214c528));
    func_0x01384978(*(undefined4 *)(_UNK_0214c974 + 0x214c534));
    func_0x01384978(*(undefined4 *)(_UNK_0214c978 + 0x214c540));
    func_0x01384978(*(undefined4 *)(_UNK_0214c97c + 0x214c54c));
    func_0x01384978(*(undefined4 *)(_UNK_0214c980 + 0x214c558));
    func_0x01384978(*(undefined4 *)(_UNK_0214c984 + 0x214c564));
    func_0x01384978(*(undefined4 *)(_UNK_0214c988 + 0x214c570));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c55,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c55,0);
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
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc) != 1) {
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0214c98c + 0x214c5e8));
  func_0x028cecc4(iVar1,0);
  uVar9 = *(undefined4 *)(param_2 + 0x10);
  puVar10 = *(undefined4 **)(_UNK_0214c990 + 0x214c610);
  *(int *)(param_1 + 8) = iVar1;
  uVar9 = func_0x03003b84(uVar9,0,2,*puVar10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x028ced38(iVar1,uVar9,0,0);
  uVar9 = func_0x03003b84(*(undefined4 *)(param_2 + 0x10),1,2,*puVar10);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar9;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_0214c994 + 0x214c670));
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0345f9b0(iVar1,**(undefined4 **)(_UNK_0214c998 + 0x214c694));
  piVar11 = *(int **)(_UNK_0214c99c + 0x214c6b0);
  puVar10 = *(undefined4 **)(_UNK_0214c9a0 + 0x214c6b8);
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
          goto LAB_0214c710;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_0214c710:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0214c9a4 + 0x214c744)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_0214c78c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c9a4 + 0x214c744),0);
LAB_0214c78c:
    (*(code *)*puVar3)(&uStack_30,piVar2,puVar3[1]);
    uVar6 = uStack_2c;
    uVar9 = uStack_30;
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar1,uVar9,uVar6,*puVar10);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_0214c9a8 + 0x214c7f0)) {
          puVar10 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
          goto LAB_0214c838;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c9a8 + 0x214c7f0),0);
LAB_0214c838:
    (*(code *)*puVar10)(piVar2,puVar10[1]);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  return;
}



// ===== FAT.Merge.InterlaceOutputMethod$$ToString RVA 0x213f648 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214f648(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_0214f808 + 0x214f65c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214f80c + 0x214f670));
    func_0x01384978(*(undefined4 *)(_UNK_0214f810 + 0x214f67c));
    func_0x01384978(*(undefined4 *)(_UNK_0214f814 + 0x214f688));
    func_0x01384978(*(undefined4 *)(_UNK_0214f818 + 0x214f694));
    func_0x01384978(*(undefined4 *)(_UNK_0214f81c + 0x214f6a0));
    func_0x01384978(*(undefined4 *)(_UNK_0214f820 + 0x214f6ac));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb44c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb44c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
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
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return;
  }
  iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_0214f824 + 0x214f708),6);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = **(undefined4 **)(_UNK_0214f828 + 0x214f728);
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar6;
  puVar7 = *(undefined4 **)(_UNK_0214f82c + 0x214f748);
  uVar6 = func_0x02fc1c00(*(undefined4 *)(param_1 + 0x18),*puVar7);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 2) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x14) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0214f830 + 0x214f77c);
  if (uVar2 < 3) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar6;
  uVar6 = func_0x02fc2ff4(*(undefined4 *)(param_1 + 0x1c),
                          **(undefined4 **)(_UNK_0214f834 + 0x214f794));
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 4) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_0214f838 + 0x214f7c8);
  if (uVar2 < 5) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x20) = uVar6;
  uVar6 = func_0x02fc1c00(*(undefined4 *)(param_1 + 0x14),*puVar7);
  if (*(uint *)(iVar1 + 0xc) < 6) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x24) = uVar6;
  (*(code *)&SUB_046723b0)(iVar1,0);
  return;
}



// ===== FAT.Merge.InterlaceOutputMethod$$PeekNextItem RVA 0x213f83c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0214f83c(int param_1)

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
  
  pcVar4 = (char *)(_UNK_0214f8e8 + 0x214f850);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214f8ec + 0x214f864));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3c8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3c8,0);
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
  func_0x0214f8f4(param_1);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar3) {
    func_0x0484c9cc(0,uVar3,**(undefined4 **)(_UNK_0214f8f0 + 0x214f8dc));
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



// ===== FAT.Merge.InterlaceOutputMethod$$_EnsureNext RVA 0x213f8f4 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x021507a4) */
/* WARNING: Removing unreachable block (ram,0x02150774) */
/* WARNING: Removing unreachable block (ram,0x02150648) */
/* WARNING: Removing unreachable block (ram,0x02150368) */
/* WARNING: Removing unreachable block (ram,0x0215035c) */
/* WARNING: Removing unreachable block (ram,0x02150204) */
/* WARNING: Removing unreachable block (ram,0x021501f8) */
/* WARNING: Removing unreachable block (ram,0x02150050) */
/* WARNING: Removing unreachable block (ram,0x02150044) */
/* WARNING: Removing unreachable block (ram,0x0214ff18) */
/* WARNING: Removing unreachable block (ram,0x0214ff38) */
/* WARNING: Removing unreachable block (ram,0x021500f8) */
/* WARNING: Removing unreachable block (ram,0x02150104) */
/* WARNING: Removing unreachable block (ram,0x021502a0) */
/* WARNING: Removing unreachable block (ram,0x021502ac) */
/* WARNING: Removing unreachable block (ram,0x02150638) */
/* WARNING: Removing unreachable block (ram,0x02150784) */
/* WARNING: Removing unreachable block (ram,0x02150d8c) */
/* WARNING: Removing unreachable block (ram,0x021507b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214f8f4(int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined *puVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong uStack_80;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_02150904 + 0x214f90c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02150918 + 0x214f920));
    func_0x01384978(*(undefined4 *)(_UNK_02150924 + 0x214f92c));
    func_0x01384978(*(undefined4 *)(_UNK_02150930 + 0x214f938));
    func_0x01384978(*(undefined4 *)(_UNK_0215093c + 0x214f944));
    func_0x01384978(*(undefined4 *)(_UNK_02150948 + 0x214f950));
    func_0x01384978(*(undefined4 *)(_UNK_02150954 + 0x214f95c));
    func_0x01384978(*(undefined4 *)(_UNK_02150960 + 0x214f968));
    func_0x01384978(*(undefined4 *)(_UNK_02150968 + 0x214f974));
    func_0x01384978(*(undefined4 *)(_UNK_02150978 + 0x214f980));
    func_0x01384978(*(undefined4 *)(_UNK_02150984 + 0x214f98c));
    func_0x01384978(*(undefined4 *)(_UNK_02150990 + 0x214f998));
    func_0x01384978(*(undefined4 *)(_UNK_0215099c + 0x214f9a4));
    func_0x01384978(*(undefined4 *)(_UNK_021509a8 + 0x214f9b0));
    func_0x01384978(*(undefined4 *)(_UNK_021509b4 + 0x214f9bc));
    func_0x01384978(*(undefined4 *)(_UNK_021509c0 + 0x214f9c8));
    func_0x01384978(*(undefined4 *)(_UNK_021509c4 + 0x214f9d4));
    func_0x01384978(*(undefined4 *)(_UNK_021509d4 + 0x214f9e0));
    func_0x01384978(*(undefined4 *)(_UNK_021509e4 + 0x214f9ec));
    func_0x01384978(*(undefined4 *)(_UNK_021509f0 + 0x214f9f8));
    func_0x01384978(*(undefined4 *)(_UNK_021509f4 + 0x214fa04));
    func_0x01384978(*(undefined4 *)(_UNK_021509f8 + 0x214fa10));
    func_0x01384978(*(undefined4 *)(_UNK_021509fc + 0x214fa1c));
    func_0x01384978(*(undefined4 *)(_UNK_02150a00 + 0x214fa28));
    func_0x01384978(*(undefined4 *)(_UNK_02150a04 + 0x214fa34));
    *pcVar8 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  iStack_54 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  iStack_64 = 0;
  iStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  iStack_74 = 0;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  iVar2 = func_0x0229f06c(0xb3c9,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb3c9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
    return;
  }
  iVar11 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  if (iVar2 < *(int *)(iVar11 + 0xc)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if ((iVar2 == 0) || (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10))) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02150afc + 0x214fb18));
    func_0x028cecc4(iVar2,0);
    *(int *)(param_1 + 8) = iVar2;
    uVar3 = func_0x02450284(1,10000,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x028ced38(iVar2,uVar3,0,0);
    iVar2 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (iVar2 == 0) {
      func_0x01384bf0();
      iVar2 = 0;
      uVar3 = func_0x028cea8c(0,0);
      func_0x01384bf0();
      goto LAB_0214fba4;
    }
  }
  uVar3 = func_0x028cea8c(iVar2,0);
LAB_0214fba4:
  func_0x028ced38(iVar2,uVar3,100,0);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0325a3b4(&uStack_90,iVar2,**(undefined4 **)(_UNK_02150ba8 + 0x214fbe0));
  uStack_38 = uStack_90;
  uStack_34 = uStack_8c;
  uStack_30 = uStack_88;
  uStack_2c = uStack_84;
  puVar12 = *(undefined4 **)(_UNK_02150bec + 0x214fc00);
  while (iVar2 = func_0x03f597e0(&uStack_38,**(undefined4 **)(_UNK_02150bf0 + 0x214fc08)),
        uVar3 = uStack_2c, iVar2 != 0) {
    iVar2 = func_0x02f7c01c(*(undefined4 *)(param_1 + 0x14),uStack_2c,0,*puVar12);
    if (0 < iVar2 + 1) {
      iVar11 = *(int *)(param_1 + 0x14);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar11,uVar3,iVar2 + 1,**(undefined4 **)(_UNK_02150c58 + 0x214fc60));
    }
  }
  func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_02150c5c + 0x214fc80));
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar2 + 0xc) = 0;
  iVar11 = *(int *)(param_1 + 0x14);
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a200(&uStack_90,iVar11,**(undefined4 **)(_UNK_02150cc4 + 0x214fcd0));
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  uStack_48 = uStack_88;
  uStack_44 = uStack_84;
  uStack_40 = uStack_80;
  puVar15 = &UNK_0098967f;
  while (iVar2 = func_0x03f9975c(&uStack_50,**(undefined4 **)(_UNK_02150cf0 + 0x214fd04)),
        iVar2 != 0) {
    uVar3 = (uint)uStack_40;
    iVar2 = func_0x02f7c01c(*(undefined4 *)(param_1 + 0x18),uStack_44,0,*puVar12);
    if ((0 < iVar2) && (puVar4 = (undefined *)func_0x01457ae8(uVar3), (int)puVar4 < (int)puVar15)) {
      puVar15 = puVar4;
    }
  }
  func_0x03f9989c(&uStack_50,**(undefined4 **)(_UNK_02150cf4 + 0x214fd58));
  if (0 < (int)puVar15) {
    piVar9 = *(int **)(_UNK_02150d64 + 0x214fd74);
    iVar2 = *piVar9;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar9;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_90,iVar2,&iStack_54,**(undefined4 **)(_UNK_02150da0 + 0x214fdb0));
    iVar2 = iStack_54;
    iVar11 = *(int *)(param_1 + 0x14);
    uStack_5c = uStack_8c;
    uStack_60 = uStack_90;
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x03d59a84(iVar11,**(undefined4 **)(_UNK_02150da4 + 0x214fdec));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0325992c(iVar2,uVar3,**(undefined4 **)(_UNK_02150df4 + 0x214fe10));
    iVar2 = iStack_54;
    if (iStack_54 == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&uStack_90,iVar2,**(undefined4 **)(_UNK_02150e24 + 0x214fe38));
    uStack_38 = uStack_90;
    uStack_34 = uStack_8c;
    uStack_30 = uStack_88;
    uStack_2c = uStack_84;
    puVar13 = *(undefined4 **)(_UNK_02150e28 + 0x214fe60);
    while (iVar2 = func_0x03f597e0(&uStack_38,**(undefined4 **)(_UNK_02150e2c + 0x214fe68)),
          uVar3 = uStack_2c, iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x03d59cc4(iVar2,uVar3,*puVar13);
      iVar5 = func_0x02f7c01c(*(undefined4 *)(param_1 + 0x18),uVar3,0,*puVar12);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar2,uVar3,iVar11 - iVar5 * (int)puVar15,
                      **(undefined4 **)(_UNK_02150ea8 + 0x214fedc));
    }
    func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_02150ed8 + 0x214ff04));
    func_0x028c98a0(&uStack_60,0);
  }
  piVar9 = *(int **)(_UNK_02150f40 + 0x214ff4c);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar9;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0359c380(&uStack_90,iVar2,&iStack_64,**(undefined4 **)(_UNK_02150f58 + 0x214ff88));
  iVar2 = *(int *)(param_1 + 0x14);
  uVar16 = *(uint *)(param_1 + 0x20);
  uStack_5c = uStack_8c;
  uStack_60 = uStack_90;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a200(&uStack_90,iVar2,**(undefined4 **)(_UNK_02150f9c + 0x214ffc4));
  iVar2 = (int)uVar16 >> 0x1f;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  uStack_48 = uStack_88;
  uStack_44 = uStack_84;
  uStack_40 = uStack_80;
  while (iVar11 = func_0x03f9975c(&uStack_50,**(undefined4 **)(_UNK_02150fa0 + 0x214fff8)),
        iVar11 != 0) {
    bVar17 = CARRY4((uint)uStack_40,uVar16);
    uVar16 = (uint)uStack_40 + uVar16;
    iVar2 = ((int)(uint)uStack_40 >> 0x1f) + iVar2 + (uint)bVar17;
  }
  func_0x03f9989c(&uStack_50,**(undefined4 **)(_UNK_02150fa4 + 0x2150030));
  iVar11 = *(int *)(param_1 + 0x18);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a200(&uStack_90,iVar11,**(undefined4 **)(_UNK_02150fa8 + 0x2150078));
  uVar14 = 0;
  iVar11 = 0;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  uStack_48 = uStack_88;
  uStack_44 = uStack_84;
  uStack_40 = uStack_80;
  while (iVar5 = func_0x03f9975c(&uStack_50,**(undefined4 **)(_UNK_02150fb0 + 0x21500b0)),
        iVar5 != 0) {
    bVar17 = CARRY4((uint)uStack_40,uVar14);
    uVar14 = (uint)uStack_40 + uVar14;
    iVar11 = ((int)(uint)uStack_40 >> 0x1f) + iVar11 + (uint)bVar17;
  }
  func_0x03f9989c(&uStack_50,**(undefined4 **)(_UNK_02150fb4 + 0x21500e8));
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a200(&uStack_90,iVar5,**(undefined4 **)(_UNK_02150fb8 + 0x215012c));
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  uStack_48 = uStack_88;
  uStack_44 = uStack_84;
  uStack_40 = uStack_80;
  while (iVar5 = func_0x03f9975c(&uStack_50,**(undefined4 **)(_UNK_02150fc4 + 0x215015c)),
        uVar3 = uStack_44, iVar5 != 0) {
    if (0 < (int)(uint)uStack_40) {
      lVar1 = (ulonglong)uVar16 * (uStack_40 & 0xffffffff);
      uVar18 = func_0x01458584((int)lVar1,(uint)uStack_40 * iVar2 + (int)((ulonglong)lVar1 >> 0x20),
                               uVar14,iVar11);
      iVar5 = iStack_64;
      uVar10 = (uint)uVar18;
      if ((int)(uint)(uVar10 < 0x80000000) <= (int)((ulonglong)uVar18 >> 0x20)) {
        uVar10 = 0x7fffffff;
      }
      if (iStack_64 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar5,uVar3,uVar10,**(undefined4 **)(_UNK_02150fc0 + 0x21501bc));
    }
  }
  func_0x03f9989c(&uStack_50,**(undefined4 **)(_UNK_02150fc8 + 0x21501e4));
  iVar11 = iStack_64;
  if (iStack_64 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a200(&uStack_90,iVar11,**(undefined4 **)(_UNK_02150fcc + 0x2150228));
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  uStack_48 = uStack_88;
  uStack_44 = uStack_84;
  uStack_40 = uStack_80;
  while (iVar11 = func_0x03f9975c(&uStack_50,**(undefined4 **)(_UNK_02150fd4 + 0x2150258)),
        iVar11 != 0) {
    bVar17 = uVar16 < (uint)uStack_40;
    uVar16 = uVar16 - (uint)uStack_40;
    iVar2 = iVar2 - (((int)(uint)uStack_40 >> 0x1f) + (uint)bVar17);
  }
  func_0x03f9989c(&uStack_50,**(undefined4 **)(_UNK_02150fd8 + 0x215028c));
  iVar11 = iStack_64;
  if ((int)(uint)(uVar16 == 0) <= iVar2) {
    if (iStack_64 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_90,iVar11,**(undefined4 **)(_UNK_02150fdc + 0x21502dc));
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    uStack_48 = uStack_88;
    uStack_44 = uStack_84;
    uStack_40 = uStack_80;
    iVar2 = 0;
    uVar3 = 0;
    while (iVar11 = func_0x03f9975c(&uStack_50,**(undefined4 **)(_UNK_02150fe4 + 0x2150314)),
          iVar11 != 0) {
      if (iVar2 < (int)(uint)uStack_40) {
        iVar2 = (uint)uStack_40;
        uVar3 = uStack_44;
      }
    }
    func_0x03f9989c(&uStack_50,**(undefined4 **)(_UNK_02150fe8 + 0x215034c));
    iVar2 = iStack_64;
    if (iStack_64 == 0) {
      func_0x01384bf0();
    }
    iVar11 = func_0x03d59fc8(iVar2,uVar3,**(undefined4 **)(_UNK_02150fec + 0x215038c));
    iVar2 = iStack_64;
    if (iVar11 == 0) {
      iVar2 = func_0x01384988(*(undefined4 *)(_UNK_02151018 + 0x21507ec));
      iVar11 = *(int *)(iVar2 + 0x1c);
      if (iVar11 == 0) {
        func_0x0140024c(iVar2);
        iVar11 = *(int *)(iVar2 + 0x1c);
      }
      iVar11 = *(int *)(iVar11 + 8);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x014001f0();
      }
      if (*(int *)(iVar11 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x1c) + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      uVar3 = **(undefined4 **)(iVar2 + 0x5c);
      iVar2 = func_0x01384988(*(undefined4 *)(_UNK_0215101c + 0x2150858));
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar7 = func_0x01384988(*(undefined4 *)(_UNK_02151020 + 0x2150874));
      func_0x028c2f28(uVar7,uVar3,0);
      func_0x01384988(*(undefined4 *)(_UNK_02151024 + 0x215088c));
      uVar3 = func_0x01384be4();
      func_0x0245491c(uVar3,0);
      uVar7 = func_0x01384988(*(undefined4 *)(_UNK_02151028 + 0x21508a8));
      func_0x01384aa0(uVar3,uVar7);
      uVar18 = func_0x01384928();
      if ((int)((ulonglong)uVar18 >> 0x20) == 1) {
        piVar9 = (int *)func_0x0145b008((int)uVar18);
        iVar2 = *piVar9;
        func_0x0145b0f8();
        func_0x028c98a0(&uStack_60,0);
        if (iVar2 == 0) {
          return;
        }
        func_0x01384bec(iVar2);
        return;
      }
      func_0x028c98a0(&uStack_60,0);
      func_0x01459844((int)uVar18);
      func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iStack_64 == 0) {
      func_0x01384bf0();
    }
    iVar11 = func_0x03d59cc4(iVar2,uVar3,**(undefined4 **)(_UNK_02150ff0 + 0x21503bc));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar2,uVar3,iVar11 + uVar16,**(undefined4 **)(_UNK_02150ff4 + 0x21503e8));
  }
  piVar9 = *(int **)(_UNK_02150ff8 + 0x2150400);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar9;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0359c380(&uStack_90,iVar2,&iStack_68,**(undefined4 **)(_UNK_02150ffc + 0x2150434));
  iVar11 = iStack_64;
  iVar2 = iStack_68;
  uStack_6c = uStack_8c;
  uStack_70 = uStack_90;
  if (iStack_64 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x03d59a84(iVar11,**(undefined4 **)(_UNK_02151000 + 0x2150474));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0325992c(iVar2,uVar3,**(undefined4 **)(_UNK_02151004 + 0x2150498));
  iVar2 = iStack_68;
  if (iStack_68 == 0) {
    func_0x01384bf0();
  }
  func_0x0325a3b4(&uStack_90,iVar2,**(undefined4 **)(_UNK_02151008 + 0x21504c0));
  iVar2 = 0;
  uStack_38 = uStack_90;
  uStack_34 = uStack_8c;
  uStack_30 = uStack_88;
  uStack_2c = uStack_84;
  puVar12 = *(undefined4 **)(_UNK_0215100c + 0x21504f0);
  puVar13 = *(undefined4 **)(_UNK_02151010 + 0x21504f8);
  while (iVar11 = func_0x03f597e0(&uStack_38,**(undefined4 **)(_UNK_02151034 + 0x2150500)),
        uVar3 = uStack_2c, iVar11 != 0) {
    iVar11 = *(int *)(param_1 + 0x14);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x03d5bb20(iVar11,uVar3,&iStack_74,*puVar12);
    iVar11 = iStack_64;
    if (iVar5 != 0) {
      if (iStack_64 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x03d59cc4(iVar11,uVar3,*puVar13);
      iVar5 = iStack_74;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar11,uVar3,iVar6 - iVar5,**(undefined4 **)(_UNK_0215102c + 0x2150588));
      iVar11 = iStack_64;
      if (iStack_64 == 0) {
        func_0x01384bf0();
      }
      uVar16 = func_0x03d59cc4(iVar11,uVar3,*puVar13);
      iVar11 = iStack_64;
      if (0x7fffffff < uVar16) {
        if (iStack_64 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x03d59cc4(iVar11,uVar3,*puVar13);
        iVar11 = iStack_64;
        iVar2 = iVar2 - iVar5;
        if (iStack_64 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar11,uVar3,0,**(undefined4 **)(_UNK_02151030 + 0x21505fc));
      }
    }
  }
  puVar12 = *(undefined4 **)(_UNK_02151038 + 0x2150624);
  func_0x03f597dc(&uStack_38,*puVar12);
  iVar11 = iStack_68;
  if (0 < iVar2) {
    if (iStack_68 == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&uStack_90,iVar11,**(undefined4 **)(_UNK_0215103c + 0x2150674));
    uStack_38 = uStack_90;
    uStack_34 = uStack_8c;
    uStack_30 = uStack_88;
    uStack_2c = uStack_84;
    while (iVar5 = func_0x03f597e0(&uStack_38,**(undefined4 **)(_UNK_02151048 + 0x2150698)),
          uVar3 = uStack_2c, iVar11 = iStack_64, iVar5 != 0) {
      if (iStack_64 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x03d59cc4(iVar11,uVar3,*puVar13);
      iVar11 = iStack_64;
      if (0 < iVar5) {
        if (iStack_64 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x03d59cc4(iVar11,uVar3,*puVar13);
        iVar11 = iStack_64;
        if (iVar2 < iVar5) {
          iVar5 = iVar2;
        }
        if (iStack_64 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x03d59cc4(iVar11,uVar3,*puVar13);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar2 = iVar2 - iVar5;
        func_0x03d59d54(iVar11,uVar3,iVar6 - iVar5,**(undefined4 **)(_UNK_02151044 + 0x2150744));
      }
    }
    func_0x03f597dc(&uStack_38,*puVar12);
  }
  func_0x028c98a0(&uStack_70,0);
  func_0x021510b0(param_1,iStack_64,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc));
  func_0x028c98a0(&uStack_60,0);
  return;
}



// ===== FAT.Merge.InterlaceOutputMethod$$UseNextItem RVA 0x214104c =====

void FUN_0215104c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb3c7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3c7,0);
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
  FUN_0214f83c(param_1);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}



// ===== FAT.Merge.InterlaceOutputMethod$$_ArrangeItemByNeed RVA 0x21410b0 =====

/* WARNING: Removing unreachable block (ram,0x021519a4) */
/* WARNING: Removing unreachable block (ram,0x02151998) */
/* WARNING: Removing unreachable block (ram,0x021514b4) */
/* WARNING: Removing unreachable block (ram,0x02151bcc) */
/* WARNING: Removing unreachable block (ram,0x02151bd8) */
/* WARNING: Removing unreachable block (ram,0x021514c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021510b0(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_02151e50 + 0x21510d0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02151e54 + 0x21510e8));
    func_0x01384978(*(undefined4 *)(_UNK_02151e58 + 0x21510f4));
    func_0x01384978(*(undefined4 *)(_UNK_02151e5c + 0x2151100));
    func_0x01384978(*(undefined4 *)(_UNK_02151e60 + 0x215110c));
    func_0x01384978(*(undefined4 *)(_UNK_02151e64 + 0x2151118));
    func_0x01384978(*(undefined4 *)(_UNK_02151e68 + 0x2151124));
    func_0x01384978(*(undefined4 *)(_UNK_02151e6c + 0x2151130));
    func_0x01384978(*(undefined4 *)(_UNK_02151e70 + 0x215113c));
    func_0x01384978(*(undefined4 *)(_UNK_02151e74 + 0x2151148));
    func_0x01384978(*(undefined4 *)(_UNK_02151e78 + 0x2151154));
    func_0x01384978(*(undefined4 *)(_UNK_02151e7c + 0x2151160));
    func_0x01384978(*(undefined4 *)(_UNK_02151e80 + 0x215116c));
    func_0x01384978(*(undefined4 *)(_UNK_02151e84 + 0x2151178));
    func_0x01384978(*(undefined4 *)(_UNK_02151e88 + 0x2151184));
    func_0x01384978(*(undefined4 *)(_UNK_02151e8c + 0x2151190));
    func_0x01384978(*(undefined4 *)(_UNK_02151e90 + 0x215119c));
    func_0x01384978(*(undefined4 *)(_UNK_02151e94 + 0x21511a8));
    func_0x01384978(*(undefined4 *)(_UNK_02151e98 + 0x21511b4));
    func_0x01384978(*(undefined4 *)(_UNK_02151e9c + 0x21511c0));
    func_0x01384978(*(undefined4 *)(_UNK_02151ea0 + 0x21511cc));
    func_0x01384978(*(undefined4 *)(_UNK_02151ea4 + 0x21511d8));
    func_0x01384978(*(undefined4 *)(_UNK_02151ea8 + 0x21511e4));
    func_0x01384978(*(undefined4 *)(_UNK_02151eac + 0x21511f0));
    func_0x01384978(*(undefined4 *)(_UNK_02151eb0 + 0x21511fc));
    func_0x01384978(*(undefined4 *)(_UNK_02151eb4 + 0x2151208));
    func_0x01384978(*(undefined4 *)(_UNK_02151eb8 + 0x2151214));
    func_0x01384978(*(undefined4 *)(_UNK_02151ebc + 0x2151220));
    *pcVar8 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_54 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_44 = 0;
  iStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_60 = 0;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  iStack_34 = iStack_54;
  iVar2 = func_0x0229f06c(0xb3ca,0);
  if (iVar2 == 0) {
    piVar7 = *(int **)(_UNK_02151ec0 + 0x21512bc);
    iVar2 = *piVar7;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar7;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar2,&iStack_28,**(undefined4 **)(_UNK_02151ec4 + 0x2151300));
    puVar13 = *(undefined4 **)(_UNK_02151ec8 + 0x2151314);
    do {
      iVar2 = **(int **)(_UNK_02151ecc + 0x215131c);
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = **(int **)(_UNK_02151ed0 + 0x2151338);
      }
      iVar2 = **(int **)(iVar2 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0359c52c(iVar2,**(undefined4 **)(_UNK_02151ed4 + 0x2151358));
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      func_0x0325a3b4(&uStack_70,param_3,**(undefined4 **)(_UNK_02151ed8 + 0x2151380));
      uStack_40 = uStack_70;
      uStack_3c = uStack_6c;
      uStack_38 = uStack_68;
      iStack_34 = iStack_64;
      while (iVar3 = func_0x03f597e0(&uStack_40,*puVar13), iVar5 = iStack_34, iVar3 != 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x03d5bb20(param_2,iVar5,&iStack_44,
                                **(undefined4 **)(_UNK_02151edc + 0x21513cc));
        if ((0 < iStack_44) && (iVar3 == 1)) {
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar2 + 8);
          uVar9 = *(uint *)(iVar2 + 0xc);
          piVar7 = *(int **)(_UNK_02151ee0 + 0x215141c);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar3 = *piVar7;
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          if (uVar9 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar9 + 1;
            *(int *)(iVar10 + uVar9 * 4 + 0x10) = iVar5;
          }
          else {
            func_0x0325970c(iVar2,iVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
          }
          iVar3 = iStack_44;
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d54(param_2,iVar5,iVar3 + -1,**(undefined4 **)(_UNK_02151ee4 + 0x215147c));
        }
      }
      func_0x03f597dc(&uStack_40,**(undefined4 **)(_UNK_02151ee8 + 0x21514a4));
      iVar5 = iStack_28;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar5 + 8);
      uVar9 = *(uint *)(iVar5 + 0xc);
      piVar7 = *(int **)(_UNK_02151eec + 0x21514f8);
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
      iVar10 = *piVar7;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (uVar9 < *(uint *)(iVar3 + 0xc)) {
        *(uint *)(iVar5 + 0xc) = uVar9 + 1;
        *(int *)(iVar3 + uVar9 * 4 + 0x10) = iVar2;
      }
      else {
        func_0x0328f170(iVar5,iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38)
                       );
      }
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    } while (1 < *(int *)(iVar2 + 0xc));
    puVar13 = *(undefined4 **)(_UNK_02151ef0 + 0x215159c);
    while( true ) {
      iVar2 = iStack_28;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar5 = iStack_28;
      if (*(int *)(iVar2 + 0xc) < 1) break;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0328eea8(iVar5,*(int *)(iVar5 + 0xc) + -1,
                              **(undefined4 **)(_UNK_02151ef8 + 0x21515d0));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar5 = iStack_28;
      if (*(int *)(iVar2 + 0xc) != 0) break;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      func_0x03290bd4(iVar5,*(int *)(iVar5 + 0xc) + -1,*puVar13);
    }
    iVar2 = iStack_28;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    iVar5 = iStack_28;
    if (1 < *(int *)(iVar2 + 0xc)) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0328eea8(iVar5,*(int *)(iVar5 + 0xc) + -1,
                              **(undefined4 **)(_UNK_02151efc + 0x215165c));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar5 = iStack_28;
      if (*(int *)(iVar2 + 0xc) == 1) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0328eea8(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_02151f00 + 0x21516a4));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar4 = func_0x03259410(iVar2,0,**(undefined4 **)(_UNK_02151f04 + 0x21516d0));
        iVar2 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        func_0x03290bd4(iVar2,*(int *)(iVar2 + 0xc) + -1,*puVar13);
        iVar2 = func_0x02f7c01c(param_2,uVar4,0,**(undefined4 **)(_UNK_02151f08 + 0x2151710));
        iVar5 = **(int **)(_UNK_02151f0c + 0x2151730);
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x01384ab4();
          iVar5 = **(int **)(_UNK_02151f10 + 0x215174c);
        }
        iVar5 = **(int **)(iVar5 + 0x5c);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0359c380(&uStack_70,iVar5,&iStack_48,**(undefined4 **)(_UNK_02151f14 + 0x215176c));
        iVar2 = iVar2 + 1;
        iVar5 = 0;
        uStack_4c = uStack_6c;
        uStack_50 = uStack_70;
        while( true ) {
          iVar3 = iStack_28;
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          iVar14 = iStack_28;
          iVar10 = iStack_48;
          if (*(int *)(iVar3 + 0xc) <= iVar5) break;
          if (iStack_48 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar9 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_02151f18 + 0x21517e0);
          *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
          iVar14 = *piVar7;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (uVar9 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar10 + 0xc) = uVar9 + 1;
            *(int *)(iVar3 + uVar9 * 4 + 0x10) = iVar5;
          }
          else {
            func_0x0325970c(iVar10,iVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
          }
          iVar5 = iVar5 + 1;
        }
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        if (0 < iVar2) {
          iVar5 = *(int *)(iVar14 + 0xc);
          do {
            iVar3 = iStack_28;
            if (iStack_28 == 0) {
              func_0x01384bf0();
            }
            iVar10 = iStack_48;
            if (*(int *)(iVar3 + 0xc) <= iVar5) {
              if (iStack_48 == 0) {
                func_0x01384bf0();
              }
              iVar5 = 0;
              func_0x03004950(iVar10,0,*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(param_1 + 8),
                              **(undefined4 **)(_UNK_02151f1c + 0x215188c));
            }
            iVar10 = iStack_28;
            iVar3 = iStack_48;
            if (iStack_48 == 0) {
              func_0x01384bf0();
            }
            uVar6 = func_0x03259410(iVar3,iVar5,**(undefined4 **)(_UNK_02151f20 + 0x21518c8));
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x0328eea8(iVar10,uVar6,**(undefined4 **)(_UNK_02151f24 + 0x21518f0));
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar10 = *(int *)(iVar3 + 8);
            uVar9 = *(uint *)(iVar3 + 0xc);
            piVar7 = *(int **)(_UNK_02151f28 + 0x215192c);
            *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
            iVar14 = *piVar7;
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            if (uVar9 < *(uint *)(iVar10 + 0xc)) {
              *(uint *)(iVar3 + 0xc) = uVar9 + 1;
              *(undefined4 *)(iVar10 + uVar9 * 4 + 0x10) = uVar4;
            }
            else {
              func_0x0325970c(iVar3,uVar4,
                              *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
            }
            iVar2 = iVar2 + -1;
            iVar5 = iVar5 + 1;
          } while (iVar2 != 0);
        }
        func_0x028c98a0(&uStack_50,0);
      }
    }
    iVar2 = iStack_28;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(int *)(iVar2 + 0xc) - 1;
    bVar1 = iStack_28 == 0;
    if (-1 < (int)uVar9) {
      puVar13 = *(undefined4 **)(_UNK_02151f2c + 0x21519e4);
      do {
        iVar2 = iStack_28;
        if (bVar1) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0328eea8(iVar2,uVar9,**(undefined4 **)(_UNK_02151f30 + 0x21519f8));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar11 = *(int *)(iVar2 + 0xc) - 1;
        if (-1 < (int)uVar11) {
          do {
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x03259410(iVar2,uVar11,*puVar13);
            if (param_4 == 0) {
              func_0x01384bf0();
            }
            iVar5 = *(int *)(param_4 + 8);
            uVar15 = *(uint *)(param_4 + 0xc);
            piVar7 = *(int **)(_UNK_02151f34 + 0x2151a70);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            iVar3 = *piVar7;
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            if (uVar15 < *(uint *)(iVar5 + 0xc)) {
              *(uint *)(param_4 + 0xc) = uVar15 + 1;
              *(undefined4 *)(iVar5 + uVar15 * 4 + 0x10) = uVar4;
            }
            else {
              func_0x0325970c(param_4,uVar4,
                              *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
            }
            uVar11 = uVar11 - 1;
          } while (uVar11 < 0x80000000);
        }
        uVar9 = uVar9 - 1;
        bVar1 = iStack_28 == 0;
      } while (uVar9 < 0x80000000);
    }
    iVar2 = iStack_28;
    if (bVar1) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_70,iVar2,**(undefined4 **)(_UNK_02151f38 + 0x2151af4));
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    uStack_58 = uStack_68;
    iStack_54 = iStack_64;
    puVar13 = *(undefined4 **)(_UNK_02151f3c + 0x2151b20);
    puVar12 = *(undefined4 **)(_UNK_02151f40 + 0x2151b28);
    while (iVar5 = func_0x03f5f428(&uStack_60,*puVar13), iVar2 = iStack_54, iVar5 != 0) {
      if (iStack_54 == 0) {
        func_0x01384bf0();
      }
      piVar7 = *(int **)(_UNK_02151f44 + 0x2151b54);
      *(undefined4 *)(iVar2 + 0xc) = 0;
      iVar5 = *piVar7;
      iVar3 = *(int *)(iVar5 + 0x74);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (iVar3 == 0) {
        func_0x01384ab4();
        iVar5 = **(int **)(_UNK_02151f48 + 0x2151b80);
      }
      iVar5 = **(int **)(iVar5 + 0x5c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c65c(iVar5,iVar2,*puVar12);
    }
    func_0x03f5f424(&uStack_60,**(undefined4 **)(_UNK_02151f4c + 0x2151bbc));
    iVar2 = iStack_28;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (0 < iVar5) {
      func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar5,0);
    }
    func_0x028c98a0(&uStack_30,0);
  }
  else {
    iVar2 = func_0x0229f13c(0xb3ca,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.InterlaceOutputMethod$$<>iFixBaseProxy_ToString RVA 0x2141f54 =====

void FUN_02151f54(undefined4 param_1)

{
  (*(code *)&UNK_048868a4)(param_1,0);
  return;
}



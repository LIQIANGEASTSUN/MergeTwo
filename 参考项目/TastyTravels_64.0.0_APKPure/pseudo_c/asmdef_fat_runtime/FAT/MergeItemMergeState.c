/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MergeItemMergeState$$.ctor RVA 0x1e0d88c =====

void FUN_01e1d88c(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MergeItemMergeState$$OnEnter RVA 0x1e0d894 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1d894(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01e1dbe0 + 0x1e1d8ac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1dbe4 + 0x1e1d8c0));
    func_0x01384978(*(undefined4 *)(_UNK_01e1dbe8 + 0x1e1d8cc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0c7,0);
  if (iVar1 == 0) {
    FUN_01e1c2e0(param_1,0);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022a06d0(iVar1,0,0);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0210e5f4(iVar1,0);
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = uVar7;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0210e5f4(iVar1,0);
    puVar8 = *(undefined4 **)(_UNK_01e1dbec + 0x1e1d9e4);
    *(undefined4 *)(param_1 + 0x20) = uVar7;
    iVar1 = func_0x03668dfc(*puVar8);
    iVar6 = *(int *)(param_1 + 0x18);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0244fc34(iVar6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01de36f0(iVar1,uVar7,0);
    iVar1 = func_0x03668dfc(*puVar8);
    iVar6 = *(int *)(param_1 + 0x18);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0244fc34(iVar6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01de36f0(iVar1,uVar7,0);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_28,iVar1,0);
    iVar1 = func_0x03668dfc(*puVar8);
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0244fc34(iVar6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar5 = (int *)0x0;
    if ((piVar2 != (int *)0x0) &&
       (piVar5 = piVar2, *piVar2 != **(int **)(_UNK_01e1dbf0 + 0x1e1db20))) {
      piVar5 = (int *)0x0;
    }
    uStack_30 = 0;
    FUN_01de3a84(iVar1,uStack_28,uStack_24,piVar5);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,1,0);
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244fc34(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024509f0(iVar1,0);
    func_0x01e1dbf4(param_1);
    return;
  }
  iVar1 = func_0x0229f13c(0xa0c7,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
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



// ===== FAT.MergeItemMergeState$$_PlayMergeAnim RVA 0x1e0dbf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1dbf4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint in_fpscr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar6 = (char *)(_UNK_01e1e748 + 0x1e1dc14);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1e74c + 0x1e1dc28));
    func_0x01384978(*(undefined4 *)(_UNK_01e1e750 + 0x1e1dc34));
    func_0x01384978(*(undefined4 *)(_UNK_01e1e754 + 0x1e1dc40));
    func_0x01384978(*(undefined4 *)(_UNK_01e1e758 + 0x1e1dc4c));
    func_0x01384978(*(undefined4 *)(_UNK_01e1e75c + 0x1e1dc58));
    func_0x01384978(*(undefined4 *)(_UNK_01e1e760 + 0x1e1dc64));
    func_0x01384978(*(undefined4 *)(_UNK_01e1e764 + 0x1e1dc70));
    func_0x01384978(*(undefined4 *)(_UNK_01e1e768 + 0x1e1dc7c));
    func_0x01384978(*(undefined4 *)(_UNK_01e1e76c + 0x1e1dc88));
    func_0x01384978(*(undefined4 *)(_UNK_01e1e770 + 0x1e1dc94));
    func_0x01384978(*(undefined4 *)(_UNK_01e1e774 + 0x1e1dca0));
    func_0x01384978(*(undefined4 *)(_UNK_01e1e778 + 0x1e1dcac));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0c8,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0xc) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244fc34(iVar1,0);
    pcVar6 = (char *)(_UNK_01e1e77c + 0x1e1dd38);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e1e780 + 0x1e1dd4c));
      *pcVar6 = '\x01';
    }
    piVar11 = *(int **)(_UNK_01e1e784 + 0x1e1dd64);
    puVar2 = *(undefined4 **)(*piVar11 + 0x5c);
    uVar9 = puVar2[2];
    uVar5 = *puVar2;
    uVar10 = puVar2[1];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_48 = 0;
    func_0x024503a4(iVar1,uVar5,uVar10,uVar9);
    piVar7 = *(int **)(_UNK_01e1e788 + 0x1e1dda0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar6 = (char *)(_UNK_01e1e78c + 0x1e1ddbc);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e1e790 + 0x1e1ddd0));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_38,iVar1,0);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_38,iVar1,0);
    uVar9 = VectorSignedToFloat(uStack_38,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = VectorSignedToFloat(uStack_34,(byte)(in_fpscr >> 0x16) & 3);
    FUN_01dd99a8(&uStack_38,uVar9,uVar5,0);
    pcVar6 = (char *)(_UNK_01e1e794 + 0x1e1de80);
    uStack_40 = uStack_38;
    uStack_3c = uStack_34;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e1e798 + 0x1e1dea0));
      *pcVar6 = '\x01';
    }
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (*(int *)(**(int **)(_UNK_01e1e79c + 0x1e1dee0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar8 = func_0x0145b1cc(iVar1,0,0);
    if (*(int *)(**(int **)(_UNK_01e1e7a0 + 0x1e1df14) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar9 = func_0x02ce71fc(0);
    pcVar6 = (char *)(_UNK_01e1e7a4 + 0x1e1df40);
    if (iVar8 == 0) {
      func_0x0309ef60(uVar9,0x3dcccccd,**(undefined4 **)(_UNK_01e1e7f0 + 0x1e1e304));
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0244fc34(iVar1,0);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1e7f4 + 0x1e1e348));
        *pcVar6 = '\x01';
      }
      iVar1 = *(int *)(*piVar11 + 0x5c);
      uStack_48 = 0x3e4ccccd;
      uStack_44 = 0;
      uVar5 = func_0x02cf3bbc(uVar5,*(float *)(iVar1 + 0xc) * _UNK_01e1e740,
                              *(float *)(iVar1 + 0x10) * _UNK_01e1e740,
                              *(float *)(iVar1 + 0x14) * _UNK_01e1e740);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1e7f8 + 0x1e1e3b0));
        *pcVar6 = '\x01';
      }
      iVar1 = *(int *)(*piVar11 + 0x5c);
      uStack_44 = **(undefined4 **)(_UNK_01e1e7fc + 0x1e1e3ec);
      uStack_48 = 1;
      uVar5 = func_0x0309e924(uVar5,*(float *)(iVar1 + 0xc) * _UNK_01e1e744,
                              *(float *)(iVar1 + 0x10) * _UNK_01e1e744,
                              *(float *)(iVar1 + 0x14) * _UNK_01e1e744);
      func_0x02cf668c(uVar9,uVar5,0);
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0244fc34(iVar1,0);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1e800 + 0x1e1e454));
        *pcVar6 = '\x01';
      }
      iVar1 = *(int *)(*piVar11 + 0x5c);
      uStack_48 = 0x3dcccccd;
      uStack_44 = 0;
      uVar5 = func_0x02cf3bbc(uVar5,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
                              *(undefined4 *)(iVar1 + 0x14));
      func_0x02cf668c(uVar9,uVar5,0);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01e1e804 + 0x1e1e49c));
      func_0x02ce3d80(uVar5,param_1,**(undefined4 **)(_UNK_01e1e808 + 0x1e1e4b8),0);
      func_0x0309ead4(uVar9,uVar5,**(undefined4 **)(_UNK_01e1e80c + 0x1e1e4d0));
      puVar2 = *(undefined4 **)(_UNK_01e1e810 + 0x1e1e4e4);
      *(undefined4 *)(param_1 + 0x10) = uVar9;
      func_0x03074b50(uVar9,*puVar2);
      uVar9 = func_0x02ce71fc(0);
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      pcVar6 = (char *)(_UNK_01e1e814 + 0x1e1e520);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar4 = (int *)func_0x0244fc34(iVar1,0);
      piVar7 = (int *)0x0;
      if ((piVar4 != (int *)0x0) &&
         (piVar7 = piVar4, *piVar4 != **(int **)(_UNK_01e1e818 + 0x1e1e54c))) {
        piVar7 = (int *)0x0;
      }
      uStack_48 = 0;
      uStack_44 = 0;
      uVar5 = func_0x01989554(piVar7,uStack_40,uStack_3c,0x3dcccccd);
      func_0x02cf668c(uVar9,uVar5,0);
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar4 = (int *)func_0x0244fc34(iVar1,0);
      piVar7 = (int *)0x0;
      if ((piVar4 != (int *)0x0) &&
         (piVar7 = piVar4, *piVar4 != **(int **)(_UNK_01e1e81c + 0x1e1e5d4))) {
        piVar7 = (int *)0x0;
      }
      uStack_48 = 0;
      uStack_44 = 0;
      uVar5 = func_0x01989554(piVar7,uStack_40,uStack_3c,0x3dcccccd);
      func_0x02cf66d8(uVar9,uVar5,0);
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0244fc34(iVar1,0);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1e820 + 0x1e1e664));
        *pcVar6 = '\x01';
      }
      puVar2 = *(undefined4 **)(*piVar11 + 0x5c);
      uStack_48 = 0x3dcccccd;
      uStack_44 = 0;
      uVar5 = func_0x02cf3bbc(uVar5,*puVar2,puVar2[1],puVar2[2]);
      func_0x02cf668c(uVar9,uVar5,0);
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0244fc34(iVar1,0);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1e824 + 0x1e1e6e4));
        *pcVar6 = '\x01';
      }
      puVar2 = *(undefined4 **)(*piVar11 + 0x5c);
      uStack_48 = 0x3dcccccd;
      uStack_44 = 0;
      uVar5 = func_0x02cf3bbc(uVar5,*puVar2,puVar2[1],puVar2[2]);
      func_0x02cf66d8(uVar9,uVar5,0);
      puVar2 = *(undefined4 **)(_UNK_01e1e828 + 0x1e1e724);
      *(undefined4 *)(param_1 + 0x14) = uVar9;
      uVar5 = *puVar2;
    }
    else {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar2 = *(undefined4 **)(_UNK_01e1e7a8 + 0x1e1df5c);
      func_0x0309ef60(uVar9,*(undefined4 *)(iVar1 + 0xc),*puVar2);
      iVar8 = *(int *)(param_1 + 8);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0244fc34(iVar8,0);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1e7ac + 0x1e1dfa0));
        *pcVar6 = '\x01';
      }
      uStack_48 = *(undefined4 *)(iVar1 + 0x10);
      iVar8 = *(int *)(**(int **)(_UNK_01e1e7b0 + 0x1e1dfb4) + 0x5c);
      uStack_44 = 0;
      uVar5 = func_0x02cf3bbc(uVar5,*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 0x10),
                              *(undefined4 *)(iVar8 + 0x14));
      uVar5 = func_0x0309f01c(uVar5,*(undefined4 *)(iVar1 + 0x14),
                              **(undefined4 **)(_UNK_01e1e7b4 + 0x1e1dfe0));
      func_0x02cf668c(uVar9,uVar5,0);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01e1e7b8 + 0x1e1e000));
      func_0x02ce3d80(uVar5,param_1,**(undefined4 **)(_UNK_01e1e7bc + 0x1e1e01c),0);
      func_0x0309ead4(uVar9,uVar5,**(undefined4 **)(_UNK_01e1e7c0 + 0x1e1e034));
      puVar3 = *(undefined4 **)(_UNK_01e1e7c4 + 0x1e1e048);
      *(undefined4 *)(param_1 + 0x10) = uVar9;
      func_0x03074b50(uVar9,*puVar3);
      uVar5 = *(undefined4 *)(iVar1 + 0x1c);
      uVar9 = func_0x02ce71fc(0);
      func_0x0309ef60(uVar9,*(undefined4 *)(iVar1 + 0x18),*puVar2);
      iVar8 = *(int *)(param_1 + 0x18);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 8);
      pcVar6 = (char *)(_UNK_01e1e7c8 + 0x1e1e094);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar7 = (int *)func_0x0244fc34(iVar8,0);
      piVar11 = (int *)0x0;
      if ((piVar7 != (int *)0x0) &&
         (piVar11 = piVar7, *piVar7 != **(int **)(_UNK_01e1e7cc + 0x1e1e0c0))) {
        piVar11 = (int *)0x0;
      }
      uStack_48 = 0;
      uStack_44 = 0;
      uVar10 = func_0x01989554(piVar11,uStack_40,uStack_3c,uVar5);
      puVar2 = *(undefined4 **)(_UNK_01e1e7d0 + 0x1e1e100);
      uVar10 = func_0x0309f01c(uVar10,*(undefined4 *)(iVar1 + 0x20),*puVar2);
      func_0x02cf668c(uVar9,uVar10,0);
      iVar8 = *(int *)(param_1 + 0x18);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar7 = (int *)func_0x0244fc34(iVar8,0);
      piVar11 = (int *)0x0;
      if ((piVar7 != (int *)0x0) &&
         (piVar11 = piVar7, *piVar7 != **(int **)(_UNK_01e1e7d4 + 0x1e1e15c))) {
        piVar11 = (int *)0x0;
      }
      uStack_48 = 0;
      uStack_44 = 0;
      uVar10 = func_0x01989554(piVar11,uStack_40,uStack_3c,uVar5);
      uVar10 = func_0x0309f01c(uVar10,*(undefined4 *)(iVar1 + 0x20),*puVar2);
      func_0x02cf66d8(uVar9,uVar10,0);
      iVar8 = *(int *)(param_1 + 0x18);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 8);
      puVar2 = *(undefined4 **)(_UNK_01e1e7d8 + 0x1e1e1c8);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar10 = func_0x0244fc34(iVar8,0);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1e7dc + 0x1e1e1f8));
        *pcVar6 = '\x01';
      }
      puVar3 = *(undefined4 **)(**(int **)(_UNK_01e1e7e0 + 0x1e1e20c) + 0x5c);
      uStack_44 = 0;
      uStack_48 = uVar5;
      uVar10 = func_0x02cf3bbc(uVar10,*puVar3,puVar3[1],puVar3[2]);
      uVar10 = func_0x0309f01c(uVar10,*(undefined4 *)(iVar1 + 0x24),*puVar2);
      func_0x02cf668c(uVar9,uVar10,0);
      iVar8 = *(int *)(param_1 + 0x18);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar10 = func_0x0244fc34(iVar8,0);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1e7e4 + 0x1e1e28c));
        *pcVar6 = '\x01';
      }
      puVar3 = *(undefined4 **)(**(int **)(_UNK_01e1e7e8 + 0x1e1e2a0) + 0x5c);
      uStack_44 = 0;
      uStack_48 = uVar5;
      uVar5 = func_0x02cf3bbc(uVar10,*puVar3,puVar3[1],puVar3[2]);
      uVar5 = func_0x0309f01c(uVar5,*(undefined4 *)(iVar1 + 0x24),*puVar2);
      func_0x02cf66d8(uVar9,uVar5,0);
      puVar2 = *(undefined4 **)(_UNK_01e1e7ec + 0x1e1e2e0);
      *(undefined4 *)(param_1 + 0x14) = uVar9;
      uVar5 = *puVar2;
    }
    func_0x03074b50(uVar9,uVar5);
    return;
  }
  iVar1 = func_0x0229f13c(0xa0c8,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245494c(&uStack_48,0,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&stack0xffffffd0,param_1,0);
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
  func_0x0245495c(iVar8,uVar9,&stack0xffffffd0,uVar5,0,0);
  return;
}



// ===== FAT.MergeItemMergeState$$OnLeave RVA 0x1e0e82c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1e82c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  pcVar3 = (char *)(_UNK_01e1e9e0 + 0x1e1e844);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1e9e4 + 0x1e1e858));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0ca,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0ca,0);
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
  FUN_01e1c32c(param_1,0);
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x02ce9e90(*(int *)(param_1 + 0x10),0,0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    func_0x02ce9e90(*(int *)(param_1 + 0x14),0,0);
  }
  puVar6 = *(undefined4 **)(_UNK_01e1e9e8 + 0x1e1e8f4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar1 = func_0x03668dfc(*puVar6);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01de3b3c(iVar1,uVar5,0);
  iVar1 = func_0x03668dfc(*puVar6);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01de3b3c(iVar1,uVar5,0);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  pcVar3 = (char *)(_UNK_01e1e9ec + 0x1e1e97c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1e9f0 + 0x1e1e990));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(**(int **)(_UNK_01e1e9f4 + 0x1e1e9a8) + 0x5c);
  uVar5 = *(undefined4 *)(iVar4 + 0xc);
  uVar2 = *(undefined4 *)(iVar4 + 0x10);
  uVar7 = *(undefined4 *)(iVar4 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x024503a4(iVar1,uVar5,uVar2,uVar7);
  return;
}



// ===== FAT.MergeItemMergeState$$Update RVA 0x1e0e9f8 =====

undefined4 FUN_01e1e9f8(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa0cb,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      return 0xc;
    }
    iVar1 = func_0x0229f06c(0xa0b3,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f13c(0xa0b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0cb,0);
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
  func_0x01485258(&uStack_38,param_2,0);
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



// ===== FAT.MergeItemMergeState$$_OnMergeComplete RVA 0x1e0ea70 =====

void FUN_01e1ea70(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa0c9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0c9,0);
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
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// ===== FAT.MergeItemMergeState$$<>iFixBaseProxy_OnEnter RVA 0x1e0eac8 =====

void FUN_01e1eac8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x168b,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x168b,0);
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



// ===== FAT.MergeItemMergeState$$<>iFixBaseProxy_OnLeave RVA 0x1e0ead0 =====

void FUN_01e1ead0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1688,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1688,0);
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



// ===== FAT.MergeItemMergeState$$<>iFixBaseProxy_Update RVA 0x1e0ead8 =====

undefined4 FUN_01e1ead8(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa0b3,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0b3,0);
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
  return 0;
}



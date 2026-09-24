/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.FeatureUnlockMan$$OnConfigLoaded RVA 0x1caf688 =====

/* WARNING: Removing unreachable block (ram,0x01cbfa1c) */
/* WARNING: Removing unreachable block (ram,0x01cbfa10) */
/* WARNING: Removing unreachable block (ram,0x01cbfc74) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cbf688(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_38 [5];
  
  pcVar6 = (char *)(_UNK_01cbfe20 + 0x1cbf6a0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe24 + 0x1cbf6b4));
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe28 + 0x1cbf6c0));
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe2c + 0x1cbf6cc));
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe30 + 0x1cbf6d8));
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe34 + 0x1cbf6e4));
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe38 + 0x1cbf6f0));
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe3c + 0x1cbf6fc));
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe40 + 0x1cbf708));
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe44 + 0x1cbf714));
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe48 + 0x1cbf720));
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe4c + 0x1cbf72c));
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe50 + 0x1cbf738));
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe54 + 0x1cbf744));
    func_0x01384978(*(undefined4 *)(_UNK_01cbfe58 + 0x1cbf750));
    *pcVar6 = '\x01';
  }
  aiStack_38[3] = 0;
  aiStack_38[2] = 0;
  aiStack_38[1] = 0;
  aiStack_38[0] = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  iStack_44 = 0;
  iVar1 = func_0x0229f06c(0x96a9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96a9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02451864(iVar1,**(undefined4 **)(_UNK_01cbfe5c + 0x1cbf7dc));
  iVar1 = func_0x036b7270(**(undefined4 **)(_UNK_01cbfe60 + 0x1cbf7f0));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x034658b4(iVar1,**(undefined4 **)(_UNK_01cbfe64 + 0x1cbf810));
  puVar9 = *(undefined4 **)(_UNK_01cbfe68 + 0x1cbf834);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01cbfe74 + 0x1cbf84c)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01cbf894;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cbfe74 + 0x1cbf84c),0);
LAB_01cbf894:
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
        if (piVar5[-1] == **(int **)(_UNK_01cbfe6c + 0x1cbf8c8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01cbf910;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cbfe6c + 0x1cbf8c8),0);
LAB_01cbf910:
    (*(code *)*puVar3)(&uStack_50,piVar2,puVar3[1]);
    aiStack_38[3] = uStack_4c;
    aiStack_38[2] = uStack_50;
    func_0x014842b8(aiStack_38 + 2,aiStack_38 + 1,aiStack_38,
                    **(undefined4 **)(_UNK_01cbfe70 + 0x1cbf938));
    iVar1 = aiStack_38[0];
    iVar7 = *(int *)(param_1 + 8);
    if (aiStack_38[0] == 0) {
      func_0x01384bf0();
    }
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x02451944(iVar7,uVar8,iVar1,*puVar9);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01cbfe78 + 0x1cbf9b0)) {
          puVar9 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01cbf9f8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cbfe78 + 0x1cbf9b0),0);
LAB_01cbf9f8:
    (*(code *)*puVar9)(piVar2,puVar9[1]);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02451864(iVar1,**(undefined4 **)(_UNK_01cbfe7c + 0x1cbfa44));
  iVar1 = func_0x036b7270(**(undefined4 **)(_UNK_01cbfe80 + 0x1cbfa58));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x034658b4(iVar1,**(undefined4 **)(_UNK_01cbfe84 + 0x1cbfa78));
  puVar9 = *(undefined4 **)(_UNK_01cbfe88 + 0x1cbfa9c);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01cbfe98 + 0x1cbfab4)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01cbfafc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cbfe98 + 0x1cbfab4),0);
LAB_01cbfafc:
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
        if (piVar5[-1] == **(int **)(_UNK_01cbfe90 + 0x1cbfb30)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01cbfb78;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cbfe90 + 0x1cbfb30),0);
LAB_01cbfb78:
    (*(code *)*puVar3)(&uStack_50,piVar2,puVar3[1]);
    uStack_3c = uStack_4c;
    uStack_40 = uStack_50;
    func_0x014842b8(&uStack_40,aiStack_38 + 1,&iStack_44,
                    **(undefined4 **)(_UNK_01cbfe94 + 0x1cbfba0));
    iVar1 = iStack_44;
    iVar7 = *(int *)(param_1 + 0xc);
    if (iStack_44 == 0) {
      func_0x01384bf0();
    }
    uVar8 = *(undefined4 *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x02451944(iVar7,uVar8,iVar1,*puVar9);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01cbfe9c + 0x1cbfc14)) {
          puVar9 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01cbfc5c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cbfe9c + 0x1cbfc14),0);
LAB_01cbfc5c:
    (*(code *)*puVar9)(piVar2,puVar9[1]);
  }
  return;
}



// ===== FAT.FeatureUnlockMan$$GetFeatureConfig RVA 0x1cafea4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cbfea4(int param_1,undefined4 param_2)

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
  undefined4 auStack_1c [2];
  
  pcVar5 = (char *)(_UNK_01cbff90 + 0x1cbfebc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cbff94 + 0x1cbfed0));
    func_0x01384978(*(undefined4 *)(_UNK_01cbff98 + 0x1cbfedc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3d2c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3d2c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02212854 + 0x2212760);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02212858 + 0x2212774),param_1,param_2,0);
      *pcVar5 = '\x01';
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
    uVar6 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0221285c + 0x2212844));
    return uVar6;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02451990(iVar1,param_2,**(undefined4 **)(_UNK_01cbff9c + 0x1cbff4c));
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = **(int **)(_UNK_01cbffa0 + 0x1cbff7c);
    uVar2 = func_0x03dcfa64(iVar1,param_2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x84));
    if ((int)uVar2 < 0) {
      auStack_1c[0] = param_2;
      uVar6 = func_0x02457d60(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38),
                              auStack_1c);
      uVar3 = 0;
      func_0x0484cbf8(uVar6,0);
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
    return uVar3;
  }
  return 0;
}



// ===== FAT.FeatureUnlockMan$$IsFeatureEntryShow RVA 0x1caffa4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cbffa4(int param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_01cc00ec + 0x1cbffbc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc00f0 + 0x1cbffd0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc00f4 + 0x1cbffdc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8ebf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8ebf,0);
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
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02451990(iVar1,param_2,**(undefined4 **)(_UNK_01cc00f8 + 0x1cc004c));
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02451948(iVar1,param_2,**(undefined4 **)(_UNK_01cc00fc + 0x1cc007c));
    iVar4 = FUN_01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x48);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01dd2b98(iVar4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    return (uint)(*(int *)(iVar1 + 0x18) <= iVar4);
  }
  return 1;
}



// ===== FAT.FeatureUnlockMan$$IsFeatureEntryUnlocked RVA 0x1cb0100 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc0100(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
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
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0xf6,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0xf7,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01cc0400(param_1,param_2);
      if (iVar1 != 0) {
        return 0;
      }
      pcVar10 = (char *)(_UNK_01cc09d4 + 0x1cc0538);
      if (*pcVar10 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01cc09d8 + 0x1cc054c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09dc + 0x1cc0558));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e0 + 0x1cc0564));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e4 + 0x1cc0570));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e8 + 0x1cc057c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09ec + 0x1cc0588));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09f0 + 0x1cc0594));
        *pcVar10 = '\x01';
      }
      iVar1 = func_0x0229f06c(0xf9,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02451990(iVar1,param_2,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
        uVar5 = 1;
        if (iVar1 != 0) {
          iVar1 = FUN_01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(param_1 + 8);
          iVar1 = *(int *)(iVar1 + 0x68);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x02451948(iVar11,param_2,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar11 + 0x28)) {
            iVar2 = FUN_01c24918(0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x9c);
            uVar12 = *(undefined4 *)(iVar11 + 0x28);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x01c77708(iVar2,uVar12,0);
            if (iVar2 != 0) {
              return 1;
            }
          }
          iVar2 = FUN_01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x48);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar5 = 0;
          iVar2 = func_0x01dd2b98(iVar2,0);
          iVar6 = *(int *)(iVar11 + 0x18);
          if (iVar6 <= iVar2) {
            iVar6 = *(int *)(iVar11 + 0x3c);
          }
          if (iVar6 <= iVar2) {
            iVar2 = *(int *)(iVar11 + 0x40);
            if (iVar2 == 0) {
              func_0x01384bf0();
              iVar6 = iRam0000000c;
              iVar2 = *(int *)(iVar11 + 0x40);
              if (iVar2 == 0) {
                func_0x01384bf0();
                iVar2 = 0;
              }
            }
            else {
              iVar6 = *(int *)(iVar2 + 0xc);
            }
            uVar5 = (uint)(iVar6 < 1);
            piVar3 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01cc09fc + 0x1cc0758));
            piVar13 = *(int **)(_UNK_01cc0a00 + 0x1cc0770);
            piVar14 = *(int **)(_UNK_01cc0a04 + 0x1cc0778);
            do {
              if (piVar3 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar11 = *piVar3;
              uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                do {
                  if (piVar8[-1] == *piVar13) {
                    puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
                    goto LAB_01cc07d0;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 2;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_01cc07d0:
              iVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
              if (iVar11 == 0) goto LAB_01cc0884;
              if (piVar3 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar11 = *piVar3;
              uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                do {
                  if (piVar8[-1] == *piVar14) {
                    puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
                    goto LAB_01cc0848;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 2;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar14,0);
LAB_01cc0848:
              uVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar11 = func_0x01e6c0b0(iVar1,uVar12,0);
            } while (iVar11 == 0);
            uVar5 = 1;
LAB_01cc0884:
            if (piVar3 != (int *)0x0) {
              iVar1 = *piVar3;
              uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar7 != 0) {
                piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar13[-1] == **(int **)(_UNK_01cc0a08 + 0x1cc089c)) {
                    puVar4 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
                    goto LAB_01cc08e4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar13 = piVar13 + 2;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01cc0a08 + 0x1cc089c),0)
              ;
LAB_01cc08e4:
              (*(code *)*puVar4)(piVar3,puVar4[1]);
            }
          }
        }
        return uVar5;
      }
      iVar1 = func_0x0229f13c(0xf9,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xf7,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xf6,0);
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
  iVar11 = *(int *)(iVar1 + 8);
  uVar12 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 3;
  if (iVar1 == 0) {
    uVar9 = 2;
  }
  func_0x0245495c(iVar11,uVar12,&uStack_38,uVar9,0,0);
  uVar5 = func_0x0245496c(&uStack_38,0,0);
  return uVar5;
}



// ===== FAT.FeatureUnlockMan$$_IsFeatureEntryUnlockedInner RVA 0x1cb0164 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc0164(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
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
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0xf7,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01cc0400(param_1,param_2);
    if (iVar1 != 0) {
      return 0;
    }
    pcVar10 = (char *)(_UNK_01cc09d4 + 0x1cc0538);
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc09d8 + 0x1cc054c));
      func_0x01384978(*(undefined4 *)(_UNK_01cc09dc + 0x1cc0558));
      func_0x01384978(*(undefined4 *)(_UNK_01cc09e0 + 0x1cc0564));
      func_0x01384978(*(undefined4 *)(_UNK_01cc09e4 + 0x1cc0570));
      func_0x01384978(*(undefined4 *)(_UNK_01cc09e8 + 0x1cc057c));
      func_0x01384978(*(undefined4 *)(_UNK_01cc09ec + 0x1cc0588));
      func_0x01384978(*(undefined4 *)(_UNK_01cc09f0 + 0x1cc0594));
      *pcVar10 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xf9,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02451990(iVar1,param_2,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
      uVar5 = 1;
      if (iVar1 != 0) {
        iVar1 = FUN_01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(param_1 + 8);
        iVar1 = *(int *)(iVar1 + 0x68);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = func_0x02451948(iVar11,param_2,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar11 + 0x28)) {
          iVar2 = FUN_01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x9c);
          uVar12 = *(undefined4 *)(iVar11 + 0x28);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01c77708(iVar2,uVar12,0);
          if (iVar2 != 0) {
            return 1;
          }
        }
        iVar2 = FUN_01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x48);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 0;
        iVar2 = func_0x01dd2b98(iVar2,0);
        iVar6 = *(int *)(iVar11 + 0x18);
        if (iVar6 <= iVar2) {
          iVar6 = *(int *)(iVar11 + 0x3c);
        }
        if (iVar6 <= iVar2) {
          iVar2 = *(int *)(iVar11 + 0x40);
          if (iVar2 == 0) {
            func_0x01384bf0();
            iVar6 = iRam0000000c;
            iVar2 = *(int *)(iVar11 + 0x40);
            if (iVar2 == 0) {
              func_0x01384bf0();
              iVar2 = 0;
            }
          }
          else {
            iVar6 = *(int *)(iVar2 + 0xc);
          }
          uVar5 = (uint)(iVar6 < 1);
          piVar3 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01cc09fc + 0x1cc0758));
          piVar13 = *(int **)(_UNK_01cc0a00 + 0x1cc0770);
          piVar14 = *(int **)(_UNK_01cc0a04 + 0x1cc0778);
          do {
            if (piVar3 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar3;
            uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar8[-1] == *piVar13) {
                  puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
                  goto LAB_01cc07d0;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_01cc07d0:
            iVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
            if (iVar11 == 0) goto LAB_01cc0884;
            if (piVar3 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar3;
            uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar8[-1] == *piVar14) {
                  puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
                  goto LAB_01cc0848;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar14,0);
LAB_01cc0848:
            uVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x01e6c0b0(iVar1,uVar12,0);
          } while (iVar11 == 0);
          uVar5 = 1;
LAB_01cc0884:
          if (piVar3 != (int *)0x0) {
            iVar1 = *piVar3;
            uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar13[-1] == **(int **)(_UNK_01cc0a08 + 0x1cc089c)) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
                  goto LAB_01cc08e4;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01cc0a08 + 0x1cc089c),0);
LAB_01cc08e4:
            (*(code *)*puVar4)(piVar3,puVar4[1]);
          }
        }
      }
      return uVar5;
    }
    iVar1 = func_0x0229f13c(0xf9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xf7,0);
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
  iVar11 = *(int *)(iVar1 + 8);
  uVar12 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 3;
  if (iVar1 == 0) {
    uVar9 = 2;
  }
  func_0x0245495c(iVar11,uVar12,&uStack_38,uVar9,0,0);
  uVar5 = func_0x0245496c(&uStack_38,0,0);
  return uVar5;
}



// ===== FAT.FeatureUnlockMan$$GetTempSwitchConfig RVA 0x1cb01e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cc01e4(int param_1,undefined4 param_2)

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
  undefined4 auStack_1c [2];
  
  pcVar5 = (char *)(_UNK_01cc02d0 + 0x1cc01fc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc02d4 + 0x1cc0210));
    func_0x01384978(*(undefined4 *)(_UNK_01cc02d8 + 0x1cc021c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x96aa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96aa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_022740d4 + 0x2273fe0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022740d8 + 0x2273ff4),param_1,param_2,0);
      *pcVar5 = '\x01';
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
    uVar6 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_022740dc + 0x22740c4));
    return uVar6;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02451990(iVar1,param_2,**(undefined4 **)(_UNK_01cc02dc + 0x1cc028c));
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = **(int **)(_UNK_01cc02e0 + 0x1cc02bc);
    uVar2 = func_0x03dcfa64(iVar1,param_2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x84));
    if ((int)uVar2 < 0) {
      auStack_1c[0] = param_2;
      uVar6 = func_0x02457d60(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38),
                              auStack_1c);
      uVar3 = 0;
      func_0x0484cbf8(uVar6,0);
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
    return uVar3;
  }
  return 0;
}



// ===== FAT.FeatureUnlockMan$$IsTempSwitchOn RVA 0x1cb02e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cc02e4(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cc03ec + 0x1cc02fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc03f0 + 0x1cc0310));
    func_0x01384978(*(undefined4 *)(_UNK_01cc03f4 + 0x1cc031c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x403,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x403,0);
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
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02451990(iVar1,param_2,**(undefined4 **)(_UNK_01cc03f8 + 0x1cc038c));
  uVar5 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0(0);
    }
    iVar1 = func_0x02451948(iVar1,param_2,**(undefined4 **)(_UNK_01cc03fc + 0x1cc03c4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
    if (*(char *)(iVar1 + 0x18) != '\0') {
      uVar5 = 1;
    }
  }
  return uVar5;
}



// ===== FAT.FeatureUnlockMan$$IsFeatureEntrySuspended RVA 0x1cb0400 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc0400(int param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_01cc050c + 0x1cc0418);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc0510 + 0x1cc042c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc0514 + 0x1cc0438));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xf8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xf8,0);
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
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02451990(iVar1,param_2,**(undefined4 **)(_UNK_01cc0518 + 0x1cc04a8));
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0(0);
    }
    iVar1 = func_0x02451948(iVar1,param_2,**(undefined4 **)(_UNK_01cc051c + 0x1cc04e0));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = (uint)(*(int *)(iVar1 + 0x24) == 1);
  }
  return uVar2;
}



// ===== FAT.FeatureUnlockMan$$IsEntryMatchRequire RVA 0x1cb0520 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc0520(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
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
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(_UNK_01cc09d4 + 0x1cc0538);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc09d8 + 0x1cc054c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc09dc + 0x1cc0558));
    func_0x01384978(*(undefined4 *)(_UNK_01cc09e0 + 0x1cc0564));
    func_0x01384978(*(undefined4 *)(_UNK_01cc09e4 + 0x1cc0570));
    func_0x01384978(*(undefined4 *)(_UNK_01cc09e8 + 0x1cc057c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc09ec + 0x1cc0588));
    func_0x01384978(*(undefined4 *)(_UNK_01cc09f0 + 0x1cc0594));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xf9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xf9,0);
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
    iVar11 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar1 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_38,uVar9,0,0);
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02451990(iVar1,param_2,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
  uVar5 = 1;
  if (iVar1 != 0) {
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(param_1 + 8);
    iVar1 = *(int *)(iVar1 + 0x68);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = func_0x02451948(iVar11,param_2,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar11 + 0x28)) {
      iVar2 = FUN_01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x9c);
      uVar12 = *(undefined4 *)(iVar11 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01c77708(iVar2,uVar12,0);
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar2 = FUN_01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x48);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
    iVar2 = func_0x01dd2b98(iVar2,0);
    iVar6 = *(int *)(iVar11 + 0x18);
    if (iVar6 <= iVar2) {
      iVar6 = *(int *)(iVar11 + 0x3c);
    }
    if (iVar6 <= iVar2) {
      iVar2 = *(int *)(iVar11 + 0x40);
      if (iVar2 == 0) {
        func_0x01384bf0();
        iVar6 = iRam0000000c;
        iVar2 = *(int *)(iVar11 + 0x40);
        if (iVar2 == 0) {
          func_0x01384bf0();
          iVar2 = 0;
        }
      }
      else {
        iVar6 = *(int *)(iVar2 + 0xc);
      }
      uVar5 = (uint)(iVar6 < 1);
      piVar3 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01cc09fc + 0x1cc0758));
      piVar13 = *(int **)(_UNK_01cc0a00 + 0x1cc0770);
      piVar14 = *(int **)(_UNK_01cc0a04 + 0x1cc0778);
      do {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *piVar3;
        uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar13) {
              puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
              goto LAB_01cc07d0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_01cc07d0:
        iVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (iVar11 == 0) goto LAB_01cc0884;
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *piVar3;
        uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar14) {
              puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
              goto LAB_01cc0848;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar14,0);
LAB_01cc0848:
        uVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar11 = func_0x01e6c0b0(iVar1,uVar12,0);
      } while (iVar11 == 0);
      uVar5 = 1;
LAB_01cc0884:
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar13[-1] == **(int **)(_UNK_01cc0a08 + 0x1cc089c)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
              goto LAB_01cc08e4;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01cc0a08 + 0x1cc089c),0);
LAB_01cc08e4:
        (*(code *)*puVar4)(piVar3,puVar4[1]);
      }
    }
  }
  return uVar5;
}



// ===== FAT.FeatureUnlockMan$$GetUnlockLevel RVA 0x1cb0a10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cc0a10(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01cc0b10 + 0x1cc0a28);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc0b14 + 0x1cc0a3c));
    func_0x01384978(*(undefined4 *)(_UNK_01cc0b18 + 0x1cc0a48));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x96ab,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96ab,0);
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
    uVar5 = func_0x0245498c(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02451990(iVar1,param_2,**(undefined4 **)(_UNK_01cc0b1c + 0x1cc0ab8));
  uVar5 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0(0);
    }
    iVar1 = func_0x02451948(iVar1,param_2,**(undefined4 **)(_UNK_01cc0b20 + 0x1cc0af0));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0x3c);
  }
  return uVar5;
}



// ===== FAT.FeatureUnlockMan$$OnMergeLevelChange RVA 0x1cb0b24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc0b24(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x555,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01cc0c48 + 0x1cc0b90);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc0c4c + 0x1cc0ba4));
      func_0x01384978(*(undefined4 *)(_UNK_01cc0c50 + 0x1cc0bb0));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x556,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01cc0c54 + 0x1cc0c08) + 0x74) == 0) {
        func_0x01384ab4();
      }
      param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01cc0c58 + 0x1cc0c24));
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x3f,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      iVar1 = func_0x0229f13c(0x3f,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x556,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x555,0);
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



// ===== FAT.FeatureUnlockMan$$_FeatureEntryStatusRefresh RVA 0x1cb0b7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc0b7c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01cc0c48 + 0x1cc0b90);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc0c4c + 0x1cc0ba4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc0c50 + 0x1cc0bb0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x556,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01cc0c54 + 0x1cc0c08) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01cc0c58 + 0x1cc0c24));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x3f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x556,0);
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



// ===== FAT.FeatureUnlockMan$$OnMainOrderFinished RVA 0x1cb0c5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc0c5c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x96ac,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01cc0c48 + 0x1cc0b90);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc0c4c + 0x1cc0ba4));
      func_0x01384978(*(undefined4 *)(_UNK_01cc0c50 + 0x1cc0bb0));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x556,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01cc0c54 + 0x1cc0c08) + 0x74) == 0) {
        func_0x01384ab4();
      }
      param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01cc0c58 + 0x1cc0c24));
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x3f,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      iVar1 = func_0x0229f13c(0x3f,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x556,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x96ac,0);
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



// ===== FAT.FeatureUnlockMan$$OnGuideFinished RVA 0x1cb0cb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc0cb4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9337,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01cc0c48 + 0x1cc0b90);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc0c4c + 0x1cc0ba4));
      func_0x01384978(*(undefined4 *)(_UNK_01cc0c50 + 0x1cc0bb0));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x556,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01cc0c54 + 0x1cc0c08) + 0x74) == 0) {
        func_0x01384ab4();
      }
      param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01cc0c58 + 0x1cc0c24));
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x3f,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      iVar1 = func_0x0229f13c(0x3f,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x556,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9337,0);
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



// ===== FAT.FeatureUnlockMan$$FAT.IGameModule.Reset RVA 0x1cb0d0c =====

/* WARNING: Possible PIC construction at 0x01cc0dac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc0db0) */
/* WARNING: Removing unreachable block (ram,0x01cc0dbc) */
/* WARNING: Removing unreachable block (ram,0x01cc0dc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc0d0c(int param_1)

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
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_01cc0dd8 + 0x1cc0d20);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc0ddc + 0x1cc0d34));
    func_0x01384978(*(undefined4 *)(_UNK_01cc0de0 + 0x1cc0d40));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x96ad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96ad,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    iStack_24 = uStack_3c;
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
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0x10);
  if (0 < iVar4) {
    iVar6 = *(int *)(iVar1 + 8);
    iStack_28 = param_1;
    iStack_24 = iVar1;
    if (iVar6 == 0) {
      func_0x02457d50(iVar1,**(undefined4 **)(_UNK_01cc0de4 + 0x1cc0da8));
    }
    func_0x0484e5ec(iVar6,0,*(undefined4 *)(iVar6 + 0xc),0);
    *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    func_0x0484e5ec(*(undefined4 *)(iVar1 + 0xc),0,iVar4,0);
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return;
}



// ===== FAT.FeatureUnlockMan$$FAT.IGameModule.LoadConfig RVA 0x1cb0dec =====

/* WARNING: Possible PIC construction at 0x01cbf7b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cbf7b8) */
/* WARNING: Removing unreachable block (ram,0x01cbfa1c) */
/* WARNING: Removing unreachable block (ram,0x01cbfa10) */
/* WARNING: Removing unreachable block (ram,0x01cbfc74) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc0dec(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar9;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar10;
  undefined4 unaff_lr;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_38 [7];
  
  iVar3 = func_0x0229f06c(0x96ae,0);
  if (iVar3 == 0) {
    pcVar8 = (char *)(_UNK_01cbfe20 + 0x1cbf6a0);
    iStack_54 = param_1;
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe24 + 0x1cbf6b4));
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe28 + 0x1cbf6c0));
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe2c + 0x1cbf6cc));
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe30 + 0x1cbf6d8));
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe34 + 0x1cbf6e4));
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe38 + 0x1cbf6f0));
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe3c + 0x1cbf6fc));
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe40 + 0x1cbf708));
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe44 + 0x1cbf714));
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe48 + 0x1cbf720));
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe4c + 0x1cbf72c));
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe50 + 0x1cbf738));
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe54 + 0x1cbf744));
      func_0x01384978(*(undefined4 *)(_UNK_01cbfe58 + 0x1cbf750));
      *pcVar8 = '\x01';
    }
    aiStack_38[3] = 0;
    aiStack_38[2] = 0;
    aiStack_38[1] = 0;
    aiStack_38[0] = 0;
    uStack_3c = 0;
    uStack_40 = 0;
    iStack_44 = 0;
    iVar3 = func_0x0229f06c(0x96a9,0);
    if (iVar3 == 0) {
      iVar3 = *(int *)(iStack_54 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02451864(iVar3,**(undefined4 **)(_UNK_01cbfe5c + 0x1cbf7dc));
      iVar3 = func_0x036b7270(**(undefined4 **)(_UNK_01cbfe60 + 0x1cbf7f0));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x034658b4(iVar3,**(undefined4 **)(_UNK_01cbfe64 + 0x1cbf810));
      puVar10 = *(undefined4 **)(_UNK_01cbfe68 + 0x1cbf834);
      do {
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar1;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_01cbfe74 + 0x1cbf84c)) {
              puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
              goto LAB_01cbf894;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01cbfe74 + 0x1cbf84c),0);
LAB_01cbf894:
        iVar3 = (*(code *)*puVar2)(piVar1,puVar2[1]);
        if (iVar3 == 0) goto LAB_01cbf990;
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar1;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_01cbfe6c + 0x1cbf8c8)) {
              puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
              goto LAB_01cbf910;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01cbfe6c + 0x1cbf8c8),0);
LAB_01cbf910:
        (*(code *)*puVar2)(&uStack_50,piVar1,puVar2[1]);
        aiStack_38[3] = uStack_4c;
        aiStack_38[2] = uStack_50;
        func_0x014842b8(aiStack_38 + 2,aiStack_38 + 1,aiStack_38,
                        **(undefined4 **)(_UNK_01cbfe70 + 0x1cbf938));
        iVar3 = aiStack_38[0];
        iVar4 = *(int *)(iStack_54 + 8);
        if (aiStack_38[0] == 0) {
          func_0x01384bf0();
        }
        uVar9 = *(undefined4 *)(iVar3 + 0xc);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02451944(iVar4,uVar9,iVar3,*puVar10);
      } while( true );
    }
    iVar3 = func_0x0229f13c(0x96a9,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cbf7b8;
    param_1 = iStack_54;
    unaff_r4 = iVar3;
    register0x00000054 = (BADSPACEBASE *)auStack_58;
  }
  else {
    iVar3 = func_0x0229f13c(0x96ae,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
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
  iVar4 = *(int *)(iVar3 + 0x10);
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
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar3 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
  return;
LAB_01cbf990:
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01cbfe78 + 0x1cbf9b0)) {
          puVar10 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_01cbf9f8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01cbfe78 + 0x1cbf9b0),0);
LAB_01cbf9f8:
    (*(code *)*puVar10)(piVar1,puVar10[1]);
  }
  iVar3 = *(int *)(iStack_54 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02451864(iVar3,**(undefined4 **)(_UNK_01cbfe7c + 0x1cbfa44));
  iVar3 = func_0x036b7270(**(undefined4 **)(_UNK_01cbfe80 + 0x1cbfa58));
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x034658b4(iVar3,**(undefined4 **)(_UNK_01cbfe84 + 0x1cbfa78));
  puVar10 = *(undefined4 **)(_UNK_01cbfe88 + 0x1cbfa9c);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar1;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01cbfe98 + 0x1cbfab4)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_01cbfafc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01cbfe98 + 0x1cbfab4),0);
LAB_01cbfafc:
    iVar3 = (*(code *)*puVar2)(piVar1,puVar2[1]);
    if (iVar3 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar1;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01cbfe90 + 0x1cbfb30)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_01cbfb78;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01cbfe90 + 0x1cbfb30),0);
LAB_01cbfb78:
    (*(code *)*puVar2)(&uStack_50,piVar1,puVar2[1]);
    uStack_3c = uStack_4c;
    uStack_40 = uStack_50;
    func_0x014842b8(&uStack_40,aiStack_38 + 1,&iStack_44,
                    **(undefined4 **)(_UNK_01cbfe94 + 0x1cbfba0));
    iVar3 = iStack_44;
    iVar4 = *(int *)(iStack_54 + 0xc);
    if (iStack_44 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar3 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02451944(iVar4,uVar9,iVar3,*puVar10);
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01cbfe9c + 0x1cbfc14)) {
          puVar10 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_01cbfc5c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01cbfe9c + 0x1cbfc14),0);
LAB_01cbfc5c:
    (*(code *)*puVar10)(piVar1,puVar10[1]);
  }
  return;
}



// ===== FAT.FeatureUnlockMan$$FAT.IGameModule.Startup RVA 0x1cb0e44 =====

void FUN_01cc0e44(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x96af,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x96af,0);
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



// ===== FAT.FeatureUnlockMan$$.ctor RVA 0x1cb0e90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc0e90(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01cc0f4c + 0x1cc0ea4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cc0f50 + 0x1cc0eb8));
    func_0x01384978(*(undefined4 *)(_UNK_01cc0f54 + 0x1cc0ec4));
    func_0x01384978(*(undefined4 *)(_UNK_01cc0f58 + 0x1cc0ed0));
    func_0x01384978(*(undefined4 *)(_UNK_01cc0f5c + 0x1cc0edc));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01cc0f60 + 0x1cc0ef0));
  func_0x02451870(uVar1,**(undefined4 **)(_UNK_01cc0f64 + 0x1cc0f04));
  puVar2 = *(undefined4 **)(_UNK_01cc0f68 + 0x1cc0f18);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02451870(uVar1,**(undefined4 **)(_UNK_01cc0f6c + 0x1cc0f30));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



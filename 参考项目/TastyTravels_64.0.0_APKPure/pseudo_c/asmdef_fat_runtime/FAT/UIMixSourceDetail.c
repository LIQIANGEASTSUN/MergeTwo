/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.UIMixSourceDetail$$OnCreate RVA 0x1fe26f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff26f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01ff28dc + 0x1ff2708);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff28e0 + 0x1ff271c));
    func_0x01384978(*(undefined4 *)(_UNK_01ff28e4 + 0x1ff2728));
    func_0x01384978(*(undefined4 *)(_UNK_01ff28e8 + 0x1ff2734));
    func_0x01384978(*(undefined4 *)(_UNK_01ff28ec + 0x1ff2740));
    func_0x01384978(*(undefined4 *)(_UNK_01ff28f0 + 0x1ff274c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xac3c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xac3c,0);
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
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01ff28f4 + 0x1ff27b8);
  iVar1 = *(int *)(iVar1 + 0xb4);
  uVar5 = func_0x01384be4(*puVar7);
  puVar6 = *(undefined4 **)(_UNK_01ff28f8 + 0x1ff27d8);
  func_0x0244ffa0(uVar5,param_1,*puVar6,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffb0(iVar1,uVar5,0);
  uVar5 = func_0x0244fc34(param_1,0);
  uVar2 = func_0x01384be4(*puVar7);
  func_0x0244ffa0(uVar2,param_1,*puVar6,0);
  if (*(int *)(**(int **)(_UNK_01ff28fc + 0x1ff2834) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_28 = 0;
  func_0x028bf89c(uVar5,**(undefined4 **)(_UNK_01ff2900 + 0x1ff2858),uVar2,1);
  puVar6 = *(undefined4 **)(_UNK_01ff2904 + 0x1ff2870);
  iVar1 = func_0x034aaa34(*puVar6);
  uVar5 = *(undefined4 *)(param_1 + 0x54);
  uVar2 = *(undefined4 *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0243bca0(iVar1,uVar2,uVar5,0);
  iVar1 = func_0x034aaa34(*puVar6);
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  uVar5 = *(undefined4 *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar3 = (char *)(_UNK_0243be3c + 0x243bd94);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0243be40 + 0x243bda8),uVar5,uVar2,0);
    *pcVar3 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x397,0);
  if (iVar4 == 0) {
    uStack_24 = **(undefined4 **)(_UNK_0243be44 + 0x243be10);
    uVar5 = func_0x0244f5f4(&uStack_24,0);
    func_0x0244adcc(iVar1,uVar5,uVar2);
  }
  else {
    iVar4 = func_0x0229f13c(0x397,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x021872a4(iVar4,iVar1,uVar5,uVar2);
  }
  return;
}



// ===== FAT.UIMixSourceDetail$$OnParse RVA 0x1fe2908 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff2908(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
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
  
  pcVar7 = (char *)(_UNK_01ff29fc + 0x1ff2920);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff2a00 + 0x1ff2934));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xac3d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xac3d,0);
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
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    func_0x01384bf4();
  }
  piVar2 = *(int **)(param_2 + 0x10);
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    return;
  }
  uVar4 = (uint)*(byte *)(**(int **)(_UNK_01ff2a04 + 0x1ff29bc) + 0xb8);
  piVar3 = (int *)0x0;
  if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
     (piVar3 = piVar2,
     *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_01ff2a04 + 0x1ff29bc))) {
    piVar3 = (int *)0x0;
  }
  *(int **)(param_1 + 0x58) = piVar3;
  return;
}



// ===== FAT.UIMixSourceDetail$$OnPreOpen RVA 0x1fe2a08 =====

/* WARNING: Possible PIC construction at 0x01ff2c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01ff2c94) */
/* WARNING: Removing unreachable block (ram,0x01ff354c) */
/* WARNING: Removing unreachable block (ram,0x01ff2fcc) */
/* WARNING: Removing unreachable block (ram,0x01ff2fd8) */
/* WARNING: Removing unreachable block (ram,0x01ff3740) */
/* WARNING: Removing unreachable block (ram,0x01ff3558) */
/* WARNING: Removing unreachable block (ram,0x01ff3618) */
/* WARNING: Removing unreachable block (ram,0x01ff36a0) */
/* WARNING: Removing unreachable block (ram,0x01ff3624) */
/* WARNING: Removing unreachable block (ram,0x01ff362c) */
/* WARNING: Removing unreachable block (ram,0x01ff3724) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff2a08(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int unaff_r4;
  undefined4 unaff_r5;
  char *pcVar9;
  int *piVar10;
  undefined4 unaff_r6;
  undefined4 uVar11;
  undefined4 unaff_r7;
  int unaff_r8;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 unaff_lr;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_34 [6];
  
  pcVar9 = (char *)(_UNK_01ff2ac8 + 0x1ff2a1c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff2acc + 0x1ff2a30));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xac3e,0);
  if (iVar1 == 0) {
    piVar10 = *(int **)(_UNK_01ff2ad0 + 0x1ff2a88);
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar10;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x210);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01ef5998(iVar1,0);
    pcVar9 = (char *)(_UNK_01ff3adc + 0x1ff2aec);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ff3af4 + 0x1ff2b00));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3af8 + 0x1ff2b0c));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3afc + 0x1ff2b18));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b00 + 0x1ff2b24));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b04 + 0x1ff2b30));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b34 + 0x1ff2b3c));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b38 + 0x1ff2b48));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b3c + 0x1ff2b54));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b40 + 33500000));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b44 + 0x1ff2b6c));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b48 + 0x1ff2b78));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b4c + 0x1ff2b84));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b50 + 0x1ff2b90));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b54 + 0x1ff2b9c));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b58 + 0x1ff2ba8));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b5c + 0x1ff2bb4));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b60 + 0x1ff2bc0));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b64 + 0x1ff2bcc));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b68 + 0x1ff2bd8));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b6c + 0x1ff2be4));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b70 + 0x1ff2bf0));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b74 + 0x1ff2bfc));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b78 + 0x1ff2c08));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b7c + 0x1ff2c14));
      func_0x01384978(*(undefined4 *)(_UNK_01ff3b80 + 0x1ff2c20));
      *pcVar9 = '\x01';
    }
    uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    aiStack_34[3] = 0;
    aiStack_34[2] = 0;
    aiStack_34[1] = 0;
    aiStack_34[0] = 0;
    uStack_3c = 0;
    uStack_40 = 0;
    iStack_44 = 0;
    uStack_58 = 0;
    iVar1 = func_0x0229f06c(0xac3f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02feb690(iVar1,aiStack_34 + 3,0,**(undefined4 **)(_UNK_01ff3b84 + 0x1ff2cbc));
      if (*(int *)(**(int **)(_UNK_01ff3b88 + 0x1ff2cd0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x028c8d78(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a45c(aiStack_34 + 1,iVar1,aiStack_34,**(undefined4 **)(_UNK_01ff3b8c + 0x1ff2d0c));
      iVar1 = aiStack_34[3];
      if (aiStack_34[3] == 0) {
        func_0x01384bf0();
      }
      piVar10 = (int *)func_0x0212fadc(iVar1,0);
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar10;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01ff3b90 + 0x1ff2d50)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
            goto LAB_01ff2d98;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ff3b90 + 0x1ff2d50),0);
LAB_01ff2d98:
      piVar10 = (int *)(*(code *)*puVar2)(piVar10,puVar2[1]);
      puVar13 = *(undefined4 **)(_UNK_01ff3b94 + 0x1ff2db8);
      puVar14 = *(undefined4 **)(_UNK_01ff3b98 + 0x1ff2dc0);
      puVar2 = *(undefined4 **)(_UNK_01ff3b9c + 0x1ff2dc8);
LAB_01ff2dc4:
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar10;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01ff3ba4 + 0x1ff2de0)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
            goto LAB_01ff2e28;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ff3ba4 + 0x1ff2de0),0);
LAB_01ff2e28:
      iVar1 = (*(code *)*puVar3)(piVar10,puVar3[1]);
      if (iVar1 != 0) {
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar10;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01ff3ba0 + 0x1ff2e5c)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01ff2ea4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ff3ba0 + 0x1ff2e5c),0);
LAB_01ff2ea4:
        uVar11 = (*(code *)*puVar3)(piVar10,puVar3[1]);
        iVar1 = aiStack_34[0];
        if (aiStack_34[0] == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x03d59fc8(iVar1,uVar11,*puVar13);
        iVar1 = aiStack_34[0];
        if (iVar5 == 0) {
          if (aiStack_34[0] == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d54(iVar1,uVar11,1,*puVar2);
        }
        else {
          if (aiStack_34[0] == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x03d59cc4(iVar1,uVar11,*puVar14);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d54(iVar1,uVar11,iVar5 + 1,*puVar2);
        }
        goto LAB_01ff2dc4;
      }
      if (piVar10 != (int *)0x0) {
        iVar1 = *piVar10;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01ff3ba8 + 0x1ff2f6c)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01ff2fb4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ff3ba8 + 0x1ff2f6c),0);
LAB_01ff2fb4:
        (*(code *)*puVar2)(piVar10,puVar2[1]);
      }
      if (*(int *)(**(int **)(_UNK_01ff3bac + 0x1ff2fec) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x028c8d78(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a45c(&uStack_68,iVar1,&iStack_44,**(undefined4 **)(_UNK_01ff3bb0 + 0x1ff3020));
      iVar1 = aiStack_34[3];
      uStack_3c = uStack_64;
      uStack_40 = uStack_68;
      if (aiStack_34[3] == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0212fb30(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar10 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01ff3bb4 + 0x1ff3088));
      piStack_6c = piVar10;
      do {
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar10;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01ff3bf4 + 0x1ff30b4)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01ff30fc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ff3bf4 + 0x1ff30b4),0);
LAB_01ff30fc:
        iVar1 = (*(code *)*puVar2)(piVar10,puVar2[1]);
        uStack_70 = 0;
        if (iVar1 == 0) goto LAB_01ff36a4;
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar10;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01ff3bbc + 0x1ff3138)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01ff3184;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ff3bbc + 0x1ff3138),0);
        piVar10 = piStack_6c;
LAB_01ff3184:
        uVar11 = (*(code *)*puVar2)(piVar10,puVar2[1]);
        piVar10 = (int *)func_0x021566f4(0);
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar10;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01ff3bc0 + 0x1ff31c0)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x1d8);
              goto LAB_01ff3208;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ff3bc0 + 0x1ff31c0),0x23);
LAB_01ff3208:
        iVar5 = (*(code *)*puVar2)(piVar10,uVar11,puVar2[1]);
        iVar1 = iStack_44;
        if (iStack_44 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        piVar10 = (int *)(iVar5 + 0x18);
        iVar1 = *piVar10;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x0345fcc8(iVar1,**(undefined4 **)(_UNK_01ff3bc4 + 0x1ff3270));
        iVar1 = aiStack_34[3];
        if (iVar4 < 1) {
          if (aiStack_34[3] == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0212fb30(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          piVar10 = (int *)(iVar1 + 0x14);
        }
        piVar10 = (int *)*piVar10;
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar10;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01ff3bc8 + 0x1ff32d0)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01ff3318;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ff3bc8 + 0x1ff32d0),0);
LAB_01ff3318:
        piVar10 = (int *)(*(code *)*puVar2)(piVar10,puVar2[1]);
LAB_01ff332c:
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar10;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01ff3bd8 + 0x1ff3348)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01ff3390;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ff3bd8 + 0x1ff3348),0);
LAB_01ff3390:
        iVar1 = (*(code *)*puVar2)(piVar10,puVar2[1]);
        if (iVar1 != 0) {
          if (piVar10 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar10;
          uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01ff3bcc + 0x1ff33c4)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01ff340c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ff3bcc + 0x1ff33c4),0);
LAB_01ff340c:
          (*(code *)*puVar2)(&uStack_68,piVar10,puVar2[1]);
          iVar1 = iStack_44;
          uVar11 = uStack_68;
          if (iStack_44 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x03259a6c(iVar1,uVar11,**(undefined4 **)(_UNK_01ff3bd0 + 0x1ff3440));
          iVar1 = iStack_44;
          if (iVar4 == 0) {
            if (iStack_44 == 0) {
              func_0x01384bf0();
            }
            iVar4 = *(int *)(iVar1 + 8);
            uVar6 = *(uint *)(iVar1 + 0xc);
            piVar7 = *(int **)(_UNK_01ff3bd4 + 0x1ff3484);
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            iVar12 = *piVar7;
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            if (uVar6 < *(uint *)(iVar4 + 0xc)) {
              *(uint *)(iVar1 + 0xc) = uVar6 + 1;
              *(undefined4 *)(iVar4 + uVar6 * 4 + 0x10) = uVar11;
            }
            else {
              func_0x0325970c(iVar1,uVar11,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
          }
          goto LAB_01ff332c;
        }
        if (piVar10 != (int *)0x0) {
          iVar1 = *piVar10;
          uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01ff3bdc + 0x1ff34ec)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01ff3534;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ff3bdc + 0x1ff34ec),0);
LAB_01ff3534:
          (*(code *)*puVar2)(piVar10,puVar2[1]);
        }
        iVar1 = iStack_44;
        if (iStack_44 == 0) {
          func_0x01384bf0();
        }
        func_0x0325b328(iVar1,**(undefined4 **)(_UNK_01ff3be0 + 0x1ff357c));
        iVar1 = iStack_44;
        if (iStack_44 == 0) {
          func_0x01384bf0();
        }
        func_0x0325a3b4(&uStack_68,iVar1,**(undefined4 **)(_UNK_01ff3be4 + 0x1ff35a0));
        uStack_58 = uStack_68;
        uStack_54 = uStack_64;
        uStack_50 = uStack_60;
        uStack_4c = uStack_5c;
        while (iVar1 = func_0x03f597e0(&uStack_58,**(undefined4 **)(_UNK_01ff3bec + 0x1ff35c8)),
              piVar10 = piStack_6c, iVar1 != 0) {
          func_0x01ff3d84(param_1,uStack_4c,iVar5,aiStack_34[0]);
        }
        func_0x03f597dc(&uStack_58,**(undefined4 **)(_UNK_01ff3bf0 + 0x1ff3608));
      } while( true );
    }
    iVar1 = func_0x0229f13c(0xac3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1ff2c94;
    unaff_r4 = iVar1;
    unaff_r8 = param_1;
    register0x00000054 = (BADSPACEBASE *)auStack_78;
  }
  else {
    iVar1 = func_0x0229f13c(0xac3e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r8;
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
  uVar8 = 2;
  if (iVar1 == 0) {
    uVar8 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar5,uVar11,(undefined1 *)((int)register0x00000054 + -0x30),uVar8);
  return;
LAB_01ff36a4:
  uStack_70 = 0;
  if (piVar10 != (int *)0x0) {
    iVar1 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01ff3bfc + 0x1ff36c0)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01ff3708;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01ff3bfc + 0x1ff36c0),0);
LAB_01ff3708:
    (*(code *)*puVar2)(piVar10,puVar2[1]);
  }
  func_0x028c98a0(&uStack_40,0);
  func_0x028c98a0(aiStack_34 + 1,0);
  return;
}



// ===== FAT.UIMixSourceDetail$$Refresh RVA 0x1fe2ad4 =====

/* WARNING: Removing unreachable block (ram,0x01ff354c) */
/* WARNING: Removing unreachable block (ram,0x01ff2fcc) */
/* WARNING: Removing unreachable block (ram,0x01ff2fd8) */
/* WARNING: Removing unreachable block (ram,0x01ff3740) */
/* WARNING: Removing unreachable block (ram,0x01ff3558) */
/* WARNING: Removing unreachable block (ram,0x01ff3724) */
/* WARNING: Removing unreachable block (ram,0x01ff3618) */
/* WARNING: Removing unreachable block (ram,0x01ff36a0) */
/* WARNING: Removing unreachable block (ram,0x01ff3624) */
/* WARNING: Removing unreachable block (ram,0x01ff362c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff2ad4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_34 [4];
  
  pcVar11 = (char *)(_UNK_01ff3adc + 0x1ff2aec);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff3af4 + 0x1ff2b00));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3af8 + 0x1ff2b0c));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3afc + 0x1ff2b18));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b00 + 0x1ff2b24));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b04 + 0x1ff2b30));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b34 + 0x1ff2b3c));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b38 + 0x1ff2b48));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b3c + 0x1ff2b54));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b40 + 33500000));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b44 + 0x1ff2b6c));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b48 + 0x1ff2b78));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b4c + 0x1ff2b84));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b50 + 0x1ff2b90));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b54 + 0x1ff2b9c));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b58 + 0x1ff2ba8));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b5c + 0x1ff2bb4));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b60 + 0x1ff2bc0));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b64 + 0x1ff2bcc));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b68 + 0x1ff2bd8));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b6c + 0x1ff2be4));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b70 + 0x1ff2bf0));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b74 + 0x1ff2bfc));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b78 + 0x1ff2c08));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b7c + 0x1ff2c14));
    func_0x01384978(*(undefined4 *)(_UNK_01ff3b80 + 0x1ff2c20));
    *pcVar11 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_34[3] = 0;
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  iStack_44 = 0;
  uStack_58 = 0;
  iVar1 = func_0x0229f06c(0xac3f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xac3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02feb690(iVar1,aiStack_34 + 3,0,**(undefined4 **)(_UNK_01ff3b84 + 0x1ff2cbc));
  if (*(int *)(**(int **)(_UNK_01ff3b88 + 0x1ff2cd0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x028c8d78(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a45c(aiStack_34 + 1,iVar1,aiStack_34,**(undefined4 **)(_UNK_01ff3b8c + 0x1ff2d0c));
  iVar1 = aiStack_34[3];
  if (aiStack_34[3] == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0212fadc(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_01ff3b90 + 0x1ff2d50)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
        goto LAB_01ff2d98;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ff3b90 + 0x1ff2d50),0);
LAB_01ff2d98:
  piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
  puVar13 = *(undefined4 **)(_UNK_01ff3b94 + 0x1ff2db8);
  puVar14 = *(undefined4 **)(_UNK_01ff3b98 + 0x1ff2dc0);
  puVar3 = *(undefined4 **)(_UNK_01ff3b9c + 0x1ff2dc8);
LAB_01ff2dc4:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_01ff3ba4 + 0x1ff2de0)) {
        puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
        goto LAB_01ff2e28;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ff3ba4 + 0x1ff2de0),0);
LAB_01ff2e28:
  iVar1 = (*(code *)*puVar4)(piVar2,puVar4[1]);
  if (iVar1 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01ff3ba0 + 0x1ff2e5c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01ff2ea4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ff3ba0 + 0x1ff2e5c),0);
LAB_01ff2ea4:
    uVar5 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    iVar1 = aiStack_34[0];
    if (aiStack_34[0] == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x03d59fc8(iVar1,uVar5,*puVar13);
    iVar1 = aiStack_34[0];
    if (iVar6 == 0) {
      if (aiStack_34[0] == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar1,uVar5,1,*puVar3);
    }
    else {
      if (aiStack_34[0] == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x03d59cc4(iVar1,uVar5,*puVar14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar1,uVar5,iVar6 + 1,*puVar3);
    }
    goto LAB_01ff2dc4;
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01ff3ba8 + 0x1ff2f6c)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01ff2fb4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ff3ba8 + 0x1ff2f6c),0);
LAB_01ff2fb4:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  if (*(int *)(**(int **)(_UNK_01ff3bac + 0x1ff2fec) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x028c8d78(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a45c(&uStack_68,iVar1,&iStack_44,**(undefined4 **)(_UNK_01ff3bb0 + 0x1ff3020));
  iVar1 = aiStack_34[3];
  uStack_3c = uStack_64;
  uStack_40 = uStack_68;
  if (aiStack_34[3] == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0212fb30(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01ff3bb4 + 0x1ff3088));
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01ff3bf4 + 0x1ff30b4)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01ff30fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ff3bf4 + 0x1ff30b4),0);
LAB_01ff30fc:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01ff3bbc + 0x1ff3138)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01ff3184;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ff3bbc + 0x1ff3138),0);
LAB_01ff3184:
    uVar5 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    piVar9 = (int *)func_0x021566f4(0);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01ff3bc0 + 0x1ff31c0)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0x1d8);
          goto LAB_01ff3208;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01ff3bc0 + 0x1ff31c0),0x23);
LAB_01ff3208:
    iVar6 = (*(code *)*puVar3)(piVar9,uVar5,puVar3[1]);
    iVar1 = iStack_44;
    if (iStack_44 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    piVar9 = (int *)(iVar6 + 0x18);
    iVar1 = *piVar9;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x0345fcc8(iVar1,**(undefined4 **)(_UNK_01ff3bc4 + 0x1ff3270));
    iVar1 = aiStack_34[3];
    if (iVar7 < 1) {
      if (aiStack_34[3] == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0212fb30(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar9 = (int *)(iVar1 + 0x14);
    }
    piVar9 = (int *)*piVar9;
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01ff3bc8 + 0x1ff32d0)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_01ff3318;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01ff3bc8 + 0x1ff32d0),0);
LAB_01ff3318:
    piVar9 = (int *)(*(code *)*puVar3)(piVar9,puVar3[1]);
LAB_01ff332c:
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01ff3bd8 + 0x1ff3348)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_01ff3390;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01ff3bd8 + 0x1ff3348),0);
LAB_01ff3390:
    iVar1 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar9;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01ff3bcc + 0x1ff33c4)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_01ff340c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01ff3bcc + 0x1ff33c4),0);
LAB_01ff340c:
      (*(code *)*puVar3)(&uStack_68,piVar9,puVar3[1]);
      iVar1 = iStack_44;
      uVar5 = uStack_68;
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x03259a6c(iVar1,uVar5,**(undefined4 **)(_UNK_01ff3bd0 + 0x1ff3440));
      iVar1 = iStack_44;
      if (iVar7 == 0) {
        if (iStack_44 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar1 + 8);
        uVar8 = *(uint *)(iVar1 + 0xc);
        piVar10 = *(int **)(_UNK_01ff3bd4 + 0x1ff3484);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar12 = *piVar10;
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        if (uVar8 < *(uint *)(iVar7 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar8 + 1;
          *(undefined4 *)(iVar7 + uVar8 * 4 + 0x10) = uVar5;
        }
        else {
          func_0x0325970c(iVar1,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
        }
      }
      goto LAB_01ff332c;
    }
    if (piVar9 != (int *)0x0) {
      iVar1 = *piVar9;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01ff3bdc + 0x1ff34ec)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_01ff3534;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01ff3bdc + 0x1ff34ec),0);
LAB_01ff3534:
      (*(code *)*puVar3)(piVar9,puVar3[1]);
    }
    iVar1 = iStack_44;
    if (iStack_44 == 0) {
      func_0x01384bf0();
    }
    func_0x0325b328(iVar1,**(undefined4 **)(_UNK_01ff3be0 + 0x1ff357c));
    iVar1 = iStack_44;
    if (iStack_44 == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&uStack_68,iVar1,**(undefined4 **)(_UNK_01ff3be4 + 0x1ff35a0));
    uStack_58 = uStack_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    while (iVar1 = func_0x03f597e0(&uStack_58,**(undefined4 **)(_UNK_01ff3bec + 0x1ff35c8)),
          iVar1 != 0) {
      func_0x01ff3d84(param_1,uStack_4c,iVar6,aiStack_34[0]);
    }
    func_0x03f597dc(&uStack_58,**(undefined4 **)(_UNK_01ff3bf0 + 0x1ff3608));
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01ff3bfc + 0x1ff36c0)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01ff3708;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ff3bfc + 0x1ff36c0),0);
LAB_01ff3708:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  func_0x028c98a0(&uStack_40,0);
  func_0x028c98a0(aiStack_34 + 1,0);
  return;
}



// ===== FAT.UIMixSourceDetail$$OnPostClose RVA 0x1fe3c04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff3c04(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
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
  
  iVar1 = func_0x0229f06c(0xac44,0);
  if (iVar1 == 0) {
    pcVar4 = (char *)(_UNK_01ff3d78 + 0x1ff3c70);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ff3d7c + 0x1ff3c84));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xac45,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x02450148(iVar1,0);
      uVar6 = iVar5 - 1;
      if (-1 < (int)uVar6) {
        puVar8 = *(undefined4 **)(_UNK_01ff3d80 + 0x1ff3d00);
        do {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x02450158(iVar1,uVar6,0);
          iVar2 = func_0x034aaa34(*puVar8);
          uVar7 = *(undefined4 *)(param_1 + 0x5c);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x0244ffd4(iVar5,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x0243bd74(iVar2,uVar7,uVar3,0);
          uVar6 = uVar6 - 1;
        } while (uVar6 < 0x80000000);
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xac45,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xac44,0);
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
  return;
}



// ===== FAT.UIMixSourceDetail$$Clear RVA 0x1fe3c5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff3c5c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
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
  
  pcVar4 = (char *)(_UNK_01ff3d78 + 0x1ff3c70);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff3d7c + 0x1ff3c84));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xac45,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xac45,0);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02450148(iVar1,0);
  uVar6 = iVar5 - 1;
  if (-1 < (int)uVar6) {
    puVar8 = *(undefined4 **)(_UNK_01ff3d80 + 0x1ff3d00);
    do {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x02450158(iVar1,uVar6,0);
      iVar2 = func_0x034aaa34(*puVar8);
      uVar7 = *(undefined4 *)(param_1 + 0x5c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0244ffd4(iVar5,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0243bd74(iVar2,uVar7,uVar3,0);
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}



// ===== FAT.UIMixSourceDetail$$ShowMixOutput RVA 0x1fe3d84 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff3d84(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  int iStack_3c;
  int iStack_38;
  int aiStack_34 [4];
  
  pcVar13 = (char *)(_UNK_01ff4470 + 0x1ff3da4);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff4474 + 0x1ff3dbc));
    func_0x01384978(*(undefined4 *)(_UNK_01ff4478 + 0x1ff3dc8));
    func_0x01384978(*(undefined4 *)(_UNK_01ff447c + 0x1ff3dd4));
    func_0x01384978(*(undefined4 *)(_UNK_01ff4480 + 0x1ff3de0));
    func_0x01384978(*(undefined4 *)(_UNK_01ff4484 + 0x1ff3dec));
    func_0x01384978(*(undefined4 *)(_UNK_01ff4488 + 0x1ff3df8));
    func_0x01384978(*(undefined4 *)(_UNK_01ff448c + 0x1ff3e04));
    func_0x01384978(*(undefined4 *)(_UNK_01ff4490 + 0x1ff3e10));
    func_0x01384978(*(undefined4 *)(_UNK_01ff4494 + 0x1ff3e1c));
    func_0x01384978(*(undefined4 *)(_UNK_01ff4498 + 0x1ff3e28));
    func_0x01384978(*(undefined4 *)(_UNK_01ff449c + 0x1ff3e34));
    func_0x01384978(*(undefined4 *)(_UNK_01ff44a0 + 0x1ff3e40));
    func_0x01384978(*(undefined4 *)(_UNK_01ff44a4 + 0x1ff3e4c));
    *pcVar13 = '\x01';
  }
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  iStack_38 = 0;
  iVar1 = func_0x0229f06c(0xac41,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01ff44a8 + 0x1ff3ec8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x028c8d78(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a45c(aiStack_34 + 1,iVar1,aiStack_34,**(undefined4 **)(_UNK_01ff44ac + 0x1ff3f04));
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    iVar12 = *(int *)(param_3 + 0x14);
    iVar1 = func_0x01ff44ec(param_1);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01ff468c(param_1,iVar1,*(undefined4 *)(iVar12 + 0xc));
    iStack_3c = 0;
    while( true ) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450148(iVar1,0);
      if (iVar3 <= iVar2) break;
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar12 + 0xc) <= iStack_3c) break;
      uVar4 = func_0x0364c9b8(iVar12,iStack_3c,**(undefined4 **)(_UNK_01ff44b0 + 0x1ff3fac));
      iVar3 = aiStack_34[0];
      if (aiStack_34[0] == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x03d59fc8(iVar3,uVar4,**(undefined4 **)(_UNK_01ff44b4 + 0x1ff3fd8));
      iVar3 = aiStack_34[0];
      if (iVar5 == 0) {
        if (aiStack_34[0] == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar3,uVar4,1,**(undefined4 **)(_UNK_01ff44c0 + 0x1ff405c));
      }
      else {
        if (aiStack_34[0] == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x03d59cc4(iVar3,uVar4,**(undefined4 **)(_UNK_01ff44b8 + 0x1ff4008));
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar3,uVar4,iVar5 + 1,**(undefined4 **)(_UNK_01ff44bc + 0x1ff4034));
      }
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x02450158(iVar1,iVar2,0);
      iVar3 = func_0x02fe420c(uVar6,**(undefined4 **)(_UNK_01ff44c8 + 0x1ff40a8),0,
                              **(undefined4 **)(_UNK_01ff44c4 + 0x1ff409c));
      piVar7 = (int *)func_0x021566f4(0);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar5 = *piVar7;
      uVar10 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar11[-1] == **(int **)(_UNK_01ff44cc + 0x1ff40e0)) {
            puVar8 = (undefined4 *)(iVar5 + *piVar11 * 8 + 0x100);
            goto LAB_01ff4128;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01ff44cc + 0x1ff40e0),8);
LAB_01ff4128:
      iVar5 = (*(code *)*puVar8)(piVar7,uVar4,puVar8[1]);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar14 = *(undefined4 *)(iVar5 + 0x1c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0267cc24(iVar3,uVar14,0);
      if (param_4 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5bb20(param_4,uVar4,&iStack_38,**(undefined4 **)(_UNK_01ff44d0 + 0x1ff4188));
      iVar3 = func_0x02fe420c(uVar6,**(undefined4 **)(_UNK_01ff44d8 + 0x1ff41b0),0,
                              **(undefined4 **)(_UNK_01ff44d4 + 0x1ff41a4));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0244ffd4(iVar3,0);
      iVar3 = aiStack_34[0];
      if (aiStack_34[0] == 0) {
        func_0x01384bf0();
      }
      iVar9 = func_0x03d59cc4(iVar3,uVar4,**(undefined4 **)(_UNK_01ff44dc + 0x1ff4200));
      iVar3 = iStack_38;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar5,iVar9 <= iVar3,0);
      iVar2 = iVar2 + 1;
      iStack_3c = iStack_3c + 1;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar12 = func_0x02450148(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x02450158(iVar1,iVar12 + -1,0);
    iVar1 = func_0x02fe420c(uVar4,**(undefined4 **)(_UNK_01ff44e4 + 0x1ff42a0),0,
                            **(undefined4 **)(_UNK_01ff44e0 + 0x1ff4294));
    piVar7 = (int *)func_0x021566f4(0);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar7;
    uVar10 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_01ff44e8 + 0x1ff42d4)) {
          puVar8 = (undefined4 *)(iVar12 + *piVar11 * 8 + 0x100);
          goto LAB_01ff431c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01ff44e8 + 0x1ff42d4),8);
LAB_01ff431c:
    iVar12 = (*(code *)*puVar8)(piVar7,param_2,puVar8[1]);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(iVar12 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0267cc24(iVar1,uVar4,0);
    func_0x028c98a0(aiStack_34 + 1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xac41,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02178970(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.UIMixSourceDetail$$CreateMixItem RVA 0x1fe44ec =====

/* WARNING: Possible PIC construction at 0x01ff45bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01ff45c0) */
/* WARNING: Removing unreachable block (ram,0x01ff45d8) */
/* WARNING: Removing unreachable block (ram,0x01ff45ec) */
/* WARNING: Removing unreachable block (ram,0x01ff460c) */
/* WARNING: Removing unreachable block (ram,0x01ff4610) */
/* WARNING: Removing unreachable block (ram,0x01ff4648) */
/* WARNING: Removing unreachable block (ram,0x01ff4634) */
/* WARNING: Removing unreachable block (ram,0x01ff4660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff44ec(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01ff4674 + 0x1ff4504);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff4678 + 0x1ff4518));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xac42,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xac42,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_0218b1e0 + 0x218b100);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218b1e4 + 0x218b114),param_1,0);
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
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218b1e8 + 0x218b1d0));
    return;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01ff467c + 0x1ff4574));
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  uVar5 = *(undefined4 *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0243c430(iVar1,uVar5,uVar2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&SUB_05189cbc)(iVar1,0);
  return;
}



// ===== FAT.UIMixSourceDetail$$FindSetDataBeginIdx RVA 0x1fe468c =====

uint FUN_01ff468c(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = func_0x0229f06c(0xac43,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xac43,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021830f0(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = 0;
  iVar1 = func_0x02450148(param_2,0);
  uVar2 = iVar1 + ~param_3;
  do {
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar1 = func_0x02450148(0,0);
      if (iVar1 <= iVar3) {
LAB_01ff47ac:
        return uVar2 & ~((int)uVar2 >> 0x1f);
      }
      func_0x01384bf0();
    }
    else {
      iVar1 = func_0x02450148(param_2,0);
      if (iVar1 <= iVar3) goto LAB_01ff47ac;
    }
    iVar1 = func_0x02450158(param_2,iVar3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,(int)uVar2 <= iVar3,0);
    iVar3 = iVar3 + 1;
  } while( true );
}



// ===== FAT.UIMixSourceDetail$$.ctor RVA 0x1fe47b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff47b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_01ff481c + 0x1ff47cc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ff4820 + 0x1ff47e0));
    *pcVar4 = '\x01';
    param_4 = extraout_r3;
  }
  piVar2 = *(int **)(_UNK_01ff4824 + 0x1ff47f8);
  *(undefined4 *)(param_1 + 0x5c) = 0x5e;
  iVar3 = *(int *)(*piVar2 + 0x74);
  if (iVar3 == 0) {
    func_0x01384ab4();
    iVar3 = extraout_r2;
    param_4 = extraout_r3_00;
  }
  pcVar4 = (char *)(_UNK_01ee5288 + 0x1ee5224);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ee528c + 0x1ee5238),0,iVar3,param_4,unaff_r4,unaff_r5,
                    unaff_r11,unaff_lr);
    func_0x01384978(*(undefined4 *)(_UNK_01ee5290 + 0x1ee5244));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ee5294 + 0x1ee5258));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01ee5298 + 0x1ee526c));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.UIMixSourceDetail$$<>iFixBaseProxy_OnCreate RVA 0x1fe4828 =====

void FUN_01ff4828(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x79,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x79,0);
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



// ===== FAT.UIMixSourceDetail$$<>iFixBaseProxy_OnParse RVA 0x1fe4830 =====

void FUN_01ff4830(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x41,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x41,0);
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



// ===== FAT.UIMixSourceDetail$$<>iFixBaseProxy_OnPreOpen RVA 0x1fe4838 =====

void FUN_01ff4838(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x42,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x42,0);
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



// ===== FAT.UIMixSourceDetail$$<>iFixBaseProxy_OnPostClose RVA 0x1fe4840 =====

void FUN_01ff4840(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x691,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x691,0);
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



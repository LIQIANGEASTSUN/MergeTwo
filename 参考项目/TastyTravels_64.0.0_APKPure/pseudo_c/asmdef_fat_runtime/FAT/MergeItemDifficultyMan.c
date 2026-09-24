/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MergeItemDifficultyMan$$get_IsEnableHoldDiff RVA 0x1db4df4 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01dc4df4(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
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
  
  iVar3 = func_0x0229f06c(0x9d82,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x9d82,0);
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
    iVar10 = *(int *)(iVar3 + 8);
    uVar12 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar3 == 0) {
      uVar8 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar10,uVar12,&uStack_30,uVar8);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x60);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x0229f06c(0xf6,0,0);
  if (iVar10 == 0) {
    iVar10 = func_0x0229f06c(0xf7,0);
    if (iVar10 == 0) {
      iVar10 = func_0x01cc0400(iVar3,0xc3);
      if (iVar10 != 0) {
        return 0;
      }
      pcVar9 = (char *)(_UNK_01cc09d4 + 0x1cc0538);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01cc09d8 + 0x1cc054c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09dc + 0x1cc0558));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e0 + 0x1cc0564));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e4 + 0x1cc0570));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e8 + 0x1cc057c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09ec + 0x1cc0588));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09f0 + 0x1cc0594));
        *pcVar9 = '\x01';
      }
      iVar10 = func_0x0229f06c(0xf9,0);
      if (iVar10 == 0) {
        iVar10 = *(int *)(iVar3 + 8);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x02451990(iVar10,0xc3,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
        uVar4 = 1;
        if (iVar10 != 0) {
          iVar10 = func_0x01c24918(0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 8);
          iVar10 = *(int *)(iVar10 + 0x68);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02451948(iVar3,0xc3,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar3 + 0x28)) {
            iVar11 = func_0x01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0x9c);
            uVar12 = *(undefined4 *)(iVar3 + 0x28);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = FUN_01c77708(iVar11,uVar12,0);
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
              uVar12 = (*(code *)*puVar2)(piVar1,puVar2[1]);
              if (iVar10 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x01e6c0b0(iVar10,uVar12,0);
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
      iVar10 = func_0x0229f13c(0xf9,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar10 = func_0x0229f13c(0xf7,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar10 = func_0x0229f13c(0xf6,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0xc3,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar10 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar3,0);
  func_0x01485238(&uStack_38,0xc3,0);
  iVar11 = *(int *)(iVar10 + 8);
  uVar12 = *(undefined4 *)(iVar10 + 0xc);
  iVar3 = *(int *)(iVar10 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar3 == 0) {
    uVar8 = 2;
  }
  func_0x0245495c(iVar11,uVar12,&uStack_38,uVar8,0,0);
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.MergeItemDifficultyMan$$FAT.IGameModule.Reset RVA 0x1db4e7c =====

/* WARNING: Possible PIC construction at 0x01d94c84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01d94c88) */
/* WARNING: Removing unreachable block (ram,0x01d94c94) */
/* WARNING: Removing unreachable block (ram,0x01d94c98) */
/* WARNING: Removing unreachable block (ram,0x01d94cb8) */
/* WARNING: Removing unreachable block (ram,0x01d94cc8) */
/* WARNING: Removing unreachable block (ram,0x01d94cd4) */
/* WARNING: Removing unreachable block (ram,0x01d94cd8) */
/* WARNING: Removing unreachable block (ram,0x01d94cf8) */
/* WARNING: Removing unreachable block (ram,0x01d94cfc) */
/* WARNING: Removing unreachable block (ram,0x01d94d14) */
/* WARNING: Removing unreachable block (ram,0x01d94d18) */
/* WARNING: Removing unreachable block (ram,0x01d94d30) */
/* WARNING: Removing unreachable block (ram,0x01d94d34) */
/* WARNING: Removing unreachable block (ram,0x01d94d4c) */
/* WARNING: Removing unreachable block (ram,0x01d94d50) */
/* WARNING: Removing unreachable block (ram,0x01d94d70) */
/* WARNING: Removing unreachable block (ram,0x01d94d74) */
/* WARNING: Removing unreachable block (ram,0x01d94d8c) */
/* WARNING: Removing unreachable block (ram,0x01d94d90) */
/* WARNING: Removing unreachable block (ram,0x01d94da8) */
/* WARNING: Removing unreachable block (ram,0x01d94dac) */
/* WARNING: Removing unreachable block (ram,0x01d94dcc) */
/* WARNING: Removing unreachable block (ram,0x01d94dd0) */
/* WARNING: Removing unreachable block (ram,0x01d94de8) */
/* WARNING: Removing unreachable block (ram,0x01d94dec) */
/* WARNING: Removing unreachable block (ram,0x01d94e0c) */
/* WARNING: Removing unreachable block (ram,0x01d94e10) */
/* WARNING: Removing unreachable block (ram,0x01d94e2c) */
/* WARNING: Removing unreachable block (ram,0x01d94e30) */
/* WARNING: Removing unreachable block (ram,0x01d94e50) */
/* WARNING: Removing unreachable block (ram,0x01d94e5c) */
/* WARNING: Removing unreachable block (ram,0x01d94e60) */
/* WARNING: Removing unreachable block (ram,0x01d94e4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc4e7c(int param_1)

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
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_01dc4f34 + 0x1dc4e90);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc4f38 + 0x1dc4ea4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d83,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d3570c(iVar1,**(undefined4 **)(_UNK_01dc4f3c + 0x1dc4f0c));
    param_1 = *(int *)(param_1 + 0x14);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x9cd1,0);
    if (iVar1 == 0) {
      FUN_01d94a98(param_1);
      pcVar3 = (char *)(_UNK_01d94e70 + 0x1d94bb0);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01d94e74 + 0x1d94bc4));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e78 + 0x1d94bd0));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e7c + 0x1d94bdc));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e80 + 0x1d94be8));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e84 + 0x1d94bf4));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e88 + 0x1d94c00));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e8c + 0x1d94c0c));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e90 + 0x1d94c18));
        *pcVar3 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x3828,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x28);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar1 + 0x14)) {
          iStack_28 = param_1;
          iStack_24 = iVar1;
          func_0x0484e5ec(*(undefined4 *)(iVar1 + 0xc),0,*(int *)(iVar1 + 0x14),0);
          iVar4 = *(int *)(iVar1 + 8);
          if (iVar4 == 0) {
            func_0x02457d50();
          }
          func_0x0484e5ec(iVar4,0,*(undefined4 *)(iVar4 + 0xc),0);
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined4 *)(iVar1 + 0x14) = 0;
          *(undefined4 *)(iVar1 + 0x18) = 0xffffffff;
        }
        *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
        return;
      }
      iVar1 = func_0x0229f13c(0x3828,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x9cd1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9d83,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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



// ===== FAT.MergeItemDifficultyMan$$FAT.IGameModule.LoadConfig RVA 0x1db4f40 =====

void FUN_01dc4f40(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9d84,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d84,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01ca6d14(iVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar4;
  return;
}



// ===== FAT.MergeItemDifficultyMan$$FAT.IGameModule.Startup RVA 0x1db4fc8 =====

void FUN_01dc4fc8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9d85,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9d85,0);
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



// ===== FAT.MergeItemDifficultyMan$$FAT.IUpdate.Update RVA 0x1db5014 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc5014(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar4 = (char *)(_UNK_01dc50b8 + 0x1dc502c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc50bc + 0x1dc5040));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d86,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d86,0);
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
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar1 + 0x10);
  if (0 < iVar3) {
    iVar6 = *(int *)(iVar1 + 8);
    if (iVar6 == 0) {
      func_0x02457d50(iVar1,**(undefined4 **)(_UNK_01dc50c0 + 0x1dc50ac));
    }
    func_0x0484e5ec(iVar6,0,*(undefined4 *)(iVar6 + 0xc),0);
    *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    func_0x0484e5ec(*(undefined4 *)(iVar1 + 0xc),0,iVar3,0);
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return;
}



// ===== FAT.MergeItemDifficultyMan$$CalcSpecialBoxOutput RVA 0x1db50c4 =====

void FUN_01dc50c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x0229f06c(0x3823,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01db7bcc(iVar1);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01e6b664(iVar1,0);
    func_0x01dc51bc(param_1,uVar2,uVar3,param_2,param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x3823,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02191be8(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$CalcSpecialBoxOutput RVA 0x1db51bc =====

undefined4
FUN_01dc51bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 auStack_2c [2];
  
  iVar1 = func_0x0229f06c(0x3824,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01d94f54(iVar1,param_2,param_3,param_4,param_5,0);
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01d95040(auStack_2c,iVar1,param_6,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x3824,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    auStack_2c[0] = func_0x0220c954(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return auStack_2c[0];
}



// ===== FAT.MergeItemDifficultyMan$$CalcSpecialBoxOutputWithFallbackState RVA 0x1db5294 =====

void FUN_01dc5294(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x0229f06c(0x594a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01db7bcc(iVar1);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01e6b664(iVar1,0);
    func_0x01dc539c(&uStack_28,param_2,uVar2,uVar3,param_3,param_4,param_5);
  }
  else {
    iVar1 = func_0x0229f13c(0x594a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02230a98(&uStack_28,iVar1,param_2,param_3,param_4,param_5,0);
  }
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}



// ===== FAT.MergeItemDifficultyMan$$CalcSpecialBoxOutputWithFallbackState RVA 0x1db539c =====

void FUN_01dc539c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = func_0x0229f06c(0x594b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01d94f54(iVar1,param_3,param_4,param_5,param_6,0);
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01d95040(&uStack_30,iVar1,param_7,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x594b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02230920(&uStack_30,iVar1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return;
}



// ===== FAT.MergeItemDifficultyMan$$CalcComMergeSpecialBoxOutput RVA 0x1db5484 =====

void FUN_01dc5484(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x0229f06c(0x9d87,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01db7bcc(iVar1);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01e6b664(iVar1,0);
    func_0x01dc5570(param_1,uVar2,uVar3,param_2,param_3);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d87,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02180128(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$CalcComMergeSpecialBoxOutput RVA 0x1db5570 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_01dc5570(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 auStack_34 [2];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01dc5724 + 0x1dc5590);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc5728 + 0x1dc55a8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc572c + 0x1dc55b4));
    *pcVar3 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x9d88,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01d94f54(iVar1,param_2,param_3,param_4,param_5,0);
    iVar1 = FUN_01dc4df4(param_1);
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 == 0) {
      FUN_01d95040(auStack_34,iVar4,0,0);
    }
    else {
      iVar1 = FUN_01d9c748(iVar4,&uStack_28,&uStack_2c,0);
      auStack_34[0] = uStack_28;
      if (iVar1 == 0) {
        uVar2 = func_0x0244fb1c(**(undefined4 **)(_UNK_01dc5730 + 0x1dc56cc),uStack_2c,0);
        if (*(int *)(**(int **)(_UNK_01dc5734 + 0x1dc56e4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar2,0);
        auStack_34[0] = FUN_01dc51bc(param_1,param_2,param_3,param_4,param_5,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9d88,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    auStack_34[0] = func_0x02283228(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return auStack_34[0];
}



// ===== FAT.MergeItemDifficultyMan$$CalcChoiceBoxOutput RVA 0x1db5738 =====

void FUN_01dc5738(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x0229f06c(0x9d89,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01db7bcc(iVar1);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01e6b664(iVar1,0);
    func_0x01dc5834(param_1,uVar2,uVar3,param_2,param_3,param_4,param_5);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d89,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a3f28(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$CalcChoiceBoxOutput RVA 0x1db5834 =====

/* WARNING: Possible PIC construction at 0x01d94c84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01d94c88) */
/* WARNING: Removing unreachable block (ram,0x01d94c94) */
/* WARNING: Removing unreachable block (ram,0x01d94c98) */
/* WARNING: Removing unreachable block (ram,0x01d94cb8) */
/* WARNING: Removing unreachable block (ram,0x01d94cc8) */
/* WARNING: Removing unreachable block (ram,0x01d94cd4) */
/* WARNING: Removing unreachable block (ram,0x01d94cd8) */
/* WARNING: Removing unreachable block (ram,0x01d94cf8) */
/* WARNING: Removing unreachable block (ram,0x01d94cfc) */
/* WARNING: Removing unreachable block (ram,0x01d94d14) */
/* WARNING: Removing unreachable block (ram,0x01d94d18) */
/* WARNING: Removing unreachable block (ram,0x01d94d30) */
/* WARNING: Removing unreachable block (ram,0x01d94d34) */
/* WARNING: Removing unreachable block (ram,0x01d94d4c) */
/* WARNING: Removing unreachable block (ram,0x01d94d50) */
/* WARNING: Removing unreachable block (ram,0x01d94d70) */
/* WARNING: Removing unreachable block (ram,0x01d94d74) */
/* WARNING: Removing unreachable block (ram,0x01d94d8c) */
/* WARNING: Removing unreachable block (ram,0x01d94d90) */
/* WARNING: Removing unreachable block (ram,0x01d94da8) */
/* WARNING: Removing unreachable block (ram,0x01d94dac) */
/* WARNING: Removing unreachable block (ram,0x01d94dcc) */
/* WARNING: Removing unreachable block (ram,0x01d94dd0) */
/* WARNING: Removing unreachable block (ram,0x01d94de8) */
/* WARNING: Removing unreachable block (ram,0x01d94dec) */
/* WARNING: Removing unreachable block (ram,0x01d94e0c) */
/* WARNING: Removing unreachable block (ram,0x01d94e10) */
/* WARNING: Removing unreachable block (ram,0x01d94e2c) */
/* WARNING: Removing unreachable block (ram,0x01d94e30) */
/* WARNING: Removing unreachable block (ram,0x01d94e50) */
/* WARNING: Removing unreachable block (ram,0x01d94e5c) */
/* WARNING: Removing unreachable block (ram,0x01d94e60) */
/* WARNING: Removing unreachable block (ram,0x01d94e4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc5834(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  iVar2 = func_0x0229f06c(0x9d8a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9d8a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_28 = 0;
    uStack_34 = param_5;
    uStack_30 = param_6;
    uStack_2c = param_7;
    uStack_38 = param_4;
    func_0x02283340(iVar2,param_1,param_2,param_3);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = 0;
  uStack_38 = param_5;
  FUN_01d94f54(iVar2,param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x9cd2,0,param_7,0);
  if (iVar1 == 0) {
    FUN_01d94ea4(iVar2);
    *(undefined1 *)(iVar2 + 0x60) = 0;
    FUN_01d95178(iVar2);
    FUN_01d95a04(iVar2,param_6,param_7);
    iVar1 = func_0x0229f06c(0x384c,0);
    if (iVar1 == 0) {
      pcVar4 = (char *)(_UNK_01d94e70 + 0x1d94bb0);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01d94e74 + 0x1d94bc4));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e78 + 0x1d94bd0));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e7c + 0x1d94bdc));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e80 + 0x1d94be8));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e84 + 0x1d94bf4));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e88 + 0x1d94c00));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e8c + 0x1d94c0c));
        func_0x01384978(*(undefined4 *)(_UNK_01d94e90 + 0x1d94c18));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x3828,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar2 + 0x28);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar1 + 0x14)) {
          iStack_28 = iVar2;
          func_0x0484e5ec(*(undefined4 *)(iVar1 + 0xc),0,*(int *)(iVar1 + 0x14),0);
          iVar2 = *(int *)(iVar1 + 8);
          if (iVar2 == 0) {
            func_0x02457d50();
          }
          func_0x0484e5ec(iVar2,0,*(undefined4 *)(iVar2 + 0xc),0);
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined4 *)(iVar1 + 0x14) = 0;
          *(undefined4 *)(iVar1 + 0x18) = 0xffffffff;
        }
        *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
        return;
      }
      iVar1 = func_0x0229f13c(0x3828,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x384c,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
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
    func_0x01485278(&uStack_30,iVar2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = func_0x0229f13c(0x9cd2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0217b868(iVar1,iVar2,param_6,param_7);
  return;
}



// ===== FAT.MergeItemDifficultyMan$$CalcChoiceBoxOutputByRelateOrders RVA 0x1db5910 =====

void FUN_01dc5910(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x0229f06c(0x9d8b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01db7bcc(iVar1);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01e6b664(iVar1,0);
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01d94f54(iVar1,uVar2,uVar3,param_2,param_3,0);
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01d95d4c(iVar1,param_5,param_6,param_4,param_7,param_8,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d8b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02283468(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$CheckChoiceBoxOutputNeedRefresh RVA 0x1db5a74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_01dc5a74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_01dc5c88 + 0x1dc5a94);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc5c8c + 0x1dc5aac));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d8c,0);
  if (iVar1 == 0) {
    if (param_5 != (int *)0x0) {
      iVar1 = *param_5;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01dc5c90 + 0x1dc5b44)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01dc5b8c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(param_5,**(int **)(_UNK_01dc5c90 + 0x1dc5b44),0);
LAB_01dc5b8c:
      iVar1 = (*(code *)*puVar3)(param_5,puVar3[1]);
      if (0 < iVar1) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = FUN_01db7bcc(iVar1);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x68);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar4 = func_0x01e6b664(iVar1,0);
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        FUN_01d94f54(iVar1,uVar2,uVar4,param_2,param_3,0);
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = FUN_01d97f08(iVar1,param_5,param_6,param_4,param_7,param_8,0);
        return uVar2;
      }
    }
    uVar2 = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0x9d8c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x022835b0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0)
    ;
  }
  return uVar2;
}



// ===== FAT.MergeItemDifficultyMan$$CalcMagicHourOutput RVA 0x1db5c94 =====

void FUN_01dc5c94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9d8d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01d94f54(iVar1,param_2,param_3,param_4,param_5,0);
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01d98844(iVar1,param_6,param_7,param_8,param_9,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d8d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022836f8(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0)
    ;
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$TryResolveHoldDiffChain RVA 0x1db5d80 =====

void FUN_01dc5d80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9cfe,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01db119c(iVar1,param_2,param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x9cfe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0227effc(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$TryCalcHoldDiffLevelOneEquivalent RVA 0x1db5e14 =====

void FUN_01dc5e14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9d18,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01db39f0(iVar1,param_2,param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d18,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0227f168(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$TryCalcHoldDiffLevelOneEquivalent RVA 0x1db5ea8 =====

void FUN_01dc5ea8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9d1a,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01db2fb0(iVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d1a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0227f2fc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$TryCalcHoldDiffOutputExpectation RVA 0x1db5f58 =====

void FUN_01dc5f58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9d19,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01db304c(iVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d19,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0227f8ec(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    param_10,param_11,0);
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$TryCalcHoldDiffRemainingOutputCount RVA 0x1db605c =====

void FUN_01dc605c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9d8e,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01db6348(iVar1,param_2,param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d8e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0227ff08(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$TryCalcHoldDiffRemainingOutputCount RVA 0x1db60f0 =====

void FUN_01dc60f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9d8f,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01db3cb4(iVar1,param_2,param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d8f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0227ff08(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$TryCalcHoldDiffNums RVA 0x1db6184 =====

void FUN_01dc6184(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x0229f06c(0x9d90,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01db7b78(iVar1);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = FUN_01db7bcc(iVar1);
    func_0x01dc6270(param_1,param_2,1,uVar2,uVar3,param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d90,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022838dc(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$TryCalcHoldDiffNums RVA 0x1db6270 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_01dc6270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 *param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar3 = (char *)(_UNK_01dc64b0 + 0x1dc6290);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc64b4 + 0x1dc62a8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc64b8 + 0x1dc62b4));
    *pcVar3 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  iVar1 = func_0x0229f06c(0x9d01,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01dc64bc + 0x1dc6340) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x028c8d78(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a45c(&uStack_30,iVar1,&uStack_34,**(undefined4 **)(_UNK_01dc64c0 + 0x1dc637c));
    uVar2 = uStack_34;
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01db119c(iVar1,param_2,uVar2,param_7);
    uVar2 = uStack_34;
    if (iVar1 == 0) {
      uVar2 = 0;
      param_6[8] = 0;
      param_6[4] = 0;
      param_6[5] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      param_6[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      param_6[7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      *param_6 = 0;
      param_6[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      param_6[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      param_6[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      param_6[9] = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_01db22cc(iVar1,param_2,param_3,uVar2,uVar4,param_4,param_5,param_6,param_7);
    }
    func_0x028c98a0(&uStack_30,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d01,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02280848(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return uVar2;
}



// ===== FAT.MergeItemDifficultyMan$$TryCalcHoldDiffNums RVA 0x1db64c4 =====

void FUN_01dc64c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9d91,0);
  if (iVar1 == 0) {
    FUN_01dc6270(param_1,param_2,1,param_3,param_4,param_5,param_6);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d91,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02283ab4(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$TryCalcHoldDiffNums RVA 0x1db6560 =====

void FUN_01dc6560(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x0229f06c(0x9d92,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01db7b78(iVar1);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = FUN_01db7bcc(iVar1);
    FUN_01dc6270(param_1,param_2,param_3,uVar2,uVar3,param_4,param_5);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d92,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02283cb4(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.MergeItemDifficultyMan$$GetConfigByItemId RVA 0x1db6654 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dc6654(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uStack_14;
  
  pcVar6 = (char *)(_UNK_01dc6768 + 0x1dc6670);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc676c + 0x1dc6684));
    *pcVar6 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x910,0);
  if (iVar1 == 0) {
    piVar5 = *(int **)(param_1 + 8);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01dc6770 + 0x1dc66fc)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xf8);
          goto LAB_01dc6744;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01dc6770 + 0x1dc66fc),7);
LAB_01dc6744:
    (*(code *)*puVar2)(piVar5,param_2,&uStack_14,puVar2[1]);
  }
  else {
    iVar1 = func_0x0229f13c(0x910,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x021a0ac4(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.MergeItemDifficultyMan$$GetItemAvgDifficulty RVA 0x1db6774 =====

undefined4 FUN_01dc6774(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x9d93,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01dc6654(param_1,param_2);
    if (iVar1 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(undefined4 *)(iVar1 + 0x18);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x9d93,0);
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



// ===== FAT.MergeItemDifficultyMan$$ClearCache RVA 0x1db67e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc67e4(int param_1)

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
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01dc6880 + 0x1dc67f8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc6884 + 0x1dc680c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d94,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d94,0);
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
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0x10);
  if (0 < iVar4) {
    iVar6 = *(int *)(iVar1 + 8);
    if (iVar6 == 0) {
      func_0x02457d50(iVar1,**(undefined4 **)(_UNK_01dc6888 + 0x1dc6874));
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



// ===== FAT.MergeItemDifficultyMan$$TryGetItemDifficulty RVA 0x1db688c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dc688c(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01dc6bb0 + 0x1dc68ac);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc6bb4 + 0x1dc68c4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc6bb8 + 0x1dc68d0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc6bbc + 0x1dc68dc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc6bc0 + 0x1dc68e8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc6bc4 + 0x1dc68f4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc6bc8 + 0x1dc6900));
    func_0x01384978(*(undefined4 *)(_UNK_01dc6bcc + 0x1dc690c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc6bd0 + 0x1dc6918));
    *pcVar6 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x90f,0);
  if (iVar2 == 0) {
    *param_3 = 0;
    cVar1 = *(char *)(param_1 + 0x10);
    *param_4 = 0;
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03d37358(iVar2,param_2,&uStack_30,**(undefined4 **)(_UNK_01dc6bd4 + 0x1dc69bc))
      ;
      if (iVar2 != 0) {
        *param_3 = uStack_30;
        *param_4 = uStack_2c;
        return 1;
      }
    }
    iVar2 = FUN_01dc6654(param_1,param_2);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      *param_3 = *(undefined4 *)(iVar2 + 0x18);
      iVar4 = func_0x01dc6bf4(param_1,*(undefined4 *)(iVar2 + 0x1c));
      if (-1 < iVar4) {
        iVar8 = *(int *)(iVar2 + 0x14);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (iVar4 < *(int *)(iVar8 + 0xc)) {
          iVar2 = *(int *)(iVar2 + 0x14);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x03653d1c(iVar2,iVar4,**(undefined4 **)(_UNK_01dc6bd8 + 0x1dc6a58));
          pcVar6 = (char *)(_UNK_01dc6bdc + 0x1dc6a70);
          if (*pcVar6 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01dc6be0 + 0x1dc6a84));
            *pcVar6 = '\x01';
          }
          if (iVar2 == 0) {
            uVar7 = 0;
            iVar4 = 0;
          }
          else {
            iVar4 = func_0x0148d698(iVar2,0);
            uVar7 = *(uint *)(iVar2 + 8);
          }
          uVar5 = func_0x01adfe1c(iVar4,uVar7,0x3a,**(undefined4 **)(_UNK_01dc6be4 + 0x1dc6ad0));
          if ((-1 < (int)uVar5) && ((int)uVar5 < (int)(uVar7 - 1))) {
            iVar2 = **(int **)(_UNK_01dc6be8 + 0x1dc6b00);
            if (uVar7 <= uVar5) {
              func_0x0145b368(0);
            }
            if ((*(ushort *)(*(int *)(iVar2 + 0x10) + 0xbd) & 1) == 0) {
              func_0x014001f0();
            }
            func_0x024509d0(iVar4 + (uVar5 + 1) * 2,uVar7 - (uVar5 + 1),param_4,0);
          }
        }
      }
      uVar3 = 1;
      if (*(char *)(param_1 + 0x10) != '\0') {
        uStack_34 = 0;
        uStack_38 = 0;
        iVar2 = *(int *)(param_1 + 0xc);
        func_0x038fd264(&uStack_38,*param_3,*param_4,**(undefined4 **)(_UNK_01dc6bec + 0x1dc6b54));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x03d354e0(iVar2,param_2,uStack_38,uStack_34,
                        **(undefined4 **)(_UNK_01dc6bf0 + 0x1dc6b98));
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x90f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02182904(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return uVar3;
}



// ===== FAT.MergeItemDifficultyMan$$GetCategoryMaxUnlockLevelIdx RVA 0x1db6bf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dc6bf4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
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
  
  pcVar4 = (char *)(_UNK_01dc6d5c + 0x1dc6c0c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc6d60 + 0x1dc6c20));
    func_0x01384978(*(undefined4 *)(_UNK_01dc6d64 + 0x1dc6c2c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x911,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0x3c);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01db1884(iVar1,param_2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0x44);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0xc);
    puVar8 = *(undefined4 **)(_UNK_01dc6d68 + 0x1dc6cfc);
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        return -1;
      }
      iVar7 = *(int *)(iVar1 + 0x44);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x0364c9b8(iVar7,iVar5,*puVar8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x01cc44e8(iVar3,uVar6,0);
    } while (iVar7 == 0);
    return iVar5;
  }
  iVar1 = func_0x0229f13c(0x911,0);
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
  iVar1 = func_0x0245498c(&uStack_38,0,0);
  return iVar1;
}



// ===== FAT.MergeItemDifficultyMan$$.ctor RVA 0x1db6d6c =====

/* WARNING: Possible PIC construction at 0x01dc6e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dc6e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dc6e84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01dc6e68) */
/* WARNING: Removing unreachable block (ram,0x01dc6e48) */
/* WARNING: Removing unreachable block (ram,0x01dc6e88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc6d6c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01dc6e9c + 0x1dc6d80);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc6ea0 + 0x1dc6d94));
    func_0x01384978(*(undefined4 *)(_UNK_01dc6ea4 + 0x1dc6da0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc6ea8 + 0x1dc6dac));
    func_0x01384978(*(undefined4 *)(_UNK_01dc6eac + 0x1dc6db8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc6eb0 + 0x1dc6dc4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc6eb4 + 0x1dc6dd0));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01dc6eb8 + 0x1dc6de4));
  func_0x03d34a50(uVar1,**(undefined4 **)(_UNK_01dc6ebc + 0x1dc6df8));
  puVar2 = *(undefined4 **)(_UNK_01dc6ec0 + 0x1dc6e10);
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  FUN_01db0740(uVar1,0);
  puVar2 = *(undefined4 **)(_UNK_01dc6ec4 + 0x1dc6e34);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  (*(code *)0x4874ed4)(uVar1,0);
  return;
}



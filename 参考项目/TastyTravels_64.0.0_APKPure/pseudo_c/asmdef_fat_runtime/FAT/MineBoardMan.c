/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MineBoardMan$$get_IsUnlock RVA 0x1a5a848 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a6a848(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
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
  
  iVar1 = func_0x0229f06c(0x7b14,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b14,0);
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
    iVar10 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar1 == 0) {
      uVar8 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar10,uVar12,&uStack_30,uVar8);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x0229f06c(0xf6,0,0);
  if (iVar10 == 0) {
    iVar10 = func_0x0229f06c(0xf7,0);
    if (iVar10 == 0) {
      iVar10 = func_0x01cc0400(iVar1,0x3c);
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
        iVar10 = *(int *)(iVar1 + 8);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x02451990(iVar10,0x3c,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
        uVar4 = 1;
        if (iVar10 != 0) {
          iVar10 = func_0x01c24918(0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 8);
          iVar10 = *(int *)(iVar10 + 0x68);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02451948(iVar1,0x3c,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar1 + 0x28)) {
            iVar11 = func_0x01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0x9c);
            uVar12 = *(undefined4 *)(iVar1 + 0x28);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x01c77708(iVar11,uVar12,0);
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
          iVar5 = *(int *)(iVar1 + 0x18);
          if (iVar5 <= iVar11) {
            iVar5 = *(int *)(iVar1 + 0x3c);
          }
          if (iVar5 <= iVar11) {
            iVar11 = *(int *)(iVar1 + 0x40);
            if (iVar11 == 0) {
              func_0x01384bf0();
              iVar5 = iRam0000000c;
              iVar11 = *(int *)(iVar1 + 0x40);
              if (iVar11 == 0) {
                func_0x01384bf0();
                iVar11 = 0;
              }
            }
            else {
              iVar5 = *(int *)(iVar11 + 0xc);
            }
            uVar4 = (uint)(iVar5 < 1);
            piVar2 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_01cc09fc + 0x1cc0758));
            piVar13 = *(int **)(_UNK_01cc0a00 + 0x1cc0770);
            piVar14 = *(int **)(_UNK_01cc0a04 + 0x1cc0778);
            do {
              if (piVar2 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar2;
              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar13) {
                    puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc07d0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar13,0);
LAB_01cc07d0:
              iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
              if (iVar1 == 0) goto LAB_01cc0884;
              if (piVar2 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar2;
              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar14) {
                    puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc0848;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar14,0);
LAB_01cc0848:
              uVar12 = (*(code *)*puVar3)(piVar2,puVar3[1]);
              if (iVar10 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x01e6c0b0(iVar10,uVar12,0);
            } while (iVar1 == 0);
            uVar4 = 1;
LAB_01cc0884:
            if (piVar2 != (int *)0x0) {
              iVar1 = *piVar2;
              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar13[-1] == **(int **)(_UNK_01cc0a08 + 0x1cc089c)) {
                    puVar3 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
                    goto LAB_01cc08e4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 2;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cc0a08 + 0x1cc089c),0)
              ;
LAB_01cc08e4:
              (*(code *)*puVar3)(piVar2,puVar3[1]);
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
  func_0x0245494c(&uStack_50,0,0x3c,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar10 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar1,0);
  func_0x01485238(&uStack_38,0x3c,0);
  iVar11 = *(int *)(iVar10 + 8);
  uVar12 = *(undefined4 *)(iVar10 + 0xc);
  iVar1 = *(int *)(iVar10 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar1 == 0) {
    uVar8 = 2;
  }
  func_0x0245495c(iVar11,uVar12,&uStack_38,uVar8,0,0);
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.MineBoardMan$$get_IsValid RVA 0x1a5a8d0 =====

undefined4 FUN_01a6a8d0(int param_1)

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
  iVar1 = func_0x0229f06c(0x5a4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5a4,0);
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
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(param_1 + 8) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.MineBoardMan$$get_World RVA 0x1a5a940 =====

undefined4 FUN_01a6a940(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.MineBoardMan$$set_World RVA 0x1a5a948 =====

void FUN_01a6a948(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MineBoardMan$$get_WorldTracer RVA 0x1a5a950 =====

undefined4 FUN_01a6a950(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MineBoardMan$$set_WorldTracer RVA 0x1a5a958 =====

void FUN_01a6a958(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.MineBoardMan$$DebugResetMineBoard RVA 0x1a5a960 =====

void FUN_01a6a960(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8222,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x7b26,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x3c);
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01cc1cc8(iVar1,uVar4,0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar4 = *(undefined4 *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbc0ec(iVar1,uVar4,0);
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x7b26,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8222,0);
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



// ===== FAT.MineBoardMan$$_ClearMineBoardData RVA 0x1a5a9b8 =====

void FUN_01a6a9b8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7b26,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b26,0);
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
  iVar1 = *(int *)(iVar1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01cc1cc8(iVar1,uVar4,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar4 = *(undefined4 *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// ===== FAT.MineBoardMan$$EnterMineBoard RVA 0x1a5aa8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6aa8c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
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
  
  pcVar5 = (char *)(_UNK_01a6ac8c + 0x1a6aaa8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6ac90 + 0x1a6aabc));
    func_0x01384978(*(undefined4 *)(_UNK_01a6ac94 + 0x1a6aac8));
    func_0x01384978(*(undefined4 *)(_UNK_01a6ac98 + 0x1a6aad4));
    func_0x01384978(*(undefined4 *)(_UNK_01a6ac9c + 0x1a6aae0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81ff,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81ff,0);
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
    return;
  }
  iVar1 = FUN_01a6a8d0(param_1);
  if (iVar1 != 0) {
    puVar7 = *(undefined4 **)(_UNK_01a6aca0 + 0x1a6ab50);
    iVar1 = func_0x034aaa34(*puVar7);
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x94);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,uVar6,0);
    if (iVar1 == 0) {
      iVar1 = func_0x034aaa34(*puVar7);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01eeb900(iVar1,0,0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xfc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e8007c(iVar1,1,0,0);
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01a6aca4 + 0x1a6ac18));
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01a6aca8 + 0x1a6ac2c));
      func_0x0244f8a4(uVar6,param_1,**(undefined4 **)(_UNK_01a6acac + 0x1a6ac48),0);
      uVar6 = func_0x01a6acb0(param_1,uVar6,param_2,*(undefined4 *)(param_1 + 0x10));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0229f06c(0xcb,0,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0xcb,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        pcVar5 = (char *)(_UNK_021786c4 + 0x21785d0);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_021786c8 + 0x21785e4),iVar1,uVar6,0);
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
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485278(&uStack_38,uVar6,0);
        iVar4 = *(int *)(iVar3 + 8);
        uVar6 = *(undefined4 *)(iVar3 + 0xc);
        iVar1 = *(int *)(iVar3 + 0x10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 3;
        if (iVar1 == 0) {
          uVar2 = 2;
        }
        func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
        func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021786cc + 0x21786b4));
        return;
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_0518b080)(iVar1,uVar6,0);
      return;
    }
  }
  return;
}



// ===== FAT.MineBoardMan$$_CoLoading RVA 0x1a5acb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a6acb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01a6ad80 + 0x1a6acd0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6ad84 + 0x1a6ace8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8201,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a6ad88 + 0x1a6ad50));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_4;
    *(undefined4 *)(iVar1 + 0x18) = param_2;
    *(undefined4 *)(iVar1 + 0x1c) = param_3;
  }
  else {
    iVar1 = func_0x0229f13c(0x8201,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02175928(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar1;
}



// ===== FAT.MineBoardMan$$_MergeToActivity RVA 0x1a5ad8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6ad8c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01a6b00c + 0x1a6adac);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6b010 + 0x1a6adc0));
    func_0x01384978(*(undefined4 *)(_UNK_01a6b014 + 0x1a6adcc));
    func_0x01384978(*(undefined4 *)(_UNK_01a6b018 + 0x1a6add8));
    func_0x01384978(*(undefined4 *)(_UNK_01a6b01c + 0x1a6ade4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8200,0);
  if (iVar1 == 0) {
    puVar8 = *(undefined4 **)(_UNK_01a6b020 + 0x1a6ae4c);
    iVar1 = func_0x034aaa34(*puVar8);
    piVar7 = *(int **)(_UNK_01a6b024 + 0x1a6ae60);
    iVar2 = *piVar7;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar7;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,uVar6,0);
    **(undefined1 **)(**(int **)(_UNK_01a6b028 + 0x1a6aea8) + 0x5c) = (char)iVar1;
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xe4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01d7644c(iVar1,0);
    }
    else {
      iVar1 = func_0x034aaa34(*puVar8);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar7;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee40f0(iVar1,uVar6,0);
    }
    iVar1 = func_0x034aaa34(*puVar8);
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x94);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01a6b02c + 0x1a6af70),1);
    iVar2 = *(int *)(param_1 + 0x10);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar2 != 0) && (iVar3 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)
       ) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if (piVar7[3] == 0) {
      func_0x01384bf4();
    }
    piVar7[4] = iVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee858c(iVar1,uVar6,piVar7,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0xd8a,0);
    if (iVar1 == 0) {
      iVar1 = func_0x0229f06c(0xbb3,0);
      if (iVar1 == 0) {
        *(undefined4 *)(param_2 + 8) = 3;
        iVar1 = func_0x0229f06c(0x32f,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_2 + 0xc);
          if (iVar1 != 0) {
            (**(code **)(iVar1 + 0xc))
                      (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
          }
          *(undefined4 *)(param_2 + 0xc) = 0;
          return;
        }
        iVar1 = func_0x0229f13c(0x32f,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar1 = func_0x0229f13c(0xbb3,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xd8a,0);
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
    func_0x01485278(&uStack_30,param_2,0);
    iVar2 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar2,uVar6,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = func_0x0229f13c(0x8200,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  func_0x02174858(iVar1,param_1,param_2,param_3);
  return;
}



// ===== FAT.MineBoardMan$$ExitMineBoard RVA 0x1a5b030 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6b030(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
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
  
  pcVar5 = (char *)(_UNK_01a6b15c + 0x1a6b04c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6b160 + 0x1a6b060));
    func_0x01384978(*(undefined4 *)(_UNK_01a6b164 + 0x1a6b06c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6b168 + 0x1a6b078));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8223,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8223,0);
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
    return;
  }
  if (param_2 == 0) {
    return;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01a6b16c + 0x1a6b0e0));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01a6b170 + 0x1a6b0f4));
  func_0x0244f8a4(uVar6,param_1,**(undefined4 **)(_UNK_01a6b174 + 0x1a6b110),0);
  uVar6 = FUN_01a6acb0(param_1,uVar6,0,param_2);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0229f06c(0xcb,0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xcb,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021786c4 + 0x21785d0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021786c8 + 0x21785e4),iVar1,uVar6,0);
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,uVar6,0);
    iVar4 = *(int *)(iVar3 + 8);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    iVar1 = *(int *)(iVar3 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
    func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021786cc + 0x21786b4));
    return;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0518b080)(iVar1,uVar6,0);
  return;
}



// ===== FAT.MineBoardMan$$_ActivityToMerge RVA 0x1a5b178 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6b178(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_01a6b49c + 0x1a6b198);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6b4a0 + 0x1a6b1ac));
    func_0x01384978(*(undefined4 *)(_UNK_01a6b4a4 + 0x1a6b1b8));
    func_0x01384978(*(undefined4 *)(_UNK_01a6b4a8 + 0x1a6b1c4));
    func_0x01384978(*(undefined4 *)(_UNK_01a6b4ac + 0x1a6b1d0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8224,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8224,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
    return;
  }
  puVar9 = *(undefined4 **)(_UNK_01a6b4b0 + 0x1a6b238);
  iVar1 = func_0x034aaa34(*puVar9);
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_3 + 0x94);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(iVar3 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01ee40f0(iVar1,uVar6,0);
  iVar1 = func_0x034aaa34(*puVar9);
  iVar3 = *(int *)(param_3 + 0xa0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(iVar3 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01ee40f0(iVar1,uVar6,0);
  iVar1 = func_0x034aaa34(*puVar9);
  iVar3 = *(int *)(param_3 + 0xa4);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(iVar3 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01ee40f0(iVar1,uVar6,0);
  if (**(char **)(**(int **)(_UNK_01a6b4b4 + 0x1a6b300) + 0x5c) == '\0') {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xe4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01d75fcc(iVar1,0,0,0,0,0);
  }
  else {
    iVar1 = func_0x034aaa34(*puVar9);
    piVar4 = *(int **)(_UNK_01a6b4b8 + 0x1a6b328);
    iVar3 = *piVar4;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar4;
    }
    iVar7 = **(int **)(_UNK_01a6b4bc + 0x1a6b348);
    iVar2 = *(int *)(iVar7 + 0x1c);
    uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x3c);
    if (iVar2 == 0) {
      func_0x0140024c(iVar7);
      iVar2 = *(int *)(iVar7 + 0x1c);
    }
    iVar3 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x014001f0();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x014001f0();
    }
    uVar8 = **(undefined4 **)(iVar3 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee858c(iVar1,uVar6,uVar8,0);
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x028bcc78(param_2,0);
  iVar1 = func_0x034aaa34(*puVar9);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01eeb900(iVar1,1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xfc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0229f06c(0x1726,0,0,0);
  if (iVar3 == 0) {
    *(undefined1 *)(iVar1 + 0x49) = 0;
    *(undefined1 *)(iVar1 + 0x48) = 0;
  }
  else {
    iVar3 = func_0x0229f13c(0x1726,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02181e64(iVar3,iVar1,0,0,0);
  }
  return;
}



// ===== FAT.MineBoardMan.<_CoLoading>d__20$$.ctor RVA 0x1a5b4c0 =====

void FUN_01a6b4c0(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MineBoardMan$$IsItemUnlock RVA 0x1a5b4dc =====

/* WARNING: Possible PIC construction at 0x01cc4568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc456c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a6b4dc(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  uint uStack_14;
  
  iVar1 = func_0x0229f06c(0x7ab0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x3c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01cc45c8 + 0x1cc4504);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc45cc + 0x1cc4518),param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0x2ca,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02451924(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01cc45d0 + 0x1cc4594))
      ;
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = (uint)((uStack_14 & 0xfffffffe) == 2);
      }
      return uVar2;
    }
    iVar1 = func_0x0229f13c(0x2ca,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cc456c;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x7ab0,0);
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
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
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
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  uVar2 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar2;
}



// ===== FAT.MineBoardMan$$GetCurDepthIndex RVA 0x1a5b56c =====

undefined4 FUN_01a6b56c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8225,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8225,0);
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
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.MineBoardMan$$GetCurDepth RVA 0x1a5b5c0 =====

int FUN_01a6b5c0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8226,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8226,0);
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
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  return *(int *)(param_1 + 0x18) * 100;
}



// ===== FAT.MineBoardMan$$GetAllItemIdList RVA 0x1a5b61c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a6b61c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8227,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8227,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021a9f78 + 0x21a9e98);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021a9f7c + 0x21a9eac),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a9f80 + 0x21a9f68));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== FAT.MineBoardMan$$GetCurUnlockItemMaxLevel RVA 0x1a5b670 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a6b670(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
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
  
  pcVar5 = (char *)(_UNK_01a6b780 + 0x1a6b684);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6b784 + 0x1a6b698));
    func_0x01384978(*(undefined4 *)(_UNK_01a6b788 + 0x1a6b6a4));
    *pcVar5 = '\x01';
  }
  iVar6 = 0;
  iVar2 = func_0x0229f06c(0x7aaf,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01a6a8d0(param_1);
    if (iVar2 != 0) {
      puVar9 = *(undefined4 **)(_UNK_01a6b78c + 0x1a6b718);
      iVar6 = 0;
      iVar2 = 0;
      while( true ) {
        iVar8 = *(int *)(param_1 + 0x1c);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar8 + 0xc) <= iVar2) break;
        iVar8 = *(int *)(param_1 + 0x1c);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar7 = func_0x03259410(iVar8,iVar2,*puVar9);
        iVar3 = FUN_01a6b4dc(param_1,uVar7);
        iVar8 = iVar6;
        if (iVar3 != 0) {
          iVar8 = iVar2;
        }
        iVar3 = iVar2 + 1;
        bVar1 = iVar6 < iVar2;
        iVar2 = iVar3;
        if (bVar1) {
          iVar6 = iVar8;
        }
      }
    }
    return iVar6;
  }
  iVar6 = func_0x0229f13c(0x7aaf,0);
  if (iVar6 == 0) {
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
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar2 = *(int *)(iVar6 + 8);
  uVar7 = *(undefined4 *)(iVar6 + 0xc);
  iVar6 = *(int *)(iVar6 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar6 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar2,uVar7,&uStack_30,uVar4,0,0);
  iVar6 = func_0x0245498c(&uStack_30,0,0);
  return iVar6;
}



// ===== FAT.MineBoardMan$$CheckIsMineBoardItem RVA 0x1a5b790 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a6b790(int param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_01a6b858 + 0x1a6b7a8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6b85c + 0x1a6b7bc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8228,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8228,0);
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
  iVar1 = FUN_01a6a8d0(param_1);
  if ((0 < param_2) && (iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = func_0x030fe230(*(undefined4 *)(iVar1 + 8),param_2,0);
      uVar2 = (uint)(iVar1 != -1);
    }
    return uVar2;
  }
  return 0;
}



// ===== FAT.MineBoardMan$$OnNewItemUnlock RVA 0x1a5b864 =====

void FUN_01a6b864(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7aae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7aae,0);
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
  iVar1 = FUN_01a6a8d0(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = FUN_01a6b670(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x44) = uVar4;
  return;
}



// ===== FAT.MineBoardMan$$OnNewItemShow RVA 0x1a5b8e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6b8e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
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
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_01a6bb6c + 0x1a6b900);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6bb70 + 0x1a6b914));
    func_0x01384978(*(undefined4 *)(_UNK_01a6bb74 + 0x1a6b920));
    func_0x01384978(*(undefined4 *)(_UNK_01a6bb78 + 0x1a6b92c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6bb7c + 0x1a6b938));
    func_0x01384978(*(undefined4 *)(_UNK_01a6bb80 + 0x1a6b944));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8229,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8229,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = FUN_01a6a8d0(param_1);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02116990(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01a6b790(param_1,*(undefined4 *)(iVar1 + 0x10));
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01a6bb84 + 0x1a6b9f0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a6bb88 + 0x1a6ba0c));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar1,param_2,**(undefined4 **)(_UNK_01a6bb8c + 0x1a6ba30));
      if (*(int *)(param_1 + 0x10) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_01a635a8(*(int *)(param_1 + 0x10),0);
      }
      iVar5 = *(int *)(param_1 + 0x1c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar5 + 0xc);
      iVar5 = FUN_01a6a8d0(param_1);
      uVar8 = 0;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = 0;
        if (iVar5 != 0) {
          iVar4 = 0;
          if (0 < iVar10) {
            puVar9 = *(undefined4 **)(_UNK_01a6bb90 + 0x1a6baa8);
            iVar5 = 0;
            do {
              iVar7 = *(int *)(param_1 + 0x1c);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              uVar8 = func_0x03259410(iVar7,iVar5,*puVar9);
              iVar2 = FUN_01a6b4dc(param_1,uVar8);
              iVar7 = iVar4;
              if (iVar2 != 0) {
                iVar7 = iVar5;
              }
              iVar2 = iVar5 + 1;
              if (iVar4 < iVar5) {
                iVar4 = iVar7;
              }
              iVar5 = iVar2;
            } while (iVar10 != iVar2);
          }
          uVar8 = *(undefined4 *)(iVar1 + 0x1c);
        }
      }
      iVar1 = *(int *)(param_1 + 8);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      uStack_2c = 0;
      if (iVar1 != 0) {
        uStack_2c = *(undefined4 *)(iVar1 + 8);
      }
      uStack_28 = *(undefined4 *)(param_1 + 0x18);
      uStack_30 = (uint)(iVar4 + 1 == iVar10);
      uStack_24 = 0;
      func_0x019aff1c(uVar3,iVar4 + 1,iVar10,uVar8);
    }
  }
  return;
}



// ===== FAT.MineBoardMan$$TryAddToken RVA 0x1a5bb94 =====

void FUN_01a6bb94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5a3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01a6a8d0(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_01a653d8(iVar1,param_2,param_3,param_4,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5a3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MineBoardMan$$TryUseToken RVA 0x1a5bc40 =====

undefined4 FUN_01a6bc40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x822a,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01a6a8d0(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_01a661e4(iVar1,param_2,param_3,param_4,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x822a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a980(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.MineBoardMan$$GetBoardId RVA 0x1a5bcf4 =====

undefined4 FUN_01a6bcf4(int param_1)

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
  iVar1 = func_0x0229f06c(0x81da,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81da,0);
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
  if (*(int *)(param_1 + 8) != 0) {
    uVar3 = 0;
    iVar1 = func_0x02139cf4(*(int *)(param_1 + 8),0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(iVar1 + 8);
    }
  }
  return uVar3;
}



// ===== FAT.MineBoardMan$$get_CurDepthIndex RVA 0x1a5bd9c =====

undefined4 FUN_01a6bd9c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x81db,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81db,0);
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
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.MineBoardMan$$FAT.IUserDataHolder.SetData RVA 0x1a5bdf0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6bdf0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iStack_14;
  
  pcVar5 = (char *)(_UNK_01a6bf74 + 0x1a6be0c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6bf78 + 0x1a6be20));
    *pcVar5 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x822b,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar1 + 0x54);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0xc);
    }
    if ((iVar2 != 0 && iVar1 != 0) &&
       (iVar2 = func_0x03464ec0(iVar1,0x3c,&iStack_14,**(undefined4 **)(_UNK_01a6bf7c + 0x1a6bed0)),
       iVar1 = iStack_14, iVar2 != 0)) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar2 = iStack_14;
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 != 0) {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x01c23c30(0,*(undefined4 *)(iVar2 + 0x14),0);
        uVar4 = *(undefined4 *)(iVar1 + 0x38);
        *(undefined4 *)(param_1 + 0x18) = uVar3;
        func_0x01a6bf80(param_1,uVar4,0);
        iVar2 = *(int *)(param_1 + 8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0214a9e8(iVar2,iVar1,0,0);
        iVar1 = *(int *)(param_1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0214d790(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x822b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MineBoardMan$$_InitWorld RVA 0x1a5bf80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6bf80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)(_UNK_01a6c1c4 + 0x1a6bfa0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6c1c8 + 0x1a6bfb4));
    func_0x01384978(*(undefined4 *)(_UNK_01a6c1cc + 0x1a6bfc0));
    func_0x01384978(*(undefined4 *)(_UNK_01a6c1d0 + 0x1a6bfcc));
    func_0x01384978(*(undefined4 *)(_UNK_01a6c1d4 + 0x1a6bfd8));
    func_0x01384978(*(undefined4 *)(_UNK_01a6c1d8 + 0x1a6bfe4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b29,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a6c1dc + 0x1a6c048));
    func_0x02143488(uVar2,0);
    puVar3 = *(undefined4 **)(_UNK_01a6c1e0 + 0x1a6c064);
    *(undefined4 *)(param_1 + 8) = uVar2;
    uVar2 = func_0x01384be4(*puVar3);
    func_0x024500b4(uVar2,param_1,**(undefined4 **)(_UNK_01a6c1e4 + 0x1a6c084),0);
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01a6c1e8 + 0x1a6c098));
    func_0x0214d6c8(uVar4,uVar2,0,0);
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 0x4c);
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a6c1ec + 0x1a6c0d8));
    func_0x01db7f44(iVar1,0);
    uVar2 = *(undefined4 *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = 3;
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x01db7f4c(iVar6,iVar1,0);
    iVar1 = *(int *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0214e900(iVar1,uVar2,0);
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02141f58(iVar1,uVar2,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(param_1 + 8);
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbe654(iVar1,uVar4,uVar2,param_2,param_3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7b29,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f950(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MineBoardMan$$FAT.IUserDataHolder.FillData RVA 0x1a5c1f0 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6c1f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
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
  int aiStack_24 [3];
  
  pcVar6 = (char *)(_UNK_01a6c40c + 0x1a6c208);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6c410 + 0x1a6c21c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6c414 + 0x1a6c228));
    func_0x01384978(*(undefined4 *)(_UNK_01a6c418 + 0x1a6c234));
    func_0x01384978(*(undefined4 *)(_UNK_01a6c41c + 0x1a6c240));
    func_0x01384978(*(undefined4 *)(_UNK_01a6c420 + 0x1a6c24c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x822c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x822c,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar1 + 0x54);
  if (iVar5 == 0) {
    iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01a6c424 + 0x1a6c2e0));
    func_0x017836d8(iVar5,0);
    *(int *)(iVar1 + 0x54) = iVar5;
    if (iVar5 == 0) {
      func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar5 = *(int *)(iVar5 + 0xc);
  iVar1 = FUN_01a6a8d0(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a6c428 + 0x1a6c31c));
    func_0x01783d14(iVar1,0);
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x02b449f8(iVar4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    iVar4 = *(int *)(iVar1 + 0x14);
    *(undefined4 *)(iVar1 + 0xc) = uVar7;
    uVar7 = func_0x01c23578(0,uVar3,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar4,uVar7,**(undefined4 **)(_UNK_01a6c42c + 0x1a6c390));
    uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01a6c430 + 0x1a6c3a4));
    FUN_0178d080(uVar7,0);
    iVar4 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar1 + 0x10) = uVar7;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02147b80(iVar4,uVar7,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar4 = **(int **)(_UNK_01a6c434 + 0x1a6c3f8);
    pcVar6 = (char *)(_UNK_0346518c + 0x346502c);
    if (*pcVar6 == '\0') {
      func_0x02457d54(*(undefined4 *)(_UNK_03465190 + 0x3465044));
      func_0x02457d54(*(undefined4 *)(_UNK_03465194 + 0x3465050));
      *pcVar6 = '\x01';
    }
    aiStack_24[0] = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    func_0x03031db0(0x3c,**(undefined4 **)(_UNK_03465198 + 0x3465074),
                    *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x60));
    if (iVar1 == 0) {
      func_0x03031dbc(0,**(undefined4 **)(_UNK_0346519c + 0x34650a4),
                      *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0xac));
    }
    func_0x04358a40(&uStack_30,0x3c,iVar1,
                    *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0xb0));
    iVar1 = *(int *)(iVar5 + 8);
    if (iVar1 == 0) {
      func_0x02457d50();
    }
    iVar2 = func_0x03d66780(iVar1,0x3c,aiStack_24,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x88));
    iVar1 = aiStack_24[0];
    uVar3 = uStack_2c;
    uVar7 = uStack_30;
    if (iVar2 == 0) {
      iVar1 = *(int *)(iVar5 + 0xc);
      if (iVar1 == 0) {
        func_0x02457d50();
      }
      iVar1 = func_0x043700b8(iVar1,uVar7,uVar3,
                              *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0xb8));
      iVar5 = *(int *)(iVar5 + 8);
      aiStack_24[0] = iVar1;
      if (iVar5 == 0) {
        func_0x02457d50();
      }
      func_0x03d6491c(iVar5,0x3c,iVar1,
                      *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0xbc));
    }
    else {
      if (aiStack_24[0] == 0) {
        func_0x02457d50();
      }
      *(undefined4 *)(iVar1 + 0x14) = uVar7;
      *(undefined4 *)(iVar1 + 0x18) = uVar3;
    }
    return;
  }
  return;
}



// ===== FAT.MineBoardMan$$TryStart RVA 0x1a5c438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6c438(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_r5;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_01a6c538 + 0x1a6c458);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6c53c + 0x1a6c46c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b22,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b22,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02175630(iVar1,param_1,param_2,param_3);
    return;
  }
  piVar7 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    uVar2 = (uint)*(byte *)(**(int **)(_UNK_01a6c540 + 0x1a6c4e0) + 0xb8);
    if ((*(byte *)(*param_2 + 0xb8) < uVar2) ||
       (piVar7 = param_2,
       *(int *)(*(int *)(*param_2 + 100) + uVar2 * 4 + -4) != **(int **)(_UNK_01a6c540 + 0x1a6c4e0))
       ) {
      func_0x01384fb4(param_2);
      piVar7 = (int *)0x0;
    }
  }
  func_0x01a6c544(param_1,piVar7);
  iVar1 = func_0x0229f06c(0x7b25,0);
  if (iVar1 == 0) {
    if (param_3 != 0) {
      FUN_01a6a9b8(param_1);
      if ((*(int *)(param_1 + 0x10) != 0) &&
         (iVar1 = FUN_01a635a8(*(int *)(param_1 + 0x10),0), iVar1 != 0)) {
        FUN_01a6bf80(param_1,*(undefined4 *)(iVar1 + 0x14),1);
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02139cf4(iVar1,0);
        uVar5 = 0;
        if (iVar1 != 0) {
          func_0x020da680(&stack0xffffffe8,iVar1,0);
          uVar5 = unaff_r5;
        }
        iVar1 = *(int *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0x18) = uVar5;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0214d790(iVar1,0);
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x7b25,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_3,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485228(&uStack_38,param_3,0);
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
  return;
}



// ===== FAT.MineBoardMan$$_SetCurActivity RVA 0x1a5c544 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a6c544(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x7b23,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b23,0);
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
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    iVar1 = func_0x0245495c(iVar8,uVar10,&uStack_38,uVar6,0,0);
    return iVar1;
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  pcVar7 = (char *)(_UNK_01a6cad0 + 0x1a6c778);
  uStack_20 = unaff_r4;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6cad4 + 0x1a6c78c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6cad8 + 0x1a6c798));
    func_0x01384978(*(undefined4 *)(_UNK_01a6cadc + 0x1a6c7a4));
    func_0x01384978(*(undefined4 *)(_UNK_01a6cae0 + 0x1a6c7b0));
    func_0x01384978(*(undefined4 *)(_UNK_01a6cae4 + 0x1a6c7bc));
    func_0x01384978(*(undefined4 *)(_UNK_01a6cae8 + 0x1a6c7c8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b24,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b24,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = uStack_20;
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
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
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
    iVar1 = func_0x0245495c(iVar8,uVar10,&uStack_30,uVar6);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar8 = *(int *)(param_1 + 0x10);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar8 == 0) {
    return 0;
  }
  iVar8 = FUN_01a635a8(iVar8,0);
  iVar1 = 0;
  if (iVar8 != 0) {
    iVar1 = *(int *)(iVar8 + 0x30);
  }
  if (iVar8 == 0 || iVar1 == 0) {
    return iVar1;
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01a6caec + 0x1a6c86c));
  piVar9 = *(int **)(_UNK_01a6caf0 + 0x1a6c880);
  piVar11 = *(int **)(_UNK_01a6caf4 + 0x1a6c888);
  puVar12 = *(undefined4 **)(_UNK_01a6caf8 + 0x1a6c890);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar9) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01a6c8e8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_01a6c8e8:
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
        if (piVar5[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01a6c95c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01a6c95c:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    func_0x02f622a4(*(undefined4 *)(param_1 + 0x1c),uVar10,*puVar12);
  } while( true );
  iVar1 = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01a6cafc + 0x1a6c99c)) {
          puVar12 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01a6c9e4;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar4 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a6cafc + 0x1a6c99c),0);
LAB_01a6c9e4:
    iVar1 = (*(code *)*puVar12)(piVar2,puVar12[1]);
  }
  return iVar1;
}



// ===== FAT.MineBoardMan$$_InitMineBoardData RVA 0x1a5c5a8 =====

void FUN_01a6c5a8(int param_1,int param_2)

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
  undefined1 auStack_18 [4];
  undefined4 in_stack_ffffffec;
  
  iVar1 = func_0x0229f06c(0x7b25,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b25,0);
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
    func_0x01485228(&uStack_38,param_2,0);
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
  if (param_2 != 0) {
    FUN_01a6a9b8(param_1);
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar1 = FUN_01a635a8(*(int *)(param_1 + 0x10),0), iVar1 != 0)) {
      FUN_01a6bf80(param_1,*(undefined4 *)(iVar1 + 0x14),1);
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      uVar4 = 0;
      if (iVar1 != 0) {
        func_0x020da680(auStack_18,iVar1,0);
        uVar4 = in_stack_ffffffec;
      }
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x18) = uVar4;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0214d790(iVar1,0);
    }
  }
  return;
}



// ===== FAT.MineBoardMan$$TryEnd RVA 0x1a5c6a4 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a6c6a4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x7b30,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01a6a8d0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02b449f8(iVar1,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x02b449f8(param_2,0);
    if (iVar1 != iVar8) {
      return iVar8;
    }
    FUN_01a6a9b8(param_1);
    iVar1 = func_0x0229f06c(0x7b23,0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      pcVar7 = (char *)(_UNK_01a6cad0 + 0x1a6c778);
      uStack_20 = unaff_r4;
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01a6cad4 + 0x1a6c78c));
        func_0x01384978(*(undefined4 *)(_UNK_01a6cad8 + 0x1a6c798));
        func_0x01384978(*(undefined4 *)(_UNK_01a6cadc + 0x1a6c7a4));
        func_0x01384978(*(undefined4 *)(_UNK_01a6cae0 + 0x1a6c7b0));
        func_0x01384978(*(undefined4 *)(_UNK_01a6cae4 + 0x1a6c7bc));
        func_0x01384978(*(undefined4 *)(_UNK_01a6cae8 + 0x1a6c7c8));
        *pcVar7 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x7b24,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x7b24,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_18 = uStack_20;
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
        uVar10 = *(undefined4 *)(iVar1 + 0xc);
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
        iVar1 = func_0x0245495c(iVar8,uVar10,&uStack_30,uVar6);
        return iVar1;
      }
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar8 = *(int *)(param_1 + 0x10);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar8 == 0) {
        return 0;
      }
      iVar8 = FUN_01a635a8(iVar8,0);
      iVar1 = 0;
      if (iVar8 != 0) {
        iVar1 = *(int *)(iVar8 + 0x30);
      }
      if (iVar8 == 0 || iVar1 == 0) {
        return iVar1;
      }
      piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01a6caec + 0x1a6c86c));
      piVar9 = *(int **)(_UNK_01a6caf0 + 0x1a6c880);
      piVar11 = *(int **)(_UNK_01a6caf4 + 0x1a6c888);
      puVar12 = *(undefined4 **)(_UNK_01a6caf8 + 0x1a6c890);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar9) {
              puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto LAB_01a6c8e8;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_01a6c8e8:
        iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar1 == 0) goto LAB_01a6c980;
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
              goto LAB_01a6c95c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01a6c95c:
        uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        func_0x02f622a4(*(undefined4 *)(param_1 + 0x1c),uVar10,*puVar12);
      } while( true );
    }
    iVar1 = func_0x0229f13c(0x7b23,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x7b30,0);
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
  iVar1 = func_0x0245495c(iVar8,uVar10,&uStack_38,uVar6,0,0);
  return iVar1;
LAB_01a6c980:
  iVar1 = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01a6cafc + 0x1a6c99c)) {
          puVar12 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01a6c9e4;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar4 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a6cafc + 0x1a6c99c),0);
LAB_01a6c9e4:
    iVar1 = (*(code *)*puVar12)(piVar2,puVar12[1]);
  }
  return iVar1;
}



// ===== FAT.MineBoardMan$$_RefreshAllItemIdList RVA 0x1a5c764 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a6c764(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_01a6cad0 + 0x1a6c778);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6cad4 + 0x1a6c78c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6cad8 + 0x1a6c798));
    func_0x01384978(*(undefined4 *)(_UNK_01a6cadc + 0x1a6c7a4));
    func_0x01384978(*(undefined4 *)(_UNK_01a6cae0 + 0x1a6c7b0));
    func_0x01384978(*(undefined4 *)(_UNK_01a6cae4 + 0x1a6c7bc));
    func_0x01384978(*(undefined4 *)(_UNK_01a6cae8 + 0x1a6c7c8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b24,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b24,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    iVar1 = func_0x0245495c(iVar8,uVar10,&uStack_30,uVar6,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar8 = *(int *)(param_1 + 0x10);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar8 == 0) {
    return 0;
  }
  iVar8 = FUN_01a635a8(iVar8,0);
  iVar1 = 0;
  if (iVar8 != 0) {
    iVar1 = *(int *)(iVar8 + 0x30);
  }
  if (iVar8 == 0 || iVar1 == 0) {
    return iVar1;
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01a6caec + 0x1a6c86c));
  piVar9 = *(int **)(_UNK_01a6caf0 + 0x1a6c880);
  piVar11 = *(int **)(_UNK_01a6caf4 + 0x1a6c888);
  puVar12 = *(undefined4 **)(_UNK_01a6caf8 + 0x1a6c890);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar9) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01a6c8e8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_01a6c8e8:
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
        if (piVar5[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01a6c95c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01a6c95c:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    func_0x02f622a4(*(undefined4 *)(param_1 + 0x1c),uVar10,*puVar12);
  } while( true );
  iVar1 = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01a6cafc + 0x1a6c99c)) {
          puVar12 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01a6c9e4;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar4 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a6cafc + 0x1a6c99c),0);
LAB_01a6c9e4:
    iVar1 = (*(code *)*puVar12)(piVar2,puVar12[1]);
  }
  return iVar1;
}



// ===== FAT.MineBoardMan$$FillBoardRowConfStr RVA 0x1a5cb04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a6cb04(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int unaff_r11;
  
  pcVar11 = (char *)(_UNK_01a6cfec + 0x1a6cb24);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6cff0 + 0x1a6cb3c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6cff4 + 0x1a6cb48));
    func_0x01384978(*(undefined4 *)(_UNK_01a6cff8 + 0x1a6cb54));
    func_0x01384978(*(undefined4 *)(_UNK_01a6cffc + 0x1a6cb60));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5be7,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar3 = func_0x01ca8f40(iVar1,param_2,0);
    if (param_3 != (int *)0x0) {
      unaff_r11 = iVar3;
    }
    if (param_3 != (int *)0x0 && iVar3 != 0) {
      iVar3 = *(int *)(unaff_r11 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (((0 < param_5) && (-1 < param_4)) && (iVar3 = *(int *)(iVar3 + 0xc), 0 < iVar3)) {
        iVar4 = *param_3;
        uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_01a6d000 + 0x1a6cc54)) {
              puVar5 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xd8);
              goto LAB_01a6cc9c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_01a6d000 + 0x1a6cc54),3);
LAB_01a6cc9c:
        (*(code *)*puVar5)(param_3,puVar5[1]);
        iVar4 = param_5 + param_4;
        if (iVar3 < iVar4) {
          iVar12 = *(int *)(unaff_r11 + 0x14);
          uVar2 = *(undefined4 *)(unaff_r11 + 0x18);
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          iVar12 = func_0x0364c54c(iVar12,uVar2,**(undefined4 **)(_UNK_01a6d00c + 0x1a6cce4));
          if (param_4 < iVar3) {
            puVar5 = *(undefined4 **)(_UNK_01a6d010 + 0x1a6cd10);
            piVar9 = *(int **)(_UNK_01a6d014 + 0x1a6cd18);
            do {
              iVar13 = *(int *)(unaff_r11 + 0x14);
              if (iVar13 == 0) {
                func_0x01384bf0();
              }
              uVar2 = func_0x0364c9b8(iVar13,param_4,*puVar5);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar13 = func_0x01ca8fa4(iVar1,uVar2,0);
              if (iVar13 != 0) {
                iVar8 = *param_3;
                uVar2 = *(undefined4 *)(iVar13 + 0x14);
                uVar7 = (uint)*(ushort *)(iVar8 + 0xb6);
                if (uVar7 != 0) {
                  piVar10 = (int *)(*(int *)(iVar8 + 0x58) + 4);
                  do {
                    if (piVar10[-1] == *piVar9) {
                      puVar6 = (undefined4 *)(iVar8 + *piVar10 * 8 + 0xd0);
                      goto LAB_01a6cdb0;
                    }
                    uVar7 = uVar7 - 1;
                    piVar10 = piVar10 + 2;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined4 *)func_0x014002dc(param_3,*piVar9,2);
LAB_01a6cdb0:
                (*(code *)*puVar6)(param_3,uVar2,puVar6[1]);
              }
              param_4 = param_4 + 1;
            } while (param_4 != iVar3);
            param_5 = iVar4 - iVar3;
            iVar4 = iVar12;
          }
          else {
            if (iVar3 - iVar12 == 0) {
              iVar4 = 0;
            }
            else {
              func_0x01458344(param_4 - iVar12);
              iVar4 = extraout_r1;
            }
            iVar4 = iVar4 + iVar12;
          }
          if (param_5 < 1) {
            return 1;
          }
          iVar13 = 0;
          do {
            iVar8 = iVar13 + iVar4;
            if (iVar3 <= iVar8) {
              func_0x01458344(iVar8 - iVar12,iVar3 - iVar12);
              iVar8 = extraout_r1_00 + iVar12;
            }
            iVar14 = *(int *)(unaff_r11 + 0x14);
            if (iVar14 == 0) {
              func_0x01384bf0();
            }
            uVar2 = func_0x0364c9b8(iVar14,iVar8,**(undefined4 **)(_UNK_01a6d018 + 0x1a6cf38));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar8 = func_0x01ca8fa4(iVar1,uVar2,0);
            if (iVar8 != 0) {
              iVar14 = *param_3;
              uVar2 = *(undefined4 *)(iVar8 + 0x14);
              uVar7 = (uint)*(ushort *)(iVar14 + 0xb6);
              if (uVar7 != 0) {
                piVar9 = (int *)(*(int *)(iVar14 + 0x58) + 4);
                do {
                  if (piVar9[-1] == **(int **)(_UNK_01a6d01c + 0x1a6cf78)) {
                    puVar5 = (undefined4 *)(iVar14 + *piVar9 * 8 + 0xd0);
                    goto LAB_01a6cfc4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar9 = piVar9 + 2;
                } while (uVar7 != 0);
              }
              puVar5 = (undefined4 *)
                       func_0x014002dc(param_3,**(int **)(_UNK_01a6d01c + 0x1a6cf78),2);
LAB_01a6cfc4:
              (*(code *)*puVar5)(param_3,uVar2,puVar5[1]);
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < param_5);
        }
        else {
          if (iVar4 <= param_4) {
            return 1;
          }
          puVar5 = *(undefined4 **)(_UNK_01a6d004 + 0x1a6cdfc);
          piVar9 = *(int **)(_UNK_01a6d008 + 0x1a6ce04);
          do {
            iVar3 = *(int *)(unaff_r11 + 0x14);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uVar2 = func_0x0364c9b8(iVar3,param_4,*puVar5);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x01ca8fa4(iVar1,uVar2,0);
            if (iVar3 != 0) {
              iVar12 = *param_3;
              uVar2 = *(undefined4 *)(iVar3 + 0x14);
              uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
              if (uVar7 != 0) {
                piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
                do {
                  if (piVar10[-1] == *piVar9) {
                    puVar6 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xd0);
                    goto LAB_01a6ce9c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar10 = piVar10 + 2;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined4 *)func_0x014002dc(param_3,*piVar9,2);
LAB_01a6ce9c:
              (*(code *)*puVar6)(param_3,uVar2,puVar6[1]);
            }
            param_4 = param_4 + 1;
          } while (param_4 != iVar4);
        }
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5be7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02232d0c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar2;
}



// ===== FAT.MineBoardMan$$_OnBoardItemChange RVA 0x1a5d020 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6d020(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01a6d3ac + 0x1a6d038);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6d3b0 + 0x1a6d04c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6d3b4 + 0x1a6d058));
    func_0x01384978(*(undefined4 *)(_UNK_01a6d3b8 + 0x1a6d064));
    func_0x01384978(*(undefined4 *)(_UNK_01a6d3bc + 0x1a6d070));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7b2a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7b2a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_24 = uStack_3c;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a6d3c0 + 0x1a6d0cc));
  func_0x0244f5a0(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  cVar1 = *(char *)(param_1 + 0x28);
  *(int *)(iVar2 + 8) = param_1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    iVar6 = FUN_01a6a8d0(param_1);
    if (iVar6 == 0) {
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x02139cf4(iVar6,0);
      *(int *)(iVar2 + 0xc) = iVar6;
      if (iVar6 != 0) {
        iVar6 = func_0x01c24918(0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar2 + 0xc);
        iVar6 = *(int *)(iVar6 + 0x4c);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        uVar8 = *(undefined4 *)(iVar9 + 8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 0;
        iVar6 = func_0x01dbd5a4(iVar6,uVar8,0);
        if (iVar6 != 0) {
          uVar4 = *(undefined4 *)(iVar6 + 0x28);
        }
        *(undefined4 *)(iVar2 + 0x14) = uVar4;
        iVar6 = func_0x01c24918(0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar6 + 0xc);
        uVar8 = *(undefined4 *)(iVar2 + 0x14);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x01ca8f40(iVar6,uVar8,0);
        if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x1c), 4 < iVar6)) {
          iVar9 = *(int *)(iVar2 + 0xc);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          iVar10 = 0;
          func_0x020da680(&uStack_28,iVar9,0);
          *(int *)(iVar2 + 0x18) = iStack_24;
          if (0 < iStack_24) {
            iVar10 = 0;
            do {
              iVar9 = *(int *)(iVar2 + 0xc);
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              iVar9 = func_0x020df2b4(iVar9,iVar10,0,0);
            } while ((iVar9 != 0) && (iVar10 = iVar10 + 1, iVar10 < *(int *)(iVar2 + 0x18)));
          }
          iVar9 = iVar10;
          if (iVar10 < iVar6) {
            if (*(int *)(iVar2 + 0x18) < 1) {
              return;
            }
            iVar9 = 0;
            do {
              iVar7 = *(int *)(iVar2 + 0xc);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              iVar7 = func_0x020df2b4(iVar7,iVar9,1,0);
            } while ((iVar7 != 0) && (iVar9 = iVar9 + 1, iVar9 < *(int *)(iVar2 + 0x18)));
            if (iVar6 <= iVar9) {
              iVar6 = iVar10;
            }
            if (iVar9 <= iVar6) {
              return;
            }
            iVar6 = func_0x03668dfc(**(undefined4 **)(_UNK_01a6d3c4 + 0x1a6d2d0));
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar6 = func_0x01ddc2c0(iVar6,0);
            if (iVar6 == 0) {
              func_0x01384bf0();
              func_0x01e267a0(0,1,0);
              func_0x01384bf0();
            }
            else {
              func_0x01e267a0(iVar6,1,0);
            }
            iVar6 = func_0x01e241b4(iVar6,0);
            if (iVar6 != 0) {
              return;
            }
          }
          *(int *)(iVar2 + 0x10) = iVar9 + -4;
          if (0 < iVar9 + -4) {
            uVar8 = func_0x024508e0(0);
            *(undefined4 *)(param_1 + 0x24) = uVar8;
            puVar3 = *(undefined4 **)(_UNK_01a6d3c8 + 0x1a6d34c);
            *(undefined1 *)(param_1 + 0x20) = 1;
            uVar8 = func_0x01384be4(*puVar3);
            func_0x024500b4(uVar8,iVar2,**(undefined4 **)(_UNK_01a6d3cc + 0x1a6d36c),0);
            *(undefined4 *)(param_1 + 0x2c) = uVar8;
          }
        }
      }
    }
  }
  return;
}



// ===== FAT.MineBoardMan.<>c__DisplayClass50_0$$.ctor RVA 0x1a5d3d0 =====

void FUN_01a6d3d0(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MineBoardMan$$FAT.IUpdate.Update RVA 0x1a5d3d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6d3d8(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01a6d4d0 + 0x1a6d3f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6d4d4 + 0x1a6d404));
    func_0x01384978(*(undefined4 *)(_UNK_01a6d4d8 + 0x1a6d410));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x822d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x822d,0);
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
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != -1) {
    iVar3 = func_0x024508e0(0);
    if (iVar1 == iVar3) {
      return;
    }
    if (*(int *)(**(int **)(_UNK_01a6d4dc + 0x1a6d488) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a6d4e0 + 0x1a6d4a4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar1,0);
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  }
  return;
}



// ===== FAT.MineBoardMan$$StartMoveUpBoard RVA 0x1a5d4e4 =====

void FUN_01a6d4e4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x822e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x822e,0);
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
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 1;
    iVar1 = *(int *)(param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x20) = 0;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



// ===== FAT.MineBoardMan$$_MoveUpBoard RVA 0x1a5d574 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6d574(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01a6d97c + 0x1a6d594);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6d980 + 0x1a6d5ac));
    func_0x01384978(*(undefined4 *)(_UNK_01a6d984 + 0x1a6d5b8));
    func_0x01384978(*(undefined4 *)(_UNK_01a6d988 + 0x1a6d5c4));
    func_0x01384978(*(undefined4 *)(_UNK_01a6d98c + 0x1a6d5d0));
    func_0x01384978(*(undefined4 *)(_UNK_01a6d990 + 0x1a6d5dc));
    func_0x01384978(*(undefined4 *)(_UNK_01a6d994 + 0x1a6d5e8));
    func_0x01384978(*(undefined4 *)(_UNK_01a6d998 + 0x1a6d5f4));
    func_0x01384978(*(undefined4 *)(_UNK_01a6d99c + 0x1a6d600));
    func_0x01384978(*(undefined4 *)(_UNK_01a6d9a0 + 0x1a6d60c));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x7b2d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a6d9a4 + 0x1a6d6a4));
    func_0x0328e950(uVar2,**(undefined4 **)(_UNK_01a6d9a8 + 0x1a6d6bc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbfdac(iVar1,param_2,param_3,uVar2,1,0,0);
    if (*(int *)(**(int **)(_UNK_01a6d9ac + 0x1a6d704) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_01a6d9b0 + 0x1a6d720));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x034a1f3c(iVar3,uVar2,param_3,**(undefined4 **)(_UNK_01a6d9b4 + 0x1a6d748));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbffbc(iVar1,param_2,param_3 + 1,0xffffffff,0);
    piVar5 = *(int **)(_UNK_01a6d9b8 + 0x1a6d784);
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar5;
    }
    iVar3 = **(int **)(iVar3 + 0x5c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar3,&uStack_28,**(undefined4 **)(_UNK_01a6d9bc + 0x1a6d7c4));
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = uStack_28;
    iVar3 = *(int *)(iVar3 + 200);
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = FUN_01a6cb04(iVar3,param_4,uVar2,uVar6,param_3);
    uVar2 = uStack_28;
    if (iVar3 != 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dc01cc(iVar1,param_2,uVar2,param_5,0);
    }
    func_0x028c98a0(&uStack_30,0);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e2d040(iVar1,1,0);
    if (*(int *)(**(int **)(_UNK_01a6d9c0 + 0x1a6d8ac) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a6d9c4 + 0x1a6d8c8));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349e110(iVar1,param_3,**(undefined4 **)(_UNK_01a6d9c8 + 0x1a6d8ec));
  }
  else {
    iVar1 = func_0x0229f13c(0x7b2d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021d283c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.MineBoardMan$$CollectAllBoardReward RVA 0x1a5d9cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a6d9cc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
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
  
  pcVar7 = (char *)(_UNK_01a6df08 + 0x1a6d9e8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6df0c + 0x1a6d9fc));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df10 + 0x1a6da08));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df14 + 0x1a6da14));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df18 + 0x1a6da20));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df1c + 0x1a6da2c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df20 + 0x1a6da38));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df24 + 0x1a6da44));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df28 + 0x1a6da50));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df2c + 0x1a6da5c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df30 + 0x1a6da68));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df34 + 0x1a6da74));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df38 + 0x1a6da80));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df3c + 0x1a6da8c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df40 + 0x1a6da98));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df44 + 0x1a6daa4));
    func_0x01384978(*(undefined4 *)(_UNK_01a6df48 + 0x1a6dab0));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x81f5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a6df4c + 0x1a6db2c));
    uVar2 = 0;
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 8) = param_1;
    iVar3 = FUN_01a6a8d0(param_1);
    if (param_2 != 0 && iVar3 != 0) {
      piVar11 = *(int **)(_UNK_01a6df50 + 0x1a6db70);
      iVar3 = *piVar11;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar11;
      }
      iVar3 = **(int **)(iVar3 + 0x5c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      puVar8 = *(undefined4 **)(_UNK_01a6df54 + 0x1a6dba8);
      uVar2 = func_0x0359c52c(iVar3,*puVar8);
      iVar3 = **(int **)(*piVar11 + 0x5c);
      *(undefined4 *)(iVar1 + 0xc) = uVar2;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0359c52c(iVar3,*puVar8);
      iVar3 = *(int *)(param_1 + 8);
      puVar8 = *(undefined4 **)(_UNK_01a6df58 + 0x1a6dbe8);
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
      uVar2 = func_0x01384be4(*puVar8);
      func_0x02450194(uVar2,iVar1,**(undefined4 **)(_UNK_01a6df5c + 0x1a6dc0c),0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x021475dc(iVar3,uVar2,5,0);
      iVar3 = *(int *)(iVar1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_58,iVar3,**(undefined4 **)(_UNK_01a6df60 + 0x1a6dc60));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      piVar11 = *(int **)(_UNK_01a6df64 + 0x1a6dc8c);
      while (iVar3 = func_0x01475638(&uStack_40,**(undefined4 **)(_UNK_01a6df74 + 0x1a6dc94)),
            uVar2 = uStack_34, iVar3 != 0) {
        uVar5 = (undefined4)uStack_30;
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar11;
        iVar3 = *(int *)(iVar3 + 0x40);
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar11;
        }
        uVar9 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x24);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x01cdcbac(iVar3,uVar2,uVar5,uVar9,0,0,0,0x242,
                                **(undefined4 **)(_UNK_01a6df68 + 0x1a6dcfc),
                                **(undefined4 **)(_UNK_01a6df6c + 0x1a6dd08),0);
        iVar3 = *(int *)(param_2 + 8);
        uVar10 = *(uint *)(param_2 + 0xc);
        piVar6 = *(int **)(_UNK_01a6df70 + 0x1a6dd5c);
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        iVar4 = *piVar6;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (uVar10 < *(uint *)(iVar3 + 0xc)) {
          *(uint *)(param_2 + 0xc) = uVar10 + 1;
          *(undefined4 *)(iVar3 + uVar10 * 4 + 0x10) = uVar2;
        }
        else {
          func_0x0328f170(param_2,uVar2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
        }
      }
      func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01a6df78 + 0x1a6ddb0));
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      piVar11 = *(int **)(_UNK_01a6df80 + 0x1a6ddd4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x02c03e4c(*(undefined4 *)(iVar1 + 0xc),0);
      func_0x019b00c4(uVar2,uVar5,0);
      iVar3 = *piVar11;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar11;
      }
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      iVar3 = **(int **)(iVar3 + 0x5c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      puVar8 = *(undefined4 **)(_UNK_01a6df84 + 0x1a6de38);
      func_0x0359c65c(iVar3,uVar2,*puVar8);
      uVar2 = *(undefined4 *)(iVar1 + 0x10);
      iVar1 = **(int **)(*piVar11 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c65c(iVar1,uVar2,*puVar8);
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x81f5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.MineBoardMan.<>c__DisplayClass54_0$$.ctor RVA 0x1a5df8c =====

void FUN_01a6df8c(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MineBoardMan$$_TryCollectReward RVA 0x1a5df94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6df94(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01a6e208 + 0x1a6dfb4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6e20c + 0x1a6dfcc));
    func_0x01384978(*(undefined4 *)(_UNK_01a6e210 + 0x1a6dfd8));
    *pcVar5 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x81f8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81f8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02feb690(param_2,&iStack_24,0,**(undefined4 **)(_UNK_01a6e214 + 0x1a6e060));
  if ((((iStack_24 == 0 || iVar1 == 0) || (iVar1 = func_0x0211d748(iStack_24,0), iVar1 != 1)) ||
      (iStack_24 == 0)) || (iVar1 = func_0x0211dc48(iStack_24,0), iVar1 == 0)) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(param_2,&iStack_28,0,**(undefined4 **)(_UNK_01a6e218 + 0x1a6e09c));
    iVar1 = iStack_28;
    if (iVar2 == 0) {
      return;
    }
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021372e0(iVar1,0);
    if (iVar1 != 3) {
      return;
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0210e2d4(param_2,0);
    func_0x02c047c4(param_3,uVar3,1,0xffffffff,0);
    iVar1 = iStack_28;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02137218(iVar1,0);
    iVar1 = iStack_28;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0213727c(iVar1,0);
  }
  else {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0210e2d4(param_2,0);
    func_0x02c047c4(param_3,uVar3,1,0xffffffff,0);
    iVar1 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0211d680(iVar1,0);
    iVar1 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0211d6e4(iVar1,0);
  }
  func_0x02c047c4(param_4,uVar3,uVar4,0xffffffff,0);
  return;
}



// ===== FAT.MineBoardMan$$TrackMineMilestone RVA 0x1a5e21c =====

void FUN_01a6e21c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x5af,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 8);
    }
    func_0x019afd5c(param_2,param_3,param_4,param_5,param_6,uVar2,*(undefined4 *)(param_1 + 0x18),
                    param_7,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5af,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218f22c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}



// ===== FAT.MineBoardMan$$Reset RVA 0x1a5e2f8 =====

void FUN_01a6e2f8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x822f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x822f,0);
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
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar4 = *(undefined4 *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// ===== FAT.MineBoardMan$$LoadConfig RVA 0x1a5e3ac =====

void FUN_01a6e3ac(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x8230,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x8230,0);
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



// ===== FAT.MineBoardMan$$Startup RVA 0x1a5e3f8 =====

void FUN_01a6e3f8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x8231,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x8231,0);
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



// ===== FAT.MineBoardMan$$.ctor RVA 0x1a5e444 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a6e444(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01a6e4c4 + 0x1a6e458);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6e4c8 + 0x1a6e46c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6e4cc + 0x1a6e478));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a6e4d0 + 0x1a6e48c));
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_01a6e4d4 + 0x1a6e4a0));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MineBoardMan.<>c__DisplayClass50_0$$<_OnBoardItemChange>b__0 RVA 0x1a5e4d8 =====

void FUN_01a6e4d8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01a6d574(iVar1,uVar5,iVar3,uVar4,iVar2 - iVar3);
  return;
}



// ===== FAT.MineBoardMan.<>c__DisplayClass54_0$$<CollectAllBoardReward>b__0 RVA 0x1a5e524 =====

void FUN_01a6e524(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  FUN_01a6df94(iVar3,param_2,uVar1,uVar2);
  return;
}



// ===== FAT.MineBoardMan.<_CoLoading>d__20$$System.IDisposable.Dispose RVA 0x1a5e564 =====

void FUN_01a6e564(void)

{
  return;
}



// ===== FAT.MineBoardMan.<_CoLoading>d__20$$MoveNext RVA 0x1a5e568 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a6e568(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  pcVar6 = (char *)(_UNK_01a6e85c + 0x1a6e57c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a6e860 + 0x1a6e590));
    func_0x01384978(*(undefined4 *)(_UNK_01a6e864 + 0x1a6e59c));
    func_0x01384978(*(undefined4 *)(_UNK_01a6e868 + 0x1a6e5a8));
    func_0x01384978(*(undefined4 *)(_UNK_01a6e86c + 0x1a6e5b4));
    *pcVar6 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar5 == 2) {
    iVar5 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x14));
    }
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    *(undefined1 *)(iVar7 + 0x14) = 0;
  }
  else {
    if (iVar5 == 1) {
      iVar5 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 0xc))
                  (*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(param_1 + 0x24),
                   *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(iVar5 + 0x14));
      }
      *(undefined4 *)(param_1 + 8) = 2;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x20);
      return 1;
    }
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      puVar9 = *(undefined4 **)(_UNK_01a6e870 + 0x1a6e604);
      *(undefined1 *)(iVar7 + 0x14) = 1;
      iVar5 = func_0x01384be4(*puVar9);
      func_0x028bcc70(iVar5,0);
      uVar1 = func_0x01384be4(*puVar9);
      func_0x028bcc70(uVar1,0);
      uVar2 = *puVar9;
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      uVar1 = func_0x01384be4(uVar2);
      func_0x028bcc70(uVar1,0);
      *(undefined4 *)(param_1 + 0x24) = uVar1;
      iVar7 = func_0x01c24918(0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar7 + 8);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x01bf3284(iVar7,**(undefined4 **)(_UNK_01a6e874 + 0x1a6e680),0);
      iVar7 = func_0x034aaa34(**(undefined4 **)(_UNK_01a6e878 + 0x1a6e694));
      iVar8 = *(int *)(param_1 + 0x14);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xa8);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar1 = *(undefined4 *)(iVar8 + 0xc);
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01a6e87c + 0x1a6e6cc),3);
      iVar8 = *(int *)(param_1 + 0x24);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar8 != 0) &&
         (iVar4 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
        uVar2 = func_0x01384c10();
        func_0x01384aa0(uVar2,0);
      }
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = iVar8;
      if ((iVar5 != 0) &&
         (iVar8 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar3 + 0x20)), iVar8 == 0)) {
        uVar2 = func_0x01384c10();
        func_0x01384aa0(uVar2,0);
      }
      if ((uint)piVar3[3] < 2) {
        func_0x01384bf4();
      }
      piVar3[5] = iVar5;
      iVar8 = *(int *)(param_1 + 0x20);
      if ((iVar8 != 0) &&
         (iVar4 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
        uVar2 = func_0x01384c10();
        func_0x01384aa0(uVar2,0);
      }
      if ((uint)piVar3[3] < 3) {
        func_0x01384bf4();
      }
      piVar3[6] = iVar8;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar7,uVar1,piVar3,0);
      *(int *)(param_1 + 0xc) = iVar5;
      *(undefined4 *)(param_1 + 8) = 1;
      return 1;
    }
  }
  return 0;
}



// ===== FAT.MineBoardMan.<_CoLoading>d__20$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1a5e880 =====

undefined4 FUN_01a6e880(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MineBoardMan.<_CoLoading>d__20$$System.Collections.IEnumerator.Reset RVA 0x1a5e888 =====

undefined4 FUN_01a6e888(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam01a6e8c4 + 0x1a6e898));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam01a6e8c8 + 0x1a6e8b4));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.MineBoardMan.<_CoLoading>d__20$$System.Collections.IEnumerator.get_Current RVA 0x1a5e8cc =====

undefined4 FUN_01a6e8cc(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



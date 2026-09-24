/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MiniBoardMan$$get_IsUnlock RVA 0x1a92a10 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01aa2a10(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x84a3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84a3,0);
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
      iVar10 = func_0x01cc0400(iVar1,0x27);
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
        iVar10 = func_0x02451990(iVar10,0x27,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
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
          iVar1 = func_0x02451948(iVar1,0x27,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
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
  func_0x0245494c(&uStack_50,0,0x27,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar10 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar1,0);
  func_0x01485238(&uStack_38,0x27,0);
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



// ===== FAT.MiniBoardMan$$SetCurActivity RVA 0x1a92d50 =====

void FUN_01aa2d50(int param_1,int param_2)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x84a8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84a8,0);
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
  *(int *)(param_1 + 8) = param_2;
  if (param_2 == 0) {
    return;
  }
  iVar1 = func_0x0229f06c(0x7a9b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01aa4700(param_1);
    if (iVar1 == 0) {
      return;
    }
    uVar4 = func_0x01aa7140(param_1);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x44);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x7aa2,0,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x7aa2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar4,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,uVar4,0);
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
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ca8b70(iVar1,uVar4,0);
    if (iVar1 == 0) {
      return;
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    func_0x021568f0(param_1,*(undefined4 *)(param_1 + 0x10),uVar2);
    iVar1 = func_0x0229f06c(0x5b3,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar1 = func_0x0229f13c(0x5b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7a9b,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
  return;
}



// ===== FAT.MiniBoardMan$$InitMiniBoardData RVA 0x1a92dc0 =====

void FUN_01aa2dc0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x84aa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84aa,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 != 0) {
    func_0x01aa2fac(param_1);
    uVar5 = 0;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (*(int *)(param_1 + 8) != 0) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x40);
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ca8b0c(iVar1,uVar5,0);
    if (iVar1 == 0) {
      return;
    }
    func_0x01aa66b8(param_1,*(undefined4 *)(iVar1 + 0x14),1);
    func_0x01aa603c(param_1);
    func_0x01aa6af4(param_1);
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x5f6f,0);
    if (iVar4 == 0) {
      iVar4 = func_0x0229f06c(0x5baf,0);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar1 + 0xc);
        *(undefined1 *)(iVar1 + 0x18) = 1;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
        }
        iVar4 = func_0x0229f06c(0x5bb0,0);
        if (iVar4 == 0) {
          iVar4 = *(int *)(iVar1 + 0x1c);
          *(undefined1 *)(iVar1 + 0x24) = 1;
          if (iVar4 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0214e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
          return;
        }
        iVar4 = func_0x0229f13c(0x5bb0,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar4 = func_0x0229f13c(0x5baf,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar4 = func_0x0229f13c(0x5f6f,0);
      if (iVar4 == 0) {
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar1,0);
    iVar3 = *(int *)(iVar4 + 8);
    uVar5 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
    return;
  }
  return;
}



// ===== FAT.MiniBoardMan$$ClearMiniBoardData RVA 0x1a92fac =====

void FUN_01aa2fac(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x84ab,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84ab,0);
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
  uVar4 = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar1 + 0x3c);
  iVar1 = func_0x01aa5920(param_1);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x20);
  }
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x01cc1cc8(iVar3,uVar4,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// ===== FAT.MiniBoardMan$$CollectAllBoardReward RVA 0x1a93a34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aa3a34(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
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
  
  pcVar5 = (char *)(_UNK_01aa4078 + 0x1aa3a50);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa407c + 0x1aa3a64));
    func_0x01384978(*(undefined4 *)(_UNK_01aa4080 + 0x1aa3a70));
    func_0x01384978(*(undefined4 *)(_UNK_01aa4084 + 0x1aa3a7c));
    func_0x01384978(*(undefined4 *)(_UNK_01aa4088 + 0x1aa3a88));
    func_0x01384978(*(undefined4 *)(_UNK_01aa408c + 0x1aa3a94));
    func_0x01384978(*(undefined4 *)(_UNK_01aa4090 + 0x1aa3aa0));
    func_0x01384978(*(undefined4 *)(_UNK_01aa4094 + 0x1aa3aac));
    func_0x01384978(*(undefined4 *)(_UNK_01aa4098 + 0x1aa3ab8));
    func_0x01384978(*(undefined4 *)(_UNK_01aa409c + 0x1aa3ac4));
    func_0x01384978(*(undefined4 *)(_UNK_01aa40a0 + 0x1aa3ad0));
    func_0x01384978(*(undefined4 *)(_UNK_01aa40a4 + 0x1aa3adc));
    func_0x01384978(*(undefined4 *)(_UNK_01aa40a8 + 0x1aa3ae8));
    func_0x01384978(*(undefined4 *)(_UNK_01aa40ac + 0x1aa3af4));
    func_0x01384978(*(undefined4 *)(_UNK_01aa40b0 + 0x1aa3b00));
    func_0x01384978(*(undefined4 *)(_UNK_01aa40b4 + 0x1aa3b0c));
    func_0x01384978(*(undefined4 *)(_UNK_01aa40b8 + 0x1aa3b18));
    *pcVar5 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x84ca,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01aa40bc + 0x1aa3b94));
    uVar3 = 0;
    func_0x0244f5a0(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar2 + 8) = param_1;
    iVar4 = func_0x01aa4700(param_1);
    if (param_2 != 0 && iVar4 != 0) {
      piVar9 = *(int **)(_UNK_01aa40c0 + 0x1aa3bd8);
      iVar4 = *piVar9;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar9;
      }
      iVar4 = **(int **)(iVar4 + 0x5c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      puVar6 = *(undefined4 **)(_UNK_01aa40c4 + 0x1aa3c10);
      uVar3 = func_0x0359c52c(iVar4,*puVar6);
      iVar4 = **(int **)(*piVar9 + 0x5c);
      *(undefined4 *)(iVar2 + 0xc) = uVar3;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0359c52c(iVar4,*puVar6);
      iVar4 = *(int *)(param_1 + 0x10);
      puVar6 = *(undefined4 **)(_UNK_01aa40c8 + 0x1aa3c50);
      *(undefined4 *)(iVar2 + 0x10) = uVar3;
      uVar3 = func_0x01384be4(*puVar6);
      func_0x02450194(uVar3,iVar2,**(undefined4 **)(_UNK_01aa40cc + 0x1aa3c74),0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x021475dc(iVar4,uVar3,5,0);
      iVar4 = *(int *)(iVar2 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_58,iVar4,**(undefined4 **)(_UNK_01aa40d0 + 0x1aa3ccc));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      while( true ) {
        iVar4 = func_0x01475638(&uStack_40,**(undefined4 **)(_UNK_01aa40e8 + 0x1aa3cf8));
        uVar3 = uStack_34;
        if (iVar4 == 0) break;
        uVar1 = (undefined4)uStack_30;
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar4 + 0x40);
        iVar4 = **(int **)(_UNK_01aa40d4 + 0x1aa3d34);
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = **(int **)(_UNK_01aa40d8 + 0x1aa3d54);
        }
        uVar10 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x24);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x01cdcbac(iVar7,uVar3,uVar1,uVar10,0,0,0,0x108,
                                **(undefined4 **)(_UNK_01aa40dc + 0x1aa3d74),
                                **(undefined4 **)(_UNK_01aa40e0 + 0x1aa3d80),0);
        iVar4 = *(int *)(param_2 + 8);
        uVar8 = *(uint *)(param_2 + 0xc);
        piVar9 = *(int **)(_UNK_01aa40e4 + 0x1aa3dd8);
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        iVar7 = *piVar9;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if (uVar8 < *(uint *)(iVar4 + 0xc)) {
          *(uint *)(param_2 + 0xc) = uVar8 + 1;
          *(undefined4 *)(iVar4 + uVar8 * 4 + 0x10) = uVar3;
        }
        else {
          func_0x0328f170(param_2,uVar3,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
        }
      }
      func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01aa40ec + 0x1aa3e2c));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar2 + 0xc);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_58,iVar4,**(undefined4 **)(_UNK_01aa40f4 + 0x1aa3e6c));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      while (iVar4 = func_0x01475638(&uStack_40,**(undefined4 **)(_UNK_01aa40fc + 0x1aa3e94)),
            iVar4 != 0) {
        func_0x019af280(*(undefined4 *)(param_1 + 8),uStack_34,(undefined4)uStack_30,0);
      }
      func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01aa4100 + 0x1aa3ec4));
      piVar9 = *(int **)(_UNK_01aa4108 + 0x1aa3ed8);
      iVar4 = *piVar9;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar9;
      }
      iVar4 = **(int **)(iVar4 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      puVar6 = *(undefined4 **)(_UNK_01aa410c + 0x1aa3f24);
      func_0x0359c65c(iVar4,uVar3,*puVar6);
      uVar3 = *(undefined4 *)(iVar2 + 0x10);
      iVar2 = **(int **)(*piVar9 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c65c(iVar2,uVar3,*puVar6);
      uVar3 = 1;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x84ca,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021734d8(iVar2,param_1,param_2,0);
  }
  return uVar3;
}



// ===== FAT.MiniBoardMan$$EnterMiniBoard RVA 0x1a9429c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa429c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
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
  
  pcVar4 = (char *)(_UNK_01aa4544 + 0x1aa42b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa4548 + 0x1aa42c4));
    func_0x01384978(*(undefined4 *)(_UNK_01aa454c + 0x1aa42d0));
    func_0x01384978(*(undefined4 *)(_UNK_01aa4550 + 0x1aa42dc));
    func_0x01384978(*(undefined4 *)(_UNK_01aa4554 + 0x1aa42e8));
    func_0x01384978(*(undefined4 *)(_UNK_01aa4558 + 0x1aa42f4));
    func_0x01384978(*(undefined4 *)(_UNK_01aa455c + 0x1aa4300));
    func_0x01384978(*(undefined4 *)(_UNK_01aa4560 + 0x1aa430c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x84d2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84d2,0);
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
    return;
  }
  iVar1 = func_0x01aa4700(param_1);
  if (iVar1 != 0) {
    puVar8 = *(undefined4 **)(_UNK_01aa4564 + 0x1aa4374);
    iVar1 = func_0x034aaa34(*puVar8);
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x70);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar5 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,uVar7,0);
    if (iVar1 == 0) {
      iVar1 = func_0x034aaa34(*puVar8);
      piVar6 = *(int **)(_UNK_01aa4568 + 0x1aa43e0);
      iVar5 = *piVar6;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x01384ab4();
        iVar5 = *piVar6;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01eea2b8(iVar1,uVar7,0);
      **(undefined1 **)(**(int **)(_UNK_01aa456c + 0x1aa4428) + 0x5c) = (char)iVar1;
      if (iVar1 != 0) {
        if (*(int *)(**(int **)(_UNK_01aa4570 + 0x1aa4440) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01aa4574 + 0x1aa445c));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0349da44(iVar1,0,**(undefined4 **)(_UNK_01aa4578 + 0x1aa4480));
      }
      iVar1 = func_0x034aaa34(*puVar8);
      iVar5 = *(int *)(param_1 + 8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x70);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar5 + 0xc);
      piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01aa457c + 0x1aa44c4),1);
      iVar5 = *(int *)(param_1 + 8);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar5 != 0) &&
         (iVar2 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if (piVar6[3] == 0) {
        func_0x01384bf4();
      }
      piVar6[4] = iVar5;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0229f06c(0xd,0,piVar6,0);
      if (iVar5 == 0) {
        func_0x01ee81d4(iVar1,uVar7,0,piVar6);
      }
      else {
        iVar5 = func_0x0229f13c(0xd,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x02174858(iVar5,iVar1,uVar7,piVar6);
      }
      return;
    }
  }
  return;
}



// ===== FAT.MiniBoardMan$$get_IsValid RVA 0x1a94700 =====

undefined4 FUN_01aa4700(int param_1)

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
  iVar1 = func_0x0229f06c(0x23ac,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x23ac,0);
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
  if ((*(int *)(param_1 + 8) != 0) && (uVar3 = 0, *(int *)(param_1 + 0x10) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.MiniBoardMan$$get_CurActivity RVA 0x1a95898 =====

undefined4 FUN_01aa5898(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.MiniBoardMan$$set_CurActivity RVA 0x1a958a0 =====

void FUN_01aa58a0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MiniBoardMan$$get_World RVA 0x1a958a8 =====

undefined4 FUN_01aa58a8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.MiniBoardMan$$set_World RVA 0x1a958b0 =====

void FUN_01aa58b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.MiniBoardMan$$get_WorldTracer RVA 0x1a958b8 =====

undefined4 FUN_01aa58b8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.MiniBoardMan$$set_WorldTracer RVA 0x1a958c0 =====

void FUN_01aa58c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



// ===== FAT.MiniBoardMan$$DebugResetMiniBoard RVA 0x1a958c8 =====

void FUN_01aa58c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x84d5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x84ab,0);
    if (iVar1 == 0) {
      uVar4 = 0;
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar1 + 0x3c);
      iVar1 = func_0x01aa5920(param_1);
      if (iVar1 != 0) {
        uVar4 = *(undefined4 *)(iVar1 + 0x20);
      }
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01cc1cc8(iVar3,uVar4,0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbc0ec(iVar1,uVar4,0);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x84ab,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x84d5,0);
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



// ===== FAT.MiniBoardMan$$GetCurDetailConfig RVA 0x1a95920 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aa5920(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  
  iVar2 = func_0x0229f06c(0x7a9d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7a9d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02253fc8 + 0x2253ee8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02253fcc + 0x2253efc),param_1,0);
      *pcVar8 = '\x01';
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
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
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5);
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02253fd0 + 0x2253fb8));
    return uVar9;
  }
  iVar2 = FUN_01aa4700(param_1);
  if (iVar2 != 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar7 + 0x40);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x0229f06c(0x7a9f,0,0);
    if (iVar7 != 0) {
      iVar7 = func_0x0229f13c(0x7a9f,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      pcVar8 = (char *)(_UNK_02253ec0 + 0x2253dcc);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02253ec4 + 0x2253de0),iVar2,uVar9,0);
        *pcVar8 = '\x01';
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
      if (*(int *)(iVar7 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar2,0);
      func_0x01485238(&uStack_38,uVar9,0);
      iVar6 = *(int *)(iVar7 + 8);
      uVar9 = *(undefined4 *)(iVar7 + 0xc);
      iVar2 = *(int *)(iVar7 + 0x10);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar5 = 3;
      if (iVar2 == 0) {
        uVar5 = 2;
      }
      func_0x0245495c(iVar6,uVar9,&uStack_38,uVar5,0,0);
      uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02253ec8 + 0x2253eb0));
      return uVar9;
    }
    pcVar8 = (char *)(_UNK_017fdb14 + 0x17fdab8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017fdb18 + 0x17fdacc),0);
      func_0x01384978(*(undefined4 *)(_UNK_017fdb1c + 0x17fdad8));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017fdb20 + 0x17fdaec) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017fdb24 + 0x17fdb08);
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x02457d48();
    }
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
    if (piVar3 == (int *)0x0) {
      func_0x02457d50();
    }
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
    uStack_28 = 0;
    uStack_2c = 0;
    (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
    iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar2 != 0) {
      unaff_r4 = piVar3[0x11];
    }
    bVar1 = true;
    iVar6 = 0;
    if (iVar2 != 0 && unaff_r4 != 0) {
      iVar4 = func_0x03d66780(unaff_r4,uVar9,&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
      uVar5 = uStack_28;
      bVar1 = false;
      iVar6 = unaff_r4;
      if (iVar4 != 0) {
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uStack_28;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uStack_28;
      }
    }
    if ((piVar3[0x12] == 0) ||
       (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
       iVar4 == 0)) {
      uStack_2c = 0;
      iVar4 = (**(code **)(*piVar3 + 0x1a0))
                        (piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
      uVar5 = uStack_2c;
      if (iVar4 != 0) {
        if (iVar2 != 0) {
          if (bVar1) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar6 = func_0x02457d58();
            func_0x03d63f04(iVar6,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74))
            ;
            piVar3[0x11] = iVar6;
          }
          if (iVar6 == 0) {
            func_0x02457d50();
          }
          func_0x03d6491c(iVar6,uVar9,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
        }
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uVar5;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uVar5;
      }
      iVar2 = piVar3[0x12];
      if (iVar2 == 0) {
        if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0)
        {
          func_0x02457d84();
        }
        iVar2 = func_0x02457d58();
        func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
        piVar3[0x12] = iVar2;
        if (iVar2 == 0) {
          func_0x02457d50();
          iVar2 = 0;
        }
      }
      func_0x04220004(iVar2,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
    }
    func_0x0369fb50(piVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
    return 0;
  }
  return 0;
}



// ===== FAT.MiniBoardMan$$IsItemUnlock RVA 0x1a959d4 =====

/* WARNING: Possible PIC construction at 0x01cc4568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc456c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01aa59d4(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x7aa0,0);
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
    iVar1 = func_0x0229f13c(0x7aa0,0);
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



// ===== FAT.MiniBoardMan$$CheckIsShowRedPoint RVA 0x1a95a64 =====

undefined4 FUN_01aa5a64(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x84d6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84d6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    func_0x01485238(&uStack_38,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_38,uVar2,1,0);
    uVar3 = func_0x0245498c(&uStack_38,0,0);
    *param_2 = uVar3;
    uVar3 = func_0x0245496c(&uStack_38,1,0);
    return uVar3;
  }
  *param_2 = 0;
  iVar1 = FUN_01aa4700(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02141d1c(iVar1,0);
    uVar3 = 1;
    *param_2 = uVar2;
  }
  return uVar3;
}



// ===== FAT.MiniBoardMan$$ExitMiniBoard RVA 0x1a95afc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa5afc(undefined4 param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01aa5c6c + 0x1aa5b14);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa5c70 + 0x1aa5b28));
    func_0x01384978(*(undefined4 *)(_UNK_01aa5c74 + 0x1aa5b34));
    func_0x01384978(*(undefined4 *)(_UNK_01aa5c78 + 0x1aa5b40));
    func_0x01384978(*(undefined4 *)(_UNK_01aa5c7c + 0x1aa5b4c));
    func_0x01384978(*(undefined4 *)(_UNK_01aa5c80 + 0x1aa5b58));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x84d7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84d7,0);
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
  if (param_2 != 0) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01aa5c84 + 0x1aa5bbc));
    iVar3 = *(int *)(param_2 + 0x70);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee40f0(iVar1,uVar5,0);
    if (**(char **)(**(int **)(_UNK_01aa5c88 + 0x1aa5c00) + 0x5c) != '\0') {
      if (*(int *)(**(int **)(_UNK_01aa5c8c + 0x1aa5c1c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01aa5c90 + 0x1aa5c38));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0349da5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),1,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  return;
}



// ===== FAT.MiniBoardMan$$GetCurUnlockItemMaxLevel RVA 0x1a95c98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01aa5c98(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01aa5dac + 0x1aa5cac);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa5db0 + 0x1aa5cc0));
    func_0x01384978(*(undefined4 *)(_UNK_01aa5db4 + 0x1aa5ccc));
    *pcVar5 = '\x01';
  }
  iVar7 = 0;
  iVar2 = func_0x0229f06c(0x7aa4,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01aa5920(param_1);
    if (iVar2 != 0) {
      puVar10 = *(undefined4 **)(_UNK_01aa5db8 + 0x1aa5d44);
      iVar7 = 0;
      iVar9 = 0;
      while( true ) {
        iVar6 = *(int *)(iVar2 + 0x20);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0xc) <= iVar9) break;
        iVar6 = *(int *)(iVar2 + 0x20);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar8 = func_0x0364c9b8(iVar6,iVar9,*puVar10);
        iVar3 = FUN_01aa59d4(param_1,uVar8);
        iVar6 = iVar7;
        if (iVar3 != 0) {
          iVar6 = iVar9;
        }
        iVar3 = iVar9 + 1;
        bVar1 = iVar7 < iVar9;
        iVar9 = iVar3;
        if (bVar1) {
          iVar7 = iVar6;
        }
      }
    }
    return iVar7;
  }
  iVar7 = func_0x0229f13c(0x7aa4,0);
  if (iVar7 == 0) {
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
  if (*(int *)(iVar7 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar7 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar2 = *(int *)(iVar7 + 8);
  uVar8 = *(undefined4 *)(iVar7 + 0xc);
  iVar7 = *(int *)(iVar7 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar7 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar2,uVar8,&uStack_30,uVar4,0,0);
  iVar7 = func_0x0245498c(&uStack_30,0,0);
  return iVar7;
}



// ===== FAT.MiniBoardMan$$GetCurUnlockItemMaxLevelEntry RVA 0x1a95dbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01aa5dbc(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01aa5ed0 + 0x1aa5dd0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa5ed4 + 0x1aa5de4));
    func_0x01384978(*(undefined4 *)(_UNK_01aa5ed8 + 0x1aa5df0));
    *pcVar5 = '\x01';
  }
  iVar7 = 0;
  iVar2 = func_0x0229f06c(0x84d8,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01aa5920(param_1);
    if (iVar2 != 0) {
      puVar10 = *(undefined4 **)(_UNK_01aa5edc + 0x1aa5e68);
      iVar7 = -1;
      iVar9 = 0;
      while( true ) {
        iVar6 = *(int *)(iVar2 + 0x20);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0xc) <= iVar9) break;
        iVar6 = *(int *)(iVar2 + 0x20);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar8 = func_0x0364c9b8(iVar6,iVar9,*puVar10);
        iVar3 = FUN_01aa59d4(param_1,uVar8);
        iVar6 = iVar7;
        if (iVar3 != 0) {
          iVar6 = iVar9;
        }
        iVar3 = iVar9 + 1;
        bVar1 = iVar7 < iVar9;
        iVar9 = iVar3;
        if (bVar1) {
          iVar7 = iVar6;
        }
      }
    }
    return iVar7;
  }
  iVar7 = func_0x0229f13c(0x84d8,0);
  if (iVar7 == 0) {
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
  if (*(int *)(iVar7 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar7 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar2 = *(int *)(iVar7 + 8);
  uVar8 = *(undefined4 *)(iVar7 + 0xc);
  iVar7 = *(int *)(iVar7 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar7 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar2,uVar8,&uStack_30,uVar4,0,0);
  iVar7 = func_0x0245498c(&uStack_30,0,0);
  return iVar7;
}



// ===== FAT.MiniBoardMan$$CheckIsMiniBoardItem RVA 0x1a95ee0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01aa5ee0(undefined4 param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_01aa5fa8 + 0x1aa5ef8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa5fac + 0x1aa5f0c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x84d9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84d9,0);
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
  if ((0 < param_2) && (iVar1 = FUN_01aa5920(param_1), iVar1 != 0)) {
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0364c54c(iVar1,param_2,
                            *(undefined4 *)
                             (*(int *)(*(int *)(**(int **)(_UNK_01aa5fb0 + 0x1aa5f94) + 0x10) + 0x60
                                      ) + 0x84));
    return (uint)(iVar1 != -1);
  }
  return 0;
}



// ===== FAT.MiniBoardMan$$OnNewItemUnlock RVA 0x1a95fb4 =====

void FUN_01aa5fb4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7a9a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a9a,0);
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
  iVar1 = FUN_01aa4700(param_1);
  if (iVar1 == 0) {
    return;
  }
  func_0x01aa603c(param_1);
  iVar1 = *(int *)(param_1 + 8);
  uVar4 = FUN_01aa5c98(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x4c) = uVar4;
  return;
}



// ===== FAT.MiniBoardMan$$_RefreshSpawnHandlerInfo RVA 0x1a9603c =====

void FUN_01aa603c(int param_1)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x7a9b,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01aa4700(param_1);
    if (iVar1 == 0) {
      return;
    }
    uVar4 = func_0x01aa7140(param_1);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x44);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x7aa2,0,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x7aa2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar4,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,uVar4,0);
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
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ca8b70(iVar1,uVar4,0);
    if (iVar1 == 0) {
      return;
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    func_0x021568f0(param_1,*(undefined4 *)(param_1 + 0x10),uVar2);
    iVar1 = func_0x0229f06c(0x5b3,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar1 = func_0x0229f13c(0x5b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7a9b,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
  return;
}



// ===== FAT.MiniBoardMan$$OnNewItemShow RVA 0x1a960d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa60d8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
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
  
  pcVar4 = (char *)(_UNK_01aa62f4 + 0x1aa60f4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa62f8 + 0x1aa6108));
    func_0x01384978(*(undefined4 *)(_UNK_01aa62fc + 0x1aa6114));
    func_0x01384978(*(undefined4 *)(_UNK_01aa6300 + 0x1aa6120));
    func_0x01384978(*(undefined4 *)(_UNK_01aa6304 + 0x1aa612c));
    func_0x01384978(*(undefined4 *)(_UNK_01aa6308 + 0x1aa6138));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x84da,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84da,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = FUN_01aa4700(param_1);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02116990(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01aa5ee0(param_1,*(undefined4 *)(iVar1 + 0x10));
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01aa630c + 0x1aa61e4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01aa6310 + 0x1aa6200));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar1,param_2,**(undefined4 **)(_UNK_01aa6314 + 0x1aa6224));
      iVar7 = FUN_01aa5920(param_1);
      uVar8 = 0;
      iVar6 = 0;
      iVar1 = 0;
      if (iVar7 != 0) {
        iVar1 = *(int *)(iVar7 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar1 + 0xc);
        iVar1 = 0;
        if (0 < iVar6) {
          puVar10 = *(undefined4 **)(_UNK_01aa6318 + 0x1aa6280);
          iVar9 = 0;
          do {
            iVar5 = *(int *)(iVar7 + 0x20);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            uVar8 = func_0x0364c9b8(iVar5,iVar9,*puVar10);
            iVar2 = FUN_01aa59d4(param_1,uVar8);
            iVar5 = iVar1;
            if (iVar2 != 0) {
              iVar5 = iVar9;
            }
            iVar2 = iVar9 + 1;
            if (iVar1 < iVar9) {
              iVar1 = iVar5;
            }
            iVar9 = iVar2;
          } while (iVar6 != iVar2);
        }
        uVar8 = *(undefined4 *)(iVar7 + 0x18);
      }
      uStack_30 = (uint)(iVar1 + 1 == iVar6);
      uStack_2c = 0;
      func_0x019af0e8(*(undefined4 *)(param_1 + 8),iVar1 + 1,iVar6,uVar8);
    }
  }
  return;
}



// ===== FAT.MiniBoardMan$$CheckMiniBoardOpen RVA 0x1a9631c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aa631c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_01aa6450 + 0x1aa6330);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa6454 + 0x1aa6344));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x84db,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84db,0);
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
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_01aa4700(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01aa6458 + 0x1aa63b0));
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x70);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar5 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar1 = func_0x01eea2b8(iVar1,uVar2,0);
    if (iVar1 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 0;
      if (*(char *)(iVar1 + 0x48) != '\0') {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}



// ===== FAT.MiniBoardMan$$CheckMiniBoardUIOpen RVA 0x1a9645c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01aa645c(int param_1)

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
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_01aa6540 + 0x1aa6470);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa6544 + 0x1aa6484));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x23ab,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x23ab,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = FUN_01aa4700(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01aa6548 + 0x1aa64ec));
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x70);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar5 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01eea3ac + 0x1eea2d4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01eea3b0 + 0x1eea2e8),uVar6,0);
      *pcVar4 = '\x01';
    }
    iStack_14 = 0;
    iVar5 = func_0x0229f06c(0x506,0);
    if (iVar5 == 0) {
      iVar1 = *(int *)(iVar1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x03e220bc(iVar1,uVar6,&iStack_14,**(undefined4 **)(_UNK_01eea3b4 + 0x1eea364));
      iVar1 = iStack_14;
      if (iVar5 == 0) {
        uVar2 = 0;
      }
      else {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01ee3008(iVar1);
        uVar2 = (uint)(iVar1 != 0);
      }
    }
    else {
      iVar5 = func_0x0229f13c(0x506,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x021734d8(iVar5,iVar1,uVar6,0);
    }
    return uVar2;
  }
  return 0;
}



// ===== FAT.MiniBoardMan$$FAT.IUserDataHolder.SetData RVA 0x1a9654c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa654c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01aa66ac + 0x1aa6568);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa66b0 + 0x1aa657c));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x84dc,0);
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
    iVar2 = *(int *)(iVar1 + 0x48);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0xc);
    }
    if ((iVar2 != 0 && iVar1 != 0) &&
       (iVar2 = func_0x03005894(iVar1,0,&iStack_14,**(undefined4 **)(_UNK_01aa66b4 + 0x1aa662c)),
       iVar1 = iStack_14, iVar2 != 0)) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 != 0) {
        func_0x01aa66b8(param_1,*(undefined4 *)(iVar1 + 0x38),0);
        iVar2 = *(int *)(param_1 + 0x10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0214a9e8(iVar2,iVar1,0,0);
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0214d790(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x84dc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MiniBoardMan$$_InitWorld RVA 0x1a966b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa66b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01aa68b0 + 0x1aa66d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa68b4 + 0x1aa66ec));
    func_0x01384978(*(undefined4 *)(_UNK_01aa68b8 + 0x1aa66f8));
    func_0x01384978(*(undefined4 *)(_UNK_01aa68bc + 0x1aa6704));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x84ae,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01aa68c0 + 0x1aa6768));
    func_0x02143488(uVar2,0);
    puVar3 = *(undefined4 **)(_UNK_01aa68c4 + 0x1aa6784);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    uVar2 = func_0x01384be4(*puVar3);
    func_0x0214d6c8(uVar2,0,0,0);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0x4c);
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01aa68c8 + 0x1aa67c8));
    func_0x01db7f44(iVar1,0);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = 1;
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x01db7f4c(iVar5,iVar1,0);
    iVar1 = *(int *)(param_1 + 0x14);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0214e900(iVar1,uVar2,0);
    iVar1 = *(int *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02141f58(iVar1,uVar2,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01db8438(iVar1,uVar2,param_2,param_3,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x84ae,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f950(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MiniBoardMan$$FAT.IUserDataHolder.FillData RVA 0x1a968cc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa68cc(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
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
  
  pcVar5 = (char *)(_UNK_01aa6ac8 + 0x1aa68e4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa6acc + 0x1aa68f8));
    func_0x01384978(*(undefined4 *)(_UNK_01aa6ad0 + 0x1aa6904));
    func_0x01384978(*(undefined4 *)(_UNK_01aa6ad4 + 0x1aa6910));
    func_0x01384978(*(undefined4 *)(_UNK_01aa6ad8 + 0x1aa691c));
    func_0x01384978(*(undefined4 *)(_UNK_01aa6adc + 0x1aa6928));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x84dd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84dd,0);
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
  iVar4 = *(int *)(iVar1 + 0x48);
  if (iVar4 == 0) {
    iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01aa6ae0 + 0x1aa69bc));
    func_0x017a3acc(iVar4,0);
    *(int *)(iVar1 + 0x48) = iVar4;
    if (iVar4 == 0) {
      func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar1 = *(int *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03652bb8(iVar1,**(undefined4 **)(_UNK_01aa6ae4 + 0x1aa69f4));
  iVar4 = FUN_01aa4700(param_1);
  if (iVar4 != 0) {
    iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01aa6ae8 + 0x1aa6a18));
    func_0x017a4224(iVar4,0);
    iVar7 = *(int *)(param_1 + 8);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x02b449f8(iVar7,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_01aa6aec + 0x1aa6a60);
    *(undefined4 *)(iVar4 + 0xc) = uVar6;
    uVar6 = func_0x01384be4(*puVar2);
    FUN_0178d080(uVar6,0);
    iVar7 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(iVar4 + 0x10) = uVar6;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x02147b80(iVar7,uVar6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = **(int **)(_UNK_01aa6af0 + 0x1aa6ab4);
    pcVar5 = (char *)(_UNK_03652bac + 0x3652b1c);
    if (*pcVar5 == '\0') {
      func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
      *pcVar5 = '\x01';
    }
    func_0x03031dbc(iVar4,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
                    *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x80));
    func_0x036529a8(iVar1,*(int *)(iVar1 + 0xc) + 1,
                    *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x3c));
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(uint *)(iVar1 + 0xc);
    *(uint *)(iVar1 + 0xc) = uVar8 + 1;
    if (iVar7 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar8) {
      func_0x02457d5c();
    }
    *(int *)(iVar7 + uVar8 * 4 + 0x10) = iVar4;
    return;
  }
  return;
}



// ===== FAT.MiniBoardMan$$_SendStartRewardToBoard RVA 0x1a96af4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa6af4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
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
  
  pcVar3 = (char *)(_UNK_01aa6d50 + 0x1aa6b0c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa6d54 + 0x1aa6b20));
    func_0x01384978(*(undefined4 *)(_UNK_01aa6d58 + 0x1aa6b2c));
    func_0x01384978(*(undefined4 *)(_UNK_01aa6d5c + 0x1aa6b38));
    func_0x01384978(*(undefined4 *)(_UNK_01aa6d60 + 0x1aa6b44));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x84b0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84b0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
  iVar1 = FUN_01aa4700(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_01aa5920(param_1), iVar1 != 0)) {
    uVar5 = *(undefined4 *)(iVar1 + 0x1c);
    if (*(int *)(**(int **)(_UNK_01aa6d64 + 0x1aa6bc0) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(_UNK_01aa6d64 + 0x1aa6bc0));
    }
    iVar1 = func_0x02565a88(uVar5,0);
    if (iVar1 != 0) {
      iVar4 = func_0x01c24918(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      param_1 = *(int *)(iVar4 + 0x40);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdef00(param_1,uVar5,0,0);
      piVar6 = *(int **)(_UNK_01aa6d68 + 0x1aa6c3c);
      uVar2 = *(undefined4 *)(iVar1 + 8);
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x118);
      if (param_1 == 0) {
        func_0x01384bf0();
        uStack_28 = **(undefined4 **)(_UNK_01aa6d74 + 0x1aa6ce8);
        uStack_24 = **(undefined4 **)(_UNK_01aa6d78 + 0x1aa6cf4);
        uStack_2c = 0x161;
        uStack_20 = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uVar5 = func_0x01cdcbac(0,uVar2,uVar5,uVar7);
        func_0x01384bf0();
        func_0x01cdf088(0,uVar5,0);
        func_0x01384bf0();
      }
      else {
        uStack_28 = **(undefined4 **)(_UNK_01aa6d6c + 0x1aa6c7c);
        uStack_24 = **(undefined4 **)(_UNK_01aa6d70 + 0x1aa6c88);
        uStack_2c = 0x161;
        uStack_20 = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uVar5 = func_0x01cdcbac(param_1,uVar2,uVar5,uVar7);
        func_0x01cdf088(param_1,uVar5,0);
      }
      pcVar3 = (char *)(_UNK_01cdf07c + 0x1cdefe8);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01cdf080 + 0x1cdeffc),0);
        *pcVar3 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x54e,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x036890ec(&stack0xffffffe8,iVar1,**(undefined4 **)(_UNK_01cdf084 + 0x1cdf06c));
        return;
      }
      iVar1 = func_0x0229f13c(0x54e,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02173f80;
    }
  }
  return;
}



// ===== FAT.MiniBoardMan.<>c__DisplayClass36_0$$.ctor RVA 0x1a96d7c =====

void FUN_01aa6d7c(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MiniBoardMan$$_TryCollectReward RVA 0x1a96d84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa6d84(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01aa6fd0 + 0x1aa6da4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa6fd4 + 0x1aa6dbc));
    func_0x01384978(*(undefined4 *)(_UNK_01aa6fd8 + 0x1aa6dc8));
    *pcVar5 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x84cd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84cd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02feb690(param_2,&iStack_24,0,**(undefined4 **)(_UNK_01aa6fdc + 0x1aa6e50));
  if ((((iStack_24 == 0 || iVar1 == 0) || (iVar1 = func_0x0211d748(iStack_24,0), iVar1 != 1)) ||
      (iStack_24 == 0)) || (iVar1 = func_0x0211dc48(iStack_24,0), iVar1 == 0)) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(param_2,&iStack_28,0,**(undefined4 **)(_UNK_01aa6fe0 + 0x1aa6e8c));
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
    func_0x01aa6fe4(param_3,uVar3,1);
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
    func_0x01aa6fe4(param_3,uVar3,1);
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
  func_0x01aa6fe4(param_4,uVar3,uVar4);
  return;
}



// ===== FAT.MiniBoardMan$$<_TryCollectReward>g__Collect|37_0 RVA 0x1a96fe4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa6fe4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01aa7114 + 0x1aa7000);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa7118 + 0x1aa7014));
    func_0x01384978(*(undefined4 *)(_UNK_01aa711c + 0x1aa7020));
    func_0x01384978(*(undefined4 *)(_UNK_01aa7120 + 0x1aa702c));
    func_0x01384978(*(undefined4 *)(_UNK_01aa7124 + 0x1aa7038));
    *pcVar2 = '\x01';
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02450998(0,param_2,**(undefined4 **)(_UNK_01aa7138 + 0x1aa709c));
    func_0x01384bf0();
    if (iVar1 == 0) goto LAB_01aa70f4;
    iVar1 = func_0x0245099c(0,param_2,**(undefined4 **)(_UNK_01aa7130 + 0x1aa70c4));
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02450998(param_1,param_2,**(undefined4 **)(_UNK_01aa7128 + 0x1aa7058));
    if (iVar1 == 0) {
LAB_01aa70f4:
      func_0x03d5a8e0(param_1,param_2,param_3,2,
                      *(undefined4 *)
                       (*(int *)(*(int *)(**(int **)(_UNK_01aa713c + 0x1aa7108) + 0x10) + 0x60) +
                       0x88));
      return;
    }
    iVar1 = func_0x0245099c(param_1,param_2,**(undefined4 **)(_UNK_01aa712c + 0x1aa7078));
  }
  func_0x03d5a8e0(param_1,param_2,iVar1 + param_3,1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(**(int **)(_UNK_01aa7134 + 0x1aa70e8) + 0x10) + 0x60) + 0x88))
  ;
  return;
}



// ===== FAT.MiniBoardMan$$_GetCurDropConfId RVA 0x1a97140 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aa7140(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01aa7290 + 0x1aa7158);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa7294 + 0x1aa716c));
    func_0x01384978(*(undefined4 *)(_UNK_01aa7298 + 0x1aa7178));
    func_0x01384978(*(undefined4 *)(_UNK_01aa729c + 0x1aa7184));
    *pcVar5 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0x7a9c,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01aa5920(param_1);
    uVar3 = 0;
    if (iVar2 != 0) {
      puVar9 = *(undefined4 **)(_UNK_01aa72a0 + 0x1aa7204);
      iVar7 = 0;
      iVar8 = 0;
      while( true ) {
        iVar6 = *(int *)(iVar2 + 0x20);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0xc) <= iVar8) break;
        iVar6 = *(int *)(iVar2 + 0x20);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x0364c9b8(iVar6,iVar8,*puVar9);
        iVar4 = FUN_01aa59d4(param_1,uVar3);
        iVar6 = iVar7;
        if (iVar4 != 0) {
          iVar6 = iVar8;
        }
        iVar4 = iVar8 + 1;
        bVar1 = iVar7 < iVar8;
        iVar8 = iVar4;
        if (bVar1) {
          iVar7 = iVar6;
        }
      }
      func_0x03005740(*(undefined4 *)(iVar2 + 0x24),iVar7,&uStack_24,
                      **(undefined4 **)(_UNK_01aa72a4 + 0x1aa7278));
      uVar3 = uStack_24;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7a9c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0217493c(iVar2,param_1,0);
  }
  return uVar3;
}



// ===== FAT.MiniBoardMan$$Reset RVA 0x1a972a8 =====

void FUN_01aa72a8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x84de,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x84de,0);
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
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.MiniBoardMan$$LoadConfig RVA 0x1a97344 =====

void FUN_01aa7344(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x84df,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x84df,0);
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



// ===== FAT.MiniBoardMan$$Startup RVA 0x1a97390 =====

void FUN_01aa7390(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x84e0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x84e0,0);
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



// ===== FAT.MiniBoardMan$$.ctor RVA 0x1a973dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa73dc(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01aa743c + 0x1aa73f0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aa7440 + 0x1aa7404));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01aa7444 + 0x1aa7418));
  func_0x02b4c90c(uVar1,0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MiniBoardMan.<>c__DisplayClass36_0$$<CollectAllBoardReward>b__0 RVA 0x1a97448 =====

void FUN_01aa7448(int param_1,undefined4 param_2)

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
  FUN_01aa6d84(iVar3,param_2,uVar1,uVar2);
  return;
}



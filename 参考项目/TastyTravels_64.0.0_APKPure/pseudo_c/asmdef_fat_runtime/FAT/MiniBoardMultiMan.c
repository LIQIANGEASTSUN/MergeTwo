/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MiniBoardMultiMan$$get_IsUnlock RVA 0x1aa0a78 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ab0a78(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x8543,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8543,0);
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
      iVar10 = func_0x01cc0400(iVar1,0x36);
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
        iVar10 = func_0x02451990(iVar10,0x36,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
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
          iVar1 = func_0x02451948(iVar1,0x36,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
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
  func_0x0245494c(&uStack_50,0,0x36,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar10 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar1,0);
  func_0x01485238(&uStack_38,0x36,0);
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



// ===== FAT.MiniBoardMultiMan$$SetCurActivity RVA 0x1aa0e78 =====

/* WARNING: Possible PIC construction at 0x01ab9018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01ab9020) */
/* WARNING: Removing unreachable block (ram,0x01ab9028) */
/* WARNING: Removing unreachable block (ram,0x01ab90e4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffac : 0x01419098 */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_01ab0e78(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 extraout_r1;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *extraout_r12;
  undefined1 uVar15;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  iVar1 = func_0x0229f06c(0x8548,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8548,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    iVar1 = func_0x0245495c(iVar10,uVar11,&uStack_38,uVar8,0,0);
    return iVar1;
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  func_0x01ab8ac8(param_1);
  func_0x01ab7fb0(param_1);
  pcVar9 = (char *)(_UNK_01ab927c + 0x1ab8c14);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab9280 + 0x1ab8c28));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9284 + 0x1ab8c34));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9288 + 0x1ab8c40));
    func_0x01384978(*(undefined4 *)(_UNK_01ab928c + 0x1ab8c4c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9290 + 0x1ab8c58));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9294 + 0x1ab8c64));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x854d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x854d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
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
    iVar1 = func_0x0245495c(iVar10,uVar11,&iStack_30,uVar8);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar10 = func_0x01ab4cfc(param_1);
  iVar1 = 0;
  if (iVar10 != 0) {
    iVar1 = *(int *)(iVar10 + 0x18);
  }
  if (iVar10 == 0 || iVar1 == 0) {
    return iVar1;
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01ab9298 + 0x1ab8d04));
  iStack_28 = 0;
  piVar14 = *(int **)(_UNK_01ab929c + 0x1ab8d20);
  piVar12 = *(int **)(_UNK_01ab92a0 + 0x1ab8d28);
  puVar13 = *(undefined4 **)(_UNK_01ab92a4 + 0x1ab8d30);
LAB_01ab8d2c:
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = iStack_28;
    iVar10 = *piVar2;
    iVar4 = *piVar14;
    uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
          goto LAB_01ab8d8c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0);
LAB_01ab8d8c:
    iVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar10 == 0) {
      uStack_2c = 0;
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 == 0) goto LAB_01ab90b0;
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      goto LAB_01ab9098;
    }
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar10 = *piVar2;
    iVar4 = *piVar12;
    uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
          goto LAB_01ab8e00;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0);
LAB_01ab8e00:
    uVar11 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    iVar10 = func_0x01c24918(0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0xc);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = 0;
    iVar10 = func_0x01ca8c9c(iVar10,uVar11,0);
    iStack_28 = iVar1;
    if (iVar10 != 0) {
      iStack_28 = iVar10;
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar10 + 0x24) != 0) {
        piVar6 = (int *)func_0x0364c2b4(*(int *)(iVar10 + 0x24),
                                        **(undefined4 **)(_UNK_01ab92a8 + 0x1ab8e8c));
        do {
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar6;
          iVar10 = *piVar14;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == iVar10) {
                puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01ab8ef0;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar6,iVar10,0);
LAB_01ab8ef0:
          iVar1 = (*(code *)*puVar3)(piVar6,puVar3[1]);
          if (iVar1 == 0) goto LAB_01ab8f88;
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar6;
          iVar10 = *piVar12;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == iVar10) {
                puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01ab8f64;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar6,iVar10,0);
LAB_01ab8f64:
          uVar11 = (*(code *)*puVar3)(piVar6,puVar3[1]);
          func_0x02f622a4(*(undefined4 *)(param_1 + 0x1c),uVar11,*puVar13);
        } while( true );
      }
    }
  } while( true );
LAB_01ab8f88:
  iVar1 = 0;
  if (piVar6 != (int *)0x0) {
    iStack_30 = 0;
    iVar1 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01ab92ac + 0x1ab8fac)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01ab8ffc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01ab92ac + 0x1ab8fac),0);
LAB_01ab8ffc:
    iVar1 = iStack_30;
    (*(code *)*puVar3)(piVar6,puVar3[1]);
  }
  uVar15 = iVar1 == 0;
  if (!(bool)uVar15) {
    piVar2 = (int *)func_0x0145b108(4);
    iVar10 = iRam01419040;
    *piVar2 = iVar1;
    func_0x0145b118(piVar2,(int)&iRam01419040 + iVar10,0);
    if ((bool)uVar15) {
      *extraout_r12 = extraout_r1;
    }
    iVar1 = _UNK_014190a0 + 0x1419088;
    iVar10 = _UNK_014190a4 + 0x141908c;
    uVar11 = func_0x013c37a0();
    func_0x013e4ae4(uVar11,iVar1,iVar10);
    iVar1 = func_0x0140c80c();
    func_0x013d7660();
    return iVar1;
  }
  goto LAB_01ab8d2c;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 2;
    if (uVar5 == 0) break;
LAB_01ab9098:
    if (piVar12[-1] == **(int **)(_UNK_01ab92b4 + 0x1ab9084)) {
      puVar13 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
      goto LAB_01ab90cc;
    }
  }
LAB_01ab90b0:
  puVar13 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ab92b4 + 0x1ab9084),0);
LAB_01ab90cc:
  iVar1 = (*(code *)*puVar13)(piVar2,puVar13[1]);
  return iVar1;
}



// ===== FAT.MiniBoardMultiMan$$InitMiniBoardData RVA 0x1aa0eec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab0eec(int param_1,int param_2)

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
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01ab1004 + 0x1ab0f08);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab1008 + 0x1ab0f1c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x854e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x854e,0);
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
    func_0x01ab1108(param_1,1);
    func_0x01ab6488(param_1,0);
    func_0x01ab6b84(param_1);
    iVar1 = func_0x01ab27ec(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      uVar5 = *(undefined4 *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar1,0);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = *(undefined4 *)(iVar1 + 8);
      }
      uStack_28 = **(undefined4 **)(_UNK_01ab100c + 0x1ab0fe4);
      uStack_20 = 0;
      uStack_24 = uStack_28;
      func_0x019afa2c(uVar5,uVar2,*(int *)(param_1 + 0x18) + 1);
    }
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$ClearMiniBoardData RVA 0x1aa1108 =====

void FUN_01ab1108(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x854f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x854f,0);
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
  return;
}



// ===== FAT.MiniBoardMultiMan$$CollectAllBoardReward RVA 0x1aa1c44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab1c44(int param_1,int param_2)

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
  
  pcVar7 = (char *)(_UNK_01ab217c + 0x1ab1c60);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab2180 + 0x1ab1c74));
    func_0x01384978(*(undefined4 *)(_UNK_01ab2184 + 0x1ab1c80));
    func_0x01384978(*(undefined4 *)(_UNK_01ab2188 + 0x1ab1c8c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab218c + 0x1ab1c98));
    func_0x01384978(*(undefined4 *)(_UNK_01ab2190 + 0x1ab1ca4));
    func_0x01384978(*(undefined4 *)(_UNK_01ab2194 + 0x1ab1cb0));
    func_0x01384978(*(undefined4 *)(_UNK_01ab2198 + 0x1ab1cbc));
    func_0x01384978(*(undefined4 *)(_UNK_01ab219c + 0x1ab1cc8));
    func_0x01384978(*(undefined4 *)(_UNK_01ab21a0 + 0x1ab1cd4));
    func_0x01384978(*(undefined4 *)(_UNK_01ab21a4 + 0x1ab1ce0));
    func_0x01384978(*(undefined4 *)(_UNK_01ab21a8 + 0x1ab1cec));
    func_0x01384978(*(undefined4 *)(_UNK_01ab21ac + 0x1ab1cf8));
    func_0x01384978(*(undefined4 *)(_UNK_01ab21b0 + 0x1ab1d04));
    func_0x01384978(*(undefined4 *)(_UNK_01ab21b4 + 0x1ab1d10));
    func_0x01384978(*(undefined4 *)(_UNK_01ab21b8 + 0x1ab1d1c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab21bc + 0x1ab1d28));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x8572,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ab21c0 + 0x1ab1da4));
    uVar2 = 0;
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 8) = param_1;
    iVar3 = func_0x01ab27ec(param_1);
    if (param_2 != 0 && iVar3 != 0) {
      piVar11 = *(int **)(_UNK_01ab21c4 + 0x1ab1de8);
      iVar3 = *piVar11;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar11;
      }
      iVar3 = **(int **)(iVar3 + 0x5c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      puVar8 = *(undefined4 **)(_UNK_01ab21c8 + 0x1ab1e20);
      uVar2 = func_0x0359c52c(iVar3,*puVar8);
      iVar3 = **(int **)(*piVar11 + 0x5c);
      *(undefined4 *)(iVar1 + 0xc) = uVar2;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0359c52c(iVar3,*puVar8);
      iVar3 = *(int *)(param_1 + 0x10);
      puVar8 = *(undefined4 **)(_UNK_01ab21cc + 0x1ab1e60);
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
      uVar2 = func_0x01384be4(*puVar8);
      func_0x02450194(uVar2,iVar1,**(undefined4 **)(_UNK_01ab21d0 + 0x1ab1e84),0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x021475dc(iVar3,uVar2,5,0);
      iVar3 = *(int *)(iVar1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_58,iVar3,**(undefined4 **)(_UNK_01ab21d4 + 0x1ab1ed8));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      piVar11 = *(int **)(_UNK_01ab21d8 + 0x1ab1f04);
      while (iVar3 = func_0x01475638(&uStack_40,**(undefined4 **)(_UNK_01ab21e8 + 0x1ab1f0c)),
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
        uVar2 = func_0x01cdcbac(iVar3,uVar2,uVar5,uVar9,0,0,0,0x1ac,
                                **(undefined4 **)(_UNK_01ab21dc + 0x1ab1f74),
                                **(undefined4 **)(_UNK_01ab21e0 + 0x1ab1f80),0);
        iVar3 = *(int *)(param_2 + 8);
        uVar10 = *(uint *)(param_2 + 0xc);
        piVar6 = *(int **)(_UNK_01ab21e4 + 0x1ab1fd4);
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
      func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01ab21ec + 0x1ab2028));
      uVar2 = *(undefined4 *)(param_1 + 8);
      piVar11 = *(int **)(_UNK_01ab21f4 + 0x1ab204c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x01ab6e0c(*(undefined4 *)(iVar1 + 0xc));
      func_0x019af738(uVar2,uVar5,0);
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
      puVar8 = *(undefined4 **)(_UNK_01ab21f8 + 0x1ab20ac);
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
    iVar1 = func_0x0229f13c(0x8572,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.MiniBoardMultiMan$$EnterMiniBoard RVA 0x1aa2388 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab2388(int param_1)

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
  
  pcVar4 = (char *)(_UNK_01ab2630 + 0x1ab239c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab2634 + 0x1ab23b0));
    func_0x01384978(*(undefined4 *)(_UNK_01ab2638 + 0x1ab23bc));
    func_0x01384978(*(undefined4 *)(_UNK_01ab263c + 0x1ab23c8));
    func_0x01384978(*(undefined4 *)(_UNK_01ab2640 + 0x1ab23d4));
    func_0x01384978(*(undefined4 *)(_UNK_01ab2644 + 0x1ab23e0));
    func_0x01384978(*(undefined4 *)(_UNK_01ab2648 + 0x1ab23ec));
    func_0x01384978(*(undefined4 *)(_UNK_01ab264c + 0x1ab23f8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x857a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x857a,0);
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
  iVar1 = func_0x01ab27ec(param_1);
  if (iVar1 != 0) {
    puVar8 = *(undefined4 **)(_UNK_01ab2650 + 0x1ab2460);
    iVar1 = func_0x034aaa34(*puVar8);
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x7c);
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
      piVar6 = *(int **)(_UNK_01ab2654 + 0x1ab24cc);
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
      **(undefined1 **)(**(int **)(_UNK_01ab2658 + 0x1ab2514) + 0x5c) = (char)iVar1;
      if (iVar1 != 0) {
        if (*(int *)(**(int **)(_UNK_01ab265c + 0x1ab252c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ab2660 + 0x1ab2548));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0349da44(iVar1,0,**(undefined4 **)(_UNK_01ab2664 + 0x1ab256c));
      }
      iVar1 = func_0x034aaa34(*puVar8);
      iVar5 = *(int *)(param_1 + 8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x7c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar5 + 0xc);
      piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ab2668 + 0x1ab25b0),1);
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



// ===== FAT.MiniBoardMultiMan$$get_IsValid RVA 0x1aa27ec =====

undefined4 FUN_01ab27ec(int param_1)

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
  iVar1 = func_0x0229f06c(0x358,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x358,0);
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



// ===== FAT.MiniBoardMultiMan$$get_CurActivity RVA 0x1aa4c70 =====

undefined4 FUN_01ab4c70(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.MiniBoardMultiMan$$set_CurActivity RVA 0x1aa4c78 =====

void FUN_01ab4c78(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MiniBoardMultiMan$$get_World RVA 0x1aa4c80 =====

undefined4 FUN_01ab4c80(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.MiniBoardMultiMan$$set_World RVA 0x1aa4c88 =====

void FUN_01ab4c88(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.MiniBoardMultiMan$$get_WorldTracer RVA 0x1aa4c90 =====

undefined4 FUN_01ab4c90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.MiniBoardMultiMan$$set_WorldTracer RVA 0x1aa4c98 =====

void FUN_01ab4c98(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



// ===== FAT.MiniBoardMultiMan$$DebugResetMiniBoard RVA 0x1aa4ca0 =====

void FUN_01ab4ca0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x8588,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8588,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
    return;
  }
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar1 = func_0x0229f06c(0x854f,0);
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
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbc0ec(iVar1,uVar4,0);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  iVar1 = func_0x0229f13c(0x854f,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_1c = uStack_14;
  uStack_20 = uStack_18;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,1,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485228(&uStack_38,1,0);
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



// ===== FAT.MiniBoardMultiMan$$GetCurGroupConfig RVA 0x1aa4cfc =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab4cfc(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x35d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x35d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02185d74 + 0x2185c94);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02185d78 + 0x2185ca8),param_1,0);
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
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02185d7c + 0x2185d64));
    return uVar9;
  }
  if (*(int *)(param_1 + 8) != 0) {
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
    iVar7 = func_0x0229f06c(0x35f,0,0);
    if (iVar7 != 0) {
      iVar7 = func_0x0229f13c(0x35f,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      pcVar8 = (char *)(_UNK_02185c6c + 0x2185b78);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02185c70 + 0x2185b8c),iVar2,uVar9,0);
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
      uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02185c74 + 0x2185c5c));
      return uVar9;
    }
    pcVar8 = (char *)(_UNK_017fee04 + 0x17feda8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017fee08 + 0x17fedbc),0);
      func_0x01384978(*(undefined4 *)(_UNK_017fee0c + 0x17fedc8));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017fee10 + 0x17feddc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017fee14 + 0x17fedf8);
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



// ===== FAT.MiniBoardMultiMan$$GetCurInfoConfig RVA 0x1aa4dac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab4dac(int param_1)

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
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x35b,0);
  if (iVar1 == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    pcVar4 = (char *)(_UNK_01ab4f18 + 0x1ab4e24);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ab4f1c + 0x1ab4e38));
      *pcVar4 = '\x01';
    }
    uVar2 = 0;
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0x35c,0);
    if (iVar1 == 0) {
      iVar3 = FUN_01ab4cfc(param_1);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0x18);
      }
      if ((iVar3 != 0 && iVar1 != 0) &&
         (iVar1 = func_0x03005740(iVar1,uVar5,&uStack_14,
                                  **(undefined4 **)(_UNK_01ab4f20 + 0x1ab4ec8)), iVar1 != 0)) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar5 = uStack_14;
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x01ca8c9c(iVar1,uVar5,0);
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x35c,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x02185d80(iVar1,param_1,uVar5,0);
    }
    return uVar2;
  }
  iVar1 = func_0x0229f13c(0x35b,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_02185f9c + 0x2185ebc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02185fa0 + 0x2185ed0),param_1,0);
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02185fa4 + 0x2185f8c));
  return uVar5;
}



// ===== FAT.MiniBoardMultiMan$$GetTargetIndexInfoConfig RVA 0x1aa4e08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab4e08(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01ab4f18 + 0x1ab4e24);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab4f1c + 0x1ab4e38));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x35c,0);
  if (iVar1 == 0) {
    iVar2 = FUN_01ab4cfc(param_1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x18);
    }
    if ((iVar2 != 0 && iVar1 != 0) &&
       (iVar1 = func_0x03005740(iVar1,param_2,&uStack_14,
                                **(undefined4 **)(_UNK_01ab4f20 + 0x1ab4ec8)), iVar1 != 0)) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = uStack_14;
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x01ca8c9c(iVar1,uVar4,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x35c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x02185d80(iVar1,param_1,param_2,0);
  }
  return uVar4;
}



// ===== FAT.MiniBoardMultiMan$$CheckHasNextBoard RVA 0x1aa4f24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab4f24(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01ab4fd4 + 0x1ab4f38);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab4fd8 + 0x1ab4f4c));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5f13,0);
  if (iVar1 == 0) {
    iVar5 = FUN_01ab4cfc(param_1);
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0x18);
    }
    if ((iVar5 != 0 && iVar1 != 0) &&
       (uVar4 = 0, *(int *)(param_1 + 0x18) + 1 < *(int *)(iVar1 + 0xc))) {
      uVar4 = 1;
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x5f13,0);
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



// ===== FAT.MiniBoardMultiMan$$CheckIsLastBoard RVA 0x1aa4fdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ab4fdc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
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
  
  pcVar3 = (char *)(_UNK_01ab5088 + 0x1ab4ff0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab508c + 0x1ab5004));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x8589,0);
  if (iVar1 == 0) {
    iVar5 = FUN_01ab4cfc(param_1);
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0x18);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar4 = (uint)(*(int *)(param_1 + 0x18) - *(int *)(iVar1 + 0xc) == -1);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x8589,0);
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
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.MiniBoardMultiMan$$IsItemUnlock RVA 0x1aa5090 =====

/* WARNING: Possible PIC construction at 0x01cc4568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc456c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ab5090(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x7aa9,0);
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
    iVar1 = func_0x0229f13c(0x7aa9,0);
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



// ===== FAT.MiniBoardMultiMan$$CheckIsShowRedPoint RVA 0x1aa5120 =====

undefined4 FUN_01ab5120(int param_1,undefined4 *param_2)

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
  iVar1 = func_0x0229f06c(0x858a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x858a,0);
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
  iVar1 = FUN_01ab27ec(param_1);
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



// ===== FAT.MiniBoardMultiMan$$GetCurRoundIndex RVA 0x1aa51b8 =====

undefined4 FUN_01ab51b8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x858b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x858b,0);
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



// ===== FAT.MiniBoardMultiMan$$ExitMiniBoard RVA 0x1aa520c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab520c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_01ab5474 + 0x1ab522c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab5478 + 0x1ab5240));
    func_0x01384978(*(undefined4 *)(_UNK_01ab547c + 0x1ab524c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab5480 + 0x1ab5258));
    func_0x01384978(*(undefined4 *)(_UNK_01ab5484 + 0x1ab5264));
    func_0x01384978(*(undefined4 *)(_UNK_01ab5488 + 0x1ab5270));
    func_0x01384978(*(undefined4 *)(_UNK_01ab548c + 0x1ab527c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab5490 + 0x1ab5288));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x858c,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      puVar8 = *(undefined4 **)(_UNK_01ab5494 + 0x1ab52f4);
      iVar1 = func_0x034aaa34(*puVar8);
      iVar2 = *(int *)(param_2 + 0x7c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01eea2b8(iVar1,uVar7,0);
      if (iVar1 != 0) {
        iVar1 = func_0x034aaa34(*puVar8);
        iVar2 = *(int *)(param_2 + 0x7c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar7 = *(undefined4 *)(iVar2 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01ee40f0(iVar1,uVar7,0);
        if (**(char **)(**(int **)(_UNK_01ab5498 + 0x1ab537c) + 0x5c) != '\0' || param_3 != 0) {
          iVar1 = func_0x034aaa34(*puVar8);
          piVar3 = *(int **)(_UNK_01ab549c + 0x1ab53a4);
          iVar2 = *piVar3;
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar3;
          }
          uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x3c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01eea2b8(iVar1,uVar7,0);
          if (iVar1 != 0) {
            if (*(int *)(**(int **)(_UNK_01ab54a4 + 0x1ab53f0) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ab54a8 + 0x1ab540c));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 8);
            if (iVar1 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x0349da5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar1 + 0xc))
                      (*(undefined4 *)(iVar1 + 0x20),1,*(undefined4 *)(iVar1 + 0x14));
            return;
          }
          if (*(int *)(**(int **)(_UNK_01ab54a0 + 0x1ab5454) + 0x74) == 0) {
            func_0x01384ab4();
          }
          pcVar6 = (char *)(_UNK_01c3a2a8 + 0x1c3a018);
          if (*pcVar6 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01c3a2ac + 0x1c3a02c));
            func_0x01384978(*(undefined4 *)(_UNK_01c3a2b0 + 0x1c3a038));
            func_0x01384978(*(undefined4 *)(_UNK_01c3a2b4 + 0x1c3a044));
            func_0x01384978(*(undefined4 *)(_UNK_01c3a2b8 + 0x1c3a050));
            func_0x01384978(*(undefined4 *)(_UNK_01c3a2bc + 0x1c3a05c));
            *pcVar6 = '\x01';
          }
          iVar1 = func_0x0229f06c(0x15da,0);
          if (iVar1 != 0) {
            iVar1 = func_0x0229f13c(0x15da,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uVar7 = 0;
            uStack_30 = 0;
            func_0x0245494c(&uStack_48,0);
            uStack_30 = uStack_48;
            uStack_2c = uStack_44;
            uStack_28 = uStack_40;
            uStack_24 = uStack_3c;
            if (*(int *)(iVar1 + 0x10) != 0) {
              func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
              uVar7 = 0;
              if (*(int *)(iVar1 + 0x10) != 0) {
                uVar7 = 1;
              }
            }
            iVar2 = *(int *)(iVar1 + 8);
            uVar5 = *(undefined4 *)(iVar1 + 0xc);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x0245495c(iVar2,uVar5,&uStack_30,uVar7,0,0);
            return;
          }
          iVar1 = func_0x01c24918();
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x4c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01dbb000(iVar1,0);
          if (iVar1 != 0) {
            iVar1 = func_0x01c24918();
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
            iVar1 = func_0x02139cf4(iVar1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            if (*(char *)(iVar1 + 0xa0) != '\0') {
              return;
            }
          }
          iVar1 = func_0x01c24918();
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xe4);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01d7644c(iVar1,0);
          piVar3 = *(int **)(_UNK_01c3a2c0 + 0x1c3a180);
          iVar1 = *piVar3;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar3;
          }
          iVar4 = **(int **)(_UNK_01c3a2c4 + 0x1c3a1a0);
          iVar2 = *(int *)(iVar4 + 0x1c);
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x3c);
          if (iVar2 == 0) {
            func_0x0140024c(iVar4);
            iVar2 = *(int *)(iVar4 + 0x1c);
          }
          iVar2 = *(int *)(iVar2 + 8);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x014001f0();
          }
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar2 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x014001f0();
          }
          uVar7 = **(undefined4 **)(iVar2 + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01ef58d8(iVar1,uVar7,0);
          iVar1 = func_0x01c24918();
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01bf3284(iVar1,**(undefined4 **)(_UNK_01c3a2c8 + 0x1c3a254),0);
          if (*(int *)(**(int **)(_UNK_01c3a2cc + 0x1c3a268) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01c3a2d0 + 0x1c3a284));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0229f06c(0x3f,0);
          if (iVar2 != 0) {
            iVar2 = func_0x0229f13c(0x3f,0);
            if (iVar2 == 0) {
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
            if (*(int *)(iVar2 + 0x10) != 0) {
              func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
            }
            func_0x01485278(&uStack_30,iVar1,0);
            iVar4 = *(int *)(iVar2 + 8);
            uVar7 = *(undefined4 *)(iVar2 + 0xc);
            iVar1 = *(int *)(iVar2 + 0x10);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uVar5 = 2;
            if (iVar1 == 0) {
              uVar5 = 1;
            }
            func_0x0245495c(iVar4,uVar7,&uStack_30,uVar5,0,0);
            return;
          }
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
            return;
          }
          return;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x858c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02175630(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$CheckCanEnterNextRound RVA 0x1aa54b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ab54b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
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
  
  pcVar3 = (char *)(_UNK_01ab55d4 + 0x1ab54c8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab55d8 + 0x1ab54dc));
    func_0x01384978(*(undefined4 *)(_UNK_01ab55dc + 0x1ab54e8));
    func_0x01384978(*(undefined4 *)(_UNK_01ab55e0 + 0x1ab54f4));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5f12,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01ab27ec(param_1);
    if (iVar1 != 0) {
      iVar5 = FUN_01ab4dac(param_1);
      iVar1 = 0;
      if (iVar5 != 0) {
        iVar1 = *(int *)(iVar5 + 0x24);
      }
      if (iVar5 != 0 && iVar1 != 0) {
        uVar4 = 0;
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
          uVar4 = (uint)(iVar1 + -1 <= *(int *)(iVar5 + 0x4c));
        }
      }
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x5f12,0);
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
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.MiniBoardMultiMan$$TryOpenUIEnterNextRoundTips RVA 0x1aa55e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab55e8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  pcVar4 = (char *)(_UNK_01ab5880 + 0x1ab55fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab5884 + 0x1ab5610));
    func_0x01384978(*(undefined4 *)(_UNK_01ab5888 + 0x1ab561c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab588c + 0x1ab5628));
    func_0x01384978(*(undefined4 *)(_UNK_01ab5890 + 0x1ab5634));
    func_0x01384978(*(undefined4 *)(_UNK_01ab5894 + 0x1ab5640));
    func_0x01384978(*(undefined4 *)(_UNK_01ab5898 + 0x1ab564c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab589c + 0x1ab5658));
    func_0x01384978(*(undefined4 *)(_UNK_01ab58a0 + 0x1ab5664));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f11,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01ab54b0(param_1);
    if ((iVar1 != 0) && (iVar1 = FUN_01ab4f24(param_1), iVar1 != 0)) {
      iVar1 = FUN_01ab4e08(param_1,*(int *)(param_1 + 0x18) + 1);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ab58ac + 0x1ab56f4));
      func_0x024509b4(iVar1,**(undefined4 **)(_UNK_01ab58b0 + 0x1ab5708));
      func_0x01ab58c8(param_1,iVar1);
      iVar6 = func_0x034aaa34(**(undefined4 **)(_UNK_01ab58b4 + 0x1ab5728));
      iVar5 = *(int *)(param_1 + 8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x84);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar5 + 0xc);
      piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ab58b8 + 0x1ab5760),1);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if (piVar2[3] == 0) {
        func_0x01384bf4();
      }
      piVar2[4] = iVar1;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar6,uVar7,piVar2,0);
      if (*(int *)(**(int **)(_UNK_01ab58bc + 0x1ab57e4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar6 = func_0x0300d558(**(undefined4 **)(_UNK_01ab58c0 + 0x1ab5800));
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 8);
      if (iVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar6 + 0xc))
                  (*(undefined4 *)(iVar6 + 0x20),iVar1,*(undefined4 *)(iVar6 + 0x14));
        return;
      }
      return;
    }
    if (*(int *)(**(int **)(_UNK_01ab58a4 + 0x1ab583c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01ab58a8 + 0x1ab5858));
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
    iVar1 = func_0x0229f13c(0x5f11,0);
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
  return;
}



// ===== FAT.MiniBoardMultiMan$$_CollectInheritItem RVA 0x1aa58c8 =====

/* WARNING: Removing unreachable block (ram,0x021476c8) */
/* WARNING: Removing unreachable block (ram,0x021476d4) */
/* WARNING: Removing unreachable block (ram,0x021476d8) */
/* WARNING: Removing unreachable block (ram,0x021476f0) */
/* WARNING: Removing unreachable block (ram,0x021476fc) */
/* WARNING: Removing unreachable block (ram,0x02147700) */
/* WARNING: Removing unreachable block (ram,0x02147724) */
/* WARNING: Removing unreachable block (ram,0x02147738) */
/* WARNING: Removing unreachable block (ram,0x02147740) */
/* WARNING: Removing unreachable block (ram,0x02147758) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab58c8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
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
  
  pcVar5 = (char *)(_UNK_01ab5a28 + 0x1ab58e0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab5a2c + 0x1ab58f4));
    func_0x01384978(*(undefined4 *)(_UNK_01ab5a30 + 0x1ab5900));
    func_0x01384978(*(undefined4 *)(_UNK_01ab5a34 + 0x1ab590c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f14,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f14,0);
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ab5a38 + 0x1ab5968));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  iVar2 = FUN_01ab27ec(param_1);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar1 + 0xc);
  }
  if (iVar2 != 0 && iVar4 != 0) {
    iVar4 = FUN_01ab4dac(param_1);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
      return;
    }
    iVar4 = *(int *)(iVar4 + 0x2c);
    *(int *)(iVar1 + 8) = iVar4;
    if (iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 0x10);
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ab5a3c + 0x1ab59d0));
      func_0x02450194(uVar6,iVar1,**(undefined4 **)(_UNK_01ab5a40 + 0x1ab59f0),0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      pcVar5 = (char *)(_UNK_021477f8 + 0x21475fc);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_021477fc + 0x2147610),uVar6,1,0);
        func_0x01384978(*(undefined4 *)(_UNK_02147800 + 0x214761c));
        func_0x01384978(*(undefined4 *)(_UNK_02147804 + 0x2147628));
        func_0x01384978(*(undefined4 *)(_UNK_02147808 + 0x2147634));
        *pcVar5 = '\x01';
      }
      uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_28 = 0;
      iVar1 = func_0x0229f06c(0xf44,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar4 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x020dba14(iVar1,uVar6,0);
      }
      else {
        iVar1 = func_0x0229f13c(0xf44,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = 0;
        func_0x021b6430(iVar1,iVar4,uVar6,1);
      }
      return;
    }
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$TryEnterNextRound RVA 0x1aa5a44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab5a44(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  pcVar3 = (char *)(_UNK_01ab5bc8 + 0x1ab5a64);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab5bcc + 0x1ab5a7c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab5bd0 + 0x1ab5a88));
    *pcVar3 = '\x01';
  }
  uVar7 = 0;
  iVar1 = func_0x0229f06c(0x858d,0);
  if (iVar1 == 0) {
    puVar6 = *(undefined4 **)(_UNK_01ab5bd4 + 0x1ab5af4);
    uVar2 = func_0x01384be4(*puVar6);
    puVar4 = *(undefined4 **)(_UNK_01ab5bd8 + 0x1ab5b08);
    func_0x024509b4(uVar2,*puVar4);
    *param_2 = uVar2;
    uVar2 = func_0x01384be4(*puVar6);
    func_0x024509b4(uVar2,*puVar4);
    *param_3 = uVar2;
    uVar2 = func_0x01384be4(*puVar6);
    func_0x024509b4(uVar2,*puVar4);
    *param_4 = uVar2;
    iVar1 = FUN_01ab54b0(param_1);
    if ((iVar1 != 0) && (iVar1 = FUN_01ab4f24(param_1), iVar1 != 0)) {
      iVar5 = *(int *)(param_1 + 0x18) + 1;
      iVar1 = FUN_01ab4e08(param_1,iVar5);
      if (iVar1 != 0) {
        func_0x01ab5bdc(param_1,*param_2);
        FUN_01ab58c8(param_1,*param_3);
        func_0x01ab6338(param_1,*param_4);
        FUN_01ab1108(param_1,0);
        func_0x01ab6488(param_1,iVar5);
        uVar7 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x858d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0225a888(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar7;
}



// ===== FAT.MiniBoardMultiMan$$_ClaimBonusItem RVA 0x1aa5bdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab5bdc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01ab62a4 + 0x1ab5bf8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab62a8 + 0x1ab5c0c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab62ac + 0x1ab5c18));
    func_0x01384978(*(undefined4 *)(_UNK_01ab62b0 + 0x1ab5c24));
    func_0x01384978(*(undefined4 *)(_UNK_01ab62b4 + 0x1ab5c30));
    func_0x01384978(*(undefined4 *)(_UNK_01ab62b8 + 0x1ab5c3c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab62bc + 0x1ab5c48));
    func_0x01384978(*(undefined4 *)(_UNK_01ab62c0 + 0x1ab5c54));
    func_0x01384978(*(undefined4 *)(_UNK_01ab62c4 + 0x1ab5c60));
    func_0x01384978(*(undefined4 *)(_UNK_01ab62c8 + 0x1ab5c6c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab62cc + 0x1ab5c78));
    func_0x01384978(*(undefined4 *)(_UNK_01ab62d0 + 0x1ab5c84));
    func_0x01384978(*(undefined4 *)(_UNK_01ab62d4 + 0x1ab5c90));
    func_0x01384978(*(undefined4 *)(_UNK_01ab62d8 + 0x1ab5c9c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab62dc + 0x1ab5ca8));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x858e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ab62e0 + 0x1ab5d10));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    iVar2 = FUN_01ab27ec(param_1);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar1 + 0xc);
    }
    if (iVar2 != 0 && iVar3 != 0) {
      piVar7 = *(int **)(_UNK_01ab62e4 + 0x1ab5d5c);
      iVar3 = *piVar7;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar7;
      }
      iVar3 = **(int **)(iVar3 + 0x5c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      puVar6 = *(undefined4 **)(_UNK_01ab62e8 + 0x1ab5d94);
      uVar4 = func_0x0359c52c(iVar3,*puVar6);
      iVar3 = **(int **)(*piVar7 + 0x5c);
      *(undefined4 *)(iVar1 + 8) = uVar4;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0359c52c(iVar3,*puVar6);
      iVar3 = *(int *)(param_1 + 0x10);
      puVar6 = *(undefined4 **)(_UNK_01ab62ec + 0x1ab5dd0);
      *(undefined4 *)(iVar1 + 0x10) = uVar4;
      uVar4 = func_0x01384be4(*puVar6);
      func_0x02450194(uVar4,iVar1,**(undefined4 **)(_UNK_01ab62f0 + 0x1ab5df4),0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x021475dc(iVar3,uVar4,1,0);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        puVar6 = *(undefined4 **)(_UNK_01ab62f4 + 0x1ab5e44);
        iVar3 = *(int *)(param_1 + 0x10);
        uVar4 = func_0x01384be4(*puVar6);
        puVar8 = *(undefined4 **)(_UNK_01ab62f8 + 0x1ab5e64);
        func_0x02450194(uVar4,param_1,*puVar8,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x02140da0(iVar3,uVar4,0);
        iVar3 = *(int *)(iVar1 + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_48,iVar3,**(undefined4 **)(_UNK_01ab62fc + 0x1ab5ea8));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar9 = *(undefined4 **)(_UNK_01ab6300 + 0x1ab5ec4);
        while (iVar3 = func_0x0145b12c(&uStack_38,*puVar9), uVar4 = uStack_2c, iVar3 != 0) {
          iVar3 = *(int *)(param_1 + 0x10);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x021463e8(iVar3,uVar4,0);
        }
        func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01ab6304 + 0x1ab5f08));
        iVar3 = *(int *)(param_1 + 0x10);
        uVar4 = func_0x01384be4(*puVar6);
        func_0x02450194(uVar4,param_1,*puVar8,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x02140e50(iVar3,uVar4,0);
        piVar7 = *(int **)(_UNK_01ab630c + 0x1ab5f5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar1 + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar3 + 0xc);
        *(undefined4 *)(iVar3 + 0xc) = 0;
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        if (0 < iVar2) {
          func_0x0145b1dc(*(undefined4 *)(iVar3 + 8),0,iVar2,0);
        }
      }
      iVar3 = *(int *)(iVar1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        iVar3 = *(int *)(param_1 + 0x10);
        uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01ab6310 + 0x1ab5fc8));
        puVar6 = *(undefined4 **)(_UNK_01ab6314 + 0x1ab5fe8);
        func_0x02450194(uVar4,param_1,*puVar6,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x02140f00(iVar3,uVar4,0);
        iVar3 = *(int *)(iVar1 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_48,iVar3,**(undefined4 **)(_UNK_01ab6318 + 0x1ab602c));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar8 = *(undefined4 **)(_UNK_01ab631c + 0x1ab6048);
        while (iVar3 = func_0x0145b12c(&uStack_38,*puVar8), uVar4 = uStack_2c, iVar3 != 0) {
          iVar3 = *(int *)(param_1 + 0x10);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x02146998(iVar3,uVar4,0);
        }
        func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01ab6324 + 0x1ab608c));
        iVar3 = *(int *)(param_1 + 0x10);
        uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01ab632c + 0x1ab60a0));
        func_0x02450194(uVar4,param_1,*puVar6,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x02140fb0(iVar3,uVar4,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar1 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar3 + 0xc);
        *(undefined4 *)(iVar3 + 0xc) = 0;
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        if (0 < iVar2) {
          func_0x0145b1dc(*(undefined4 *)(iVar3 + 8),0,iVar2,0);
        }
      }
      iVar3 = *piVar7;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar7;
      }
      uVar4 = *(undefined4 *)(iVar1 + 8);
      iVar3 = **(int **)(iVar3 + 0x5c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      puVar6 = *(undefined4 **)(_UNK_01ab6330 + 0x1ab6168);
      func_0x0359c65c(iVar3,uVar4,*puVar6);
      uVar4 = *(undefined4 *)(iVar1 + 0x10);
      iVar1 = **(int **)(*piVar7 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c65c(iVar1,uVar4,*puVar6);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x858e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$_CollectGiftBoxItem RVA 0x1aa6338 =====

/* WARNING: Removing unreachable block (ram,0x021476a0) */
/* WARNING: Removing unreachable block (ram,0x021476ac) */
/* WARNING: Removing unreachable block (ram,0x021476b0) */
/* WARNING: Removing unreachable block (ram,0x021476c8) */
/* WARNING: Removing unreachable block (ram,0x021476d4) */
/* WARNING: Removing unreachable block (ram,0x021476d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab6338(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01ab646c + 0x1ab6350);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab6470 + 0x1ab6364));
    func_0x01384978(*(undefined4 *)(_UNK_01ab6474 + 0x1ab6370));
    func_0x01384978(*(undefined4 *)(_UNK_01ab6478 + 0x1ab637c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8593,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8593,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ab647c + 0x1ab63d8));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  iVar2 = FUN_01ab27ec(param_1);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
  }
  if (iVar2 != 0 && iVar4 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01ab6480 + 0x1ab6420));
    func_0x02450194(iVar4,iVar1,**(undefined4 **)(_UNK_01ab6484 + 0x1ab6440),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021477f8 + 0x21475fc);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021477fc + 0x2147610),iVar4,4,0);
      func_0x01384978(*(undefined4 *)(_UNK_02147800 + 0x214761c));
      func_0x01384978(*(undefined4 *)(_UNK_02147804 + 0x2147628));
      func_0x01384978(*(undefined4 *)(_UNK_02147808 + 0x2147634));
      *pcVar5 = '\x01';
    }
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_28 = 0;
    iVar1 = func_0x0229f06c(0xf44,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar2 + 0x68);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_28,iVar1,**(undefined4 **)(_UNK_0214780c + 0x2147714));
      puVar6 = *(undefined4 **)(_UNK_02147810 + 0x2147728);
      while (iVar1 = func_0x03f5f428(&uStack_28,*puVar6), iVar1 != 0) {
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 0xc))
                    (*(undefined4 *)(iVar4 + 0x20),uStack_1c,*(undefined4 *)(iVar4 + 0x14));
        }
      }
      func_0x03f5f424(&uStack_28,**(undefined4 **)(_UNK_02147814 + 0x2147764));
    }
    else {
      iVar1 = func_0x0229f13c(0xf44,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_30 = 0;
      func_0x021b6430(iVar1,iVar2,iVar4,4);
    }
    return;
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$_InitMiniBoardDataByIndex RVA 0x1aa6488 =====

void FUN_01ab6488(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x8552,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8552,0);
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = FUN_01ab4e08(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  func_0x01ab8694(param_1,param_2);
  func_0x01ab86f0(param_1,*(undefined4 *)(iVar1 + 0x14),1);
  func_0x01ab7fb0(param_1);
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



// ===== FAT.MiniBoardMultiMan$$SendRewardToCurBoard RVA 0x1aa653c =====

void FUN_01ab653c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = func_0x0229f06c(0x8596,0);
  if (iVar1 == 0) {
    func_0x01ab666c(param_1,param_3,param_4);
    func_0x01ab6b84(param_1);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 0;
    func_0x01e2d040(iVar1,1,0);
    iVar1 = *(int *)(param_1 + 0x10);
    uVar6 = *(undefined4 *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    iVar5 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      uVar7 = *(undefined4 *)(iVar1 + 8);
    }
    uVar2 = func_0x01ab6e0c(param_2);
    uVar3 = func_0x01ab6e0c(param_3);
    uVar4 = func_0x01ab6e0c(param_4);
    func_0x019afa2c(uVar6,uVar7,iVar5 + 1,uVar2,uVar3,uVar4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8596,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$_SendInheritRewardToBoard RVA 0x1aa666c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab666c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar4 = (char *)(_UNK_01ab6b20 + 0x1ab668c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab6b24 + 0x1ab66a0));
    func_0x01384978(*(undefined4 *)(_UNK_01ab6b28 + 0x1ab66ac));
    func_0x01384978(*(undefined4 *)(_UNK_01ab6b2c + 0x1ab66b8));
    func_0x01384978(*(undefined4 *)(_UNK_01ab6b30 + 0x1ab66c4));
    func_0x01384978(*(undefined4 *)(_UNK_01ab6b34 + 0x1ab66d0));
    func_0x01384978(*(undefined4 *)(_UNK_01ab6b38 + 0x1ab66dc));
    func_0x01384978(*(undefined4 *)(_UNK_01ab6b3c + 0x1ab66e8));
    func_0x01384978(*(undefined4 *)(_UNK_01ab6b40 + 0x1ab66f4));
    func_0x01384978(*(undefined4 *)(_UNK_01ab6b44 + 0x1ab6700));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x8597,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01ab27ec(param_1);
    if (iVar2 != 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      iVar2 = *(int *)(iVar2 + 0x40);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdef00(iVar2,uVar5,0,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_58,param_2,**(undefined4 **)(_UNK_01ab6b48 + 0x1ab67ec));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      piVar7 = *(int **)(_UNK_01ab6b4c + 0x1ab681c);
      while (iVar3 = func_0x01475638(&uStack_40,**(undefined4 **)(_UNK_01ab6b58 + 0x1ab6824)),
            uVar5 = uStack_34, iVar3 != 0) {
        iVar3 = *piVar7;
        uVar1 = (undefined4)uStack_30;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x128);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x01cdcbac(iVar2,uVar5,uVar1,uVar6,0,0,0,0x298,
                                **(undefined4 **)(_UNK_01ab6b50 + 0x1ab6870),
                                **(undefined4 **)(_UNK_01ab6b54 + 0x1ab687c),0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdf088(iVar2,uVar5,0);
      }
      func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01ab6b5c + 0x1ab68d8));
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_58,param_3,**(undefined4 **)(_UNK_01ab6b64 + 0x1ab6904));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      while (iVar3 = func_0x01475638(&uStack_40,**(undefined4 **)(_UNK_01ab6b74 + 0x1ab6934)),
            uVar5 = uStack_34, iVar3 != 0) {
        iVar3 = *piVar7;
        uVar1 = (undefined4)uStack_30;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 300);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x01cdcbac(iVar2,uVar5,uVar1,uVar6,0,0,0,0x29c,
                                **(undefined4 **)(_UNK_01ab6b6c + 0x1ab6980),
                                **(undefined4 **)(_UNK_01ab6b70 + 0x1ab698c),0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdf088(iVar2,uVar5,0);
      }
      func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01ab6b78 + 0x1ab69e8));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdefd0(iVar2,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8597,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$_SendStartRewardToBoard RVA 0x1aa6b84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab6b84(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01ab6de0 + 0x1ab6b9c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab6de4 + 0x1ab6bb0));
    func_0x01384978(*(undefined4 *)(_UNK_01ab6de8 + 0x1ab6bbc));
    func_0x01384978(*(undefined4 *)(_UNK_01ab6dec + 0x1ab6bc8));
    func_0x01384978(*(undefined4 *)(_UNK_01ab6df0 + 0x1ab6bd4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8556,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8556,0);
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
  iVar1 = FUN_01ab27ec(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_01ab4dac(param_1), iVar1 != 0)) {
    uVar5 = *(undefined4 *)(iVar1 + 0x18);
    if (*(int *)(**(int **)(_UNK_01ab6df4 + 0x1ab6c50) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(_UNK_01ab6df4 + 0x1ab6c50));
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
      piVar6 = *(int **)(_UNK_01ab6df8 + 0x1ab6ccc);
      uVar2 = *(undefined4 *)(iVar1 + 8);
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x120);
      if (param_1 == 0) {
        func_0x01384bf0();
        uStack_28 = **(undefined4 **)(_UNK_01ab6e04 + 0x1ab6d78);
        uStack_24 = **(undefined4 **)(_UNK_01ab6e08 + 0x1ab6d84);
        uStack_2c = 0x235;
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
        uStack_28 = **(undefined4 **)(_UNK_01ab6dfc + 0x1ab6d0c);
        uStack_24 = **(undefined4 **)(_UNK_01ab6e00 + 0x1ab6d18);
        uStack_2c = 0x235;
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



// ===== FAT.MiniBoardMultiMan$$ConvertDictToString RVA 0x1aa6e0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01ab6e0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01ab74ac + 0x1ab6e24);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab74b0 + 0x1ab6e38));
    func_0x01384978(*(undefined4 *)(_UNK_01ab74b4 + 0x1ab6e44));
    func_0x01384978(*(undefined4 *)(_UNK_01ab74b8 + 0x1ab6e50));
    func_0x01384978(*(undefined4 *)(_UNK_01ab74bc + 0x1ab6e5c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab74c0 + 0x1ab6e68));
    func_0x01384978(*(undefined4 *)(_UNK_01ab74c4 + 0x1ab6e74));
    func_0x01384978(*(undefined4 *)(_UNK_01ab74c8 + 0x1ab6e80));
    func_0x01384978(*(undefined4 *)(_UNK_01ab74cc + 0x1ab6e8c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab74d0 + 0x1ab6e98));
    func_0x01384978(*(undefined4 *)(_UNK_01ab74d4 + 0x1ab6ea4));
    *pcVar4 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_4c = 0;
  iVar1 = func_0x0229f06c(0x8576,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01ab74d8 + 0x1ab6f28) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024500c4(&uStack_68,0);
    uStack_30 = CONCAT44(uStack_64,uStack_68);
    uStack_28 = uStack_60;
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450598(&uStack_68,param_1,**(undefined4 **)(_UNK_01ab74dc + 0x1ab6f74));
    uStack_48 = uStack_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uStack_38 = uStack_58;
    piVar3 = *(int **)(_UNK_01ab74e0 + 0x1ab6fa8);
    pcVar7 = (char *)(_UNK_01ab74e4 + 0x1ab6fb4);
    pcVar4 = (char *)(_UNK_01ab74e8 + 0x1ab6fb8);
    while (iVar1 = func_0x01475638(&uStack_48,**(undefined4 **)(_UNK_01ab7510 + 0x1ab6fc0)),
          uVar6 = uStack_3c, iVar1 != 0) {
      uVar8 = (undefined4)uStack_38;
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (0 < uStack_30._4_4_) {
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = **(int **)(_UNK_01ab74ec + 0x1ab7018);
        if (*pcVar7 == '\0') {
          func_0x01384978(piVar3);
          *pcVar7 = '\x01';
        }
        if (*pcVar4 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01ab74f0 + 0x1ab704c));
          *pcVar4 = '\x01';
        }
        if (iVar1 == 0) {
          uVar5 = 0;
          uVar2 = 0;
        }
        else {
          uVar2 = func_0x0148d698(iVar1,0);
          uVar5 = *(undefined4 *)(iVar1 + 8);
        }
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x019a7f14(&uStack_30,uVar2,uVar5,0);
      }
      uStack_4c = uVar6;
      iVar1 = func_0x014867c8(&uStack_4c,0);
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ab74f4 + 0x1ab7100));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar5 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = func_0x0148d698(iVar1,0);
        uVar5 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar2,uVar5,0);
      iVar1 = **(int **)(_UNK_01ab74f8 + 0x1ab7164);
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ab74fc + 0x1ab7198));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar5 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = func_0x0148d698(iVar1,0);
        uVar5 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar2,uVar5,0);
      uStack_4c = uVar8;
      iVar1 = func_0x014867c8(&uStack_4c,0);
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ab7500 + 0x1ab7238));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar2 = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = func_0x0148d698(iVar1,0);
        uVar2 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar8,uVar2,0);
      iVar1 = **(int **)(_UNK_01ab7504 + 0x1ab729c);
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ab7508 + 0x1ab72d0));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar2 = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = func_0x0148d698(iVar1,0);
        uVar2 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar8,uVar2,0);
      uStack_4c = func_0x02157e88(uVar6,0);
      iVar1 = func_0x014867c8(&uStack_4c,0);
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ab750c + 0x1ab737c));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar8 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = func_0x0148d698(iVar1,0);
        uVar8 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar6,uVar8,0);
    }
    func_0x0245059c(&uStack_48,**(undefined4 **)(_UNK_01ab7514 + 0x1ab73e4));
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0148d6d8(&uStack_30,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8576,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173e78(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$GetCurUnlockItemMaxLevel RVA 0x1aa7520 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ab7520(int param_1)

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
  
  pcVar5 = (char *)(_UNK_01ab7630 + 0x1ab7534);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab7634 + 0x1ab7548));
    func_0x01384978(*(undefined4 *)(_UNK_01ab7638 + 0x1ab7554));
    *pcVar5 = '\x01';
  }
  iVar6 = 0;
  iVar2 = func_0x0229f06c(0x7aad,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01ab27ec(param_1);
    if (iVar2 != 0) {
      puVar9 = *(undefined4 **)(_UNK_01ab763c + 0x1ab75c8);
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
        iVar3 = FUN_01ab5090(param_1,uVar7);
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
  iVar6 = func_0x0229f13c(0x7aad,0);
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



// ===== FAT.MiniBoardMultiMan$$GetCurUnlockItemMaxLevelEntry RVA 0x1aa7640 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ab7640(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_01ab7754 + 0x1ab7654);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab7758 + 0x1ab7668));
    func_0x01384978(*(undefined4 *)(_UNK_01ab775c + 0x1ab7674));
    *pcVar5 = '\x01';
  }
  iVar7 = 0;
  iVar2 = func_0x0229f06c(0x8598,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01ab4dac(param_1);
    if (iVar2 != 0) {
      puVar10 = *(undefined4 **)(_UNK_01ab7760 + 0x1ab76ec);
      iVar7 = -1;
      iVar9 = 0;
      while( true ) {
        iVar6 = *(int *)(iVar2 + 0x24);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0xc) <= iVar9) break;
        iVar6 = *(int *)(iVar2 + 0x24);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar8 = func_0x0364c9b8(iVar6,iVar9,*puVar10);
        iVar3 = FUN_01ab5090(param_1,uVar8);
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
  iVar7 = func_0x0229f13c(0x8598,0);
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



// ===== FAT.MiniBoardMultiMan$$CheckIsMiniBoardItem RVA 0x1aa7764 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ab7764(int param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_01ab783c + 0x1ab777c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab7840 + 0x1ab7790));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x357,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x357,0);
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
  iVar1 = FUN_01ab27ec(param_1);
  if (((0 < param_2) && (iVar1 != 0)) && (iVar1 = FUN_01ab4dac(param_1), iVar1 != 0)) {
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



// ===== FAT.MiniBoardMultiMan$$CheckIsBelongMiniBoard RVA 0x1aa7848 =====

/* WARNING: Removing unreachable block (ram,0x01ab7c7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ab7848(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01ab7ee8 + 0x1ab7864);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab7eec + 0x1ab7878));
    func_0x01384978(*(undefined4 *)(_UNK_01ab7ef0 + 0x1ab7884));
    func_0x01384978(*(undefined4 *)(_UNK_01ab7ef4 + 0x1ab7890));
    func_0x01384978(*(undefined4 *)(_UNK_01ab7ef8 + 0x1ab789c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab7efc + 0x1ab78a8));
    func_0x01384978(*(undefined4 *)(_UNK_01ab7f00 + 0x1ab78b4));
    *pcVar10 = '\x01';
  }
  uVar11 = 0;
  iVar1 = func_0x0229f06c(0x8599,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8599,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar9,uVar12,&uStack_38,uVar8,0,0);
    uVar11 = func_0x0245496c(&uStack_38,0,0);
    return uVar11;
  }
  if (0 < param_2) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar11 = 0;
    piVar2 = (int *)func_0x01ca8d00(iVar1,0);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar11 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01ab7f04 + 0x1ab7968)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01ab79b0;
          }
          uVar11 = uVar11 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ab7f04 + 0x1ab7968),0);
LAB_01ab79b0:
      piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
      uStack_2c = 0;
      piVar13 = *(int **)(_UNK_01ab7f08 + 0x1ab79d8);
      piVar5 = *(int **)(_UNK_01ab7f0c + 0x1ab79e0);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        iVar9 = *piVar13;
        uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar11 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == iVar9) {
              puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto LAB_01ab7a38;
            }
            uVar11 = uVar11 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar9,0);
LAB_01ab7a38:
        iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        iStack_28 = 0;
        if (iVar1 == 0) {
          iVar1 = 10;
          break;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar11 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_01ab7f10 + 0x1ab7a74)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto LAB_01ab7abc;
            }
            uVar11 = uVar11 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ab7f10 + 0x1ab7a74),0);
LAB_01ab7abc:
        iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x24);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar6 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01ab7f14 + 0x1ab7af8));
        do {
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar6;
          iVar9 = *piVar13;
          uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar11 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == iVar9) {
                puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01ab7b60;
              }
              uVar11 = uVar11 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar11 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar6,iVar9,0);
LAB_01ab7b60:
          iVar1 = (*(code *)*puVar3)(piVar6,puVar3[1]);
          if (iVar1 == 0) {
            iVar1 = 5;
            goto LAB_01ab7c04;
          }
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar6;
          uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar11 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == *piVar5) {
                puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01ab7bd8;
              }
              uVar11 = uVar11 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar11 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar6,*piVar5,0);
LAB_01ab7bd8:
          iVar1 = (*(code *)*puVar3)(piVar6,puVar3[1]);
        } while (iVar1 != param_2);
        iVar1 = 9;
        uStack_2c = 1;
LAB_01ab7c04:
        if (piVar6 != (int *)0x0) {
          iVar9 = *piVar6;
          uVar11 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar11 != 0) {
            piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01ab7f18 + 0x1ab7c1c)) {
                puVar3 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
                goto LAB_01ab7c64;
              }
              uVar11 = uVar11 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar11 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01ab7f18 + 0x1ab7c1c),0);
LAB_01ab7c64:
          (*(code *)*puVar3)(piVar6,puVar3[1]);
        }
      } while (iVar1 == 5 || iVar1 == 0);
      iVar9 = iStack_28;
      if (piVar2 != (int *)0x0) {
        iVar4 = *piVar2;
        uVar11 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar11 != 0) {
          piVar5 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_01ab7f20 + 0x1ab7ce8)) {
              puVar3 = (undefined4 *)(iVar4 + *piVar5 * 8 + 0xc0);
              goto LAB_01ab7d30;
            }
            uVar11 = uVar11 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ab7f20 + 0x1ab7ce8),0);
LAB_01ab7d30:
        (*(code *)*puVar3)(piVar2,puVar3[1]);
      }
      if (iVar9 != 0) {
        func_0x01384bec(iVar9);
      }
      uVar11 = iVar1 == 9 & uStack_2c;
    }
  }
  return uVar11;
}



// ===== FAT.MiniBoardMultiMan$$OnNewItemUnlock RVA 0x1aa7f28 =====

void FUN_01ab7f28(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7aa5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7aa5,0);
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
  iVar1 = FUN_01ab27ec(param_1);
  if (iVar1 == 0) {
    return;
  }
  func_0x01ab7fb0(param_1);
  iVar1 = *(int *)(param_1 + 8);
  uVar4 = FUN_01ab7520(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x4c) = uVar4;
  return;
}



// ===== FAT.MiniBoardMultiMan$$_RefreshSpawnHandlerInfo RVA 0x1aa7fb0 =====

/* WARNING: Removing unreachable block (ram,0x02156cd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab7fb0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
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
  
  iVar2 = func_0x0229f06c(0x7aa6,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7aa6,0);
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
    iVar11 = *(int *)(iVar2 + 8);
    uVar13 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar2 == 0) {
      uVar9 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar11,uVar13,&uStack_30,uVar9);
    return;
  }
  iVar2 = FUN_01ab27ec(param_1);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = FUN_01ab2914(iVar2);
  if (iVar2 == 0) {
    return;
  }
  uVar13 = func_0x01ab97a8(param_1);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x44);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar11 = func_0x0229f06c(0x7aab,0,0);
  if (iVar11 != 0) {
    iVar11 = func_0x0229f13c(0x7aab,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar13,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar11 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar11 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485238(&uStack_38,uVar13,0);
    iVar12 = *(int *)(iVar11 + 8);
    uVar13 = *(undefined4 *)(iVar11 + 0xc);
    iVar2 = *(int *)(iVar11 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar2 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar12,uVar13,&uStack_38,uVar9,0,0);
    return;
  }
  iVar11 = func_0x01c24918(0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar11 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = func_0x01ca8db0(iVar11,uVar13,0);
  if (iVar11 == 0) {
    return;
  }
  piVar6 = *(int **)(iVar11 + 0x18);
  piVar4 = *(int **)(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0x14) = uVar13;
  pcVar10 = (char *)(_UNK_02156db8 + 0x2156910);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02156dbc + 0x2156924));
    func_0x01384978(*(undefined4 *)(_UNK_02156dc0 + 0x2156930));
    func_0x01384978(*(undefined4 *)(_UNK_02156dc4 + 0x215693c));
    func_0x01384978(*(undefined4 *)(_UNK_02156dc8 + 0x2156948));
    func_0x01384978(*(undefined4 *)(_UNK_02156dcc + 0x2156954));
    func_0x01384978(*(undefined4 *)(_UNK_02156dd0 + 0x2156960));
    *pcVar10 = '\x01';
  }
  iVar11 = func_0x0229f06c(0x6f5d,0);
  if (iVar11 != 0) {
    iVar11 = func_0x0229f13c(0x6f5d,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = 0;
    func_0x02174858(iVar11,iVar2,piVar4,piVar6);
    return;
  }
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar4;
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_02156dd4 + 0x21569d4)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xd8);
        goto LAB_02156a1c;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_02156dd4 + 0x21569d4),3);
LAB_02156a1c:
  (*(code *)*puVar3)(piVar4,puVar3[1]);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar6;
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_02156dd8 + 0x2156a48)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
        goto LAB_02156a90;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02156dd8 + 0x2156a48),0);
LAB_02156a90:
  piVar6 = (int *)(*(code *)*puVar3)(piVar6,puVar3[1]);
  piVar7 = *(int **)(_UNK_02156ddc + 0x2156ab4);
  do {
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_02156b0c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar6,*piVar7,0);
LAB_02156b0c:
    iVar2 = (*(code *)*puVar3)(piVar6,puVar3[1]);
    if (iVar2 == 0) break;
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02156de0 + 0x2156b40)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_02156b88;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02156de0 + 0x2156b40),0);
LAB_02156b88:
    uVar13 = (*(code *)*puVar3)(piVar6,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_02156de4 + 0x2156ba8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar13,0);
    uVar1 = uStack_28;
    uVar9 = uStack_2c;
    uVar13 = uStack_30;
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar4;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02156de8 + 0x2156bf0)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xd0);
          goto LAB_02156c38;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_02156de8 + 0x2156bf0),2);
LAB_02156c38:
    uStack_38 = puVar3[1];
    (*(code *)*puVar3)(piVar4,uVar13,uVar9,uVar1);
  } while( true );
  if (piVar6 != (int *)0x0) {
    iVar2 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_02156dec + 0x2156c78)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xc0);
          goto LAB_02156cc0;
        }
        uVar5 = uVar5 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02156dec + 0x2156c78),0);
LAB_02156cc0:
    (*(code *)*puVar3)(piVar6,puVar3[1]);
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$OnNewItemShow RVA 0x1aa8070 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab8070(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01ab8360 + 0x1ab808c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab8364 + 0x1ab80a0));
    func_0x01384978(*(undefined4 *)(_UNK_01ab8368 + 0x1ab80ac));
    func_0x01384978(*(undefined4 *)(_UNK_01ab836c + 0x1ab80b8));
    func_0x01384978(*(undefined4 *)(_UNK_01ab8370 + 0x1ab80c4));
    func_0x01384978(*(undefined4 *)(_UNK_01ab8374 + 0x1ab80d0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x859b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x859b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
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
    func_0x0245495c(iVar7,uVar9,&iStack_38,uVar5,0,0);
    return;
  }
  iVar1 = FUN_01ab27ec(param_1);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02116990(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01ab7764(param_1,*(undefined4 *)(iVar1 + 0x10));
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01ab8378 + 0x1ab817c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ab837c + 0x1ab8198));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar1,param_2,**(undefined4 **)(_UNK_01ab8380 + 0x1ab81bc));
      iVar1 = FUN_01ab4cfc(param_1);
      iVar7 = *(int *)(param_1 + 0x1c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar7 + 0xc);
      iVar7 = FUN_01ab27ec(param_1);
      uVar9 = 0;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0;
        if (iVar7 != 0) {
          iVar6 = 0;
          if (0 < iVar11) {
            puVar12 = *(undefined4 **)(_UNK_01ab8384 + 0x1ab8220);
            iVar7 = 0;
            do {
              iVar10 = *(int *)(param_1 + 0x1c);
              if (iVar10 == 0) {
                func_0x01384bf0();
              }
              uVar9 = func_0x03259410(iVar10,iVar7,*puVar12);
              iVar2 = FUN_01ab5090(param_1,uVar9);
              iVar10 = iVar6;
              if (iVar2 != 0) {
                iVar10 = iVar7;
              }
              iVar2 = iVar7 + 1;
              if (iVar6 < iVar7) {
                iVar6 = iVar10;
              }
              iVar7 = iVar2;
            } while (iVar11 != iVar2);
          }
          uVar9 = *(undefined4 *)(iVar1 + 0x14);
        }
      }
      uVar5 = *(undefined4 *)(param_1 + 8);
      iVar1 = FUN_01ab7520(param_1);
      iVar7 = *(int *)(param_1 + 0x10);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x02139cf4(iVar7,0);
      uVar4 = 0;
      if (iVar7 != 0) {
        uVar4 = *(undefined4 *)(iVar7 + 8);
      }
      uStack_30 = (uint)(iVar6 + 1 == iVar11);
      uStack_2c = 0;
      iStack_38 = iVar11;
      uStack_34 = uVar9;
      func_0x019af584(uVar5,iVar1 + 1,uVar4,*(int *)(param_1 + 0x18) + 1);
      if ((iVar6 + 1 == iVar11) && (*(int *)(param_1 + 8) != 0)) {
        iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x3c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(char *)(iVar1 + 0x38) != '\0') {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xd8);
          uVar9 = *(undefined4 *)(param_1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          pcVar8 = (char *)(_UNK_02b49454 + 0x2b49370);
          if (*pcVar8 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),uVar9,0,0);
            *pcVar8 = '\x01';
          }
          iVar7 = func_0x0229f06c(0x19d,0);
          if (iVar7 == 0) {
            func_0x02b41428(iVar1,uVar9,0);
            func_0x02b43478(iVar1,uVar9);
            puVar12 = *(undefined4 **)(_UNK_02b4945c + 0x2b49408);
            *(undefined1 *)(iVar1 + 0x34) = 1;
            iVar7 = func_0x03668dfc(*puVar12);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = func_0x01c36988(iVar7,0);
            if (iVar7 != 0) {
              pcVar8 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
              if (*pcVar8 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
                func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
                func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
                *pcVar8 = '\x01';
              }
              iVar7 = func_0x0229f06c(0x1a9,0);
              if (iVar7 == 0) {
                iVar7 = *(int *)(iVar1 + 0xc);
                if (iVar7 == 0) {
                  func_0x01384bf0();
                }
                iVar7 = func_0x03cd675c(iVar7,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
                if (0 < iVar7) {
                  func_0x02b4558c(iVar1);
                }
                func_0x02b45d7c(iVar1,1);
                func_0x02b46034(iVar1);
                func_0x02b46318(iVar1);
                func_0x02b4639c(iVar1,0);
                func_0x02b467e4(iVar1,0);
                if (*(char *)(iVar1 + 0x34) != '\0') {
                  piVar3 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
                  *(undefined1 *)(iVar1 + 0x34) = 0;
                  if (*(int *)(*piVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar7 = func_0x0229f06c(0x3f,0);
                  if (iVar7 == 0) {
                    iVar1 = *(int *)(iVar1 + 8);
                    if (iVar1 == 0) {
                      return;
                    }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(iVar1 + 0xc))
                              (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
                    return;
                  }
                  iVar7 = func_0x0229f13c(0x3f,0);
                  if (iVar7 == 0) {
                    func_0x01384bf0();
                  }
                  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                  uStack_30 = 0;
                  func_0x0245494c(&uStack_48,0,0);
                  uStack_30 = uStack_48;
                  uStack_2c = uStack_44;
                  uStack_28 = uStack_40;
                  if (*(int *)(iVar7 + 0x10) != 0) {
                    func_0x01485278(&uStack_30,*(int *)(iVar7 + 0x10),0);
                  }
                  func_0x01485278(&uStack_30,iVar1,0);
                  iVar11 = *(int *)(iVar7 + 8);
                  uVar9 = *(undefined4 *)(iVar7 + 0xc);
                  iVar1 = *(int *)(iVar7 + 0x10);
                  if (iVar11 == 0) {
                    func_0x01384bf0();
                  }
                  uVar5 = 2;
                  if (iVar1 == 0) {
                    uVar5 = 1;
                  }
                  iStack_50 = 0;
                  uStack_4c = 0;
                  func_0x0245495c(iVar11,uVar9,&uStack_30,uVar5);
                  return;
                }
              }
              else {
                iVar7 = func_0x0229f13c(0x1a9,0);
                if (iVar7 == 0) {
                  func_0x01384bf0();
                }
                func_0x0217f950(iVar7,iVar1,0,1);
              }
              return;
            }
          }
          else {
            iVar7 = func_0x0229f13c(0x19d,0);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x02175630(iVar7,iVar1,uVar9,0);
          }
          return;
        }
      }
    }
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$CheckMiniBoardOpen RVA 0x1aa8388 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab8388(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01ab8494 + 0x1ab839c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab8498 + 0x1ab83b0));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x859c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x859c,0);
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
  iVar1 = FUN_01ab27ec(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01ab849c + 0x1ab841c));
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x7c);
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
      iVar1 = *(int *)(param_1 + 8);
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



// ===== FAT.MiniBoardMultiMan$$CheckMiniBoardUIOpen RVA 0x1aa84a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ab84a0(int param_1)

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
  
  pcVar4 = (char *)(_UNK_01ab8584 + 0x1ab84b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab8588 + 0x1ab84c8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x23af,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x23af,0);
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
  iVar1 = FUN_01ab27ec(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01ab858c + 0x1ab8530));
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x7c);
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



// ===== FAT.MiniBoardMultiMan$$FAT.IUserDataHolder.SetData RVA 0x1aa8590 =====

void FUN_01ab8590(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x859d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x859d,0);
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
  if (*(int *)(iVar1 + 0x48) != 0) {
    iVar4 = *(int *)(*(int *)(iVar1 + 0x48) + 0x10);
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0x14);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      func_0x01ab8694(param_1,*(undefined4 *)(iVar4 + 0x10));
      func_0x01ab86f0(param_1,*(undefined4 *)(iVar1 + 0x38),0);
      iVar4 = *(int *)(param_1 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0214a9e8(iVar4,iVar1,0,0);
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
            if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0214e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(iVar4 + 0xc))
                        (*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
              return;
            }
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
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$_InitCurRoundIndex RVA 0x1aa8694 =====

void FUN_01ab8694(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x8553,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8553,0);
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
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== FAT.MiniBoardMultiMan$$_InitWorld RVA 0x1aa86f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab86f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01ab88e8 + 0x1ab8710);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab88ec + 0x1ab8724));
    func_0x01384978(*(undefined4 *)(_UNK_01ab88f0 + 0x1ab8730));
    func_0x01384978(*(undefined4 *)(_UNK_01ab88f4 + 0x1ab873c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8554,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01ab88f8 + 0x1ab87a0));
    func_0x02143488(uVar2,0);
    puVar3 = *(undefined4 **)(_UNK_01ab88fc + 0x1ab87bc);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    uVar2 = func_0x01384be4(*puVar3);
    func_0x0214d6c8(uVar2,0,0,0);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0x4c);
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ab8900 + 0x1ab8800));
    func_0x01db7f44(iVar1,0);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = 2;
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
    iVar1 = func_0x0229f13c(0x8554,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f950(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$FAT.IUserDataHolder.FillData RVA 0x1aa8904 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab8904(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
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
  
  pcVar5 = (char *)(_UNK_01ab8aac + 0x1ab891c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab8ab0 + 0x1ab8930));
    func_0x01384978(*(undefined4 *)(_UNK_01ab8ab4 + 0x1ab893c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab8ab8 + 0x1ab8948));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x859e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x859e,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
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
  if (*(int *)(iVar1 + 0x48) == 0) {
    uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01ab8abc + 0x1ab89dc));
    func_0x017a3acc(uVar7,0);
    *(undefined4 *)(iVar1 + 0x48) = uVar7;
  }
  iVar4 = FUN_01ab27ec(param_1);
  if (iVar4 != 0) {
    iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01ab8ac0 + 0x1ab8a0c));
    func_0x017a4028(iVar4,0);
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x02b449f8(iVar6,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_01ab8ac4 + 0x1ab8a54);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar4 + 0xc) = uVar7;
    uVar7 = *puVar2;
    *(undefined4 *)(iVar4 + 0x10) = uVar3;
    uVar7 = func_0x01384be4(uVar7);
    FUN_0178d080(uVar7,0);
    iVar6 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(iVar4 + 0x14) = uVar7;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x02147b80(iVar6,uVar7,0);
    iVar1 = *(int *)(iVar1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 0x10) = iVar4;
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$_RefreshOutputInfo RVA 0x1aa8ac8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab8ac8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int unaff_r6;
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
  
  pcVar3 = (char *)(_UNK_01ab8bf4 + 0x1ab8adc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab8bf8 + 0x1ab8af0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x854a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x854a,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = FUN_01ab4cfc(param_1);
  iVar4 = FUN_01ab4dac(param_1);
  if (iVar1 != 0) {
    unaff_r6 = iVar4;
  }
  if (iVar1 != 0 && iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(unaff_r6 + 0x28);
    iVar1 = *(int *)(iVar1 + 0x24);
    *(undefined4 *)(iVar4 + 0x90) = 1;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0xc);
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 < 1 || iVar5 < 1) {
      if (iVar5 < 1) {
        if (iVar1 < 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 3;
    }
    *(undefined4 *)(iVar4 + 0x94) = uVar6;
    return;
  }
  return;
}



// ===== FAT.MiniBoardMultiMan$$_RefreshAllItemIdList RVA 0x1aa8bfc =====

/* WARNING: Possible PIC construction at 0x01ab9018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01ab9020) */
/* WARNING: Removing unreachable block (ram,0x01ab9028) */
/* WARNING: Removing unreachable block (ram,0x01ab90e4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffbc : 0x01419ac8 */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_01ab8bfc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 extraout_r1;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *extraout_r12;
  undefined1 uVar15;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01ab927c + 0x1ab8c14);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab9280 + 0x1ab8c28));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9284 + 0x1ab8c34));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9288 + 0x1ab8c40));
    func_0x01384978(*(undefined4 *)(_UNK_01ab928c + 0x1ab8c4c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9290 + 0x1ab8c58));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9294 + 0x1ab8c64));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x854d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x854d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar1 == 0) {
      uVar8 = 1;
    }
    iVar1 = func_0x0245495c(iVar10,uVar11,&iStack_30,uVar8,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar10 = FUN_01ab4cfc(param_1);
  iVar1 = 0;
  if (iVar10 != 0) {
    iVar1 = *(int *)(iVar10 + 0x18);
  }
  if (iVar10 == 0 || iVar1 == 0) {
    return iVar1;
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01ab9298 + 0x1ab8d04));
  iStack_28 = 0;
  piVar14 = *(int **)(_UNK_01ab929c + 0x1ab8d20);
  piVar12 = *(int **)(_UNK_01ab92a0 + 0x1ab8d28);
  puVar13 = *(undefined4 **)(_UNK_01ab92a4 + 0x1ab8d30);
LAB_01ab8d2c:
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = iStack_28;
    iVar10 = *piVar2;
    iVar4 = *piVar14;
    uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
          goto LAB_01ab8d8c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0);
LAB_01ab8d8c:
    iVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar10 == 0) {
      uStack_2c = 0;
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 == 0) goto LAB_01ab90b0;
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      goto LAB_01ab9098;
    }
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar10 = *piVar2;
    iVar4 = *piVar12;
    uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
          goto LAB_01ab8e00;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0);
LAB_01ab8e00:
    uVar11 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    iVar10 = func_0x01c24918(0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0xc);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = 0;
    iVar10 = func_0x01ca8c9c(iVar10,uVar11,0);
    iStack_28 = iVar1;
    if (iVar10 != 0) {
      iStack_28 = iVar10;
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar10 + 0x24) != 0) {
        piVar6 = (int *)func_0x0364c2b4(*(int *)(iVar10 + 0x24),
                                        **(undefined4 **)(_UNK_01ab92a8 + 0x1ab8e8c));
        do {
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar6;
          iVar10 = *piVar14;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == iVar10) {
                puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01ab8ef0;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar6,iVar10,0);
LAB_01ab8ef0:
          iVar1 = (*(code *)*puVar3)(piVar6,puVar3[1]);
          if (iVar1 == 0) goto LAB_01ab8f88;
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar6;
          iVar10 = *piVar12;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == iVar10) {
                puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                goto LAB_01ab8f64;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar6,iVar10,0);
LAB_01ab8f64:
          uVar11 = (*(code *)*puVar3)(piVar6,puVar3[1]);
          func_0x02f622a4(*(undefined4 *)(param_1 + 0x1c),uVar11,*puVar13);
        } while( true );
      }
    }
  } while( true );
LAB_01ab8f88:
  iVar1 = 0;
  if (piVar6 != (int *)0x0) {
    iStack_30 = 0;
    iVar1 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01ab92ac + 0x1ab8fac)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01ab8ffc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01ab92ac + 0x1ab8fac),0);
LAB_01ab8ffc:
    iVar1 = iStack_30;
    (*(code *)*puVar3)(piVar6,puVar3[1]);
  }
  uVar15 = iVar1 == 0;
  if (!(bool)uVar15) {
    uStack_34 = 0x1ab901c;
    piVar2 = (int *)func_0x0145b108(4);
    iVar10 = iRam01419040;
    *piVar2 = iVar1;
    func_0x0145b118(piVar2,(int)&iRam01419040 + iVar10,0);
    if ((bool)uVar15) {
      *extraout_r12 = extraout_r1;
    }
    iVar1 = _UNK_014190a0 + 0x1419088;
    iVar10 = _UNK_014190a4 + 0x141908c;
    uVar11 = func_0x013c37a0();
    func_0x013e4ae4(uVar11,iVar1,iVar10);
    iVar1 = func_0x0140c80c();
    func_0x013d7660();
    return iVar1;
  }
  goto LAB_01ab8d2c;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 2;
    if (uVar5 == 0) break;
LAB_01ab9098:
    if (piVar12[-1] == **(int **)(_UNK_01ab92b4 + 0x1ab9084)) {
      puVar13 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
      goto LAB_01ab90cc;
    }
  }
LAB_01ab90b0:
  puVar13 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ab92b4 + 0x1ab9084),0);
LAB_01ab90cc:
  iVar1 = (*(code *)*puVar13)(piVar2,puVar13[1]);
  return iVar1;
}



// ===== FAT.MiniBoardMultiMan.<>c__DisplayClass50_0$$.ctor RVA 0x1aa92bc =====

void FUN_01ab92bc(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MiniBoardMultiMan$$Collect RVA 0x1aa92c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab92c4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_01ab9500 + 0x1ab92e4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab9504 + 0x1ab92fc));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9508 + 0x1ab9308));
    func_0x01384978(*(undefined4 *)(_UNK_01ab950c + 0x1ab9314));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9510 + 0x1ab9320));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9514 + 0x1ab932c));
    *pcVar3 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x5f17,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f17,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  if (param_4 != -1) {
    if (param_4 < 1) {
      return;
    }
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450590(param_1,param_2,&iStack_24,**(undefined4 **)(_UNK_01ab9530 + 0x1ab93c0))
    ;
    if (iVar1 == 0) {
      if (param_3 < param_4) {
        param_4 = param_3;
      }
      param_3 = param_4;
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      puVar2 = *(undefined4 **)(_UNK_01ab9538 + 0x1ab9470);
      goto LAB_01ab94ec;
    }
    if (iStack_24 + param_3 < param_4) {
      param_4 = iStack_24 + param_3;
    }
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_01ab9534 + 0x1ab9400);
    goto LAB_01ab94cc;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02450998(0,param_2,**(undefined4 **)(_UNK_01ab9528 + 0x1ab9484));
    func_0x01384bf0();
    if (iVar1 == 0) goto LAB_01ab94dc;
    param_4 = func_0x0245099c(0,param_2,**(undefined4 **)(_UNK_01ab9520 + 0x1ab94ac));
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02450998(param_1,param_2,**(undefined4 **)(_UNK_01ab9518 + 0x1ab9418));
    if (iVar1 == 0) {
LAB_01ab94dc:
      puVar2 = *(undefined4 **)(_UNK_01ab952c + 0x1ab94f0);
LAB_01ab94ec:
      func_0x024509a0(param_1,param_2,param_3,*puVar2);
      return;
    }
    param_4 = func_0x0245099c(param_1,param_2,**(undefined4 **)(_UNK_01ab951c + 0x1ab9438));
  }
  param_4 = param_4 + param_3;
  puVar2 = *(undefined4 **)(_UNK_01ab9524 + 0x1ab94d0);
LAB_01ab94cc:
  func_0x0245025c(param_1,param_2,param_4,*puVar2);
  return;
}



// ===== FAT.MiniBoardMultiMan$$_TryCollectReward RVA 0x1aa953c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab953c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01ab9794 + 0x1ab955c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab9798 + 0x1ab9574));
    func_0x01384978(*(undefined4 *)(_UNK_01ab979c + 0x1ab9580));
    *pcVar5 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x8575,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8575,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02feb690(param_2,&iStack_24,0,**(undefined4 **)(_UNK_01ab97a0 + 0x1ab9608));
  if ((((iStack_24 == 0 || iVar1 == 0) || (iVar1 = func_0x0211d748(iStack_24,0), iVar1 != 1)) ||
      (iStack_24 == 0)) || (iVar1 = func_0x0211dc48(iStack_24,0), iVar1 == 0)) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(param_2,&iStack_28,0,**(undefined4 **)(_UNK_01ab97a4 + 0x1ab9644));
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
    FUN_01ab92c4(param_3,uVar3,1,0xffffffff);
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
    FUN_01ab92c4(param_3,uVar3,1,0xffffffff);
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
  FUN_01ab92c4(param_4,uVar3,uVar4,0xffffffff);
  return;
}



// ===== FAT.MiniBoardMultiMan$$_GetCurDropConfId RVA 0x1aa97a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ab97a8(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_01ab98f8 + 0x1ab97c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab98fc + 0x1ab97d4));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9900 + 0x1ab97e0));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9904 + 0x1ab97ec));
    *pcVar5 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0x7aa8,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01ab4dac(param_1);
    uVar3 = 0;
    if (iVar2 != 0) {
      puVar9 = *(undefined4 **)(_UNK_01ab9908 + 0x1ab986c);
      iVar7 = 0;
      iVar8 = 0;
      while( true ) {
        iVar6 = *(int *)(iVar2 + 0x24);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0xc) <= iVar8) break;
        iVar6 = *(int *)(iVar2 + 0x24);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x0364c9b8(iVar6,iVar8,*puVar9);
        iVar4 = FUN_01ab5090(param_1,uVar3);
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
      func_0x03005740(*(undefined4 *)(iVar2 + 0x28),iVar7,&uStack_24,
                      **(undefined4 **)(_UNK_01ab990c + 0x1ab98e0));
      uVar3 = uStack_24;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7aa8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0217493c(iVar2,param_1,0);
  }
  return uVar3;
}



// ===== FAT.MiniBoardMultiMan.<>c__DisplayClass59_0$$.ctor RVA 0x1aa9910 =====

void FUN_01ab9910(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MiniBoardMultiMan$$_EnsureClaimRewardCommit RVA 0x1aa9918 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab9918(int param_1,int *param_2)

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
  
  iVar1 = func_0x0229f06c(0x8591,0);
  if (iVar1 == 0) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    param_2 = (int *)func_0x0214cf60(param_2,0);
    if (param_2 == (int *)0x0) {
      return;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x40);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01cdf248 + 0x1cdf0a0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cdf24c + 0x1cdf0b4),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01cdf250 + 0x1cdf0c0));
      func_0x01384978(*(undefined4 *)(_UNK_01cdf254 + 0x1cdf0cc));
      func_0x01384978(*(undefined4 *)(_UNK_01cdf258 + 0x1cdf0d8));
      func_0x01384978(*(undefined4 *)(_UNK_01cdf25c + 0x1cdf0e4));
      func_0x01384978(*(undefined4 *)(_UNK_01cdf260 + 0x1cdf0f0));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x335,0);
    if (iVar1 == 0) {
      if (param_2 == (int *)0x0) {
        func_0x01384bf0();
      }
      uVar5 = (**(code **)(*param_2 + 0xd8))(param_2,*(undefined4 *)(*param_2 + 0xdc));
      uVar5 = func_0x0244fb1c(**(undefined4 **)(_UNK_01cdf264 + 0x1cdf174),uVar5,0);
      if (*(int *)(**(int **)(_UNK_01cdf268 + 0x1cdf188) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0199d1cc(uVar5,0);
      if ((char)param_2[0xc] != '\0') {
        func_0x01cdf27c(param_1,param_2,0xffffffff);
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03290900(iVar1,param_2,**(undefined4 **)(_UNK_01cdf26c + 0x1cdf1e0));
        *(undefined1 *)(param_2 + 0xc) = 0;
      }
      if (*(int *)(**(int **)(_UNK_01cdf270 + 0x1cdf1fc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01cdf274 + 0x1cdf218));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x335,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8591,0);
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



// ===== FAT.MiniBoardMultiMan.<>c__DisplayClass61_0$$.ctor RVA 0x1aa99d0 =====

void FUN_01ab99d0(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MiniBoardMultiMan.<>c__DisplayClass62_0$$.ctor RVA 0x1aa99d8 =====

void FUN_01ab99d8(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MiniBoardMultiMan$$Reset RVA 0x1aa99e0 =====

void FUN_01ab99e0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x859f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x859f,0);
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



// ===== FAT.MiniBoardMultiMan$$LoadConfig RVA 0x1aa9a7c =====

void FUN_01ab9a7c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x85a0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x85a0,0);
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



// ===== FAT.MiniBoardMultiMan$$Startup RVA 0x1aa9ac8 =====

void FUN_01ab9ac8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x85a1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x85a1,0);
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



// ===== FAT.MiniBoardMultiMan$$.ctor RVA 0x1aa9b14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab9b14(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01ab9bb8 + 0x1ab9b28);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab9bbc + 0x1ab9b3c));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9bc0 + 0x1ab9b48));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9bc4 + 0x1ab9b54));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ab9bc8 + 0x1ab9b68));
  func_0x02b4c90c(uVar1,0);
  puVar2 = *(undefined4 **)(_UNK_01ab9bcc + 0x1ab9b84);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_01ab9bd0 + 0x1ab9b9c));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MiniBoardMultiMan.<>c__DisplayClass50_0$$<CollectAllBoardReward>b__0 RVA 0x1aa9bd4 =====

void FUN_01ab9bd4(int param_1,undefined4 param_2)

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
  FUN_01ab953c(iVar3,param_2,uVar1,uVar2);
  return;
}



// ===== FAT.MiniBoardMultiMan.<>c__DisplayClass59_0$$<_ClaimBonusItem>b__0 RVA 0x1aa9c14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab9c14(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iStack_28;
  int iStack_24;
  
  pcVar7 = (char *)(_UNK_01ab9de0 + 0x1ab9c30);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab9de4 + 0x1ab9c44));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9de8 + 0x1ab9c50));
    func_0x01384978(*(undefined4 *)(_UNK_01ab9dec + 0x1ab9c5c));
    *pcVar7 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02feb690(param_2,&iStack_24,0,**(undefined4 **)(_UNK_01ab9df0 + 0x1ab9c90));
  if ((((iStack_24 == 0 || iVar1 == 0) || (iVar1 = func_0x0211d748(iStack_24,0), iVar1 != 1)) ||
      (iStack_24 == 0)) || (iVar1 = func_0x0211dc48(iStack_24,0), iVar1 == 0)) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(param_2,&iStack_28,0,**(undefined4 **)(_UNK_01ab9df8 + 0x1ab9ccc));
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
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar1 + 8);
  uVar5 = *(uint *)(iVar1 + 0xc);
  piVar4 = *(int **)(_UNK_01ab9df4 + 0x1ab9d64);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar8 = *piVar4;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (uVar5 < *(uint *)(iVar2 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar5 + 1;
    *(int *)(iVar2 + uVar5 * 4 + 0x10) = param_2;
  }
  else {
    func_0x0328f170(iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x0210e2d4(param_2,0);
  FUN_01ab92c4(uVar6,uVar3,1,0xffffffff);
  return;
}



// ===== FAT.MiniBoardMultiMan.<>c__DisplayClass61_0$$<_CollectInheritItem>b__0 RVA 0x1aa9dfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab9dfc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01ab9ec4 + 0x1ab9e18);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ab9ec8 + 0x1ab9e2c));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 8);
  uStack_1c = 0;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0345efbc(iVar4,uVar1,&uStack_1c,**(undefined4 **)(_UNK_01ab9ecc + 0x1ab9e7c));
  if (iVar4 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0210e2d4(param_2,0);
    FUN_01ab92c4(uVar1,uVar2,1,uStack_1c);
  }
  return;
}



// ===== FAT.MiniBoardMultiMan.<>c__DisplayClass62_0$$<_CollectGiftBoxItem>b__0 RVA 0x1aa9ed0 =====

void FUN_01ab9ed0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  FUN_01ab92c4(uVar2,uVar1,1,0xffffffff);
  return;
}



/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.IsFeatureEnable RVA 0x214ef90 =====

/* WARNING: Possible PIC construction at 0x0215f0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0215f0e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0215f0c8) */
/* WARNING: Removing unreachable block (ram,0x0215f0d0) */
/* WARNING: Removing unreachable block (ram,0x0215f0e0) */
/* WARNING: Removing unreachable block (ram,0x0215f0e8) */
/* WARNING: Removing unreachable block (ram,0x0215f0f8) */
/* WARNING: Removing unreachable block (ram,0x0215f0f0) */
/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0215ef90(undefined4 param_1,int param_2)

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
  
  iVar3 = func_0x0229f06c(0xb4e6,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xb4e6,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar3 + 8);
    uVar12 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
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
  if (param_2 == 2) {
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x60);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 0x61;
  }
  else {
    if (param_2 == 1) {
      iVar3 = func_0x0229f06c(0xb4e7,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0xb4e7,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uVar12 = 0;
        uStack_30 = 0;
        uStack_20 = 0;
        func_0x0245494c(&uStack_48,0);
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        uStack_24 = uStack_3c;
        uStack_20 = uStack_38;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
          uVar12 = 0;
          if (*(int *)(iVar3 + 0x10) != 0) {
            uVar12 = 1;
          }
        }
        iVar11 = *(int *)(iVar3 + 8);
        uVar8 = *(undefined4 *)(iVar3 + 0xc);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        uStack_50 = 0;
        uStack_4c = 0;
        func_0x0245495c(iVar11,uVar8,&uStack_30,uVar12);
        uVar4 = func_0x0245496c(&uStack_30,0,0);
        return uVar4;
      }
      pcVar9 = (char *)(_UNK_021625b0 + 0x21623b0);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_021625b4 + 0x21623c4));
        *pcVar9 = '\x01';
      }
      iVar3 = func_0x0229f06c(0xeec,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0xeec,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485238(&uStack_38,1,0);
        iVar11 = *(int *)(iVar3 + 8);
        uVar12 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        uVar8 = 2;
        if (iVar3 == 0) {
          uVar8 = 1;
        }
        func_0x0245495c(iVar11,uVar12,&uStack_38,uVar8,0,0);
        uVar4 = func_0x0245496c(&uStack_38,0,0);
        return uVar4;
      }
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01cab92c(iVar3,1,0);
      if (iVar3 == 0) {
        return 0;
      }
      if (0 < *(int *)(iVar3 + 0x28)) {
        piVar1 = (int *)FUN_021566f4();
        uVar12 = *(undefined4 *)(iVar3 + 0x28);
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *piVar1;
        uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar4 != 0) {
          piVar13 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar13[-1] == **(int **)(_UNK_021625b8 + 0x2162498)) {
              puVar2 = (undefined4 *)(iVar11 + *piVar13 * 8 + 0x160);
              goto LAB_021624e0;
            }
            uVar4 = uVar4 - 1;
            piVar13 = piVar13 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_021625b8 + 0x2162498),0x14);
LAB_021624e0:
        iVar11 = (*(code *)*puVar2)(piVar1,uVar12,puVar2[1]);
        if (iVar11 == 0) {
          return 0;
        }
      }
      if (0 < *(int *)(iVar3 + 0x20)) {
        iVar11 = func_0x01c24918(0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar11 + 0x9c);
        uVar12 = *(undefined4 *)(iVar3 + 0x20);
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
      iVar11 = func_0x01dd2b98(iVar11,0);
      return (uint)(*(int *)(iVar3 + 0x14) < 1 || *(int *)(iVar3 + 0x14) <= iVar11);
    }
    if (param_2 != 0) {
      return 1;
    }
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x60);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 5;
  }
  iVar11 = func_0x0229f06c(0xf6,0,0);
  if (iVar11 == 0) {
    iVar11 = func_0x0229f06c(0xf7,0);
    if (iVar11 == 0) {
      iVar11 = func_0x01cc0400(iVar3,uVar12);
      if (iVar11 != 0) {
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
      iVar11 = func_0x0229f06c(0xf9,0);
      if (iVar11 == 0) {
        iVar11 = *(int *)(iVar3 + 8);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = func_0x02451990(iVar11,uVar12,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
        uVar4 = 1;
        if (iVar11 != 0) {
          iVar11 = func_0x01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 8);
          iVar11 = *(int *)(iVar11 + 0x68);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02451948(iVar3,uVar12,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar3 + 0x28)) {
            iVar10 = func_0x01c24918(0);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar10 = *(int *)(iVar10 + 0x9c);
            uVar12 = *(undefined4 *)(iVar3 + 0x28);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar10 = func_0x01c77708(iVar10,uVar12,0);
            if (iVar10 != 0) {
              return 1;
            }
          }
          iVar10 = func_0x01c24918(0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar10 + 0x48);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 0;
          iVar10 = func_0x01dd2b98(iVar10,0);
          iVar5 = *(int *)(iVar3 + 0x18);
          if (iVar5 <= iVar10) {
            iVar5 = *(int *)(iVar3 + 0x3c);
          }
          if (iVar5 <= iVar10) {
            iVar10 = *(int *)(iVar3 + 0x40);
            if (iVar10 == 0) {
              func_0x01384bf0();
              iVar5 = iRam0000000c;
              iVar10 = *(int *)(iVar3 + 0x40);
              if (iVar10 == 0) {
                func_0x01384bf0();
                iVar10 = 0;
              }
            }
            else {
              iVar5 = *(int *)(iVar10 + 0xc);
            }
            uVar4 = (uint)(iVar5 < 1);
            piVar1 = (int *)func_0x0364c2b4(iVar10,**(undefined4 **)(_UNK_01cc09fc + 0x1cc0758));
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
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x01e6c0b0(iVar11,uVar12,0);
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
      iVar11 = func_0x0229f13c(0xf9,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar11 = func_0x0229f13c(0xf7,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar11 = func_0x0229f13c(0xf6,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,uVar12,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar11 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar11 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar3,0);
  func_0x01485238(&uStack_38,uVar12,0);
  iVar10 = *(int *)(iVar11 + 8);
  uVar12 = *(undefined4 *)(iVar11 + 0xc);
  iVar3 = *(int *)(iVar11 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar3 == 0) {
    uVar8 = 2;
  }
  func_0x0245495c(iVar10,uVar12,&uStack_38,uVar8,0,0);
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetTimestamp RVA 0x214f104 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0215f104(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0215f1a8 + 0x215f118);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215f1ac + 0x215f12c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4e8,0);
  if (iVar1 == 0) {
    param_1 = func_0x03668dfc(**(undefined4 **)(_UNK_0215f1b0 + 0x215f184));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x2cfd,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c358bc(param_1);
      iVar4 = func_0x01c24918();
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar4 + 0x6c) != 0) {
        iVar4 = func_0x01c24918();
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x6c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x02793768(iVar4,0);
        iVar1 = iVar4 * 1000 + iVar1;
      }
      return iVar1;
    }
    iVar1 = func_0x0229f13c(0x2cfd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4e8,0);
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
  iVar1 = func_0x0245499c(&uStack_30,0,0);
  return iVar1;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.OnItemShowInView RVA 0x214f1b4 =====

/* WARNING: Possible PIC construction at 0x01dd0450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01dd0454) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215f1b4(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar7;
  undefined4 unaff_r7;
  int *piVar8;
  undefined4 unaff_r8;
  undefined4 *puVar9;
  undefined4 unaff_r9;
  undefined4 *puVar10;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  iVar2 = func_0x0229f06c(0xb4e9,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x50);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01dd08c0 + 0x1dd0364);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd08c4 + 0x1dd0378),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01dd08c8 + 0x1dd0384));
      func_0x01384978(*(undefined4 *)(_UNK_01dd08cc + 0x1dd0390));
      func_0x01384978(*(undefined4 *)(_UNK_01dd08d0 + 0x1dd039c));
      func_0x01384978(*(undefined4 *)(_UNK_01dd08d4 + 0x1dd03a8));
      func_0x01384978(*(undefined4 *)(_UNK_01dd08d8 + 0x1dd03b4));
      func_0x01384978(*(undefined4 *)(_UNK_01dd08dc + 0x1dd03c0));
      func_0x01384978(*(undefined4 *)(_UNK_01dd08e0 + 0x1dd03cc));
      *pcVar6 = '\x01';
    }
    uStack_3c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_40 = 0;
    uStack_34 = (ulonglong)uStack_3c << 0x20;
    uStack_2c = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),uStack_38);
    uStack_4c = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_54 = 0;
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_60 = 0;
    uStack_64 = 0;
    uStack_68 = 0;
    iVar2 = func_0x0229f06c(0x9da0,0);
    if (iVar2 == 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0xc0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01aa5ee0(iVar2,param_2,0);
      uVar7 = 1;
      if (iVar2 == 0) {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0xc4);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01ab7764(iVar2,param_2,0);
        if (iVar2 == 0) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 200);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01a6b790(iVar2,param_2,0);
          if (iVar2 == 0) {
            iStack_94 = iVar2;
            iVar2 = func_0x01c24918(0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0xd8);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            iStack_90 = param_1;
            uStack_8c = param_2;
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x03cd6fc4(&uStack_88,iVar2,**(undefined4 **)(_UNK_01dd08e4 + 0x1dd0574));
            uStack_34 = CONCAT44(uStack_78,uStack_7c);
            uStack_40 = uStack_88;
            uStack_3c = uStack_84;
            uStack_38 = uStack_80;
            uStack_2c = uStack_74;
            puVar9 = *(undefined4 **)(_UNK_01dd08e8 + 0x1dd05ac);
            puVar10 = *(undefined4 **)(_UNK_01dd08ec + 0x1dd05b4);
            piVar8 = *(int **)(_UNK_01dd08f0 + 0x1dd05bc);
            do {
              iVar3 = func_0x01473bf8(&uStack_40,*puVar9);
              param_1 = iStack_90;
              iVar2 = iStack_94;
              param_2 = uStack_8c;
              if (iVar3 == 0) goto LAB_01dd0690;
              uStack_48 = (undefined4)uStack_2c;
              uStack_50 = (undefined4)uStack_34;
              uStack_4c = uStack_34._4_4_;
              func_0x01483df8(&uStack_50,&uStack_58,&uStack_5c,*puVar10);
              piVar1 = (int *)func_0x01384ab8(uStack_5c,*piVar8);
              param_2 = uStack_8c;
              param_1 = iStack_90;
            } while (piVar1 == (int *)0x0);
            iVar2 = *piVar1;
            iVar3 = *piVar8;
            uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar3) {
                  puVar9 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                  goto LAB_01dd0678;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar4 != 0);
            }
            puVar9 = (undefined4 *)func_0x014002dc(piVar1,iVar3,0);
LAB_01dd0678:
            iVar2 = (*(code *)*puVar9)(piVar1,param_2,puVar9[1]);
LAB_01dd0690:
            func_0x0245081c(&uStack_40,**(undefined4 **)(_UNK_01dd08f4 + 0x1dd069c));
            uVar7 = 0;
            if (iVar2 != 0) {
              uVar7 = 1;
            }
          }
        }
      }
      piVar8 = *(int **)(_UNK_01dd08fc + 0x1dd06b8);
      iVar2 = *piVar8;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar8;
      }
      iVar2 = **(int **)(iVar2 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_68,iVar2,&uStack_60,**(undefined4 **)(_UNK_01dd0900 + 0x1dd06f4));
      iVar2 = func_0x01dd0908(param_1,param_2,uStack_60);
      if (iVar2 == 0) {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x3c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01cc14fc(iVar2,param_2,uVar7,0);
      }
      else {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar5 = uStack_60;
        iVar2 = *(int *)(iVar2 + 0x3c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_98 = 0;
        func_0x01cc16b8(iVar2,uVar5,param_2,uVar7);
      }
      func_0x028c98a0(&uStack_68,0);
      return;
    }
    iVar2 = func_0x0229f13c(0x9da0,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1dd0454;
    unaff_r4 = iVar2;
    unaff_r5 = param_1;
    unaff_r7 = param_2;
    register0x00000054 = (BADSPACEBASE *)&uStack_98;
  }
  else {
    iVar2 = func_0x0229f13c(0xb4e9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
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
  iVar3 = *(int *)(iVar2 + 0x10);
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
  iVar3 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar7,(undefined1 *)((int)register0x00000054 + -0x38),uVar5);
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetFixedCategoryOutputDB RVA 0x214f244 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215f244(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4ea,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x50);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x9d95,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01dbb5b8(iVar1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      return *(undefined4 *)(iVar1 + 0x14);
    }
    iVar1 = func_0x0229f13c(0x9d95,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4ea,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_021b6610 + 0x21b6530);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021b6614 + 0x21b6544),param_1,0);
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021b6618 + 0x21b6600));
  return uVar5;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetFixedItemOutputDB RVA 0x214f2c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215f2c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4eb,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x50);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x9d96,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01dbb5b8(iVar1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      return *(undefined4 *)(iVar1 + 0x24);
    }
    iVar1 = func_0x0229f13c(0x9d96,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4eb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_021b6610 + 0x21b6530);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021b6614 + 0x21b6544),param_1,0);
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021b6618 + 0x21b6600));
  return uVar5;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetGlobalConfig RVA 0x214f34c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215f34c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4ec,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4ec,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021981fc + 0x219811c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02198200 + 0x2198130),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02198204 + 0x21981ec));
    return uVar5;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 8);
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetItemConfig RVA 0x214f3c8 =====

/* WARNING: Possible PIC construction at 0x01cca608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cca60c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215f3c8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar4;
  undefined4 unaff_r7;
  char *pcVar5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0xb4ed,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x38);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0xae,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar1 + 0x54) == 0) ||
         (iVar1 = func_0x01cae7f4(*(int *)(iVar1 + 0x54),param_2,&uStack_14,0), iVar1 == 0)) {
        uStack_14 = func_0x01cd2880(param_1,param_2);
      }
      return uStack_14;
    }
    iVar1 = func_0x0229f13c(0xae,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cca60c;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0xb4ed,0);
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
  pcVar5 = (char *)(_UNK_021777e4 + 0x21776f0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021777e8 + 0x2177704),param_1,param_2,0);
    *pcVar5 = '\x01';
  }
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0);
  iVar2 = *(int *)(iVar1 + 0x10);
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
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar2,uVar4,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  uVar4 = func_0x02f5db90((undefined1 *)((int)register0x00000054 + -0x38),0,
                          **(undefined4 **)(_UNK_021777ec + 0x21777d4));
  return uVar4;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetItemMergeConfig RVA 0x214f458 =====

/* WARNING: Possible PIC construction at 0x01cccb38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cccb3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215f458(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar4;
  undefined4 unaff_r7;
  char *pcVar5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0xb4ee,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x38);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0x353,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar1 + 0x54) == 0) ||
         (iVar1 = func_0x01caeb8c(*(int *)(iVar1 + 0x54),param_2,&uStack_14,0), iVar1 == 0)) {
        uStack_14 = func_0x01cd2a78(param_1,param_2);
      }
      return uStack_14;
    }
    iVar1 = func_0x0229f13c(0x353,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cccb3c;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0xb4ee,0);
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
  pcVar5 = (char *)(_UNK_02185b4c + 0x2185a58);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02185b50 + 0x2185a6c),param_1,param_2,0);
    *pcVar5 = '\x01';
  }
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0);
  iVar2 = *(int *)(iVar1 + 0x10);
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
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar2,uVar4,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  uVar4 = func_0x02f5db90((undefined1 *)((int)register0x00000054 + -0x38),0,
                          **(undefined4 **)(_UNK_02185b54 + 0x2185b3c));
  return uVar4;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetItemComConfig RVA 0x214f4e8 =====

/* WARNING: Possible PIC construction at 0x01db576c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01db5770) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215f4e8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar4;
  undefined4 unaff_r7;
  char *pcVar5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0xb4ef,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x50);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0x7f3,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar1 + 0x54) == 0) ||
         (iVar1 = func_0x01caef24(*(int *)(iVar1 + 0x54),param_2,&uStack_14,0), iVar1 == 0)) {
        uStack_14 = func_0x01dcfd10(param_1,param_2);
      }
      return uStack_14;
    }
    iVar1 = func_0x0229f13c(0x7f3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1db5770;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0xb4ef,0);
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
  pcVar5 = (char *)(_UNK_021971c8 + 0x21970d4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021971cc + 0x21970e8),param_1,param_2,0);
    *pcVar5 = '\x01';
  }
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0);
  iVar2 = *(int *)(iVar1 + 0x10);
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
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar2,uVar4,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  uVar4 = func_0x02f5db90((undefined1 *)((int)register0x00000054 + -0x38),0,
                          **(undefined4 **)(_UNK_021971d0 + 0x21971b8));
  return uVar4;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetCategoryByItem RVA 0x214f578 =====

/* WARNING: Possible PIC construction at 0x01db18dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01db18e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215f578(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar4;
  undefined4 unaff_r7;
  char *pcVar5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0xb4f0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x50);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_2 = func_0x01dd02a0(iVar1,param_2,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0x424,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar1 + 0x54) == 0) ||
         (iVar1 = func_0x01caf654(*(int *)(iVar1 + 0x54),param_2,&uStack_14,0), iVar1 == 0)) {
        uStack_14 = func_0x01dcfd78(param_1,param_2);
      }
      return uStack_14;
    }
    iVar1 = func_0x0229f13c(0x424,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1db18e0;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0xb4f0,0);
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
  pcVar5 = (char *)(_UNK_02188f80 + 0x2188e8c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02188f84 + 0x2188ea0),param_1,param_2,0);
    *pcVar5 = '\x01';
  }
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0);
  iVar2 = *(int *)(iVar1 + 0x10);
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
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar2,uVar4,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  uVar4 = func_0x02f5db90((undefined1 *)((int)register0x00000054 + -0x38),0,
                          **(undefined4 **)(_UNK_02188f88 + 0x2188f70));
  return uVar4;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetFixedOutputConfig RVA 0x214f644 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215f644(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
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
  
  iVar2 = func_0x0229f06c(0xb4f1,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x50);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_01dcfecc + 0x1dcfe48);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dcfed0 + 0x1dcfe5c),param_2,0);
      *pcVar9 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x9d9b,0);
    if (iVar2 == 0) {
      iVar2 = **(int **)(_UNK_01dcfed4 + 0x1dcfec0);
      piVar1 = *(int **)(param_1 + 0x3c);
      if (*(int *)(iVar2 + 0x1c) == 0) {
        func_0x0140024c(iVar2);
      }
      auStack_1c[0] = 0;
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = **(int **)(iVar2 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0(iVar2);
      }
      iVar7 = *piVar1;
      uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
            goto LAB_02f7c1a4;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar2,7);
LAB_02f7c1a4:
      iVar2 = (*(code *)*puVar3)(piVar1,param_2,auStack_1c,puVar3[1]);
      uVar8 = 0;
      if (iVar2 != 0) {
        uVar8 = auStack_1c[0];
      }
      return uVar8;
    }
    iVar2 = func_0x0229f13c(0x9d9b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb4f1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar9 = (char *)(_UNK_02283fb4 + 0x2283ec0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02283fb8 + 0x2283ed4),param_1,param_2,0);
    *pcVar9 = '\x01';
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
  uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02283fbc + 0x2283fa4));
  return uVar8;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetFixedOutputByItemConfig RVA 0x214f6d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215f6d4(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
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
  
  iVar2 = func_0x0229f06c(0xb4f2,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x50);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_01dcff74 + 0x1dcfef0);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dcff78 + 0x1dcff04),param_2,0);
      *pcVar9 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x9d9c,0);
    if (iVar2 == 0) {
      iVar2 = **(int **)(_UNK_01dcff7c + 0x1dcff68);
      piVar1 = *(int **)(param_1 + 0x40);
      if (*(int *)(iVar2 + 0x1c) == 0) {
        func_0x0140024c(iVar2);
      }
      auStack_1c[0] = 0;
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = **(int **)(iVar2 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0(iVar2);
      }
      iVar7 = *piVar1;
      uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
            goto LAB_02f7c1a4;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar2,7);
LAB_02f7c1a4:
      iVar2 = (*(code *)*puVar3)(piVar1,param_2,auStack_1c,puVar3[1]);
      uVar8 = 0;
      if (iVar2 != 0) {
        uVar8 = auStack_1c[0];
      }
      return uVar8;
    }
    iVar2 = func_0x0229f13c(0x9d9c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb4f2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar9 = (char *)(_UNK_022840d4 + 0x2283fe0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022840d8 + 0x2283ff4),param_1,param_2,0);
    *pcVar9 = '\x01';
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
  uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_022840dc + 0x22840c4));
  return uVar8;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetRuledOutputConfig RVA 0x214f764 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215f764(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_0215f840 + 0x215f77c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215f844 + 0x215f790));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4f3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4f3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_0229dd80 + 0x229dc8c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229dd84 + 0x229dca0),param_1,param_2,0);
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
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0229dd88 + 0x229dd70));
    return uVar9;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01ca75c8(iVar1,0);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar1 = **(int **)(_UNK_0215f848 + 0x215f82c);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetMergeRuleByItem RVA 0x214f84c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215f84c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
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
  
  iVar2 = func_0x0229f06c(0xb4f4,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x50);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_01dd001c + 0x1dcff98);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd0020 + 0x1dcffac),param_2,0);
      *pcVar9 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x9d9d,0);
    if (iVar2 == 0) {
      iVar2 = **(int **)(_UNK_01dd0024 + 0x1dd0010);
      piVar1 = *(int **)(param_1 + 0x38);
      if (*(int *)(iVar2 + 0x1c) == 0) {
        func_0x0140024c(iVar2);
      }
      auStack_1c[0] = 0;
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = **(int **)(iVar2 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0(iVar2);
      }
      iVar7 = *piVar1;
      uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
            goto LAB_02f7c1a4;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar2,7);
LAB_02f7c1a4:
      iVar2 = (*(code *)*puVar3)(piVar1,param_2,auStack_1c,puVar3[1]);
      uVar8 = 0;
      if (iVar2 != 0) {
        uVar8 = auStack_1c[0];
      }
      return uVar8;
    }
    iVar2 = func_0x0229f13c(0x9d9d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb4f4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar9 = (char *)(_UNK_022841f4 + 0x2284100);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022841f8 + 0x2284114),param_1,param_2,0);
    *pcVar9 = '\x01';
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
  uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_022841fc + 0x22841e4));
  return uVar8;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetMergeGridConfig RVA 0x214f8dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215f8dc(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
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
  
  iVar2 = func_0x0229f06c(0xb4f5,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x4c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_01dbd4f0 + 0x1dbd46c);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dbd4f4 + 0x1dbd480),param_2,0);
      *pcVar9 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x9d61,0);
    if (iVar2 == 0) {
      iVar2 = **(int **)(_UNK_01dbd4f8 + 0x1dbd4e4);
      piVar1 = *(int **)(param_1 + 0x28);
      if (*(int *)(iVar2 + 0x1c) == 0) {
        func_0x0140024c(iVar2);
      }
      auStack_1c[0] = 0;
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = **(int **)(iVar2 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0(iVar2);
      }
      iVar7 = *piVar1;
      uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
            goto LAB_02f7c1a4;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar2,7);
LAB_02f7c1a4:
      iVar2 = (*(code *)*puVar3)(piVar1,param_2,auStack_1c,puVar3[1]);
      uVar8 = 0;
      if (iVar2 != 0) {
        uVar8 = auStack_1c[0];
      }
      return uVar8;
    }
    iVar2 = func_0x0229f13c(0x9d61,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb4f5,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar9 = (char *)(_UNK_0228312c + 0x2283038);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02283130 + 0x228304c),param_1,param_2,0);
    *pcVar9 = '\x01';
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
  uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02283134 + 0x228311c));
  return uVar8;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.TryGetDropLimitItemConfig RVA 0x214f96c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215f96c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  
  iVar3 = func_0x0229f06c(0xb4f6,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xb4f6,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02284690(iVar3,param_1,param_2,param_3,0);
    return;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x50);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_01dd1784 + 0x1dd168c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd1788 + 0x1dd16a0),param_2,param_3,0);
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9da8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9da8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02284690(iVar1,iVar3,param_2,param_3,0);
    return;
  }
  piVar6 = *(int **)(iVar3 + 0x18);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar6;
  uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01dd178c + 0x1dd171c)) {
        puVar2 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xf8);
        goto LAB_01dd1764;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dd178c + 0x1dd171c),7);
LAB_01dd1764:
                    /* WARNING: Could not recover jumptable at 0x01dd1780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,param_2,param_3,puVar2[1]);
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.CollectBonus RVA 0x214fa18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215fa18(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  
  pcVar3 = (char *)(_UNK_0215fb60 + 0x215fa38);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215fb64 + 0x215fa4c));
    func_0x01384978(*(undefined4 *)(_UNK_0215fb68 + 0x215fa58));
    func_0x01384978(*(undefined4 *)(_UNK_0215fb6c + 0x215fa64));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4f7,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar4 = *(int **)(_UNK_0215fb70 + 0x215fae0);
    iVar2 = *(int *)(iVar1 + 0x40);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x24);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01cdcbac(iVar2,param_2,param_3,uVar5,0,0,0,0x60,
                    **(undefined4 **)(_UNK_0215fb74 + 0x215fb20),
                    **(undefined4 **)(_UNK_0215fb78 + 0x215fb2c),0);
  }
  else {
    iVar1 = func_0x0229f13c(0xb4f7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0229dd8c(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.SellItem RVA 0x214fb7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215fb7c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  
  pcVar3 = (char *)(_UNK_0215fcc4 + 0x215fb9c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215fcc8 + 0x215fbb0));
    func_0x01384978(*(undefined4 *)(_UNK_0215fccc + 0x215fbbc));
    func_0x01384978(*(undefined4 *)(_UNK_0215fcd0 + 0x215fbc8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4f8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar4 = *(int **)(_UNK_0215fcd4 + 0x215fc44);
    iVar2 = *(int *)(iVar1 + 0x40);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xa8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01cdcbac(iVar2,param_2,param_3,uVar5,0,0,0,100,
                    **(undefined4 **)(_UNK_0215fcd8 + 0x215fc84),
                    **(undefined4 **)(_UNK_0215fcdc + 0x215fc90),0);
  }
  else {
    iVar1 = func_0x0229f13c(0xb4f8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0229dd8c(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.CanUseEnergy RVA 0x214fce0 =====

uint FUN_0215fce0(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xb4f9,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x90);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x9d70,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
      return (uint)(param_2 <= iVar1);
    }
    iVar1 = func_0x0229f13c(0x9d70,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4f9,0);
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



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.UseEnergy RVA 0x214fd70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215fd70(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint uStack_30;
  undefined4 uStack_2c;
  int aiStack_24 [3];
  
  iVar3 = func_0x0229f06c(0xb4fa,0);
  if (iVar3 == 0) {
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x90);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01dc35a0 + 0x1dc325c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dc35a4 + 0x1dc3270),param_2,param_3,0);
      func_0x01384978(*(undefined4 *)(_UNK_01dc35a8 + 0x1dc327c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc35ac + 0x1dc3288));
      func_0x01384978(*(undefined4 *)(_UNK_01dc35b0 + 0x1dc3294));
      func_0x01384978(*(undefined4 *)(_UNK_01dc35b4 + 0x1dc32a0));
      func_0x01384978(*(undefined4 *)(_UNK_01dc35b8 + 0x1dc32ac));
      func_0x01384978(*(undefined4 *)(_UNK_01dc35bc + 0x1dc32b8));
      func_0x01384978(*(undefined4 *)(_UNK_01dc35c0 + 0x1dc32c4));
      func_0x01384978(*(undefined4 *)(_UNK_01dc35c4 + 0x1dc32d0));
      func_0x01384978(*(undefined4 *)(_UNK_01dc35c8 + 0x1dc32dc));
      func_0x01384978(*(undefined4 *)(_UNK_01dc35cc + 0x1dc32e8));
      func_0x01384978(*(undefined4 *)(_UNK_01dc35d0 + 0x1dc32f4));
      func_0x01384978(*(undefined4 *)(_UNK_01dc35d4 + 0x1dc3300));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x9d71,0);
    if (iVar1 == 0) {
      if (param_2 < 0) {
        aiStack_24[0] = param_2;
        uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_01dc35d8 + 0x1dc3538),aiStack_24);
        uVar2 = 0;
        uVar4 = func_0x0244f690(**(undefined4 **)(_UNK_01dc35dc + 0x1dc3558),
                                **(undefined4 **)(_UNK_01dc35e0 + 0x1dc3564),uVar4,0);
        if (*(int *)(**(int **)(_UNK_01dc35e4 + 0x1dc3578) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2944(uVar4,0);
      }
      else {
        uVar2 = 0;
        iVar1 = func_0x028d1a38(*(undefined4 *)(iVar3 + 0x10),0);
        if (param_2 <= iVar1) {
          iVar6 = *(int *)(iVar3 + 0x10);
          iVar1 = func_0x028d1a38(iVar6,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0245190c(iVar6,iVar1 - param_2,**(undefined4 **)(_UNK_01dc35e8 + 0x1dc33ac));
          func_0x019a4728(param_3,0,param_2,0,0);
          func_0x01dc3604(iVar3);
          if (*(int *)(**(int **)(_UNK_01dc35ec + 0x1dc33e0) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_01dc35f0 + 0x1dc33fc));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x0349e110(iVar3,-param_2,**(undefined4 **)(_UNK_01dc35f4 + 0x1dc3424));
          iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_01dc35f8 + 0x1dc3438));
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x4c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01dbb000(iVar1);
          uVar4 = 0xffffffff;
          if ((iVar1 != 0) && (iVar1 = FUN_02139cf4(iVar1,0), iVar1 != 0)) {
            uStack_2c = 0;
            uStack_30 = 0;
            func_0x03507d38(&uStack_30,*(undefined4 *)(iVar1 + 8),
                            **(undefined4 **)(_UNK_01dc35fc + 0x1dc349c));
            uVar4 = uStack_2c;
            if ((uStack_30 & 0xff) == 0) {
              uVar4 = 0xffffffff;
            }
          }
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x034a0af8(iVar3,-param_2,uVar4,**(undefined4 **)(_UNK_01dc3600 + 0x1dc34e0));
          iVar3 = func_0x01c24918(0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0xac);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x01ba1208(iVar3,param_2,0);
          uVar2 = 1;
        }
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x9d71,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x021846e8(iVar1,iVar3,param_2,param_3,0);
    }
    return uVar2;
  }
  iVar3 = func_0x0229f13c(0xb4fa,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  aiStack_24[1] = 0;
  uVar4 = func_0x021846e8(iVar3,param_1,param_2,param_3);
  return uVar4;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.SwitchEnergyBoostState RVA 0x214fe1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215fe1c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  pcVar4 = (char *)(_UNK_0215fec0 + 0x215fe30);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215fec4 + 0x215fe44));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4fb,0);
  if (iVar1 == 0) {
    param_1 = func_0x03668dfc(**(undefined4 **)(_UNK_0215fec8 + 0x215fe9c));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x1003,0);
    if (iVar1 == 0) {
      uVar7 = func_0x02163340(*(undefined4 *)(param_1 + 0x10),0);
      iVar1 = func_0x0229f06c(0xeee,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0xeee,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,uVar7,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,uVar7,0);
        iVar5 = *(int *)(iVar1 + 8);
        uVar7 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 3;
        if (iVar1 == 0) {
          uVar2 = 2;
        }
        func_0x0245495c(iVar5,uVar7,&uStack_38,uVar2,0,0);
        return;
      }
      *(undefined4 *)(param_1 + 0x10) = uVar7;
      func_0x0256bc38(param_1);
      uVar2 = func_0x0256b5d8(param_1);
      uVar7 = func_0x02162868(uVar7,0);
      pcVar4 = (char *)(_UNK_019ad85c + 0x19ad750);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_019ad860 + 0x19ad764),uVar7,0);
        func_0x01384978(*(undefined4 *)(_UNK_019ad864 + 0x19ad770));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x972,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x972,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,uVar7,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485228(&uStack_38,uVar2,0);
        func_0x01485238(&uStack_38,uVar7,0);
        iVar5 = *(int *)(iVar1 + 8);
        uVar7 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 3;
        if (iVar1 == 0) {
          uVar2 = 2;
        }
        func_0x0245495c(iVar5,uVar7,&uStack_38,uVar2,0,0);
        return;
      }
      if (*(int *)(**(int **)(_UNK_019ad868 + 0x19ad7cc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x02f74dec(**(undefined4 **)(_UNK_019ad86c + 0x19ad7e8));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 0x4c) = uVar7;
      *(char *)(iVar1 + 0x48) = (char)uVar2;
      func_0x019930d8(iVar1,0,0);
      iVar1 = func_0x01999ecc(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      param_1 = func_0x0231c0c4(iVar1,uVar7,0);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      pcVar4 = (char *)(_UNK_0231c4b8 + 0x231c3a4);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0231c4bc + 0x231c3b8),0);
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x109,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x029f937c(iVar1,0);
        if (iVar1 == 0) {
          uVar7 = *(undefined4 *)(param_1 + 8);
          iVar1 = **(int **)(**(int **)(_UNK_0231c4c0 + 0x231c434) + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x020a399c(iVar1,uVar7,0);
        }
        iVar1 = *(int *)(param_1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x029f937c(iVar1,0);
        if (iVar1 == 0) {
          piVar3 = *(int **)(param_1 + 0xc);
          iVar1 = **(int **)(**(int **)(_UNK_0231c4c4 + 0x231c48c) + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_18 = unaff_r4;
          iVar5 = func_0x0229f06c(0x10b,0,0);
          if (iVar5 == 0) {
            iVar5 = *(int *)(iVar1 + 0x20);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x02450014(iVar5,0);
            uVar7 = *(undefined4 *)(iVar1 + 0x20);
            if (piVar3 == (int *)0x0) {
              func_0x01384bf0();
            }
            uStack_1c = *(undefined4 *)(*piVar3 + 0x19c);
            uStack_20 = 0;
            (**(code **)(*piVar3 + 0x198))(piVar3,uVar7,4,4);
            piVar3 = *(int **)(iVar1 + 0x20);
            if (piVar3 == (int *)0x0) {
              func_0x01384bf0();
            }
            uVar7 = (**(code **)(*piVar3 + 0xd8))(piVar3,*(undefined4 *)(*piVar3 + 0xdc));
            iVar5 = func_0x020a3acc(iVar1,2,0,uVar7);
            if (iVar5 == 0) {
              piVar3 = *(int **)(iVar1 + 0x24);
              if (piVar3 == (int *)0x0) {
                func_0x01384bf0();
              }
                    /* WARNING: Could not recover jumptable at 0x020a3cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*piVar3 + 0x1e0))(piVar3,uVar7,*(undefined4 *)(*piVar3 + 0x1e4));
              return;
            }
            return;
          }
          iVar5 = func_0x0229f13c(0x10b,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uStack_20 = uStack_18;
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x0245494c(&uStack_50,0,piVar3,0);
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar5 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar1,0);
          func_0x01485278(&uStack_38,piVar3,0);
          iVar6 = *(int *)(iVar5 + 8);
          uVar7 = *(undefined4 *)(iVar5 + 0xc);
          iVar1 = *(int *)(iVar5 + 0x10);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar2 = 3;
          if (iVar1 == 0) {
            uVar2 = 2;
          }
          func_0x0245495c(iVar6,uVar7,&uStack_38,uVar2,0,0);
          return;
        }
        return;
      }
      iVar1 = func_0x0229f13c(0x109,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x1003,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4fb,0);
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
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar2);
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.IsInEnergyBoost RVA 0x214fecc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215fecc(undefined4 param_1)

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
  
  pcVar7 = (char *)(_UNK_0216000c + 0x215fee0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02160010 + 0x215fef4));
    func_0x01384978(*(undefined4 *)(_UNK_02160014 + 0x215ff00));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4fc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4fc,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    uVar9 = func_0x0245496c(&uStack_30,0,0);
    return uVar9;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_02160018 + 0x215ff58));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0256b5d8(iVar1,0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0216001c + 0x215ffa4)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
        goto LAB_0215fff4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0216001c + 0x215ffa4),1);
LAB_0215fff4:
                    /* WARNING: Could not recover jumptable at 0x02160008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (*(code *)*puVar3)(piVar2,1,puVar3[1]);
  return uVar9;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetEnergyBoostState RVA 0x2150020 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02160020(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_021600bc + 0x2160034);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021600c0 + 0x2160048));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4fd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4fd,0);
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
    uVar5 = func_0x0245498c(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_021600c4 + 0x21600a0));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x10);
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetNextLevelItemId RVA 0x21500c8 =====

undefined4 FUN_021600c8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar2 = func_0x0229f06c(0xb4fe,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb4fe,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_20 = 0;
    uVar3 = func_0x02180128(iVar2,param_1,param_2,param_3);
    return uVar3;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x50);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_1c = 0;
  iStack_20 = 0;
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0x9d9e,0,param_3,0);
  if (iVar1 == 0) {
    func_0x01db1798(iVar2,param_2,&uStack_1c,&iStack_20);
    func_0x01dd00d8(iVar2,uStack_1c,param_3 + iStack_20 + 1,&uStack_24);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d9e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = func_0x02180128(iVar1,iVar2,param_2,param_3,0);
  }
  return uStack_24;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.CanUseCoin RVA 0x2150174 =====

void FUN_02160174(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0xb4ff,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4ff,0);
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
    func_0x0245496c(&uStack_38,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01c9d24c(&uStack_20,iVar1,2,0);
  uVar2 = uStack_1c;
  uVar4 = uStack_20;
  uStack_28 = 0;
  func_0x02555fe4(&uStack_20,extraout_r1,param_2,param_2 >> 0x1f);
  uStack_28 = 0;
  func_0x02555f58(uVar4,uVar2,uStack_20,uStack_1c);
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.UseCoin RVA 0x215024c =====

/* WARNING: Removing unreachable block (ram,0x01c90364) */
/* WARNING: Removing unreachable block (ram,0x01c90370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0216024c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [2];
  undefined4 uStack_20;
  
  iVar7 = func_0x0229f06c(0xb500,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0xb500,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x0217ab90(iVar7,param_1,param_2,param_3);
    return;
  }
  iVar7 = func_0x01c24918(0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x44);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  iVar7 = func_0x01c8f9a0(iVar7,2,param_2,param_3);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_01c90850 + 0x1c8fae8);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c90854 + 0x1c8fafc),0);
    func_0x01384978(*(undefined4 *)(_UNK_01c90858 + 0x1c8fb08));
    func_0x01384978(*(undefined4 *)(_UNK_01c9085c + 0x1c8fb14));
    func_0x01384978(*(undefined4 *)(_UNK_01c90860 + 0x1c8fb20));
    func_0x01384978(*(undefined4 *)(_UNK_01c90864 + 0x1c8fb2c));
    func_0x01384978(*(undefined4 *)(_UNK_01c90868 + 0x1c8fb38));
    func_0x01384978(*(undefined4 *)(_UNK_01c9086c + 0x1c8fb44));
    func_0x01384978(*(undefined4 *)(_UNK_01c90870 + 0x1c8fb50));
    func_0x01384978(*(undefined4 *)(_UNK_01c90874 + 0x1c8fb5c));
    func_0x01384978(*(undefined4 *)(_UNK_01c90878 + 0x1c8fb68));
    func_0x01384978(*(undefined4 *)(_UNK_01c9087c + 0x1c8fb74));
    func_0x01384978(*(undefined4 *)(_UNK_01c90880 + 0x1c8fb80));
    func_0x01384978(*(undefined4 *)(_UNK_01c90884 + 0x1c8fb8c));
    func_0x01384978(*(undefined4 *)(_UNK_01c90888 + 0x1c8fb98));
    func_0x01384978(*(undefined4 *)(_UNK_01c9088c + 0x1c8fba4));
    func_0x01384978(*(undefined4 *)(_UNK_01c90890 + 0x1c8fbb0));
    func_0x01384978(*(undefined4 *)(_UNK_01c90894 + 0x1c8fbbc));
    func_0x01384978(*(undefined4 *)(_UNK_01c90898 + 0x1c8fbc8));
    func_0x01384978(*(undefined4 *)(_UNK_01c9089c + 0x1c8fbd4));
    func_0x01384978(*(undefined4 *)(_UNK_01c908a0 + 0x1c8fbe0));
    func_0x01384978(*(undefined4 *)(_UNK_01c908a4 + 0x1c8fbec));
    *pcVar10 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x0229f06c(0xb9,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    uVar11 = *(undefined4 *)(iVar7 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0245185c(iVar1,uVar11,aiStack_28,**(undefined4 **)(_UNK_01c908a8 + 0x1c8fc90));
    iVar1 = aiStack_28[0];
    if (iVar2 == 0) {
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c908ac + 0x1c8fe4c),2);
      uStack_2c = *(undefined4 *)(iVar7 + 0xc);
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c908b0 + 0x1c8fe64),&uStack_2c);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = iVar1;
      piVar13 = *(int **)(iVar7 + 0x10);
      if (piVar13 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = (**(code **)(*piVar13 + 0xd8))(piVar13,*(undefined4 *)(*piVar13 + 0xdc));
      if ((iVar7 != 0) &&
         (iVar1 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar3 + 0x20)), iVar1 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if ((uint)piVar3[3] < 2) {
        func_0x01384bf4();
      }
      piVar3[5] = iVar7;
      if (*(int *)(**(int **)(_UNK_01c908b4 + 0x1c8ff34) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(**(undefined4 **)(_UNK_01c908b8 + 0x1c8ff58),piVar3,0);
    }
    else if (*(int *)(iVar7 + 0xc) < 0) {
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c908bc + 0x1c8ff70),3);
      uStack_2c = *(undefined4 *)(iVar7 + 8);
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c908c0 + 0x1c8ff88),&uStack_2c);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = iVar1;
      uStack_30 = *(undefined4 *)(iVar7 + 0xc);
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c908c4 + 0x1c8fff4),&uStack_30);
      if ((iVar1 != 0) &&
         (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if ((uint)piVar3[3] < 2) {
        func_0x01384bf4();
      }
      piVar3[5] = iVar1;
      iVar7 = *(int *)(iVar7 + 0x10);
      if ((iVar7 != 0) &&
         (iVar1 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar3 + 0x20)), iVar1 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if ((uint)piVar3[3] < 3) {
        func_0x01384bf4();
      }
      piVar3[6] = iVar7;
      if (*(int *)(**(int **)(_UNK_01c908c8 + 0x1c90094) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2f28(**(undefined4 **)(_UNK_01c908cc + 0x1c900b8),piVar3,0);
      iVar7 = func_0x03668dfc(**(undefined4 **)(_UNK_01c908d0 + 0x1c900c8));
      if (*(int *)(**(int **)(_UNK_01c908d4 + 0x1c900dc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar11 = func_0x028c0c80(0x12,0,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x01c37da4(iVar7,uVar11,0x12,0,**(undefined4 **)(_UNK_01c908d8 + 0x1c90128),1,0);
    }
    else {
      if (aiStack_28[0] == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02451860(iVar1,**(undefined4 **)(_UNK_01c908dc + 0x1c8fcc8));
      if (iVar1 < *(int *)(iVar7 + 0xc)) {
        piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c90914 + 0x1c8fcec),3);
        uStack_2c = *(undefined4 *)(iVar7 + 8);
        iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c90918 + 0x1c8fd04),&uStack_2c);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar1 != 0) &&
           (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
          uVar11 = func_0x01384c10();
          func_0x01384aa0(uVar11,0);
        }
        if (piVar3[3] == 0) {
          func_0x01384bf4();
        }
        piVar3[4] = iVar1;
        uStack_30 = *(undefined4 *)(iVar7 + 0xc);
        iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c9091c + 0x1c8fd70),&uStack_30);
        if ((iVar1 != 0) &&
           (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
          uVar11 = func_0x01384c10();
          func_0x01384aa0(uVar11,0);
        }
        if ((uint)piVar3[3] < 2) {
          func_0x01384bf4();
        }
        piVar3[5] = iVar1;
        iVar7 = *(int *)(iVar7 + 0x10);
        if ((iVar7 != 0) &&
           (iVar1 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar3 + 0x20)), iVar1 == 0)) {
          uVar11 = func_0x01384c10();
          func_0x01384aa0(uVar11,0);
        }
        if ((uint)piVar3[3] < 3) {
          func_0x01384bf4();
        }
        piVar3[6] = iVar7;
        if (*(int *)(**(int **)(_UNK_01c90920 + 0x1c8fe10) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2f28(**(undefined4 **)(_UNK_01c90924 + 0x1c8fe34),piVar3,0);
      }
      else {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x280);
        uVar14 = 0;
        if (iVar1 != 0) {
          piVar3 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_01c908e0 + 0x1c90194));
          piVar15 = *(int **)(_UNK_01c908e4 + 0x1c901a8);
          piVar13 = *(int **)(_UNK_01c908e8 + 0x1c901b0);
          do {
            if (piVar3 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar3;
            uVar14 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar14 != 0) {
              piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar9[-1] == *piVar15) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
                  goto LAB_01c90208;
                }
                uVar14 = uVar14 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar14 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar15,0);
LAB_01c90208:
            uVar14 = (*(code *)*puVar4)(piVar3,puVar4[1]);
            if (uVar14 == 0) {
              uVar14 = 0;
              break;
            }
            if (piVar3 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar3;
            uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar9[-1] == *piVar13) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
                  goto LAB_01c90284;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_01c90284:
            uVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
            piVar9 = *(int **)(iVar7 + 0x10);
            if (piVar9 == (int *)0x0) {
              func_0x01384bf0();
            }
            uVar5 = (**(code **)(*piVar9 + 0xd8))(piVar9,*(undefined4 *)(*piVar9 + 0xdc));
            iVar1 = func_0x014855c8(uVar11,uVar5,5,0);
          } while (iVar1 == 0);
          if (piVar3 != (int *)0x0) {
            iVar1 = *piVar3;
            uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar13[-1] == **(int **)(_UNK_01c908ec + 0x1c90304)) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
                  goto LAB_01c9034c;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 2;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c908ec + 0x1c90304),0);
LAB_01c9034c:
            (*(code *)*puVar4)(piVar3,puVar4[1]);
          }
        }
        uVar8 = 0;
        if ((*(int *)(iVar7 + 8) == 1) && (*(int *)(iVar7 + 0x14) != 0)) {
          iVar2 = *(int *)(iVar7 + 0xc);
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar8 = 0;
          if (*(int *)(iVar1 + 0x450) <= iVar2) {
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x60);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar8 = func_0x01cc0100(iVar1,0x66,0);
          }
        }
        if ((uVar8 & uVar14) == 0) {
          iVar1 = *(int *)(iVar7 + 0x14);
          if (iVar1 != 0) {
            (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
          }
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x44);
          uVar11 = *(undefined4 *)(iVar7 + 8);
          uVar5 = *(undefined4 *)(iVar7 + 0xc);
          uVar12 = *(undefined4 *)(iVar7 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01c9e7c0(iVar1,uVar11,uVar5,uVar12);
        }
        else {
          iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01c908f0 + 0x1c9042c));
          piVar3 = *(int **)(_UNK_01c908f4 + 0x1c90440);
          iVar2 = *piVar3;
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar3;
          }
          uVar11 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x24c);
          piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c908f8 + 0x1c90464),7);
          uStack_2c = *(undefined4 *)(iVar7 + 8);
          iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01c908fc + 0x1c90484),&uStack_2c);
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if (piVar3[3] == 0) {
            func_0x01384bf4();
          }
          piVar3[4] = iVar2;
          uStack_30 = *(undefined4 *)(iVar7 + 0xc);
          iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01c90900 + 0x1c904f0),&uStack_30);
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar3[3] < 2) {
            func_0x01384bf4();
          }
          piVar3[5] = iVar2;
          iVar2 = *(int *)(iVar7 + 0x10);
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar3[3] < 3) {
            func_0x01384bf4();
          }
          piVar3[6] = iVar2;
          uStack_31 = *(undefined1 *)(iVar7 + 0x18);
          puVar4 = *(undefined4 **)(_UNK_01c90904 + 0x1c90594);
          iVar2 = func_0x01384abc(*puVar4,&uStack_31);
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar3[3] < 4) {
            func_0x01384bf4();
          }
          piVar3[7] = iVar2;
          iVar2 = *(int *)(iVar7 + 0x1c);
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar3[3] < 5) {
            func_0x01384bf4();
          }
          piVar3[8] = iVar2;
          uStack_32 = *(undefined1 *)(iVar7 + 0x20);
          iVar2 = func_0x01384abc(*puVar4,&uStack_32);
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar3[3] < 6) {
            func_0x01384bf4();
          }
          piVar3[9] = iVar2;
          iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01c90908 + 0x1c9068c));
          func_0x024500b4(iVar2,iVar7,**(undefined4 **)(_UNK_01c9090c + 0x1c906a8),0);
          if ((iVar2 != 0) &&
             (iVar7 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar7 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar3[3] < 7) {
            func_0x01384bf4();
          }
          piVar3[10] = iVar2;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01ee858c(iVar1,uVar11,piVar3,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,iVar7,0);
  }
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.CanUseGem RVA 0x215031c =====

void FUN_0216031c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0xb501,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb501,0);
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
    func_0x0245496c(&uStack_38,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01c9d24c(&uStack_20,iVar1,1,0);
  uVar2 = uStack_1c;
  uVar4 = uStack_20;
  uStack_28 = 0;
  func_0x02555fe4(&uStack_20,extraout_r1,param_2,param_2 >> 0x1f);
  uStack_28 = 0;
  func_0x02555f58(uVar4,uVar2,uStack_20,uStack_1c);
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.UseGem RVA 0x21503f4 =====

/* WARNING: Removing unreachable block (ram,0x01c90364) */
/* WARNING: Removing unreachable block (ram,0x01c90370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021603f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined4 uStack_30;
  int iStack_2c;
  int aiStack_28 [2];
  
  iVar7 = func_0x0229f06c(0xb502,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0xb502,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = param_5;
    aiStack_28[0] = 0;
    uStack_30 = param_4;
    func_0x0229df8c(iVar7,param_1,param_2,param_3);
    return;
  }
  iVar7 = func_0x01c24918(0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x44);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uStack_30 = 0;
  iVar7 = func_0x01c8f9a0(iVar7,1,param_2,param_3);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x01c8fa70(iVar7,param_4,0);
  if (param_5 != 0) {
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x01ca11b0(iVar7,0);
  }
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_01c90850 + 0x1c8fae8);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c90854 + 0x1c8fafc),0);
    func_0x01384978(*(undefined4 *)(_UNK_01c90858 + 0x1c8fb08));
    func_0x01384978(*(undefined4 *)(_UNK_01c9085c + 0x1c8fb14));
    func_0x01384978(*(undefined4 *)(_UNK_01c90860 + 0x1c8fb20));
    func_0x01384978(*(undefined4 *)(_UNK_01c90864 + 0x1c8fb2c));
    func_0x01384978(*(undefined4 *)(_UNK_01c90868 + 0x1c8fb38));
    func_0x01384978(*(undefined4 *)(_UNK_01c9086c + 0x1c8fb44));
    func_0x01384978(*(undefined4 *)(_UNK_01c90870 + 0x1c8fb50));
    func_0x01384978(*(undefined4 *)(_UNK_01c90874 + 0x1c8fb5c));
    func_0x01384978(*(undefined4 *)(_UNK_01c90878 + 0x1c8fb68));
    func_0x01384978(*(undefined4 *)(_UNK_01c9087c + 0x1c8fb74));
    func_0x01384978(*(undefined4 *)(_UNK_01c90880 + 0x1c8fb80));
    func_0x01384978(*(undefined4 *)(_UNK_01c90884 + 0x1c8fb8c));
    func_0x01384978(*(undefined4 *)(_UNK_01c90888 + 0x1c8fb98));
    func_0x01384978(*(undefined4 *)(_UNK_01c9088c + 0x1c8fba4));
    func_0x01384978(*(undefined4 *)(_UNK_01c90890 + 0x1c8fbb0));
    func_0x01384978(*(undefined4 *)(_UNK_01c90894 + 0x1c8fbbc));
    func_0x01384978(*(undefined4 *)(_UNK_01c90898 + 0x1c8fbc8));
    func_0x01384978(*(undefined4 *)(_UNK_01c9089c + 0x1c8fbd4));
    func_0x01384978(*(undefined4 *)(_UNK_01c908a0 + 0x1c8fbe0));
    func_0x01384978(*(undefined4 *)(_UNK_01c908a4 + 0x1c8fbec));
    *pcVar10 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x0229f06c(0xb9,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    uVar11 = *(undefined4 *)(iVar7 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0245185c(iVar1,uVar11,aiStack_28,**(undefined4 **)(_UNK_01c908a8 + 0x1c8fc90));
    iVar1 = aiStack_28[0];
    if (iVar2 == 0) {
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c908ac + 0x1c8fe4c),2);
      iStack_2c = *(int *)(iVar7 + 0xc);
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c908b0 + 0x1c8fe64),&iStack_2c);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = iVar1;
      piVar13 = *(int **)(iVar7 + 0x10);
      if (piVar13 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = (**(code **)(*piVar13 + 0xd8))(piVar13,*(undefined4 *)(*piVar13 + 0xdc));
      if ((iVar7 != 0) &&
         (iVar1 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar3 + 0x20)), iVar1 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if ((uint)piVar3[3] < 2) {
        func_0x01384bf4();
      }
      piVar3[5] = iVar7;
      if (*(int *)(**(int **)(_UNK_01c908b4 + 0x1c8ff34) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(**(undefined4 **)(_UNK_01c908b8 + 0x1c8ff58),piVar3,0);
    }
    else if (*(int *)(iVar7 + 0xc) < 0) {
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c908bc + 0x1c8ff70),3);
      iStack_2c = *(int *)(iVar7 + 8);
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c908c0 + 0x1c8ff88),&iStack_2c);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = iVar1;
      uStack_30 = *(undefined4 *)(iVar7 + 0xc);
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c908c4 + 0x1c8fff4),&uStack_30);
      if ((iVar1 != 0) &&
         (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if ((uint)piVar3[3] < 2) {
        func_0x01384bf4();
      }
      piVar3[5] = iVar1;
      iVar7 = *(int *)(iVar7 + 0x10);
      if ((iVar7 != 0) &&
         (iVar1 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar3 + 0x20)), iVar1 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if ((uint)piVar3[3] < 3) {
        func_0x01384bf4();
      }
      piVar3[6] = iVar7;
      if (*(int *)(**(int **)(_UNK_01c908c8 + 0x1c90094) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2f28(**(undefined4 **)(_UNK_01c908cc + 0x1c900b8),piVar3,0);
      iVar7 = func_0x03668dfc(**(undefined4 **)(_UNK_01c908d0 + 0x1c900c8));
      if (*(int *)(**(int **)(_UNK_01c908d4 + 0x1c900dc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar11 = func_0x028c0c80(0x12,0,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x01c37da4(iVar7,uVar11,0x12,0,**(undefined4 **)(_UNK_01c908d8 + 0x1c90128),1,0);
    }
    else {
      if (aiStack_28[0] == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02451860(iVar1,**(undefined4 **)(_UNK_01c908dc + 0x1c8fcc8));
      if (iVar1 < *(int *)(iVar7 + 0xc)) {
        piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c90914 + 0x1c8fcec),3);
        iStack_2c = *(int *)(iVar7 + 8);
        iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c90918 + 0x1c8fd04),&iStack_2c);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar1 != 0) &&
           (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
          uVar11 = func_0x01384c10();
          func_0x01384aa0(uVar11,0);
        }
        if (piVar3[3] == 0) {
          func_0x01384bf4();
        }
        piVar3[4] = iVar1;
        uStack_30 = *(undefined4 *)(iVar7 + 0xc);
        iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c9091c + 0x1c8fd70),&uStack_30);
        if ((iVar1 != 0) &&
           (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
          uVar11 = func_0x01384c10();
          func_0x01384aa0(uVar11,0);
        }
        if ((uint)piVar3[3] < 2) {
          func_0x01384bf4();
        }
        piVar3[5] = iVar1;
        iVar7 = *(int *)(iVar7 + 0x10);
        if ((iVar7 != 0) &&
           (iVar1 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar3 + 0x20)), iVar1 == 0)) {
          uVar11 = func_0x01384c10();
          func_0x01384aa0(uVar11,0);
        }
        if ((uint)piVar3[3] < 3) {
          func_0x01384bf4();
        }
        piVar3[6] = iVar7;
        if (*(int *)(**(int **)(_UNK_01c90920 + 0x1c8fe10) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2f28(**(undefined4 **)(_UNK_01c90924 + 0x1c8fe34),piVar3,0);
      }
      else {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x280);
        uVar14 = 0;
        if (iVar1 != 0) {
          piVar3 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_01c908e0 + 0x1c90194));
          piVar15 = *(int **)(_UNK_01c908e4 + 0x1c901a8);
          piVar13 = *(int **)(_UNK_01c908e8 + 0x1c901b0);
          do {
            if (piVar3 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar3;
            uVar14 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar14 != 0) {
              piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar9[-1] == *piVar15) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
                  goto LAB_01c90208;
                }
                uVar14 = uVar14 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar14 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar15,0);
LAB_01c90208:
            uVar14 = (*(code *)*puVar4)(piVar3,puVar4[1]);
            if (uVar14 == 0) {
              uVar14 = 0;
              break;
            }
            if (piVar3 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar3;
            uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar9[-1] == *piVar13) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
                  goto LAB_01c90284;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_01c90284:
            uVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
            piVar9 = *(int **)(iVar7 + 0x10);
            if (piVar9 == (int *)0x0) {
              func_0x01384bf0();
            }
            uVar5 = (**(code **)(*piVar9 + 0xd8))(piVar9,*(undefined4 *)(*piVar9 + 0xdc));
            iVar1 = func_0x014855c8(uVar11,uVar5,5,0);
          } while (iVar1 == 0);
          if (piVar3 != (int *)0x0) {
            iVar1 = *piVar3;
            uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar13[-1] == **(int **)(_UNK_01c908ec + 0x1c90304)) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
                  goto LAB_01c9034c;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 2;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c908ec + 0x1c90304),0);
LAB_01c9034c:
            (*(code *)*puVar4)(piVar3,puVar4[1]);
          }
        }
        uVar8 = 0;
        if ((*(int *)(iVar7 + 8) == 1) && (*(int *)(iVar7 + 0x14) != 0)) {
          iVar2 = *(int *)(iVar7 + 0xc);
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar8 = 0;
          if (*(int *)(iVar1 + 0x450) <= iVar2) {
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x60);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar8 = func_0x01cc0100(iVar1,0x66,0);
          }
        }
        if ((uVar8 & uVar14) == 0) {
          iVar1 = *(int *)(iVar7 + 0x14);
          if (iVar1 != 0) {
            (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
          }
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x44);
          uVar11 = *(undefined4 *)(iVar7 + 8);
          uVar5 = *(undefined4 *)(iVar7 + 0xc);
          uVar12 = *(undefined4 *)(iVar7 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01c9e7c0(iVar1,uVar11,uVar5,uVar12);
        }
        else {
          iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01c908f0 + 0x1c9042c));
          piVar3 = *(int **)(_UNK_01c908f4 + 0x1c90440);
          iVar2 = *piVar3;
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar3;
          }
          uVar11 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x24c);
          piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c908f8 + 0x1c90464),7);
          iStack_2c = *(int *)(iVar7 + 8);
          iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01c908fc + 0x1c90484),&iStack_2c);
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if (piVar3[3] == 0) {
            func_0x01384bf4();
          }
          piVar3[4] = iVar2;
          uStack_30 = *(undefined4 *)(iVar7 + 0xc);
          iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01c90900 + 0x1c904f0),&uStack_30);
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar3[3] < 2) {
            func_0x01384bf4();
          }
          piVar3[5] = iVar2;
          iVar2 = *(int *)(iVar7 + 0x10);
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar3[3] < 3) {
            func_0x01384bf4();
          }
          piVar3[6] = iVar2;
          uStack_31 = *(undefined1 *)(iVar7 + 0x18);
          puVar4 = *(undefined4 **)(_UNK_01c90904 + 0x1c90594);
          iVar2 = func_0x01384abc(*puVar4,&uStack_31);
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar3[3] < 4) {
            func_0x01384bf4();
          }
          piVar3[7] = iVar2;
          iVar2 = *(int *)(iVar7 + 0x1c);
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar3[3] < 5) {
            func_0x01384bf4();
          }
          piVar3[8] = iVar2;
          uStack_32 = *(undefined1 *)(iVar7 + 0x20);
          iVar2 = func_0x01384abc(*puVar4,&uStack_32);
          if ((iVar2 != 0) &&
             (iVar6 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar3[3] < 6) {
            func_0x01384bf4();
          }
          piVar3[9] = iVar2;
          iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01c90908 + 0x1c9068c));
          func_0x024500b4(iVar2,iVar7,**(undefined4 **)(_UNK_01c9090c + 0x1c906a8),0);
          if ((iVar2 != 0) &&
             (iVar7 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar7 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar3[3] < 7) {
            func_0x01384bf4();
          }
          piVar3[10] = iVar2;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01ee858c(iVar1,uVar11,piVar3,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,iVar7,0);
  }
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.IsOrderItem RVA 0x215050c =====

undefined4 FUN_0216050c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb503,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb503,0);
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
  return 0;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetBoardLevel RVA 0x2150568 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02160568(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
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
  
  iVar1 = func_0x0229f06c(0xb504,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int **)(iVar1 + 0x48);
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x85,0);
    if (iVar1 == 0) {
      param_1 = (int *)param_1[5];
      pcVar4 = (char *)(_UNK_028d1aec + 0x28d1a4c);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_028d1af0 + 0x28d1a60),0);
        func_0x01384978(*(undefined4 *)(_UNK_028d1af4 + 0x28d1a6c));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x86,0);
      if (iVar1 == 0) {
        if (*(int *)(**(int **)(_UNK_028d1af8 + 0x28d1ac4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = **(int **)(_UNK_028d1afc + 0x28d1ae0);
        if (param_1 == (int *)0x0) {
          func_0x02457d50();
        }
        iVar3 = (**(code **)(*param_1 + 0xc0))(param_1,0,*(undefined4 *)(*param_1 + 0xc4));
        if (iVar3 == 0) {
          iVar1 = *(int *)(iVar1 + 0x10);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x02457d84();
          }
          iVar3 = **(int **)(iVar1 + 0x60);
          iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x14);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x02457d84();
          }
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x02457d48();
          }
          iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x14);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x02457d84();
          }
          iVar3 = param_1[2];
          uVar6 = param_1[3];
          uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
          if (iVar3 == 0) {
            func_0x02457d50();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar6) {
            func_0x02457d5c();
          }
                    /* WARNING: Could not recover jumptable at 0x03f2ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*param_1 + 0xe8))
                            (param_1,uVar5,*(undefined4 *)(iVar3 + uVar6 * 4 + 0x10),
                             *(undefined4 *)(*param_1 + 0xec));
          return uVar5;
        }
        return 0;
      }
      iVar1 = func_0x0229f13c(0x86,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x85,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb504,0);
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
  uVar5 = func_0x0245498c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.TryIncMergeTestSpawnBubbleCount RVA 0x21505ec =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x01dd0fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01dd0fc0) */
/* WARNING: Removing unreachable block (ram,0x01dd12e0) */
/* WARNING: Removing unreachable block (ram,0x01dd1270) */
/* WARNING: Removing unreachable block (ram,0x01dd128c) */
/* WARNING: Removing unreachable block (ram,0x01dd1294) */
/* WARNING: Removing unreachable block (ram,0x01dd12bc) */
/* WARNING: Removing unreachable block (ram,0x01dd12a0) */
/* WARNING: Removing unreachable block (ram,0x01dd12ac) */
/* WARNING: Removing unreachable block (ram,0x01dd12c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_021605ec(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 unaff_r4;
  int unaff_r5;
  char *pcVar9;
  int unaff_r6;
  undefined4 uVar10;
  undefined4 unaff_r7;
  int *piVar11;
  undefined4 unaff_r8;
  int *piVar12;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar13;
  undefined1 auStack_28 [4];
  int aiStack_24 [4];
  
  iVar4 = func_0x0229f06c(0xb505,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0xb505,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
SUB_02179234:
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
    iVar5 = *(int *)(iVar4 + 0x10);
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
    if (iVar5 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar5,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
    func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
    iVar5 = *(int *)(iVar4 + 8);
    uVar10 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar4 == 0) {
      uVar8 = 2;
    }
    *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
    func_0x0245495c(iVar5,uVar10,(undefined1 *)((int)register0x00000054 + -0x38),uVar8);
    iVar4 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
    return iVar4;
  }
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  param_1 = *(int *)(iVar4 + 0x50);
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01dd12f4 + 0x1dd0f28);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd12f8 + 0x1dd0f3c),param_2,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dd12fc + 0x1dd0f48));
    func_0x01384978(*(undefined4 *)(_UNK_01dd1300 + 0x1dd0f54));
    func_0x01384978(*(undefined4 *)(_UNK_01dd1304 + 0x1dd0f60));
    func_0x01384978(*(undefined4 *)(_UNK_01dd1308 + 0x1dd0f6c));
    *pcVar9 = '\x01';
  }
  aiStack_24[0] = 0;
  iVar4 = func_0x0229f06c(0x9da2,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x9da2,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1dd0fc0;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar4;
    register0x00000054 = (BADSPACEBASE *)auStack_28;
    goto SUB_02179234;
  }
  iVar4 = *(int *)(param_1 + 0x44);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x03d66780(iVar4,param_2,aiStack_24,**(undefined4 **)(_UNK_01dd130c + 0x1dd0fec));
  if (iVar4 == 0) {
    return 0;
  }
  if (aiStack_24[0] == 0) {
    func_0x01384bf0();
    iRam0000000c = iRam0000000c + 1;
    if (aiStack_24[0] == 0) {
      uVar13 = func_0x01384bf0();
      if ((int)((ulonglong)uVar13 >> 0x20) != 1) {
        func_0x01459844((int)uVar13);
        func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      piVar1 = (int *)func_0x0145b008((int)uVar13);
      iVar5 = *piVar1;
      iVar4 = 0;
      func_0x0145b0f8();
      piVar1 = (int *)0x0;
      goto LAB_01dd1198;
    }
  }
  else {
    *(int *)(aiStack_24[0] + 0xc) = *(int *)(aiStack_24[0] + 0xc) + 1;
  }
  iVar4 = *(int *)(aiStack_24[0] + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x18);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x0364c2b4(iVar4,**(undefined4 **)(_UNK_01dd1310 + 0x1dd1068));
  piVar12 = *(int **)(_UNK_01dd1314 + 0x1dd1080);
  piVar11 = *(int **)(_UNK_01dd1318 + 0x1dd1088);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar1;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar12) {
          puVar2 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
          goto LAB_01dd10e0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar12,0);
LAB_01dd10e0:
    iVar4 = (*(code *)*puVar2)(piVar1,puVar2[1]);
    if (iVar4 == 0) {
      iVar5 = 0;
      iVar4 = 0;
      goto LAB_01dd1198;
    }
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar5 = *piVar1;
    uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
          goto LAB_01dd1158;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar11,0);
LAB_01dd1158:
    iVar3 = (*(code *)*puVar2)(piVar1,puVar2[1]);
    iVar5 = aiStack_24[0];
    if (aiStack_24[0] == 0) {
      func_0x01384bf0();
    }
  } while (*(int *)(iVar5 + 0xc) != iVar3);
  iVar5 = 0;
LAB_01dd1198:
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_01dd131c + 0x1dd11b0)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xc0);
          goto LAB_01dd11f8;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dd131c + 0x1dd11b0),0);
LAB_01dd11f8:
    (*(code *)*puVar2)(piVar1,puVar2[1]);
  }
  if (iVar5 != 0) {
    func_0x01384bec(iVar5);
  }
  return iVar4;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.IsBubbleGuidePassed RVA 0x215067c =====

undefined4 FUN_0216067c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb506,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb506,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  return 1;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.IsSpeedupGuidePassed RVA 0x21506d0 =====

undefined4 FUN_021606d0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb507,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb507,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  return 1;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.CanMergeProduceCoin RVA 0x2150724 =====

undefined4 FUN_02160724(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb508,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb508,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  return 1;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetMergeMixCostConfig RVA 0x2150778 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02160778(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
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
  
  iVar2 = func_0x0229f06c(0xb509,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x50);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_01dd1660 + 0x1dd15dc);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd1664 + 0x1dd15f0),param_2,0);
      *pcVar9 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x9da7,0);
    if (iVar2 == 0) {
      iVar2 = **(int **)(_UNK_01dd1668 + 0x1dd1654);
      piVar1 = *(int **)(param_1 + 0x10);
      if (*(int *)(iVar2 + 0x1c) == 0) {
        func_0x0140024c(iVar2);
      }
      auStack_1c[0] = 0;
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = **(int **)(iVar2 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0(iVar2);
      }
      iVar7 = *piVar1;
      uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
            goto LAB_02f7c1a4;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar2,7);
LAB_02f7c1a4:
      iVar2 = (*(code *)*puVar3)(piVar1,param_2,auStack_1c,puVar3[1]);
      uVar8 = 0;
      if (iVar2 != 0) {
        uVar8 = auStack_1c[0];
      }
      return uVar8;
    }
    iVar2 = func_0x0229f13c(0x9da7,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb509,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar9 = (char *)(_UNK_02284684 + 0x2284590);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02284688 + 0x22845a4),param_1,param_2,0);
    *pcVar9 = '\x01';
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
  uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0228468c + 0x2284674));
  return uVar8;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetMergeTapCostConfig RVA 0x2150808 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02160808(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
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
  
  iVar2 = func_0x0229f06c(0xb50a,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x50);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_01db62f0 + 0x1db626c);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01db62f4 + 0x1db6280),param_2,0);
      *pcVar9 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x9af,0);
    if (iVar2 == 0) {
      iVar2 = **(int **)(_UNK_01db62f8 + 0x1db62e4);
      piVar1 = *(int **)(param_1 + 0x14);
      if (*(int *)(iVar2 + 0x1c) == 0) {
        func_0x0140024c(iVar2);
      }
      auStack_1c[0] = 0;
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = **(int **)(iVar2 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0(iVar2);
      }
      iVar7 = *piVar1;
      uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
            goto LAB_02f7c1a4;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar2,7);
LAB_02f7c1a4:
      iVar2 = (*(code *)*puVar3)(piVar1,param_2,auStack_1c,puVar3[1]);
      uVar8 = 0;
      if (iVar2 != 0) {
        uVar8 = auStack_1c[0];
      }
      return uVar8;
    }
    iVar2 = func_0x0229f13c(0x9af,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb50a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar9 = (char *)(_UNK_021a2f40 + 0x21a2e4c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021a2f44 + 0x21a2e60),param_1,param_2,0);
    *pcVar9 = '\x01';
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
  uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021a2f48 + 0x21a2f30));
  return uVar8;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.FindPossibleCost RVA 0x2150898 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02160898(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
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
  
  pcVar13 = (char *)(_UNK_02160bc8 + 0x21608b4);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02160bcc + 0x21608c8));
    func_0x01384978(*(undefined4 *)(_UNK_02160bd0 + 0x21608d4));
    func_0x01384978(*(undefined4 *)(_UNK_02160bd4 + 0x21608e0));
    func_0x01384978(*(undefined4 *)(_UNK_02160bd8 + 0x21608ec));
    *pcVar13 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb50b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb50b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar13 = (char *)(_UNK_0229e1a4 + 0x229e0b0);
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229e1a8 + 0x229e0c4),param_1,param_2,0);
      *pcVar13 = '\x01';
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar12 = *(int *)(iVar1 + 8);
    uVar14 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar10 = 3;
    if (iVar1 == 0) {
      uVar10 = 2;
    }
    func_0x0245495c(iVar12,uVar14,&uStack_38,uVar10,0,0);
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0229e1ac + 0x229e194));
    return iVar1;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dbb4bc(iVar1,0);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0214d864(iVar1,0);
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02160bdc + 0x21609a8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_021609f0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02160bdc + 0x21609a8),0);
LAB_021609f0:
    iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (0 < iVar1) {
      iVar12 = 0;
      piVar8 = *(int **)(_UNK_02160be0 + 0x2160a1c);
      do {
        piVar4 = (int *)FUN_021566f4();
        if (param_2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar5 = *param_2;
        uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_02160be4 + 0x2160a3c)) {
              puVar3 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
              goto LAB_02160a84;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02160be4 + 0x2160a3c),0);
LAB_02160a84:
        uVar14 = (*(code *)*puVar3)(param_2,iVar12,puVar3[1]);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar5 = *piVar4;
        uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar8) {
              puVar3 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0x1e0);
              goto LAB_02160af8;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar4,*piVar8,0x24);
LAB_02160af8:
        iVar5 = (*(code *)*puVar3)(piVar4,uVar14,puVar3[1]);
        if (iVar5 != 0) {
          iVar11 = *(int *)(iVar5 + 0x14);
          if (iVar11 < 1) {
            return iVar5;
          }
          if (iVar11 == 0x1f) {
            return iVar5;
          }
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar6 = *piVar2;
          uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
          if (uVar7 != 0) {
            piVar4 = (int *)(*(int *)(iVar6 + 0x58) + 4);
            do {
              if (piVar4[-1] == **(int **)(_UNK_02160be8 + 0x2160b48)) {
                puVar3 = (undefined4 *)(iVar6 + *piVar4 * 8 + 0xe0);
                goto LAB_02160b90;
              }
              uVar7 = uVar7 - 1;
              piVar4 = piVar4 + 2;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02160be8 + 0x2160b48),4);
LAB_02160b90:
          iVar11 = (*(code *)*puVar3)(piVar2,iVar11,puVar3[1]);
          if (iVar11 != 0) {
            return iVar5;
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar1);
    }
  }
  return 0;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.FindCostByItem RVA 0x2150bec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02160bec(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  
  pcVar10 = (char *)(_UNK_02160e5c + 0x2160c0c);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02160e60 + 0x2160c20));
    func_0x01384978(*(undefined4 *)(_UNK_02160e64 + 0x2160c2c));
    func_0x01384978(*(undefined4 *)(_UNK_02160e68 + 0x2160c38));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb50c,0);
  if (iVar1 == 0) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02160e6c + 0x2160cac)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_02160cf4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02160e6c + 0x2160cac),0);
LAB_02160cf4:
    iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (0 < iVar1) {
      iVar12 = 0;
      piVar8 = *(int **)(_UNK_02160e70 + 0x2160d20);
      do {
        piVar3 = (int *)FUN_021566f4();
        if (param_2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *param_2;
        uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_02160e74 + 0x2160d40)) {
              puVar2 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
              goto LAB_02160d88;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02160e74 + 0x2160d40),0);
LAB_02160d88:
        uVar5 = (*(code *)*puVar2)(param_2,iVar12,puVar2[1]);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar3;
        uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar8) {
              puVar2 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0x1e0);
              goto LAB_02160dfc;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar3,*piVar8,0x24);
LAB_02160dfc:
        iVar4 = (*(code *)*puVar2)(piVar3,uVar5,puVar2[1]);
        if (iVar4 != 0) {
          iVar11 = *(int *)(iVar4 + 0x14);
          if (param_3 == 0) {
            func_0x01384bf0();
          }
          iVar6 = FUN_0210e2d4(param_3,0);
          if (iVar11 == iVar6) {
            return iVar4;
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar1);
    }
    iVar1 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0xb50c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229e1b0(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetOrderBoxDetailConfig RVA 0x2150e78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02160e78(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
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
  
  iVar2 = func_0x0229f06c(0xb50d,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x50);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_01dd19f8 + 0x1dd1974);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd19fc + 0x1dd1988),param_2,0);
      *pcVar9 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x9da9,0);
    if (iVar2 == 0) {
      iVar2 = **(int **)(_UNK_01dd1a00 + 0x1dd19ec);
      piVar1 = *(int **)(param_1 + 0x20);
      if (*(int *)(iVar2 + 0x1c) == 0) {
        func_0x0140024c(iVar2);
      }
      auStack_1c[0] = 0;
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = **(int **)(iVar2 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0(iVar2);
      }
      iVar7 = *piVar1;
      uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
            goto LAB_02f7c1a4;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar2,7);
LAB_02f7c1a4:
      iVar2 = (*(code *)*puVar3)(piVar1,param_2,auStack_1c,puVar3[1]);
      uVar8 = 0;
      if (iVar2 != 0) {
        uVar8 = auStack_1c[0];
      }
      return uVar8;
    }
    iVar2 = func_0x0229f13c(0x9da9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb50d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar9 = (char *)(_UNK_022848fc + 0x2284808);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02284900 + 0x228481c),param_1,param_2,0);
    *pcVar9 = '\x01';
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
  uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02284904 + 0x22848ec));
  return uVar8;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetMergeLevel RVA 0x2150f08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02160f08(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
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
  
  iVar1 = func_0x0229f06c(0xb50e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int **)(iVar1 + 0x48);
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x85,0);
    if (iVar1 == 0) {
      param_1 = (int *)param_1[5];
      pcVar4 = (char *)(_UNK_028d1aec + 0x28d1a4c);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_028d1af0 + 0x28d1a60),0);
        func_0x01384978(*(undefined4 *)(_UNK_028d1af4 + 0x28d1a6c));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x86,0);
      if (iVar1 == 0) {
        if (*(int *)(**(int **)(_UNK_028d1af8 + 0x28d1ac4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = **(int **)(_UNK_028d1afc + 0x28d1ae0);
        if (param_1 == (int *)0x0) {
          func_0x02457d50();
        }
        iVar3 = (**(code **)(*param_1 + 0xc0))(param_1,0,*(undefined4 *)(*param_1 + 0xc4));
        if (iVar3 == 0) {
          iVar1 = *(int *)(iVar1 + 0x10);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x02457d84();
          }
          iVar3 = **(int **)(iVar1 + 0x60);
          iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x14);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x02457d84();
          }
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x02457d48();
          }
          iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x14);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x02457d84();
          }
          iVar3 = param_1[2];
          uVar6 = param_1[3];
          uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
          if (iVar3 == 0) {
            func_0x02457d50();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar6) {
            func_0x02457d5c();
          }
                    /* WARNING: Could not recover jumptable at 0x03f2ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*param_1 + 0xe8))
                            (param_1,uVar5,*(undefined4 *)(iVar3 + uVar6 * 4 + 0x10),
                             *(undefined4 *)(*param_1 + 0xec));
          return uVar5;
        }
        return 0;
      }
      iVar1 = func_0x0229f13c(0x86,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x85,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb50e,0);
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
  uVar5 = func_0x0245498c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetGlobalData RVA 0x2150f8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02160f8c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb50f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x4c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x9423,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0x2c);
    }
    iVar1 = func_0x0229f13c(0x9423,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb50f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_02269728 + 0x2269648);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0226972c + 0x226965c),param_1,0);
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02269730 + 0x2269718));
  return uVar5;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.GetPlayerTestGroup RVA 0x2151010 =====

undefined4 FUN_02161010(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb510,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb510,0);
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
  return 0;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.FillGlobalMergeBonusHandlers RVA 0x215106c =====

/* WARNING: Removing unreachable block (ram,0x032907dc) */
/* WARNING: Removing unreachable block (ram,0x032907ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0216106c(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
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
  
  iVar1 = func_0x0229f06c(0xb511,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x4c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar12 = (char *)(_UNK_01dbb924 + 0x1dbb894);
    if (*pcVar12 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dbb928 + 0x1dbb8a8),param_2,0);
      *pcVar12 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x9d57,0);
    if (iVar1 == 0) {
      piVar10 = *(int **)(param_1 + 0x30);
      if (param_2 == (int *)0x0) {
        func_0x01384bf0();
      }
      uVar6 = param_2[3];
      iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_01dbb92c + 0x1dbb918) + 0x10) + 0x60) +
                      0x48);
      pcVar12 = (char *)(_UNK_032908e8 + 0x3290348);
      if (*pcVar12 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_032908ec + 0x3290360));
        func_0x01384978(*(undefined4 *)(_UNK_032908f0 + 0x329036c));
        *pcVar12 = '\x01';
      }
      if (piVar10 == (int *)0x0) {
        func_0x04839ccc(6,0);
      }
      if ((uint)param_2[3] < uVar6) {
        func_0x0484c9cc(0);
      }
      iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x014001f0(iVar11);
      }
      piVar2 = (int *)func_0x01384ab8(piVar10,iVar11);
      if (piVar2 == (int *)0x0) {
        if ((int)uVar6 < param_2[3]) {
          if (piVar10 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
          if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
            iVar11 = func_0x014001f0(iVar11);
          }
          iVar3 = *piVar10;
          uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar7 != 0) {
            piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar2[-1] == iVar11) {
                puVar4 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
                goto LAB_03290618;
              }
              uVar7 = uVar7 - 1;
              piVar2 = piVar2 + 2;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290618:
          piVar10 = (int *)(*(code *)*puVar4)(piVar10,puVar4[1]);
          piVar2 = *(int **)(_UNK_032908f4 + 0x3290638);
          do {
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar10;
            uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar9[-1] == *piVar2) {
                  puVar4 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
                  goto LAB_03290690;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar10,*piVar2,0);
LAB_03290690:
            iVar11 = (*(code *)*puVar4)(piVar10,puVar4[1]);
            if (iVar11 == 0) goto LAB_0329075c;
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
            if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
              iVar11 = func_0x014001f0(iVar11);
            }
            iVar3 = *piVar10;
            uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar9[-1] == iVar11) {
                  puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
                  goto LAB_03290724;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290724:
            uVar13 = (*(code *)*puVar4)(piVar10,puVar4[1]);
            func_0x032900e0(param_2,uVar6,uVar13,
                            *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
            uVar6 = uVar6 + 1;
          } while( true );
        }
        func_0x032910b0(param_2,piVar10,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20));
      }
      else {
        iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x014001f0(iVar11);
        }
        iVar3 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar11) {
              puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_032904c0;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_032904c0:
        iVar11 = (*(code *)*puVar4)(piVar2,puVar4[1]);
        if (0 < iVar11) {
          func_0x0328f754(param_2,param_2[3] + iVar11,
                          *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
          if ((int)uVar6 < param_2[3]) {
            uStack_30 = param_2[3] - uVar6;
            uStack_2c = 0;
            func_0x0484e904(param_2[2],uVar6,param_2[2],iVar11 + uVar6);
          }
          if (param_2 == piVar2) {
            uStack_2c = 0;
            uStack_30 = uVar6;
            func_0x0484e904(param_2[2],0,param_2[2],uVar6);
            uStack_30 = param_2[3] - uVar6;
            uStack_2c = 0;
            func_0x0484e904(param_2[2],iVar11 + uVar6,param_2[2],uVar6 << 1);
          }
          else {
            iVar3 = param_2[2];
            iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x014001f0(iVar1);
            }
            iVar5 = *piVar2;
            uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
            if (uVar7 != 0) {
              piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
              do {
                if (piVar10[-1] == iVar1) {
                  puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xe8);
                  goto LAB_032905e4;
                }
                uVar7 = uVar7 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,5);
LAB_032905e4:
            (*(code *)*puVar4)(piVar2,iVar3,uVar6,puVar4[1]);
          }
          param_2[3] = param_2[3] + iVar11;
        }
      }
      goto LAB_0329080c;
    }
    iVar1 = func_0x0229f13c(0x9d57,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb511,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  iVar11 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar1 == 0) {
    uVar8 = 2;
  }
  func_0x0245495c(iVar11,uVar13,&uStack_38,uVar8,0,0);
  return;
LAB_0329075c:
  if (piVar10 != (int *)0x0) {
    iVar1 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_032908f8 + 0x329077c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_032907c4;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_032908f8 + 0x329077c),0);
LAB_032907c4:
    (*(code *)*puVar4)(piVar10,puVar4[1]);
  }
LAB_0329080c:
  param_2[4] = param_2[4] + 1;
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.FillGlobalSpawnBonusHandlers RVA 0x21510fc =====

/* WARNING: Removing unreachable block (ram,0x032907dc) */
/* WARNING: Removing unreachable block (ram,0x032907ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021610fc(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
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
  
  iVar1 = func_0x0229f06c(0xb512,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x4c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar12 = (char *)(_UNK_01dbbc48 + 0x1dbbbb8);
    if (*pcVar12 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dbbc4c + 0x1dbbbcc),param_2,0);
      *pcVar12 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x9d58,0);
    if (iVar1 == 0) {
      piVar10 = *(int **)(param_1 + 0x34);
      if (param_2 == (int *)0x0) {
        func_0x01384bf0();
      }
      uVar6 = param_2[3];
      iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_01dbbc50 + 0x1dbbc3c) + 0x10) + 0x60) +
                      0x48);
      pcVar12 = (char *)(_UNK_032908e8 + 0x3290348);
      if (*pcVar12 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_032908ec + 0x3290360));
        func_0x01384978(*(undefined4 *)(_UNK_032908f0 + 0x329036c));
        *pcVar12 = '\x01';
      }
      if (piVar10 == (int *)0x0) {
        func_0x04839ccc(6,0);
      }
      if ((uint)param_2[3] < uVar6) {
        func_0x0484c9cc(0);
      }
      iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x014001f0(iVar11);
      }
      piVar2 = (int *)func_0x01384ab8(piVar10,iVar11);
      if (piVar2 == (int *)0x0) {
        if ((int)uVar6 < param_2[3]) {
          if (piVar10 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
          if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
            iVar11 = func_0x014001f0(iVar11);
          }
          iVar3 = *piVar10;
          uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar7 != 0) {
            piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar2[-1] == iVar11) {
                puVar4 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
                goto LAB_03290618;
              }
              uVar7 = uVar7 - 1;
              piVar2 = piVar2 + 2;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290618:
          piVar10 = (int *)(*(code *)*puVar4)(piVar10,puVar4[1]);
          piVar2 = *(int **)(_UNK_032908f4 + 0x3290638);
          do {
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar10;
            uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar9[-1] == *piVar2) {
                  puVar4 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
                  goto LAB_03290690;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar10,*piVar2,0);
LAB_03290690:
            iVar11 = (*(code *)*puVar4)(piVar10,puVar4[1]);
            if (iVar11 == 0) goto LAB_0329075c;
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
            if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
              iVar11 = func_0x014001f0(iVar11);
            }
            iVar3 = *piVar10;
            uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar9[-1] == iVar11) {
                  puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
                  goto LAB_03290724;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290724:
            uVar13 = (*(code *)*puVar4)(piVar10,puVar4[1]);
            func_0x032900e0(param_2,uVar6,uVar13,
                            *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
            uVar6 = uVar6 + 1;
          } while( true );
        }
        func_0x032910b0(param_2,piVar10,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20));
      }
      else {
        iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x014001f0(iVar11);
        }
        iVar3 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar11) {
              puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_032904c0;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_032904c0:
        iVar11 = (*(code *)*puVar4)(piVar2,puVar4[1]);
        if (0 < iVar11) {
          func_0x0328f754(param_2,param_2[3] + iVar11,
                          *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
          if ((int)uVar6 < param_2[3]) {
            uStack_30 = param_2[3] - uVar6;
            uStack_2c = 0;
            func_0x0484e904(param_2[2],uVar6,param_2[2],iVar11 + uVar6);
          }
          if (param_2 == piVar2) {
            uStack_2c = 0;
            uStack_30 = uVar6;
            func_0x0484e904(param_2[2],0,param_2[2],uVar6);
            uStack_30 = param_2[3] - uVar6;
            uStack_2c = 0;
            func_0x0484e904(param_2[2],iVar11 + uVar6,param_2[2],uVar6 << 1);
          }
          else {
            iVar3 = param_2[2];
            iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x014001f0(iVar1);
            }
            iVar5 = *piVar2;
            uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
            if (uVar7 != 0) {
              piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
              do {
                if (piVar10[-1] == iVar1) {
                  puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xe8);
                  goto LAB_032905e4;
                }
                uVar7 = uVar7 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,5);
LAB_032905e4:
            (*(code *)*puVar4)(piVar2,iVar3,uVar6,puVar4[1]);
          }
          param_2[3] = param_2[3] + iVar11;
        }
      }
      goto LAB_0329080c;
    }
    iVar1 = func_0x0229f13c(0x9d58,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb512,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  iVar11 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar1 == 0) {
    uVar8 = 2;
  }
  func_0x0245495c(iVar11,uVar13,&uStack_38,uVar8,0,0);
  return;
LAB_0329075c:
  if (piVar10 != (int *)0x0) {
    iVar1 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_032908f8 + 0x329077c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_032907c4;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_032908f8 + 0x329077c),0);
LAB_032907c4:
    (*(code *)*puVar4)(piVar10,puVar4[1]);
  }
LAB_0329080c:
  param_2[4] = param_2[4] + 1;
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.FillGlobalDisposeBonusHandlers RVA 0x215118c =====

/* WARNING: Removing unreachable block (ram,0x032907dc) */
/* WARNING: Removing unreachable block (ram,0x032907ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0216118c(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
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
  
  iVar1 = func_0x0229f06c(0xb513,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x4c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar12 = (char *)(_UNK_01dbbf6c + 0x1dbbedc);
    if (*pcVar12 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dbbf70 + 0x1dbbef0),param_2,0);
      *pcVar12 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x9d59,0);
    if (iVar1 == 0) {
      piVar10 = *(int **)(param_1 + 0x38);
      if (param_2 == (int *)0x0) {
        func_0x01384bf0();
      }
      uVar6 = param_2[3];
      iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_01dbbf74 + 0x1dbbf60) + 0x10) + 0x60) +
                      0x48);
      pcVar12 = (char *)(_UNK_032908e8 + 0x3290348);
      if (*pcVar12 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_032908ec + 0x3290360));
        func_0x01384978(*(undefined4 *)(_UNK_032908f0 + 0x329036c));
        *pcVar12 = '\x01';
      }
      if (piVar10 == (int *)0x0) {
        func_0x04839ccc(6,0);
      }
      if ((uint)param_2[3] < uVar6) {
        func_0x0484c9cc(0);
      }
      iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x014001f0(iVar11);
      }
      piVar2 = (int *)func_0x01384ab8(piVar10,iVar11);
      if (piVar2 == (int *)0x0) {
        if ((int)uVar6 < param_2[3]) {
          if (piVar10 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
          if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
            iVar11 = func_0x014001f0(iVar11);
          }
          iVar3 = *piVar10;
          uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar7 != 0) {
            piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar2[-1] == iVar11) {
                puVar4 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
                goto LAB_03290618;
              }
              uVar7 = uVar7 - 1;
              piVar2 = piVar2 + 2;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290618:
          piVar10 = (int *)(*(code *)*puVar4)(piVar10,puVar4[1]);
          piVar2 = *(int **)(_UNK_032908f4 + 0x3290638);
          do {
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar10;
            uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar9[-1] == *piVar2) {
                  puVar4 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
                  goto LAB_03290690;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar10,*piVar2,0);
LAB_03290690:
            iVar11 = (*(code *)*puVar4)(piVar10,puVar4[1]);
            if (iVar11 == 0) goto LAB_0329075c;
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
            if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
              iVar11 = func_0x014001f0(iVar11);
            }
            iVar3 = *piVar10;
            uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar9[-1] == iVar11) {
                  puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
                  goto LAB_03290724;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290724:
            uVar13 = (*(code *)*puVar4)(piVar10,puVar4[1]);
            func_0x032900e0(param_2,uVar6,uVar13,
                            *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
            uVar6 = uVar6 + 1;
          } while( true );
        }
        func_0x032910b0(param_2,piVar10,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20));
      }
      else {
        iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x014001f0(iVar11);
        }
        iVar3 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar11) {
              puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_032904c0;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_032904c0:
        iVar11 = (*(code *)*puVar4)(piVar2,puVar4[1]);
        if (0 < iVar11) {
          func_0x0328f754(param_2,param_2[3] + iVar11,
                          *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
          if ((int)uVar6 < param_2[3]) {
            uStack_30 = param_2[3] - uVar6;
            uStack_2c = 0;
            func_0x0484e904(param_2[2],uVar6,param_2[2],iVar11 + uVar6);
          }
          if (param_2 == piVar2) {
            uStack_2c = 0;
            uStack_30 = uVar6;
            func_0x0484e904(param_2[2],0,param_2[2],uVar6);
            uStack_30 = param_2[3] - uVar6;
            uStack_2c = 0;
            func_0x0484e904(param_2[2],iVar11 + uVar6,param_2[2],uVar6 << 1);
          }
          else {
            iVar3 = param_2[2];
            iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x014001f0(iVar1);
            }
            iVar5 = *piVar2;
            uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
            if (uVar7 != 0) {
              piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
              do {
                if (piVar10[-1] == iVar1) {
                  puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xe8);
                  goto LAB_032905e4;
                }
                uVar7 = uVar7 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,5);
LAB_032905e4:
            (*(code *)*puVar4)(piVar2,iVar3,uVar6,puVar4[1]);
          }
          param_2[3] = param_2[3] + iVar11;
        }
      }
      goto LAB_0329080c;
    }
    iVar1 = func_0x0229f13c(0x9d59,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb513,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  iVar11 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar1 == 0) {
    uVar8 = 2;
  }
  func_0x0245495c(iVar11,uVar13,&uStack_38,uVar8,0,0);
  return;
LAB_0329075c:
  if (piVar10 != (int *)0x0) {
    iVar1 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_032908f8 + 0x329077c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_032907c4;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_032908f8 + 0x329077c),0);
LAB_032907c4:
    (*(code *)*puVar4)(piVar10,puVar4[1]);
  }
LAB_0329080c:
  param_2[4] = param_2[4] + 1;
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.NotifyItemMerge RVA 0x215121c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0216121c(undefined4 param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_02161308 + 0x2161234);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216130c + 0x2161248));
    func_0x01384978(*(undefined4 *)(_UNK_02161310 + 0x2161254));
    func_0x01384978(*(undefined4 *)(_UNK_02161314 + 0x2161260));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb514,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb514,0);
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
  if (*(int *)(**(int **)(_UNK_02161318 + 0x21612bc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_0216131c + 0x21612d8));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.NotifyItemUse RVA 0x2151324 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02161324(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02161428 + 0x2161344);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0216142c + 0x2161358));
    func_0x01384978(*(undefined4 *)(_UNK_02161430 + 0x2161364));
    func_0x01384978(*(undefined4 *)(_UNK_02161434 + 0x2161370));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb515,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb515,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0229e2e4(iVar1,param_1,param_2,param_3,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02161438 + 0x21613d8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_0216143c + 0x21613f4));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.NotifyItemEvent RVA 0x2151444 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02161444(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0216154c + 0x2161464);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02161550 + 0x2161478));
    func_0x01384978(*(undefined4 *)(_UNK_02161554 + 0x2161484));
    func_0x01384978(*(undefined4 *)(_UNK_02161558 + 0x2161490));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb516,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb516,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02180430(iVar1,param_1,param_2,param_3,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0216155c + 0x21614f8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02161560 + 0x2161514));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x034a22b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.Merge.GameMergeEnv$$FAT.Merge.IMergeEnvironment.CalculatePostCardPercentage RVA 0x2151568 =====

undefined4 FUN_02161568(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb517,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb517,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  return 0;
}



// ===== FAT.Merge.GameMergeEnv$$.ctor RVA 0x21515c4 =====

void FUN_021615c4(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



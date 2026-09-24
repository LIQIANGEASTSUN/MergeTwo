/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityExpire$$ConvertExpire RVA 0x2b3a208 =====

/* WARNING: Removing unreachable block (ram,0x02b4a62c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b4a208(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar11 = (char *)(_UNK_02b4a718 + 0x2b4a228);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4a71c + 0x2b4a23c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4a720 + 0x2b4a248));
    func_0x01384978(*(undefined4 *)(_UNK_02b4a724 + 0x2b4a254));
    func_0x01384978(*(undefined4 *)(_UNK_02b4a728 + 0x2b4a260));
    func_0x01384978(*(undefined4 *)(_UNK_02b4a72c + 0x2b4a26c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4a730 + 0x2b4a278));
    *pcVar11 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  iStack_38 = 0;
  iStack_3c = 0;
  iVar2 = func_0x0229f06c(0x2477,0);
  if (iVar2 == 0) {
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *param_1;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_02b4a734 + 0x2b4a308)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_02b4a350;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02b4a734 + 0x2b4a308),0);
LAB_02b4a350:
    piVar9 = (int *)(*(code *)*puVar3)(param_1,puVar3[1]);
    iVar2 = 0;
LAB_02b4a368:
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_02b4a748 + 0x2b4a384)) {
          puVar3 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
          goto LAB_02b4a3cc;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02b4a748 + 0x2b4a384),0);
LAB_02b4a3cc:
    iVar4 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar4 != 0) {
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar9;
      uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_02b4a738 + 0x2b4a400)) {
            puVar3 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
            goto LAB_02b4a448;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02b4a738 + 0x2b4a400),0);
LAB_02b4a448:
      (*(code *)*puVar3)(&uStack_48,piVar9,puVar3[1]);
      uStack_2c = uStack_44;
      uStack_30 = uStack_48;
      func_0x043587c4(&uStack_30,&uStack_34,&iStack_38,**(undefined4 **)(_UNK_02b4a73c + 0x2b4a470))
      ;
      uVar1 = uStack_34;
      iVar4 = iStack_38;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0214a440(param_2,uVar1,iVar4,0);
      iVar2 = iVar5 + iVar2;
      if ((param_3 != (int *)0x0) && (0 < iVar4)) {
        iVar6 = *param_3;
        uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_02b4a740 + 0x2b4a4d8)) {
              puVar3 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xf8);
              goto LAB_02b4a520;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_02b4a740 + 0x2b4a4d8),7);
LAB_02b4a520:
        (*(code *)*puVar3)(param_3,iVar4,&iStack_3c,puVar3[1]);
        iVar6 = iStack_3c;
        iVar7 = *param_3;
        uVar8 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_02b4a744 + 0x2b4a54c)) {
              puVar3 = (undefined4 *)(iVar7 + *piVar10 * 8 + 200);
              goto LAB_02b4a594;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_02b4a744 + 0x2b4a54c),1);
LAB_02b4a594:
        (*(code *)*puVar3)(param_3,iVar4,iVar6 + iVar5,puVar3[1]);
      }
      goto LAB_02b4a368;
    }
    if (piVar9 != (int *)0x0) {
      iVar4 = *piVar9;
      uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_02b4a74c + 0x2b4a5cc)) {
            puVar3 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
            goto LAB_02b4a614;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02b4a74c + 0x2b4a5cc),0);
LAB_02b4a614:
      (*(code *)*puVar3)(piVar9,puVar3[1]);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x2477,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x021806fc(iVar2,param_1,param_2,param_3,0);
  }
  return iVar2;
}



// ===== FAT.ActivityExpire$$RemoveExpire RVA 0x2b3a754 =====

/* WARNING: Removing unreachable block (ram,0x02b4ad68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b4a754(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar10 = (char *)(_UNK_02b4ae70 + 0x2b4a774);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4ae74 + 0x2b4a78c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4ae78 + 0x2b4a798));
    func_0x01384978(*(undefined4 *)(_UNK_02b4ae7c + 0x2b4a7a4));
    func_0x01384978(*(undefined4 *)(_UNK_02b4ae80 + 0x2b4a7b0));
    func_0x01384978(*(undefined4 *)(_UNK_02b4ae84 + 0x2b4a7bc));
    func_0x01384978(*(undefined4 *)(_UNK_02b4ae88 + 0x2b4a7c8));
    func_0x01384978(*(undefined4 *)(_UNK_02b4ae8c + 0x2b4a7d4));
    func_0x01384978(*(undefined4 *)(_UNK_02b4ae90 + 0x2b4a7e0));
    func_0x01384978(*(undefined4 *)(_UNK_02b4ae94 + 0x2b4a7ec));
    *pcVar10 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  iStack_38 = 0;
  iStack_3c = 0;
  iStack_40 = 0;
  iVar1 = func_0x0229f06c(0x241,0);
  if (iVar1 == 0) {
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_1;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02b4ae98 + 0x2b4a87c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_02b4a8c4;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02b4ae98 + 0x2b4a87c),0);
LAB_02b4a8c4:
    piVar8 = (int *)(*(code *)*puVar2)(param_1,puVar2[1]);
    iStack_4c = 0;
LAB_02b4a8e4:
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_02b4aec8 + 0x2b4a900)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_02b4a948;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02b4aec8 + 0x2b4a900),0);
LAB_02b4a948:
    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    if (iVar1 != 0) {
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_02b4ae9c + 0x2b4a97c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_02b4a9c4;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02b4ae9c + 0x2b4a97c),0);
LAB_02b4a9c4:
      (*(code *)*puVar2)(&uStack_48,piVar8,puVar2[1]);
      uStack_2c = uStack_44;
      uStack_30 = uStack_48;
      func_0x04358ad8(&uStack_30,&uStack_34,&iStack_38,**(undefined4 **)(_UNK_02b4aea0 + 0x2b4a9ec))
      ;
      uVar6 = uStack_34;
      iVar1 = iStack_38;
      if (*(char *)(_UNK_02b4aea4 + 0x2b4aa18) == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b4aea8 + 0x2b4aa2c));
        *(undefined1 *)(_UNK_02b4aeac + 0x2b4aa3c) = 1;
      }
      if (iVar1 == 0) {
        uVar12 = 0;
        iVar3 = 0;
      }
      else {
        iVar3 = func_0x0466f590(iVar1,0);
        uVar12 = *(uint *)(iVar1 + 8);
      }
      if (param_4 == (int *)0x0) {
LAB_02b4aaec:
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0214a3d8(param_2,uVar6,0);
      }
      else {
        iVar1 = *param_4;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_02b4aeb0 + 0x2b4aa7c)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xf8);
              goto LAB_02b4aac4;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_4,**(int **)(_UNK_02b4aeb0 + 0x2b4aa7c),7);
LAB_02b4aac4:
        iVar4 = (*(code *)*puVar2)(param_4,uVar6,&iStack_3c,puVar2[1]);
        iVar1 = iStack_3c;
        if (iVar4 == 0) goto LAB_02b4aaec;
      }
      if (0 < iVar1) {
        iStack_4c = iVar1 + iStack_4c;
        uVar6 = func_0x01adfe1c(iVar3,uVar12,0x3d,**(undefined4 **)(_UNK_02b4aeb4 + 0x2b4ab20));
        iVar4 = **(int **)(_UNK_02b4aeb8 + 0x2b4ab50);
        if (uVar12 < uVar6) {
          func_0x0484bb74(0);
        }
        if ((*(ushort *)(*(int *)(iVar4 + 0x10) + 0xbd) & 1) == 0) {
          func_0x014001f0();
        }
        iVar4 = func_0x048221ac(iVar3,uVar6,7,0,0);
        uVar6 = uVar6 + 1;
        iVar11 = **(int **)(_UNK_02b4aebc + 0x2b4aba4);
        uStack_34 = uVar6;
        if (uVar12 < uVar6) {
          func_0x0484bb74(0);
        }
        if ((*(ushort *)(*(int *)(iVar11 + 0x10) + 0xbd) & 1) == 0) {
          func_0x014001f0();
        }
        iVar3 = func_0x048221ac(iVar3 + uVar6 * 2,uVar12 - uVar6,7,0,0);
        if (param_3 != (int *)0x0) {
          iVar11 = iVar4;
          if (0 < iVar4) {
            iVar11 = iVar3;
          }
          if (0 < iVar11) {
            iVar11 = *param_3;
            uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar6 != 0) {
              piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar9[-1] == **(int **)(_UNK_02b4aec0 + 0x2b4ac14)) {
                  puVar2 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xf8);
                  goto LAB_02b4ac5c;
                }
                uVar6 = uVar6 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_02b4aec0 + 0x2b4ac14),7);
LAB_02b4ac5c:
            (*(code *)*puVar2)(param_3,iVar4,&iStack_40,puVar2[1]);
            iVar11 = iStack_40;
            iVar5 = *param_3;
            uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
            if (uVar6 != 0) {
              piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
              do {
                if (piVar9[-1] == **(int **)(_UNK_02b4aec4 + 0x2b4ac88)) {
                  puVar2 = (undefined4 *)(iVar5 + *piVar9 * 8 + 200);
                  goto LAB_02b4acd0;
                }
                uVar6 = uVar6 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_02b4aec4 + 0x2b4ac88),1);
LAB_02b4acd0:
            (*(code *)*puVar2)(param_3,iVar4,iVar3 * iVar1 + iVar11,puVar2[1]);
          }
        }
      }
      goto LAB_02b4a8e4;
    }
    if (piVar8 != (int *)0x0) {
      iVar1 = *piVar8;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_02b4aecc + 0x2b4ad08)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_02b4ad50;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02b4aecc + 0x2b4ad08),0);
LAB_02b4ad50:
      (*(code *)*puVar2)(piVar8,puVar2[1]);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x241,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_4c = func_0x021832b8(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iStack_4c;
}



// ===== FAT.ActivityExpire$$ConvertToReward RVA 0x2b3aed4 =====

/* WARNING: Removing unreachable block (ram,0x02b4b254) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4aed4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  int aiStack_34 [4];
  
  pcVar5 = (char *)(_UNK_02b4b370 + 0x2b4aef8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4b374 + 0x2b4af0c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b378 + 0x2b4af18));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b37c + 0x2b4af24));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b380 + 0x2b4af30));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b384 + 0x2b4af3c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b388 + 0x2b4af48));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b38c + 0x2b4af54));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b390 + 0x2b4af60));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b394 + 0x2b4af6c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4b398 + 0x2b4af78));
    *pcVar5 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  uStack_40 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  iVar1 = func_0x0229f06c(0x240,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02b4b39c + 0x2b4b014) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x028c8d78(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a45c(aiStack_34 + 1,iVar1,aiStack_34,**(undefined4 **)(_UNK_02b4b3a0 + 0x2b4b050));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01db7b78(iVar1,0);
    FUN_02b4a754(param_1,uVar2,aiStack_34[0],param_4);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = aiStack_34[0];
    iVar1 = *(int *)(iVar1 + 0x40);
    if (aiStack_34[0] == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_78,iVar3,**(undefined4 **)(_UNK_02b4b3a4 + 0x2b4b0dc));
    uStack_50 = uStack_78;
    uStack_4c = uStack_74;
    uStack_48 = uStack_70;
    uStack_44 = uStack_6c;
    uStack_40 = uStack_68;
    while (iVar3 = func_0x03f9975c(&uStack_50,**(undefined4 **)(_UNK_02b4b3b8 + 0x2b4b114)),
          iVar3 != 0) {
      uStack_54 = (undefined4)uStack_40;
      uStack_58 = uStack_44;
      func_0x043587c4(&uStack_58,&uStack_5c,&uStack_60,**(undefined4 **)(_UNK_02b4b3a8 + 0x2b4b134))
      ;
      uVar2 = uStack_5c;
      iVar3 = func_0x02b4b3c4(uStack_60);
      if (iVar3 != 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x01cdcbac(iVar1,uVar2,iVar3,param_3,0,0,0,0x3b,
                                **(undefined4 **)(_UNK_02b4b3ac + 0x2b4b180),
                                **(undefined4 **)(_UNK_02b4b3b0 + 0x2b4b18c),0);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(param_2 + 8);
        uVar7 = *(uint *)(param_2 + 0xc);
        piVar4 = *(int **)(_UNK_02b4b3b4 + 0x2b4b1ec);
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        iVar6 = *piVar4;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (uVar7 < *(uint *)(iVar3 + 0xc)) {
          *(uint *)(param_2 + 0xc) = uVar7 + 1;
          *(undefined4 *)(iVar3 + uVar7 * 4 + 0x10) = uVar2;
        }
        else {
          func_0x0328f170(param_2,uVar2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
        }
      }
    }
    func_0x03f9989c(&uStack_50,**(undefined4 **)(_UNK_02b4b3bc + 0x2b4b244));
    func_0x028c98a0(aiStack_34 + 1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x240,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityExpire$$RoundExpire RVA 0x2b3b3c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b4b3c4(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int extraout_r12;
  bool bVar10;
  bool bVar11;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_30;
  int iStack_2c;
  uint uStack_28;
  
  pcVar6 = (char *)(iRam02b4b4f8 + 0x2b4b3d8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam02b4b4fc + 0x2b4b3ec));
    func_0x01384978(*(undefined4 *)(iRam02b4b500 + 0x2b4b3f8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2cc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2cc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = func_0x0187c6b4(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    puVar9 = *(undefined4 **)(iRam02b4b504 + 0x2b4b47c);
    iVar5 = func_0x03653d1c(iVar1,0,*puVar9);
    if (*(int *)(iVar1 + 0xc) + -1 < 0) {
      bVar11 = iVar5 == 0;
      bVar10 = true;
      if (bVar11) {
        iVar2 = func_0x01384bf0();
        if (bVar11) {
          iVar2 = extraout_r12 - (!bVar10 + 0x7e0);
        }
        uStack_28 = param_1;
        iVar3 = func_0x0229f06c(0x324f,0);
        if (iVar3 != 0) {
          iVar3 = func_0x0229f13c(0x324f,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uStack_30 = uStack_28;
          pcVar6 = (char *)(_UNK_022093b8 + 0x22092d8);
          iStack_2c = iVar1;
          uStack_28 = iVar5;
          if (*pcVar6 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_022093bc + 0x22092ec),iVar2,0);
            *pcVar6 = '\x01';
          }
          uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_48 = 0;
          uStack_38 = 0;
          func_0x0245494c(&uStack_60,0);
          uStack_48 = uStack_60;
          uStack_44 = uStack_5c;
          uStack_40 = uStack_58;
          uStack_3c = uStack_54;
          uStack_38 = uStack_50;
          if (*(int *)(iVar3 + 0x10) != 0) {
            func_0x01485278(&uStack_48,*(int *)(iVar3 + 0x10),0);
          }
          func_0x01485278(&uStack_48,iVar2,0);
          iVar5 = *(int *)(iVar3 + 8);
          uVar7 = *(undefined4 *)(iVar3 + 0xc);
          iVar1 = *(int *)(iVar3 + 0x10);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 2;
          if (iVar1 == 0) {
            uVar4 = 1;
          }
          func_0x0245495c(iVar5,uVar7,&uStack_48,uVar4,0,0);
          iVar1 = func_0x02f5db90(&uStack_48,0,**(undefined4 **)(_UNK_022093c0 + 0x22093a8));
          return iVar1;
        }
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        return *(int *)(iVar1 + 0xd8);
      }
    }
    else {
      uVar8 = *(int *)(iVar1 + 0xc) - 2;
      do {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x03653d1c(iVar1,uVar8 + 1,*puVar9);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
      } while (((int)param_1 < *(int *)(iVar5 + 0x14)) &&
              (bVar11 = uVar8 < 0x80000000, uVar8 = uVar8 - 1, bVar11));
    }
    param_1 = *(uint *)(iVar5 + 0x18);
  }
  return param_1;
}



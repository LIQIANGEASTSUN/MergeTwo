/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.IOrderHelper$$CheckCond_Level RVA 0x1e371e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e471e4(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e47294 + 0x1e471fc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e47298 + 0x1e47210));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e4729c + 0x1e47228)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01e47270;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e4729c + 0x1e47228),2);
LAB_01e47270:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return param_2 <= iVar1;
}



// ===== FAT.IOrderHelper$$CheckCond_OrderCompleted RVA 0x1e372a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e472a0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  
  pcVar9 = (char *)(_UNK_01e47480 + 0x1e472bc);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e47484 + 0x1e472d0));
    func_0x01384978(*(undefined4 *)(_UNK_01e47488 + 0x1e472dc));
    func_0x01384978(*(undefined4 *)(_UNK_01e4748c + 0x1e472e8));
    *pcVar9 = '\x01';
  }
  piVar10 = *(int **)(_UNK_01e47490 + 0x1e47300);
  piVar11 = *(int **)(_UNK_01e47494 + 0x1e47308);
  iVar1 = 0;
  do {
    iVar6 = iVar1;
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_01e47364;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,*piVar10,0);
LAB_01e47364:
    iVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (iVar3 <= iVar6) break;
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01e47498 + 0x1e4739c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_01e473e4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01e47498 + 0x1e4739c),0);
LAB_01e473e4:
    uVar4 = (*(code *)*puVar2)(param_2,iVar6,puVar2[1]);
    iVar1 = *param_1;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xd8);
          goto LAB_01e4744c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar11,3);
LAB_01e4744c:
    iVar5 = (*(code *)*puVar2)(param_1,uVar4,puVar2[1]);
    iVar1 = iVar6 + 1;
  } while (iVar5 != 0);
  return iVar3 <= iVar6;
}



// ===== FAT.IOrderHelper$$CheckCond_ItemUnlocked RVA 0x1e3749c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e4749c(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  
  pcVar9 = (char *)(_UNK_01e47630 + 0x1e474b0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e47634 + 0x1e474c4));
    func_0x01384978(*(undefined4 *)(_UNK_01e47638 + 0x1e474d0));
    *pcVar9 = '\x01';
  }
  piVar10 = *(int **)(_UNK_01e4763c + 0x1e474e8);
  piVar11 = *(int **)(_UNK_01e47640 + 0x1e474f0);
  iVar1 = 0;
  do {
    iVar6 = iVar1;
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_01e4754c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,*piVar10,0);
LAB_01e4754c:
    iVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (iVar3 <= iVar6) break;
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_01e475c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,*piVar11,0);
LAB_01e475c4:
    uVar4 = (*(code *)*puVar2)(param_2,iVar6,puVar2[1]);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x01cc44e8(iVar1,uVar4,0);
    iVar1 = iVar6 + 1;
  } while (iVar5 != 0);
  return iVar3 <= iVar6;
}



// ===== FAT.IOrderHelper$$CheckStateByConditionGroup RVA 0x1e37644 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_01e47644(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5,
            undefined4 param_6,int *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  
  pcVar8 = (char *)(_UNK_01e47a34 + 0x1e47660);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e47a38 + 0x1e47678));
    func_0x01384978(*(undefined4 *)(_UNK_01e47a3c + 0x1e47684));
    *pcVar8 = '\x01';
  }
  iVar1 = *param_1;
  piVar9 = *(int **)(_UNK_01e47a40 + 0x1e4769c);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar9) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe8);
        goto LAB_01e476e4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar9,5);
LAB_01e476e4:
  iVar1 = (*(code *)*puVar2)(param_1,param_2,puVar2[1]);
  uVar7 = 0;
  if (iVar1 != 0) {
    if (0 < param_3) {
      iVar1 = *param_1;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar9) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe8);
            goto LAB_01e4775c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar9,5);
LAB_01e4775c:
      iVar1 = (*(code *)*puVar2)(param_1,param_3,puVar2[1]);
      if (iVar1 != 0) {
        return 0;
      }
    }
    iVar1 = *param_1;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar9) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xf0);
          goto LAB_01e477c8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar9,6);
LAB_01e477c8:
    iVar1 = (*(code *)*puVar2)(param_1,param_4,puVar2[1]);
    if (iVar1 != 0) {
      if (param_5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *param_5;
      piVar5 = *(int **)(_UNK_01e47a44 + 0x1e47804);
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar3 = *piVar5;
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar3) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01e4784c;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_5,iVar3,0);
LAB_01e4784c:
      iVar1 = (*(code *)*puVar2)(param_5,puVar2[1]);
      if (0 < iVar1) {
        iVar1 = *param_1;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar9) {
              puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xf0);
              goto LAB_01e478b4;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar9,6);
LAB_01e478b4:
        iVar1 = (*(code *)*puVar2)(param_1,param_5,puVar2[1]);
        if (iVar1 != 0) {
          return 0;
        }
      }
      iVar1 = *param_1;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar9) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xf8);
            goto LAB_01e47924;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar9,7);
LAB_01e47924:
      iVar1 = (*(code *)*puVar2)(param_1,param_6,puVar2[1]);
      if (iVar1 != 0) {
        if (param_7 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *param_7;
        iVar3 = *piVar5;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == iVar3) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto LAB_01e479a0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_7,iVar3,0);
LAB_01e479a0:
        iVar1 = (*(code *)*puVar2)(param_7,puVar2[1]);
        if (iVar1 < 1) {
          uVar7 = 1;
        }
        else {
          iVar1 = *param_1;
          uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == *piVar9) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xf8);
                goto LAB_01e47a10;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar9,7);
LAB_01e47a10:
          iVar1 = (*(code *)*puVar2)(param_1,param_7,puVar2[1]);
          if (iVar1 == 0) {
            uVar7 = 1;
          }
        }
      }
    }
  }
  return uVar7;
}



// ===== FAT.IOrderHelper$$OnOrderDisplayChange RVA 0x1e37a48 =====

/* WARNING: Removing unreachable block (ram,0x01e4836c) */
/* WARNING: Removing unreachable block (ram,0x01e480a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e47a48(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar12 = (char *)(_UNK_01e48618 + 0x1e47a64);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e4861c + 0x1e47a78));
    func_0x01384978(*(undefined4 *)(_UNK_01e48620 + 0x1e47a84));
    func_0x01384978(*(undefined4 *)(_UNK_01e48624 + 0x1e47a90));
    func_0x01384978(*(undefined4 *)(_UNK_01e48628 + 0x1e47a9c));
    func_0x01384978(*(undefined4 *)(_UNK_01e4862c + 0x1e47aa8));
    func_0x01384978(*(undefined4 *)(_UNK_01e48630 + 0x1e47ab4));
    func_0x01384978(*(undefined4 *)(_UNK_01e48634 + 0x1e47ac0));
    func_0x01384978(*(undefined4 *)(_UNK_01e48638 + 0x1e47acc));
    func_0x01384978(*(undefined4 *)(_UNK_01e4863c + 0x1e47ad8));
    func_0x01384978(*(undefined4 *)(_UNK_01e48640 + 0x1e47ae4));
    func_0x01384978(*(undefined4 *)(_UNK_01e48644 + 0x1e47af0));
    func_0x01384978(*(undefined4 *)(_UNK_01e48648 + 0x1e47afc));
    func_0x01384978(*(undefined4 *)(_UNK_01e4864c + 0x1e47b08));
    func_0x01384978(*(undefined4 *)(_UNK_01e48650 + 0x1e47b14));
    *pcVar12 = '\x01';
  }
  iVar1 = *param_1;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
  uStack_38 = 0;
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_01e48654 + 0x1e47b34)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0x110);
        goto LAB_01e47b80;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e48654 + 0x1e47b34),10);
LAB_01e47b80:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_01e48658 + 0x1e47bac));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0328fe1c(&uStack_48,param_2,**(undefined4 **)(_UNK_01e4865c + 0x1e47bd4));
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  piStack_2c = piStack_3c;
  piVar13 = *(int **)(_UNK_01e48660 + 0x1e47bf0);
  piVar9 = *(int **)(_UNK_01e48664 + 0x1e47bf8);
  puVar2 = *(undefined4 **)(_UNK_01e48668 + 0x1e47c00);
LAB_01e47bfc:
  do {
    do {
      do {
        do {
          do {
            iVar3 = func_0x0145b12c(&uStack_38,**(undefined4 **)(_UNK_01e486a0 + 0x1e47c08));
            piVar6 = piStack_2c;
            if (iVar3 == 0) {
              func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01e486a4 + 0x1e483f4));
              return;
            }
            if (piStack_2c == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar3 = *piVar6;
            uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar10[-1] == **(int **)(_UNK_01e4866c + 0x1e47c38)) {
                  puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0x100);
                  goto LAB_01e47c80;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e4866c + 0x1e47c38),8);
LAB_01e47c80:
            iVar3 = (*(code *)*puVar4)(piVar6,puVar4[1]);
          } while (iVar3 == 0);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar6;
          uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar10[-1] == **(int **)(_UNK_01e48670 + 0x1e47cb4)) {
                puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
                goto LAB_01e47cfc;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 2;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e48670 + 0x1e47cb4),0);
LAB_01e47cfc:
          iVar3 = (*(code *)*puVar4)(piVar6,puVar4[1]);
        } while (iVar3 == 0);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar6;
        uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_01e48674 + 0x1e47d30)) {
              puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_01e47d78;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e48674 + 0x1e47d30),0);
LAB_01e47d78:
        iVar3 = (*(code *)*puVar4)(piVar6,puVar4[1]);
      } while (iVar3 == 1);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar6;
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01e48678 + 0x1e47dac)) {
            puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
            goto LAB_01e47df4;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e48678 + 0x1e47dac),0);
LAB_01e47df4:
      iVar3 = (*(code *)*puVar4)(piVar6,puVar4[1]);
      if (iVar3 == 3) {
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar6;
        uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
        puVar4 = *(undefined4 **)(_UNK_01e48680 + 0x1e47e3c);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_01e4867c + 0x1e47e28)) {
              puVar5 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xf0);
              goto LAB_01e47e78;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e4867c + 0x1e47e28),6);
LAB_01e47e78:
        piVar6 = (int *)(*(code *)*puVar5)(piVar6,puVar5[1]);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar6;
        uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_01e48684 + 0x1e47ea8)) {
              puVar5 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_01e47ef0;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e48684 + 0x1e47ea8),0);
LAB_01e47ef0:
        piVar6 = (int *)(*(code *)*puVar5)(piVar6,puVar5[1]);
        do {
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar6;
          iVar7 = *piVar13;
          uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar10[-1] == iVar7) {
                puVar5 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
                goto LAB_01e47f60;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 2;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar6,iVar7,0);
LAB_01e47f60:
          iVar3 = (*(code *)*puVar5)(piVar6,puVar5[1]);
          if (iVar3 == 0) goto LAB_01e4801c;
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar6;
          iVar7 = *piVar9;
          uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar10[-1] == iVar7) {
                puVar5 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
                goto LAB_01e47fd4;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 2;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar6,iVar7,0);
LAB_01e47fd4:
          iVar3 = (*(code *)*puVar5)(piVar6,puVar5[1]);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar11 = *(undefined4 *)(iVar3 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d54(iVar1,uVar11,1,*puVar4);
        } while( true );
      }
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar6;
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01e4868c + 0x1e480d4)) {
            puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xf0);
            goto LAB_01e4811c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e4868c + 0x1e480d4),6);
LAB_01e4811c:
      piVar6 = (int *)(*(code *)*puVar4)(piVar6,puVar4[1]);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar6;
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01e48690 + 0x1e4814c)) {
            puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
            goto LAB_01e48194;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e48690 + 0x1e4814c),0);
LAB_01e48194:
      piVar6 = (int *)(*(code *)*puVar4)(piVar6,puVar4[1]);
LAB_01e481a8:
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar6;
      iVar7 = *piVar13;
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar10[-1] == iVar7) {
            puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
            goto LAB_01e48204;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar6,iVar7,0);
LAB_01e48204:
      iVar3 = (*(code *)*puVar4)(piVar6,puVar4[1]);
      if (iVar3 != 0) {
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar6;
        iVar7 = *piVar9;
        uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar7) {
              puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_01e48278;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar6,iVar7,0);
LAB_01e48278:
        iVar3 = (*(code *)*puVar4)(piVar6,puVar4[1]);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar11 = *(undefined4 *)(iVar3 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x03d59fc8(iVar1,uVar11,*puVar2);
        if (iVar7 == 0) {
          uVar11 = *(undefined4 *)(iVar3 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d7c(iVar1,uVar11,0,**(undefined4 **)(_UNK_01e48698 + 0x1e482dc));
        }
        goto LAB_01e481a8;
      }
    } while (piVar6 == (int *)0x0);
    iVar3 = *piVar6;
    uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01e4869c + 0x1e4830c)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
          goto LAB_01e48354;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e4869c + 0x1e4830c),0);
LAB_01e48354:
    (*(code *)*puVar4)(piVar6,puVar4[1]);
  } while( true );
LAB_01e4801c:
  if (piVar6 != (int *)0x0) {
    iVar3 = *piVar6;
    uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01e48688 + 0x1e48040)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
          goto LAB_01e48088;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e48688 + 0x1e48040),0);
LAB_01e48088:
    (*(code *)*puVar4)(piVar6,puVar4[1]);
  }
  goto LAB_01e47bfc;
}



// ===== FAT.IOrderHelper$$OnOrderListUpdated RVA 0x1e386b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e486b4(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar7 = (char *)(_UNK_01e48994 + 0x1e486d0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e48998 + 0x1e486e4));
    func_0x01384978(*(undefined4 *)(_UNK_01e4899c + 0x1e486f0));
    func_0x01384978(*(undefined4 *)(_UNK_01e489a0 + 0x1e486fc));
    func_0x01384978(*(undefined4 *)(_UNK_01e489a4 + 0x1e48708));
    func_0x01384978(*(undefined4 *)(_UNK_01e489a8 + 0x1e48714));
    func_0x01384978(*(undefined4 *)(_UNK_01e489ac + 0x1e48720));
    *pcVar7 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_24 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0328fe1c(&uStack_40,param_2,**(undefined4 **)(_UNK_01e489b0 + 0x1e48754));
  iVar10 = 0;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  piStack_24 = piStack_34;
  puVar8 = *(undefined4 **)(_UNK_01e489b4 + 0x1e48774);
  piVar9 = *(int **)(_UNK_01e489b8 + 0x1e4877c);
  while (iVar2 = func_0x0145b12c(&uStack_30,*puVar8), piVar1 = piStack_24, iVar2 != 0) {
    if (piStack_24 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar1;
    iVar4 = *piVar9;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01e487ec;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar4,0);
LAB_01e487ec:
    iVar2 = (*(code *)*puVar3)(piVar1,puVar3[1]);
    if (iVar2 != 0) {
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      iVar4 = *piVar9;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_01e48860;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar4,0);
LAB_01e48860:
      iVar2 = (*(code *)*puVar3)(piVar1,puVar3[1]);
      if (iVar2 != 1) {
        iVar10 = iVar10 + 1;
      }
    }
  }
  func_0x0145b14c(&uStack_30,**(undefined4 **)(_UNK_01e489bc + 0x1e48888));
  iVar2 = *param_1;
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_01e489c4 + 0x1e488a0)) {
        puVar8 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0x128);
        goto LAB_01e488e8;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar5 != 0);
  }
  puVar8 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e489c4 + 0x1e488a0),0xd);
LAB_01e488e8:
  (*(code *)*puVar8)(param_1,iVar10,puVar8[1]);
  return;
}



// ===== FAT.IOrderHelper$$ClearCache RVA 0x1e389cc =====

/* WARNING: Possible PIC construction at 0x01e48a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e48b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e48a94) */
/* WARNING: Removing unreachable block (ram,0x01e48aa8) */
/* WARNING: Removing unreachable block (ram,0x01e48ab0) */
/* WARNING: Removing unreachable block (ram,0x01e48ad8) */
/* WARNING: Removing unreachable block (ram,0x01e48abc) */
/* WARNING: Removing unreachable block (ram,0x01e48ac8) */
/* WARNING: Removing unreachable block (ram,0x01e48ae4) */
/* WARNING: Removing unreachable block (ram,0x01e48b00) */
/* WARNING: Removing unreachable block (ram,0x01e48b04) */
/* WARNING: Removing unreachable block (ram,0x01e48b10) */
/* WARNING: Removing unreachable block (ram,0x01e48b24) */
/* WARNING: Removing unreachable block (ram,0x01e48b2c) */
/* WARNING: Removing unreachable block (ram,0x01e48b54) */
/* WARNING: Removing unreachable block (ram,0x01e48b38) */
/* WARNING: Removing unreachable block (ram,0x01e48b44) */
/* WARNING: Removing unreachable block (ram,0x01e48b60) */
/* WARNING: Removing unreachable block (ram,0x01e48b7c) */
/* WARNING: Removing unreachable block (ram,0x01e48b80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e489cc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  pcVar5 = (char *)(_UNK_01e48b90 + 0x1e489e0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e48b94 + 0x1e489f4));
    func_0x01384978(*(undefined4 *)(_UNK_01e48b98 + 0x1e48a00));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  piVar7 = *(int **)(_UNK_01e48b9c + 0x1e48a18);
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar7) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x110);
        goto LAB_01e48a60;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,10);
LAB_01e48a60:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = *(undefined4 **)(_UNK_01e48ba0 + 0x1e48a90);
  iVar6 = *(int *)(iVar1 + 0x10);
  if (0 < iVar6) {
    iVar8 = *(int *)(iVar1 + 8);
    iVar9 = iVar1;
    if (iVar8 == 0) {
      func_0x02457d50(iVar1,*puVar2);
    }
    func_0x0484e5ec(iVar8,0,*(undefined4 *)(iVar8 + 0xc),0,param_1,iVar9,piVar7,puVar2);
    *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    func_0x0484e5ec(*(undefined4 *)(iVar1 + 0xc),0,iVar6,0);
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return;
}



// ===== FAT.IOrderHelper$$UpdateOrderStatisticInfo RVA 0x1e38ba4 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e48ba4(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  byte *pbVar10;
  int *piVar11;
  int *piVar12;
  
  pbVar10 = (byte *)(_UNK_01e49024 + 0x1e48bc4);
  uVar1 = (uint)*pbVar10;
  if (uVar1 == 0) {
    func_0x01384978(*(undefined4 *)(_UNK_01e49028 + 0x1e48bdc));
    func_0x01384978(*(undefined4 *)(_UNK_01e4902c + 0x1e48be8));
    func_0x01384978(*(undefined4 *)(_UNK_01e49030 + 0x1e48bf4));
    func_0x01384978(*(undefined4 *)(_UNK_01e49034 + 0x1e48c00));
    func_0x01384978(*(undefined4 *)(_UNK_01e49038 + 0x1e48c0c));
    uVar1 = 1;
    *pbVar10 = 1;
  }
  if (param_4 != 0) {
    iVar2 = *param_1;
    uVar1 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01e4903c + 0x1e48c2c)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x140);
          goto LAB_01e48c74;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e4903c + 0x1e48c2c),0x10);
LAB_01e48c74:
    uVar4 = (*(code *)*puVar3)(param_1,puVar3[1]);
    uVar5 = uVar4;
    if (param_2 == 0) {
      uVar5 = func_0x01384bf0();
    }
    uVar1 = func_0x01e49058(uVar5,uVar4,*(undefined4 *)(param_2 + 0x20),param_4);
  }
  if (param_3 == 0) {
    return uVar1;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  piVar7 = (int *)FUN_01e3e370(param_2);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar7;
  uVar1 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar1 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_01e49040 + 0x1e48ce0)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
        goto LAB_01e48d28;
      }
      uVar1 = uVar1 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar1 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01e49040 + 0x1e48ce0),0);
LAB_01e48d28:
  piVar7 = (int *)(*(code *)*puVar3)(piVar7,puVar3[1]);
  piVar8 = *(int **)(_UNK_01e49044 + 0x1e48d48);
  piVar11 = *(int **)(_UNK_01e49048 + 0x1e48d50);
  piVar12 = *(int **)(_UNK_01e4904c + 0x1e48d58);
  do {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar7;
    uVar1 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar1 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar8) {
          puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_01e48db0;
        }
        uVar1 = uVar1 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar7,*piVar8,0);
LAB_01e48db0:
    iVar2 = (*(code *)*puVar3)(piVar7,puVar3[1]);
    if (iVar2 == 0) break;
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar7;
    uVar1 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar1 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_01e48e24;
        }
        uVar1 = uVar1 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar7,*piVar11,0);
LAB_01e48e24:
    iVar2 = (*(code *)*puVar3)(piVar7,puVar3[1]);
    iVar6 = *param_1;
    uVar1 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar1 != 0) {
      piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar12) {
          puVar3 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0x138);
          goto LAB_01e48e88;
        }
        uVar1 = uVar1 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_1,*piVar12,0xf);
LAB_01e48e88:
    uVar5 = (*(code *)*puVar3)(param_1,puVar3[1]);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01e49058(*(int *)(iVar2 + 0x10),uVar5,*(undefined4 *)(iVar2 + 8),
                    *(int *)(iVar2 + 0x10) * param_3);
  } while( true );
  uVar1 = 0;
  if (piVar7 != (int *)0x0) {
    iVar2 = *piVar7;
    uVar1 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01e49050 + 0x1e48edc)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_01e48f24;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01e49050 + 0x1e48edc),0);
LAB_01e48f24:
    uVar1 = (*(code *)*puVar3)(piVar7,puVar3[1]);
  }
  return uVar1;
}



// ===== FAT.IOrderHelper$$_UpdateDictSum RVA 0x1e39058 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e49058(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_01e49158 + 0x1e49078);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e4915c + 0x1e4908c));
    func_0x01384978(*(undefined4 *)(_UNK_01e49160 + 0x1e49098));
    func_0x01384978(*(undefined4 *)(_UNK_01e49164 + 0x1e490a4));
    *pcVar2 = '\x01';
  }
  iStack_1c = 0;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03d5bb20(param_2,param_3,&iStack_1c,**(undefined4 **)(_UNK_01e49168 + 0x1e490d4));
  if (iVar1 == 0) {
    if (param_4 < 1) {
      return;
    }
  }
  else {
    param_4 = iStack_1c + param_4;
    iStack_1c = param_4;
    if (param_4 < 1) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5b44c(param_2,param_3,**(undefined4 **)(_UNK_01e4916c + 0x1e49114));
      return;
    }
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59d54(param_2,param_3,param_4,**(undefined4 **)(_UNK_01e49170 + 0x1e49148));
  return;
}



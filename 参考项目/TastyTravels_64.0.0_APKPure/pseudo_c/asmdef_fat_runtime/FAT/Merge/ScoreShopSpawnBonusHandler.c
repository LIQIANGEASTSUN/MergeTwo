/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ScoreShopSpawnBonusHandler$$.ctor RVA 0x20c715c =====

void FUN_020d715c(int param_1,undefined4 param_2)

{
  func_0x021552f4(param_1,0);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



// ===== FAT.Merge.ScoreShopSpawnBonusHandler$$IsValid RVA 0x20c7178 =====

uint FUN_020d7178(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0xb2f9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb2f9,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  piVar2 = *(int **)(param_1 + 0x14);
  if ((piVar2 != (int *)0x0) &&
     (iVar1 = (**(code **)(*piVar2 + 0x108))(piVar2,*(undefined4 *)(*piVar2 + 0x10c)), iVar1 != 0))
  {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar1 = func_0x02b48934(iVar1,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = (uint)(*(char *)(iVar1 + 0x80) == '\0');
    }
  }
  return uVar4;
}



// ===== FAT.Merge.ScoreShopSpawnBonusHandler$$GetActivityCostId RVA 0x20c7238 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020d7238(int param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_020d7318 + 0x20d7250);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d731c + 0x20d7264));
    func_0x01384978(*(undefined4 *)(_UNK_020d7320 + 0x20d7270));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb2fa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb2fa,0);
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
  uStack_14 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = func_0x02a33f28(*(int *)(param_1 + 0x14),0);
    uStack_14 = 0;
    if (iVar1 != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 0x18),
                      **(undefined4 **)(_UNK_020d7324 + 0x20d72f0));
    }
  }
  return uStack_14;
}



// ===== FAT.Merge.ScoreShopSpawnBonusHandler$$EnsureOutputMap RVA 0x20c7328 =====

/* WARNING: Removing unreachable block (ram,0x020d76e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d7328(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_020d77c4 + 0x20d7340);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d77c8 + 0x20d7354));
    func_0x01384978(*(undefined4 *)(_UNK_020d77cc + 0x20d7360));
    func_0x01384978(*(undefined4 *)(_UNK_020d77d0 + 0x20d736c));
    func_0x01384978(*(undefined4 *)(_UNK_020d77d4 + 0x20d7378));
    func_0x01384978(*(undefined4 *)(_UNK_020d77d8 + 0x20d7384));
    func_0x01384978(*(undefined4 *)(_UNK_020d77dc + 0x20d7390));
    func_0x01384978(*(undefined4 *)(_UNK_020d77e0 + 0x20d739c));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xb2fb,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb2fb,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02a33f28(iVar9,0);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02a33f28(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x3c);
      iStack_34 = param_1;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_020d77e4 + 0x20d7490));
LAB_020d749c:
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_020d77f4 + 0x20d74b8)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_020d7500;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020d77f4 + 0x20d74b8),0);
LAB_020d7500:
      iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar2 != 0) {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_020d77e8 + 0x20d7534)) {
              puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
              goto LAB_020d757c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020d77e8 + 0x20d7534),0);
LAB_020d757c:
        uVar10 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        iVar2 = *(int *)(iStack_34 + 0x10);
        if (*(int *)(**(int **)(_UNK_020d77ec + 0x20d759c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02566088(&uStack_30,uVar10,0);
        uVar1 = uStack_28;
        uVar7 = uStack_2c;
        uVar10 = uStack_30;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar2 + 8);
        uVar5 = *(uint *)(iVar2 + 0xc);
        piVar6 = *(int **)(_UNK_020d77f0 + 0x20d75fc);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        iVar11 = *piVar6;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (uVar5 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar5 + 1;
          iVar9 = iVar9 + uVar5 * 0xc;
          *(undefined4 *)(iVar9 + 0x10) = uVar10;
          *(undefined4 *)(iVar9 + 0x14) = uVar7;
          *(undefined4 *)(iVar9 + 0x18) = uVar1;
        }
        else {
          uStack_38 = *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38);
          func_0x024505a8(iVar2,uVar10,uVar7,uVar1);
        }
        goto LAB_020d749c;
      }
      param_1 = iStack_34;
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_020d77f8 + 0x20d7678)) {
              puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
              goto LAB_020d76c0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020d77f8 + 0x20d7678),0);
LAB_020d76c0:
        (*(code *)*puVar4)(piVar3,puVar4[1]);
        param_1 = iStack_34;
      }
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}



// ===== FAT.Merge.ScoreShopSpawnBonusHandler$$GetRewardReason RVA 0x20c7800 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020d7800(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  pcVar4 = (char *)(_UNK_020d78a0 + 0x20d7814);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d78a4 + 0x20d7828));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb2fc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb2fc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0221b1d4 + 0x221b0f4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0221b1d8 + 0x221b108),param_1,0);
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
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0221b1dc + 0x221b1c4));
    return uVar6;
  }
  piVar3 = *(int **)(_UNK_020d78a8 + 0x20d7880);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x370);
}



// ===== FAT.Merge.ScoreShopSpawnBonusHandler$$GetFlyType RVA 0x20c78ac =====

undefined4 FUN_020d78ac(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb2fd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb2fd,0);
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
  return 0x50;
}



/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.IOrderData$$HasTag RVA 0x1e30960 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e40960(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e40a0c + 0x1e40978);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e40a10 + 0x1e4098c));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e40a14 + 0x1e409a4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e409ec;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e40a14 + 0x1e409a4),0xe);
LAB_01e409ec:
  uVar3 = (*(code *)*puVar2)(param_1,0x20,puVar2[1]);
  return (uVar3 & param_2) != 0;
}



// ===== FAT.IOrderData$$get_PayDifficulty RVA 0x1e30a18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40a18(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e40ab8 + 0x1e40a2c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e40abc + 0x1e40a40));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e40ac0 + 0x1e40a58)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e40aa0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e40ac0 + 0x1e40a58),0xe);
LAB_01e40aa0:
                    /* WARNING: Could not recover jumptable at 0x01e40ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0xc,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_ActDifficulty RVA 0x1e30ac4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40ac4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e40b64 + 0x1e40ad8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e40b68 + 0x1e40aec));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e40b6c + 0x1e40b04)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e40b4c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e40b6c + 0x1e40b04),0xe);
LAB_01e40b4c:
                    /* WARNING: Could not recover jumptable at 0x01e40b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0xd,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_AutoActDifficulty RVA 0x1e30b70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40b70(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e40c10 + 0x1e40b84);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e40c14 + 0x1e40b98));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e40c18 + 0x1e40bb0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e40bf8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e40c18 + 0x1e40bb0),0xe);
LAB_01e40bf8:
                    /* WARNING: Could not recover jumptable at 0x01e40c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x22,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_AutoPayDifficulty RVA 0x1e30c1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40c1c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e40cbc + 0x1e40c30);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e40cc0 + 0x1e40c44));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e40cc4 + 0x1e40c5c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e40ca4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e40cc4 + 0x1e40c5c),0xe);
LAB_01e40ca4:
                    /* WARNING: Could not recover jumptable at 0x01e40cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x21,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_RestActDifficulty RVA 0x1e30cc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40cc8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e40d68 + 0x1e40cdc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e40d6c + 0x1e40cf0));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e40d70 + 0x1e40d08)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e40d50;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e40d70 + 0x1e40d08),0xe);
LAB_01e40d50:
                    /* WARNING: Could not recover jumptable at 0x01e40d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x24,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_RestPayDifficulty RVA 0x1e30d74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40d74(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e40e14 + 0x1e40d88);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e40e18 + 0x1e40d9c));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e40e1c + 0x1e40db4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e40dfc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e40e1c + 0x1e40db4),0xe);
LAB_01e40dfc:
                    /* WARNING: Could not recover jumptable at 0x01e40e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x23,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsApiOrder RVA 0x1e30e20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e40e20(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e40ec8 + 0x1e40e34);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e40ecc + 0x1e40e48));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e40ed0 + 0x1e40e60)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x198);
        goto LAB_01e40ea8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e40ed0 + 0x1e40e60),0x1b);
LAB_01e40ea8:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar1 == 3;
}



// ===== FAT.IOrderData$$get_ApiStatus RVA 0x1e30ed4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40ed4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e40f74 + 0x1e40ee8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e40f78 + 0x1e40efc));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e40f7c + 0x1e40f14)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e40f5c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e40f7c + 0x1e40f14),0xe);
LAB_01e40f5c:
                    /* WARNING: Could not recover jumptable at 0x01e40f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x10,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsCounting RVA 0x1e30f80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e40f80(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e41028 + 0x1e40f94);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e4102c + 0x1e40fa8));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e41030 + 0x1e40fc0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01e41008;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e41030 + 0x1e40fc0),2);
LAB_01e41008:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar1 == 2;
}



// ===== FAT.IOrderData$$get_OrderCountFrom RVA 0x1e31034 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e41034(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e410d4 + 0x1e41048);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e410d8 + 0x1e4105c));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e410dc + 0x1e41074)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e410bc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e410dc + 0x1e41074),0xe);
LAB_01e410bc:
                    /* WARNING: Could not recover jumptable at 0x01e410d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,4,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_OrderCountRequire RVA 0x1e310e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e410e0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e41180 + 0x1e410f4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e41184 + 0x1e41108));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e41188 + 0x1e41120)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e41168;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e41188 + 0x1e41120),0xe);
LAB_01e41168:
                    /* WARNING: Could not recover jumptable at 0x01e4117c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,5,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_OrderCountTotal RVA 0x1e3118c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e4118c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e4122c + 0x1e411a0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e41230 + 0x1e411b4));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e41234 + 0x1e411cc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e41214;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e41234 + 0x1e411cc),0xe);
LAB_01e41214:
                    /* WARNING: Could not recover jumptable at 0x01e41228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,6,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsExpired RVA 0x1e31238 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e41238(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  undefined8 uVar8;
  
  pcVar6 = (char *)(_UNK_01e41418 + 0x1e4124c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e4141c + 0x1e41260));
    *pcVar6 = '\x01';
  }
  iVar1 = *param_1;
  piVar7 = *(int **)(_UNK_01e41420 + 0x1e41278);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar7) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1c8);
        goto LAB_01e412c0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x21);
LAB_01e412c0:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (0 < iVar1) {
    iVar1 = *param_1;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar7) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1d0);
          goto LAB_01e41328;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x22);
LAB_01e41328:
    uVar8 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if ((int)((ulonglong)uVar8 >> 0x20) < (int)(uint)((int)uVar8 == 0)) {
      return 1;
    }
  }
  iVar1 = *param_1;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar7) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x270);
        goto LAB_01e41394;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x36);
LAB_01e41394:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = *param_1;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar7) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x290);
        goto LAB_01e41404;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x3a);
LAB_01e41404:
                    /* WARNING: Could not recover jumptable at 0x01e41414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return uVar3;
}



// ===== FAT.IOrderData$$get_Duration RVA 0x1e31424 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e41424(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e414c4 + 0x1e41438);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e414c8 + 0x1e4144c));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e414cc + 0x1e41464)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e414ac;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e414cc + 0x1e41464),0xe);
LAB_01e414ac:
                    /* WARNING: Could not recover jumptable at 0x01e414c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,3,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_Countdown RVA 0x1e314d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01e414d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined8 uVar9;
  
  pcVar7 = (char *)(_UNK_01e41628 + 0x1e414e4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e4162c + 0x1e414f8));
    func_0x01384978(*(undefined4 *)(_UNK_01e41630 + 0x1e41504));
    *pcVar7 = '\x01';
  }
  iVar1 = *param_1;
  piVar8 = *(int **)(_UNK_01e41634 + 0x1e4151c);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar3 = *piVar8;
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar3) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x130);
        goto LAB_01e41564;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar3,0xe);
LAB_01e41564:
  uVar4 = (*(code *)*puVar2)(param_1,2,puVar2[1]);
  iVar1 = *param_1;
  iVar3 = *piVar8;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar3) {
        puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
        goto LAB_01e415cc;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar3,0xe);
LAB_01e415cc:
  uVar5 = (*(code *)*puVar2)(param_1,3,puVar2[1]);
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e41638 + 0x1e415f0));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x01c359e8(iVar1,0);
  return CONCAT44((((int)uVar5 >> 0x1f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar5,uVar4)) -
                  ((int)((ulonglong)uVar9 >> 0x20) + (uint)(uVar5 + uVar4 < (uint)uVar9)),
                  (uVar5 + uVar4) - (uint)uVar9);
}



// ===== FAT.IOrderData$$get_IsFlash RVA 0x1e3163c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e4163c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e416fc + 0x1e41650);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e41700 + 0x1e41664));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e41704 + 0x1e4167c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01e416c4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e41704 + 0x1e4167c),2);
LAB_01e416c4:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 - 1U < 0xe) {
    return 0x3de9U >> (iVar1 - 1U & 0xff) & 1;
  }
  return 0;
}



// ===== FAT.IOrderData$$get_Score RVA 0x1e31708 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e41708(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e417a8 + 0x1e4171c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e417ac + 0x1e41730));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e417b0 + 0x1e41748)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e41790;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e417b0 + 0x1e41748),0xe);
LAB_01e41790:
                    /* WARNING: Could not recover jumptable at 0x01e417a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,8,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_Score1 RVA 0x1e317b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e417b4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e41854 + 0x1e417c8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e41858 + 0x1e417dc));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e4185c + 0x1e417f4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e4183c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e4185c + 0x1e417f4),0xe);
LAB_01e4183c:
                    /* WARNING: Could not recover jumptable at 0x01e41850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x43,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_ScoreBR RVA 0x1e31860 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e41860(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e41900 + 0x1e41874);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e41904 + 0x1e41888));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e41908 + 0x1e418a0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e418e8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e41908 + 0x1e418a0),0xe);
LAB_01e418e8:
                    /* WARNING: Could not recover jumptable at 0x01e418fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x16,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_ScoreRewardBR RVA 0x1e3190c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e4190c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e419ac + 0x1e41920);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e419b0 + 0x1e41934));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e419b4 + 0x1e4194c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e41994;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e419b4 + 0x1e4194c),0xe);
LAB_01e41994:
                    /* WARNING: Could not recover jumptable at 0x01e419a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x1f,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_LikeId RVA 0x1e319b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e419b8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  code *pcVar6;
  char *pcVar7;
  int *piVar8;
  int iStack_18;
  int iStack_14;
  
  pcVar7 = (char *)(_UNK_01e41d0c + 0x1e419d0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e41d10 + 0x1e419e4));
    func_0x01384978(*(undefined4 *)(_UNK_01e41d14 + 0x1e419f0));
    func_0x01384978(*(undefined4 *)(_UNK_01e41d18 + 0x1e419fc));
    *pcVar7 = '\x01';
  }
  iStack_14 = 0;
  iStack_18 = 0;
  iVar1 = func_0x01f2a218(0);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01e41d34 + 0x1e41b54)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
          goto LAB_01e41cd0;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e41d34 + 0x1e41b54),0xe);
LAB_01e41cd0:
    pcVar6 = (code *)*puVar4;
    uVar3 = 0x19;
    goto LAB_01e41cf0;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02b3c518(iVar1,0x2f,&iStack_14,0);
  iVar1 = iStack_14;
  if (iVar2 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02b3c518(iVar1,0x4a,&iStack_18,0);
    iVar1 = iStack_18;
    if (iVar2 == 0) {
      return 0;
    }
    if (iStack_18 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02b449f8(iVar1,0);
    if (*(int *)(**(int **)(_UNK_01e41d28 + 0x1e41c08) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar8 = (int *)0x0;
    if (param_1 != (int *)0x0) {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_01e41d2c + 0x1e41c2c) + 0xb8);
      if ((uVar5 <= *(byte *)(*param_1 + 0xb8)) &&
         (piVar8 = param_1,
         *(int *)(*(int *)(*param_1 + 100) + uVar5 * 4 + -4) !=
         **(int **)(_UNK_01e41d2c + 0x1e41c2c))) {
        piVar8 = (int *)0x0;
      }
    }
    iVar1 = func_0x01e41d38(piVar8,uVar3);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    uVar3 = *(undefined4 *)(iVar1 + 0x10);
    iVar1 = **(int **)(_UNK_01e41d30 + 0x1e41c84);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar1) goto LAB_01e41cdc;
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
  }
  else {
    if (iStack_14 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02b449f8(iVar1,0);
    if (*(int *)(**(int **)(_UNK_01e41d1c + 0x1e41a94) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar8 = (int *)0x0;
    if (param_1 != (int *)0x0) {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_01e41d20 + 0x1e41ab8) + 0xb8);
      if ((uVar5 <= *(byte *)(*param_1 + 0xb8)) &&
         (piVar8 = param_1,
         *(int *)(*(int *)(*param_1 + 100) + uVar5 * 4 + -4) !=
         **(int **)(_UNK_01e41d20 + 0x1e41ab8))) {
        piVar8 = (int *)0x0;
      }
    }
    iVar1 = func_0x01e41d38(piVar8,uVar3);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    uVar3 = *(undefined4 *)(iVar1 + 0x10);
    iVar1 = **(int **)(_UNK_01e41d24 + 0x1e41b10);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar1) goto LAB_01e41cdc;
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
  }
  puVar4 = (undefined4 *)func_0x014002dc(param_1,iVar1,0xe);
LAB_01e41ce8:
  pcVar6 = (code *)*puVar4;
LAB_01e41cf0:
  uVar3 = (*pcVar6)(param_1,uVar3,puVar4[1]);
  return uVar3;
LAB_01e41cdc:
  puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0x130);
  goto LAB_01e41ce8;
}



// ===== FAT.IOrderData$$get_LikeNum RVA 0x1e321f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e421f4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  code *pcVar6;
  char *pcVar7;
  int *piVar8;
  int iStack_18;
  int iStack_14;
  
  pcVar7 = (char *)(_UNK_01e42548 + 0x1e4220c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e4254c + 0x1e42220));
    func_0x01384978(*(undefined4 *)(_UNK_01e42550 + 0x1e4222c));
    func_0x01384978(*(undefined4 *)(_UNK_01e42554 + 0x1e42238));
    *pcVar7 = '\x01';
  }
  iStack_14 = 0;
  iStack_18 = 0;
  iVar1 = func_0x01f2a218(0);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01e42570 + 0x1e42390)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
          goto LAB_01e4250c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e42570 + 0x1e42390),0xe);
LAB_01e4250c:
    pcVar6 = (code *)*puVar4;
    uVar3 = 0x1a;
    goto LAB_01e4252c;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02b3c518(iVar1,0x2f,&iStack_14,0);
  iVar1 = iStack_14;
  if (iVar2 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02b3c518(iVar1,0x4a,&iStack_18,0);
    iVar1 = iStack_18;
    if (iVar2 == 0) {
      return 0;
    }
    if (iStack_18 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02b449f8(iVar1,0);
    if (*(int *)(**(int **)(_UNK_01e42564 + 0x1e42444) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar8 = (int *)0x0;
    if (param_1 != (int *)0x0) {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_01e42568 + 0x1e42468) + 0xb8);
      if ((uVar5 <= *(byte *)(*param_1 + 0xb8)) &&
         (piVar8 = param_1,
         *(int *)(*(int *)(*param_1 + 100) + uVar5 * 4 + -4) !=
         **(int **)(_UNK_01e42568 + 0x1e42468))) {
        piVar8 = (int *)0x0;
      }
    }
    iVar1 = FUN_01e41d38(piVar8,uVar3);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    uVar3 = *(undefined4 *)(iVar1 + 0x14);
    iVar1 = **(int **)(_UNK_01e4256c + 0x1e424c0);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar1) goto LAB_01e42518;
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
  }
  else {
    if (iStack_14 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02b449f8(iVar1,0);
    if (*(int *)(**(int **)(_UNK_01e42558 + 0x1e422d0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar8 = (int *)0x0;
    if (param_1 != (int *)0x0) {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_01e4255c + 0x1e422f4) + 0xb8);
      if ((uVar5 <= *(byte *)(*param_1 + 0xb8)) &&
         (piVar8 = param_1,
         *(int *)(*(int *)(*param_1 + 100) + uVar5 * 4 + -4) !=
         **(int **)(_UNK_01e4255c + 0x1e422f4))) {
        piVar8 = (int *)0x0;
      }
    }
    iVar1 = FUN_01e41d38(piVar8,uVar3);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    uVar3 = *(undefined4 *)(iVar1 + 0x14);
    iVar1 = **(int **)(_UNK_01e42560 + 0x1e4234c);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar1) goto LAB_01e42518;
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
  }
  puVar4 = (undefined4 *)func_0x014002dc(param_1,iVar1,0xe);
LAB_01e42524:
  pcVar6 = (code *)*puVar4;
LAB_01e4252c:
  uVar3 = (*pcVar6)(param_1,uVar3,puVar4[1]);
  return uVar3;
LAB_01e42518:
  puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0x130);
  goto LAB_01e42524;
}



// ===== FAT.IOrderData$$get_RateId RVA 0x1e32574 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e42574(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  code *pcVar6;
  char *pcVar7;
  int *piVar8;
  int iStack_14;
  
  pcVar7 = (char *)(_UNK_01e427a0 + 0x1e4258c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e427a4 + 0x1e425a0));
    func_0x01384978(*(undefined4 *)(_UNK_01e427a8 + 0x1e425ac));
    func_0x01384978(*(undefined4 *)(_UNK_01e427ac + 0x1e425b8));
    *pcVar7 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x01f2a218(0);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01e427bc + 0x1e4271c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
          goto LAB_01e42764;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e427bc + 0x1e4271c),0xe);
LAB_01e42764:
    pcVar6 = (code *)*puVar4;
    uVar3 = 0x1d;
  }
  else {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02b3c518(iVar1,0x30,&iStack_14,0);
    iVar1 = iStack_14;
    if (iVar2 == 0) {
      return 0;
    }
    if (iStack_14 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02b449f8(iVar1,0);
    if (*(int *)(**(int **)(_UNK_01e427b0 + 0x1e42650) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar8 = (int *)0x0;
    if (param_1 != (int *)0x0) {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_01e427b4 + 0x1e42674) + 0xb8);
      if ((uVar5 <= *(byte *)(*param_1 + 0xb8)) &&
         (piVar8 = param_1,
         *(int *)(*(int *)(*param_1 + 100) + uVar5 * 4 + -4) !=
         **(int **)(_UNK_01e427b4 + 0x1e42674))) {
        piVar8 = (int *)0x0;
      }
    }
    iVar1 = FUN_01e41d38(piVar8,uVar3);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    uVar3 = *(undefined4 *)(iVar1 + 0x10);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01e427b8 + 0x1e426cc)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0x130);
          goto LAB_01e4277c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e427b8 + 0x1e426cc),0xe);
LAB_01e4277c:
    pcVar6 = (code *)*puVar4;
  }
  uVar3 = (*pcVar6)(param_1,uVar3,puVar4[1]);
  return uVar3;
}



// ===== FAT.IOrderData$$get_RateNum RVA 0x1e327c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e427c0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e42860 + 0x1e427d4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e42864 + 0x1e427e8));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e42868 + 0x1e42800)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e42848;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e42868 + 0x1e42800),0xe);
LAB_01e42848:
                    /* WARNING: Could not recover jumptable at 0x01e4285c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x1e,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsStep RVA 0x1e3286c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e4286c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e42914 + 0x1e42880);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e42918 + 0x1e42894));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e4291c + 0x1e428ac)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01e428f4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e4291c + 0x1e428ac),2);
LAB_01e428f4:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar1 == 3;
}



// ===== FAT.IOrderData$$get_IsMagicHour RVA 0x1e32920 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e42920(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e429c8 + 0x1e42934);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e429cc + 0x1e42948));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e429d0 + 0x1e42960)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01e429a8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e429d0 + 0x1e42960),2);
LAB_01e429a8:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar1 == 5;
}



// ===== FAT.IOrderData$$get_IsMagicHourExpired RVA 0x1e329d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e429d4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_01e42bb8 + 0x1e429e8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e42bbc + 0x1e429fc));
    *pcVar6 = '\x01';
  }
  iVar1 = *param_1;
  piVar8 = *(int **)(_UNK_01e42bc0 + 0x1e42a14);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar8) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x268);
        goto LAB_01e42a5c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar8,0x35);
LAB_01e42a5c:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  uVar7 = 0;
  if (iVar1 != 0) {
    iVar1 = *param_1;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar8) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 600);
          goto LAB_01e42ac8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar8,0x33);
LAB_01e42ac8:
    iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (0 < iVar1) {
      iVar1 = *param_1;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar8) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x248);
            goto LAB_01e42b30;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar8,0x31);
LAB_01e42b30:
      iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
      iVar3 = *param_1;
      uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar8) {
            puVar2 = (undefined4 *)(iVar3 + *piVar5 * 8 + 600);
            goto LAB_01e42b94;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar8,0x33);
LAB_01e42b94:
      iVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
      uVar7 = 0;
      if (iVar3 <= iVar1) {
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}



// ===== FAT.IOrderData$$get_IsMagicOrder RVA 0x1e32bc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e42bc4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e42c6c + 0x1e42bd8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e42c70 + 0x1e42bec));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e42c74 + 0x1e42c04)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01e42c4c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e42c74 + 0x1e42c04),2);
LAB_01e42c4c:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar1 == 10;
}



// ===== FAT.IOrderData$$get_IsGuideMagicOrder RVA 0x1e32c78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e42c78(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
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
  
  pcVar7 = (char *)(_UNK_01e42d90 + 0x1e42c8c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e42d94 + 0x1e42ca0));
    *pcVar7 = '\x01';
  }
  iVar1 = *param_1;
  piVar9 = *(int **)(_UNK_01e42d98 + 0x1e42cb8);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar4 = *piVar9;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar4) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x278);
        goto LAB_01e42d00;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar4,0x37);
LAB_01e42d00:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *param_1;
  iVar4 = *piVar9;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar4) {
        puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0x130);
        goto LAB_01e42d70;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar4,0xe);
LAB_01e42d70:
  uVar3 = (*(code *)*puVar2)(param_1,0xe,puVar2[1]);
  uVar8 = 0;
  iVar1 = func_0x0229f06c(0x3874,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3874,0);
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
    func_0x01485238(&uStack_30,uVar3,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar8,&uStack_30,uVar3,0,0);
    uVar8 = func_0x0245496c(&uStack_30,0,0);
    return uVar8;
  }
  iVar1 = func_0x017f6904(uVar3,0);
  if ((iVar1 != 0) && (uVar8 = 0, *(char *)(iVar1 + 0x1c) != '\0')) {
    uVar8 = 1;
  }
  return uVar8;
}



// ===== FAT.IOrderData$$get_IsActivityDependent RVA 0x1e32d9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e42d9c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_01e42f10 + 0x1e42db0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e42f14 + 0x1e42dc4));
    *pcVar6 = '\x01';
  }
  iVar1 = *param_1;
  piVar7 = *(int **)(_UNK_01e42f18 + 0x1e42ddc);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar7) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x278);
        goto LAB_01e42e24;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x37);
LAB_01e42e24:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar7) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x380);
          goto LAB_01e42e8c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x58);
LAB_01e42e8c:
    iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (iVar1 == 0) {
      iVar1 = *param_1;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar7) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x318);
            goto LAB_01e42efc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x4b);
LAB_01e42efc:
                    /* WARNING: Could not recover jumptable at 0x01e42f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
      return uVar3;
    }
  }
  return 1;
}



// ===== FAT.IOrderData$$get_IsActivityDependencyExpired RVA 0x1e32f1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e42f1c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  
  pcVar8 = (char *)(_UNK_01e4318c + 0x1e42f30);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43190 + 0x1e42f44));
    func_0x01384978(*(undefined4 *)(_UNK_01e43194 + 0x1e42f50));
    *pcVar8 = '\x01';
  }
  iVar1 = *param_1;
  piVar9 = *(int **)(_UNK_01e43198 + 0x1e42f68);
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar9) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x288);
        goto LAB_01e42fb0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar9,0x39);
LAB_01e42fb0:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  uVar6 = 0;
  if (iVar1 != 0) {
    iVar1 = *param_1;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar9) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x130);
          goto LAB_01e4301c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar9,0xe);
LAB_01e4301c:
    uVar3 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
    iVar1 = *param_1;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar9) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x130);
          goto LAB_01e43084;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar9,0xe);
LAB_01e43084:
    uVar4 = (*(code *)*puVar2)(param_1,0x40,puVar2[1]);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02b4446c(iVar1,uVar3,uVar4,0);
    uVar6 = 1;
    if ((iVar1 != 0) && (iVar5 = func_0x02b48934(iVar1,0), iVar5 != 0)) {
      piVar7 = *(int **)(_UNK_01e4319c + 0x1e43108);
      piVar9 = (int *)func_0x01384ab8(iVar1,*piVar7);
      uVar6 = 0;
      if (piVar9 != (int *)0x0) {
        iVar1 = *piVar9;
        iVar5 = *piVar7;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar5) {
              puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01e4316c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar9,iVar5,0);
LAB_01e4316c:
        uVar6 = (*(code *)*puVar2)(piVar9,param_1,puVar2[1]);
        uVar6 = uVar6 ^ 1;
      }
    }
  }
  return uVar6;
}



// ===== FAT.IOrderData$$get_SupportsSpineSkin RVA 0x1e331a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e431a0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_01e432ac + 0x1e431b4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e432b0 + 0x1e431c8));
    *pcVar7 = '\x01';
  }
  iVar1 = *param_1;
  piVar8 = *(int **)(_UNK_01e432b4 + 0x1e431e0);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar4 = *piVar8;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar4) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x278);
        goto LAB_01e43228;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar4,0x37);
LAB_01e43228:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = *param_1;
  iVar4 = *piVar8;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar4) {
        puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x378);
        goto LAB_01e43298;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar4,0x57);
LAB_01e43298:
                    /* WARNING: Could not recover jumptable at 0x01e432a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return uVar3;
}



// ===== FAT.IOrderData$$get_HasExtraReward RVA 0x1e332b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e432b8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e43368 + 0x1e432cc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e4336c + 0x1e432e0));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e43370 + 0x1e432f8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e43340;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e43370 + 0x1e432f8),0xe);
LAB_01e43340:
  iVar1 = (*(code *)*puVar2)(param_1,9,puVar2[1]);
  return 0 < iVar1;
}



// ===== FAT.IOrderData$$get_HasExtraRewardMini RVA 0x1e33374 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e43374(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e43424 + 0x1e43388);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43428 + 0x1e4339c));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e4342c + 0x1e433b4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e433fc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e4342c + 0x1e433b4),0xe);
LAB_01e433fc:
  iVar1 = (*(code *)*puVar2)(param_1,0x11,puVar2[1]);
  return 0 < iVar1;
}



// ===== FAT.IOrderData$$get_ExtraRewardMini RVA 0x1e33430 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e43430(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  
  pcVar8 = (char *)(_UNK_01e43570 + 0x1e43448);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43574 + 0x1e4345c));
    func_0x01384978(*(undefined4 *)(_UNK_01e43578 + 0x1e43468));
    *pcVar8 = '\x01';
  }
  iVar1 = *param_2;
  piVar9 = *(int **)(_UNK_01e4357c + 0x1e43480);
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar5 = *piVar9;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar5) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x130);
        goto LAB_01e434c8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,iVar5,0xe);
LAB_01e434c8:
  uVar3 = (*(code *)*puVar2)(param_2,0x13,puVar2[1]);
  iVar1 = *param_2;
  iVar5 = *piVar9;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar5) {
        puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0x130);
        goto LAB_01e43530;
      }
      uVar6 = uVar6 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,iVar5,0xe);
LAB_01e43530:
  uVar4 = (*(code *)*puVar2)(param_2,0x14,puVar2[1]);
  puVar2 = *(undefined4 **)(_UNK_01e43580 + 0x1e43558);
  *param_1 = 0;
  param_1[1] = 0;
  func_0x038fd264(param_1,uVar3,uVar4,*puVar2);
  return;
}



// ===== FAT.IOrderData$$get_HasOrderExtraReward RVA 0x1e33584 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e43584(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_01e43690 + 0x1e43598);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43694 + 0x1e435ac));
    *pcVar7 = '\x01';
  }
  iVar1 = *param_1;
  piVar8 = *(int **)(_UNK_01e43698 + 0x1e435c4);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar4 = *piVar8;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar4) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x2a0);
        goto LAB_01e4360c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar4,0x3c);
LAB_01e4360c:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = *param_1;
  iVar4 = *piVar8;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar4) {
        puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x2a8);
        goto LAB_01e4367c;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar4,0x3d);
LAB_01e4367c:
                    /* WARNING: Could not recover jumptable at 0x01e4368c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return uVar3;
}



// ===== FAT.IOrderData$$get_OrderExtraReward RVA 0x1e3369c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e4369c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  code *pcVar9;
  undefined4 uVar10;
  char *pcVar11;
  int *piVar12;
  
  pcVar11 = (char *)(_UNK_01e4398c + 0x1e436b4);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43990 + 0x1e436c8));
    func_0x01384978(*(undefined4 *)(_UNK_01e43994 + 0x1e436d4));
    *pcVar11 = '\x01';
  }
  iVar1 = *param_2;
  piVar12 = *(int **)(_UNK_01e43998 + 0x1e436ec);
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == *piVar12) {
        puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x2a8);
        goto LAB_01e43734;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,*piVar12,0x3d);
LAB_01e43734:
  iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
  iVar7 = *param_2;
  iVar4 = *piVar12;
  uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (iVar1 == 0) {
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar4) {
          puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x2a0);
          goto LAB_01e4383c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,iVar4,0x3c);
LAB_01e4383c:
    iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (iVar1 == 0) {
      uVar3 = 0;
      uVar5 = 0;
      uVar10 = **(undefined4 **)(_UNK_01e439a0 + 0x1e438ac);
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_01e43984;
    }
    iVar1 = *param_2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar12) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
          goto LAB_01e438e4;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,*piVar12,0xe);
LAB_01e438e4:
    uVar3 = (*(code *)*puVar2)(param_2,10,puVar2[1]);
    iVar1 = *param_2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar12) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
          goto LAB_01e4394c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,*piVar12,0xe);
LAB_01e4394c:
    pcVar9 = (code *)*puVar2;
    uVar5 = 0xb;
  }
  else {
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar4) {
          puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x130);
          goto LAB_01e437d4;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,iVar4,0xe);
LAB_01e437d4:
    uVar3 = (*(code *)*puVar2)(param_2,0x13,puVar2[1]);
    iVar1 = *param_2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar12) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
          goto LAB_01e438cc;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,*piVar12,0xe);
LAB_01e438cc:
    pcVar9 = (code *)*puVar2;
    uVar5 = 0x14;
  }
  uVar5 = (*pcVar9)(param_2,uVar5,puVar2[1]);
  puVar2 = *(undefined4 **)(_UNK_01e4399c + 0x1e43974);
  *param_1 = 0;
  param_1[1] = 0;
  uVar10 = *puVar2;
LAB_01e43984:
  func_0x038fd264(param_1,uVar3,uVar5,uVar10);
  return;
}



// ===== FAT.IOrderData$$get_IsClawOrder RVA 0x1e339a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e439a4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e43a44 + 0x1e439b8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43a48 + 0x1e439cc));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e43a4c + 0x1e439e4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x158);
        goto LAB_01e43a2c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e43a4c + 0x1e439e4),0x13);
LAB_01e43a2c:
                    /* WARNING: Could not recover jumptable at 0x01e43a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,1,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsMysteryBagOrder RVA 0x1e33a50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e43a50(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e43af0 + 0x1e43a64);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43af4 + 0x1e43a78));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e43af8 + 0x1e43a90)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x158);
        goto LAB_01e43ad8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e43af8 + 0x1e43a90),0x13);
LAB_01e43ad8:
                    /* WARNING: Could not recover jumptable at 0x01e43aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,2,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsOrderQuest RVA 0x1e33afc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e43afc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e43b9c + 0x1e43b10);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43ba0 + 0x1e43b24));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e43ba4 + 0x1e43b3c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x158);
        goto LAB_01e43b84;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e43ba4 + 0x1e43b3c),0x13);
LAB_01e43b84:
                    /* WARNING: Could not recover jumptable at 0x01e43b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,4,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsEscapeQuest RVA 0x1e33ba8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e43ba8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e43c48 + 0x1e43bbc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43c4c + 0x1e43bd0));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e43c50 + 0x1e43be8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x158);
        goto LAB_01e43c30;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e43c50 + 0x1e43be8),0x13);
LAB_01e43c30:
                    /* WARNING: Could not recover jumptable at 0x01e43c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x100,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsThiefOrder RVA 0x1e33c54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e43c54(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e43cf4 + 0x1e43c68);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43cf8 + 0x1e43c7c));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e43cfc + 0x1e43c94)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x158);
        goto LAB_01e43cdc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e43cfc + 0x1e43c94),0x13);
LAB_01e43cdc:
                    /* WARNING: Could not recover jumptable at 0x01e43cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,8,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsColorOrder RVA 0x1e33d00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e43d00(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e43da0 + 0x1e43d14);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43da4 + 0x1e43d28));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e43da8 + 0x1e43d40)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x158);
        goto LAB_01e43d88;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e43da8 + 0x1e43d40),0x13);
LAB_01e43d88:
                    /* WARNING: Could not recover jumptable at 0x01e43d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x10,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsFoodVanOrder RVA 0x1e33dac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e43dac(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e43e4c + 0x1e43dc0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43e50 + 0x1e43dd4));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e43e54 + 0x1e43dec)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x158);
        goto LAB_01e43e34;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e43e54 + 0x1e43dec),0x13);
LAB_01e43e34:
                    /* WARNING: Could not recover jumptable at 0x01e43e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x20,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsSpinOrder RVA 0x1e33e58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e43e58(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e43ef8 + 0x1e43e6c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43efc + 0x1e43e80));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e43f00 + 0x1e43e98)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x158);
        goto LAB_01e43ee0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e43f00 + 0x1e43e98),0x13);
LAB_01e43ee0:
                    /* WARNING: Could not recover jumptable at 0x01e43ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x40,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsPiggyOrder RVA 0x1e33f04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e43f04(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e43fa4 + 0x1e43f18);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e43fa8 + 0x1e43f2c));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e43fac + 0x1e43f44)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x158);
        goto LAB_01e43f8c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e43fac + 0x1e43f44),0x13);
LAB_01e43f8c:
                    /* WARNING: Could not recover jumptable at 0x01e43fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x80,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsCDOrder RVA 0x1e33fb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e43fb0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e44058 + 0x1e43fc4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e4405c + 0x1e43fd8));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e44060 + 0x1e43ff0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01e44038;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e44060 + 0x1e43ff0),2);
LAB_01e44038:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar1 == 0xe;
}



// ===== FAT.IOrderData$$get_IsCoopOrder RVA 0x1e34064 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e44064(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e4410c + 0x1e44078);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e44110 + 0x1e4408c));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e44114 + 0x1e440a4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01e440ec;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e44114 + 0x1e440a4),2);
LAB_01e440ec:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar1 == 0xc;
}



// ===== FAT.IOrderData$$get_HasBonus RVA 0x1e34118 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e44118(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e441bc + 0x1e4412c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e441c0 + 0x1e44140));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e441c4 + 0x1e44158)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 800);
        goto LAB_01e441a0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e441c4 + 0x1e44158),0x4c);
LAB_01e441a0:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar1 != 0;
}



// ===== FAT.IOrderData$$get_IsRewardPickOrder RVA 0x1e341c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e441c8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e44270 + 0x1e441dc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e44274 + 0x1e441f0));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e44278 + 0x1e44208)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01e44250;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e44278 + 0x1e44208),2);
LAB_01e44250:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar1 == 0xb;
}



// ===== FAT.IOrderData$$get_IsLongOrder RVA 0x1e3427c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e4427c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e44324 + 0x1e44290);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e44328 + 0x1e442a4));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e4432c + 0x1e442bc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01e44304;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e4432c + 0x1e442bc),2);
LAB_01e44304:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar1 == 0xd;
}



// ===== FAT.IOrderData$$get_HideId RVA 0x1e34330 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e44330(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e443d0 + 0x1e44344);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e443d4 + 0x1e44358));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e443d8 + 0x1e44370)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e443b8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e443d8 + 0x1e44370),0xe);
LAB_01e443b8:
                    /* WARNING: Could not recover jumptable at 0x01e443cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x27,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_HideNum RVA 0x1e343dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e443dc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e4447c + 0x1e443f0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e44480 + 0x1e44404));
    *pcVar5 = '\x01';
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01e44484 + 0x1e4441c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x130);
        goto LAB_01e44464;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e44484 + 0x1e4441c),0xe);
LAB_01e44464:
                    /* WARNING: Could not recover jumptable at 0x01e44478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,0x28,puVar2[1]);
  return;
}



// ===== FAT.IOrderData$$get_IsMultiOrder RVA 0x1e34488 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e44488(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  char *pcVar8;
  
  pcVar8 = (char *)(_UNK_01e445b8 + 0x1e4449c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e445bc + 0x1e444b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e445c0 + 0x1e444bc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *param_1;
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01e445c4 + 0x1e444ec)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x130);
        goto LAB_01e44538;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e445c4 + 0x1e444ec),0xe);
LAB_01e44538:
  uVar4 = (*(code *)*puVar3)(param_1,0x4a,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  bVar7 = false;
  piVar6 = (int *)func_0x02b44a6c(iVar1,uVar4,0);
  if (piVar6 != (int *)0x0) {
    uVar5 = (uint)*(byte *)(**(int **)(_UNK_01e445c8 + 0x1e44584) + 0xb8);
    if (uVar5 <= *(byte *)(*piVar6 + 0xb8)) {
      bVar7 = *(int *)(*(int *)(*piVar6 + 100) + uVar5 * 4 + -4) ==
              **(int **)(_UNK_01e445c8 + 0x1e44584);
    }
  }
  return bVar7;
}



// ===== FAT.IOrderData$$CalcRealDifficulty RVA 0x1e345cc =====

/* WARNING: Removing unreachable block (ram,0x01e448fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e445cc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01e449e4 + 0x1e445e4);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e449e8 + 0x1e445f8));
    func_0x01384978(*(undefined4 *)(_UNK_01e449ec + 0x1e44604));
    func_0x01384978(*(undefined4 *)(_UNK_01e449f0 + 0x1e44610));
    func_0x01384978(*(undefined4 *)(_UNK_01e449f4 + 0x1e4461c));
    func_0x01384978(*(undefined4 *)(_UNK_01e449f8 + 0x1e44628));
    *pcVar9 = '\x01';
  }
  iVar1 = *param_1;
  iStack_28 = 0;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  uStack_2c = 0;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01e449fc + 0x1e44648)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xf0);
        goto LAB_01e44694;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e449fc + 0x1e44648),6);
LAB_01e44694:
  piVar6 = (int *)(*(code *)*puVar2)(param_1,puVar2[1]);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_01e44a00 + 0x1e446c4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
        goto LAB_01e4470c;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e44a00 + 0x1e446c4),0);
LAB_01e4470c:
  piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
  iVar1 = 0;
  piVar11 = *(int **)(_UNK_01e44a04 + 0x1e44738);
  piVar7 = *(int **)(_UNK_01e44a08 + 0x1e44740);
  do {
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_01e44798;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,*piVar11,0);
LAB_01e44798:
    iVar3 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    if (iVar3 == 0) break;
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_01e4480c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,*piVar7,0);
LAB_01e4480c:
    iVar3 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x58);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar10 = *(undefined4 *)(iVar3 + 8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    FUN_01dc688c(iVar4,uVar10,&uStack_2c,&iStack_28,0);
    iVar1 = iStack_28 + iVar1;
  } while( true );
  if (piVar6 != (int *)0x0) {
    iVar3 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01e44a0c + 0x1e4489c)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_01e448e4;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01e44a0c + 0x1e4489c),0);
LAB_01e448e4:
    (*(code *)*puVar2)(piVar6,puVar2[1]);
  }
  return iVar1;
}



// ===== FAT.IOrderData$$ShouldOverrideOrderRes RVA 0x1e34a14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e44a14(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_01e44f30 + 0x1e44a28);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e44f34 + 0x1e44a3c));
    *pcVar6 = '\x01';
  }
  iVar1 = *param_1;
  piVar7 = *(int **)(_UNK_01e44f38 + 0x1e44a54);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar7) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1d8);
        goto LAB_01e44a9c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x23);
LAB_01e44a9c:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar7) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x220);
          goto LAB_01e44b04;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x2c);
LAB_01e44b04:
    iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (iVar1 == 0) {
      iVar1 = *param_1;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar7) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x268);
            goto LAB_01e44b6c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x35);
LAB_01e44b6c:
      iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
      if (iVar1 == 0) {
        iVar1 = *param_1;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar7) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x3a8);
              goto LAB_01e44bd4;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x5d);
LAB_01e44bd4:
        iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
        if (iVar1 == 0) {
          iVar1 = *param_1;
          uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == *piVar7) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x2a0);
                goto LAB_01e44c3c;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x3c);
LAB_01e44c3c:
          iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
          if (iVar1 == 0) {
            iVar1 = *param_1;
            uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == *piVar7) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x2c8);
                  goto LAB_01e44ca4;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x41);
LAB_01e44ca4:
            iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
            if (iVar1 == 0) {
              iVar1 = *param_1;
              uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar4 != 0) {
                piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar5[-1] == *piVar7) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x370);
                    goto LAB_01e44d0c;
                  }
                  uVar4 = uVar4 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar4 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x56);
LAB_01e44d0c:
              iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
              if (iVar1 != 0) {
                iVar1 = *param_1;
                uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar4 != 0) {
                  piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == *piVar7) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x360);
                      goto LAB_01e44d74;
                    }
                    uVar4 = uVar4 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar4 != 0);
                }
                puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x54);
LAB_01e44d74:
                iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
                if (iVar1 == 0) {
                  return 1;
                }
              }
              iVar1 = *param_1;
              uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar4 != 0) {
                piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar5[-1] == *piVar7) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x2d8);
                    goto LAB_01e44ddc;
                  }
                  uVar4 = uVar4 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar4 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x43);
LAB_01e44ddc:
              iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
              if (iVar1 == 0) {
                iVar1 = *param_1;
                uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar4 != 0) {
                  piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == *piVar7) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x2e8);
                      goto LAB_01e44e44;
                    }
                    uVar4 = uVar4 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar4 != 0);
                }
                puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x45);
LAB_01e44e44:
                iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
                if (iVar1 == 0) {
                  iVar1 = *param_1;
                  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar4 != 0) {
                    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar5[-1] == *piVar7) {
                        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x300);
                        goto LAB_01e44eac;
                      }
                      uVar4 = uVar4 - 1;
                      piVar5 = piVar5 + 2;
                    } while (uVar4 != 0);
                  }
                  puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x48);
LAB_01e44eac:
                  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
                  if (iVar1 == 0) {
                    iVar1 = *param_1;
                    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
                    if (uVar4 != 0) {
                      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                      do {
                        if (piVar5[-1] == *piVar7) {
                          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x2e0);
                          goto LAB_01e44f1c;
                        }
                        uVar4 = uVar4 - 1;
                        piVar5 = piVar5 + 2;
                      } while (uVar4 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar7,0x44);
LAB_01e44f1c:
                    /* WARNING: Could not recover jumptable at 0x01e44f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
                    return uVar3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}



// ===== FAT.IOrderData$$TryGetOverrideRes RVA 0x1e34f3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e44f3c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  
  pcVar9 = (char *)(_UNK_01e45f44 + 0x1e44f54);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e45f48 + 0x1e44f68));
    func_0x01384978(*(undefined4 *)(_UNK_01e45f4c + 0x1e44f74));
    func_0x01384978(*(undefined4 *)(_UNK_01e45f50 + 0x1e44f80));
    func_0x01384978(*(undefined4 *)(_UNK_01e45f54 + 0x1e44f8c));
    *pcVar9 = '\x01';
  }
  *param_2 = 0;
  iVar1 = *param_1;
  piVar10 = *(int **)(_UNK_01e45f58 + 0x1e44fac);
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x1d8);
        goto LAB_01e44ff4;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0x23);
LAB_01e44ff4:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  iVar7 = *param_1;
  iVar5 = *piVar10;
  uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (iVar1 == 0) {
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar5) {
          puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x370);
          goto LAB_01e45134;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0x56);
LAB_01e45134:
    iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
    iVar7 = *param_1;
    iVar5 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (iVar1 == 0) {
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar5) {
            puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x220);
            goto LAB_01e45304;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0x2c);
LAB_01e45304:
      iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
      iVar7 = *param_1;
      iVar5 = *piVar10;
      uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (iVar1 == 0) {
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar8[-1] == iVar5) {
              puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x268);
              goto LAB_01e45568;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0x35);
LAB_01e45568:
        iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
        iVar7 = *param_1;
        iVar5 = *piVar10;
        uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (iVar1 == 0) {
          if (uVar6 != 0) {
            piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
            do {
              if (piVar8[-1] == iVar5) {
                puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x3a8);
                goto LAB_01e45800;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0x5d);
LAB_01e45800:
          iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
          iVar7 = *param_1;
          iVar5 = *piVar10;
          uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
          if (iVar1 == 0) {
            if (uVar6 != 0) {
              piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar5) {
                  puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x2c8);
                  goto LAB_01e45a3c;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0x41);
LAB_01e45a3c:
            iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
            if (iVar1 == 0) {
              iVar1 = *param_1;
              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar6 != 0) {
                piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar8[-1] == *piVar10) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x2e8);
                    goto LAB_01e45bec;
                  }
                  uVar6 = uVar6 - 1;
                  piVar8 = piVar8 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0x45);
LAB_01e45bec:
              iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
              if (iVar1 == 0) {
                iVar1 = *param_1;
                uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar6 != 0) {
                  piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == *piVar10) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x2e0);
                      goto LAB_01e45d70;
                    }
                    uVar6 = uVar6 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar6 != 0);
                }
                puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0x44);
LAB_01e45d70:
                iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
                if (iVar1 == 0) {
                  iVar1 = *param_1;
                  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar6 != 0) {
                    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == *piVar10) {
                        puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x2d8);
                        goto LAB_01e45ed8;
                      }
                      uVar6 = uVar6 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar6 != 0);
                  }
                  puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0x43);
LAB_01e45ed8:
                  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
                  if (iVar1 == 0) {
                    iVar1 = *param_1;
                    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                    if (uVar6 != 0) {
                      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                      do {
                        if (piVar8[-1] == *piVar10) {
                          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x300);
                          goto LAB_01e46058;
                        }
                        uVar6 = uVar6 - 1;
                        piVar8 = piVar8 + 2;
                      } while (uVar6 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0x48);
LAB_01e46058:
                    iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
                    if (iVar1 == 0) {
                      iVar1 = *param_1;
                      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                      if (uVar6 != 0) {
                        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == *piVar10) {
                            puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x2a0);
                            goto LAB_01e46160;
                          }
                          uVar6 = uVar6 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar6 != 0);
                      }
                      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0x3c);
LAB_01e46160:
                      iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
                      if (iVar1 == 0) goto LAB_01e45e10;
                      iVar1 = *param_1;
                      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                      if (uVar6 != 0) {
                        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == *piVar10) {
                            puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
                            goto LAB_01e46230;
                          }
                          uVar6 = uVar6 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar6 != 0);
                      }
                      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xe);
LAB_01e46230:
                      uVar3 = (*(code *)*puVar2)(param_1,9,puVar2[1]);
                      iVar1 = *param_1;
                      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                      if (uVar6 != 0) {
                        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == *piVar10) {
                            puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
                            goto LAB_01e462cc;
                          }
                          uVar6 = uVar6 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar6 != 0);
                      }
                      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xe);
LAB_01e462cc:
                      uVar4 = (*(code *)*puVar2)(param_1,0xf,puVar2[1]);
                      uVar3 = func_0x02acb520(uVar3,uVar4,0);
                    }
                    else {
                      uVar3 = func_0x02a4ab40(0);
                    }
                  }
                  else {
                    uVar3 = func_0x025ed1a8(param_1,0);
                  }
                }
                else {
                  uVar3 = func_0x02407fe4(param_1,0);
                }
              }
              else {
                uVar3 = func_0x02a67e04(0);
              }
            }
            else {
              uVar3 = func_0x02895930(0);
            }
          }
          else {
            if (uVar6 != 0) {
              piVar10 = (int *)(*(int *)(iVar7 + 0x58) + 4);
              do {
                if (piVar10[-1] == iVar5) {
                  puVar2 = (undefined4 *)(iVar7 + *piVar10 * 8 + 0x130);
                  goto LAB_01e45a10;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e45a10:
            uVar3 = (*(code *)*puVar2)(param_1,0x4a,puVar2[1]);
            uVar3 = func_0x0298a754(uVar3,0);
          }
        }
        else {
          if (uVar6 != 0) {
            piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
            do {
              if (piVar8[-1] == iVar5) {
                puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x130);
                goto LAB_01e45798;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e45798:
          uVar3 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
          iVar1 = *param_1;
          uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar8[-1] == *piVar10) {
                puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
                goto LAB_01e458d4;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xe);
LAB_01e458d4:
          uVar4 = (*(code *)*puVar2)(param_1,0xe,puVar2[1]);
          uVar3 = func_0x02ad0814(uVar3,uVar4,0);
        }
      }
      else {
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar8[-1] == iVar5) {
              puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x130);
              goto LAB_01e45500;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e45500:
        uVar3 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
        iVar1 = *param_1;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar10) {
              puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
              goto LAB_01e4563c;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xe);
LAB_01e4563c:
        uVar4 = (*(code *)*puVar2)(param_1,0xe,puVar2[1]);
        if (*(int *)(**(int **)(_UNK_01e462fc + 0x1e45660) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar3 = func_0x02adff30(uVar3,uVar4,0);
      }
    }
    else {
      if (uVar6 != 0) {
        piVar10 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar10[-1] == iVar5) {
            puVar2 = (undefined4 *)(iVar7 + *piVar10 * 8 + 0x330);
            goto LAB_01e452dc;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0x4e);
LAB_01e452dc:
      uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
      uVar3 = func_0x025c5abc(uVar3,0);
    }
  }
  else {
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar5) {
          puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xd0);
          goto LAB_01e45094;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,2);
LAB_01e45094:
    iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
    iVar7 = *param_1;
    iVar5 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (iVar1 == 4) {
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar5) {
            puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x130);
            goto LAB_01e451d4;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e451d4:
      uVar3 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
      iVar1 = *param_1;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == *piVar10) {
            puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
            goto LAB_01e453a4;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xe);
LAB_01e453a4:
      uVar4 = (*(code *)*puVar2)(param_1,0xe,puVar2[1]);
      if (*(int *)(**(int **)(_UNK_01e462f4 + 0x1e453c8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar3 = func_0x025d0564(uVar3,uVar4,0);
    }
    else {
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar5) {
            puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xd0);
            goto LAB_01e4523c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,2);
LAB_01e4523c:
      iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
      iVar7 = *param_1;
      iVar5 = *piVar10;
      uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (iVar1 == 0xd) {
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar8[-1] == iVar5) {
              puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x130);
              goto LAB_01e453f8;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e453f8:
        uVar3 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
        iVar1 = *param_1;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar10) {
              puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
              goto LAB_01e45608;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xe);
LAB_01e45608:
        uVar4 = (*(code *)*puVar2)(param_1,0xe,puVar2[1]);
        uVar3 = func_0x029621dc(uVar3,uVar4,0);
      }
      else {
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar8[-1] == iVar5) {
              puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xd0);
              goto LAB_01e45460;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,2);
LAB_01e45460:
        iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
        iVar7 = *param_1;
        iVar5 = *piVar10;
        uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (iVar1 == 6) {
          if (uVar6 != 0) {
            piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
            do {
              if (piVar8[-1] == iVar5) {
                puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x130);
                goto LAB_01e45690;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e45690:
          uVar3 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
          iVar1 = *param_1;
          uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar8[-1] == *piVar10) {
                puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
                goto LAB_01e458a0;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xe);
LAB_01e458a0:
          uVar4 = (*(code *)*puVar2)(param_1,0xe,puVar2[1]);
          uVar3 = func_0x02aeffd8(uVar3,uVar4,0);
        }
        else {
          if (uVar6 != 0) {
            piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
            do {
              if (piVar8[-1] == iVar5) {
                puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xd0);
                goto LAB_01e456f8;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,2);
LAB_01e456f8:
          iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
          iVar7 = *param_1;
          iVar5 = *piVar10;
          uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
          if (iVar1 == 1) {
            if (uVar6 != 0) {
              piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar5) {
                  puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x130);
                  goto LAB_01e45908;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e45908:
            uVar3 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
            iVar1 = *param_1;
            uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar8[-1] == *piVar10) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
                  goto LAB_01e45ab0;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xe);
LAB_01e45ab0:
            uVar4 = (*(code *)*puVar2)(param_1,0xe,puVar2[1]);
            uVar3 = func_0x02accf68(uVar3,uVar4,0);
          }
          else {
            if (uVar6 != 0) {
              piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar5) {
                  puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xd0);
                  goto LAB_01e45970;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,2);
LAB_01e45970:
            iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
            iVar7 = *param_1;
            iVar5 = *piVar10;
            uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
            if (iVar1 == 9) {
              if (uVar6 != 0) {
                piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
                do {
                  if (piVar8[-1] == iVar5) {
                    puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x130);
                    goto LAB_01e45ae4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar8 = piVar8 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e45ae4:
              uVar3 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
              iVar1 = *param_1;
              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar6 != 0) {
                piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar8[-1] == *piVar10) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
                    goto LAB_01e45c60;
                  }
                  uVar6 = uVar6 - 1;
                  piVar8 = piVar8 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xe);
LAB_01e45c60:
              uVar4 = (*(code *)*puVar2)(param_1,0xe,puVar2[1]);
              uVar3 = func_0x025e4a6c(uVar3,uVar4,0);
            }
            else {
              if (uVar6 != 0) {
                piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
                do {
                  if (piVar8[-1] == iVar5) {
                    puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xd0);
                    goto LAB_01e45b4c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar8 = piVar8 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,2);
LAB_01e45b4c:
              iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
              iVar7 = *param_1;
              iVar5 = *piVar10;
              uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
              if (iVar1 == 7) {
                if (uVar6 != 0) {
                  piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar5) {
                      puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0x130);
                      goto LAB_01e45c94;
                    }
                    uVar6 = uVar6 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar6 != 0);
                }
                puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e45c94:
                uVar3 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
                iVar1 = *param_1;
                uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar6 != 0) {
                  piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == *piVar10) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
                      goto LAB_01e45de8;
                    }
                    uVar6 = uVar6 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar6 != 0);
                }
                puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xe);
LAB_01e45de8:
                uVar4 = (*(code *)*puVar2)(param_1,0xe,puVar2[1]);
                uVar3 = func_0x02610b88(uVar3,uVar4,0);
              }
              else {
                if (uVar6 != 0) {
                  piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar5) {
                      puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xd0);
                      goto LAB_01e45cfc;
                    }
                    uVar6 = uVar6 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar6 != 0);
                }
                puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,2);
LAB_01e45cfc:
                iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
                if (iVar1 == 8) {
                  uVar3 = func_0x02b6a40c(0);
                }
                else {
                  iVar1 = *param_1;
                  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar6 != 0) {
                    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == *piVar10) {
                        puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xd0);
                        goto LAB_01e45e38;
                      }
                      uVar6 = uVar6 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar6 != 0);
                  }
                  puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,2);
LAB_01e45e38:
                  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
                  iVar7 = *param_1;
                  iVar5 = *piVar10;
                  uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
                  if (iVar1 == 0xe) {
                    if (uVar6 != 0) {
                      piVar10 = (int *)(*(int *)(iVar7 + 0x58) + 4);
                      do {
                        if (piVar10[-1] == iVar5) {
                          puVar2 = (undefined4 *)(iVar7 + *piVar10 * 8 + 0x130);
                          goto LAB_01e45f68;
                        }
                        uVar6 = uVar6 - 1;
                        piVar10 = piVar10 + 2;
                      } while (uVar6 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e45f68:
                    uVar3 = (*(code *)*puVar2)(param_1,0xe,puVar2[1]);
                    if (*(int *)(**(int **)(_UNK_01e462f8 + 0x1e45f8c) + 0x74) == 0) {
                      func_0x01384ab4();
                    }
                    uVar3 = func_0x0287c6d4(uVar3,0);
                  }
                  else {
                    if (uVar6 != 0) {
                      piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
                      do {
                        if (piVar8[-1] == iVar5) {
                          puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xd0);
                          goto LAB_01e45fb8;
                        }
                        uVar6 = uVar6 - 1;
                        piVar8 = piVar8 + 2;
                      } while (uVar6 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,2);
LAB_01e45fb8:
                    iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
                    iVar7 = *param_1;
                    iVar5 = *piVar10;
                    uVar6 = (uint)*(ushort *)(iVar7 + 0xb6);
                    if (iVar1 == 0xb) {
                      if (uVar6 != 0) {
                        piVar10 = (int *)(*(int *)(iVar7 + 0x58) + 4);
                        do {
                          if (piVar10[-1] == iVar5) {
                            puVar2 = (undefined4 *)(iVar7 + *piVar10 * 8 + 0x130);
                            goto LAB_01e460cc;
                          }
                          uVar6 = uVar6 - 1;
                          piVar10 = piVar10 + 2;
                        } while (uVar6 != 0);
                      }
                      puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e460cc:
                      uVar3 = (*(code *)*puVar2)(param_1,0x45,puVar2[1]);
                      uVar3 = func_0x026eeaf8(uVar3,0);
                    }
                    else {
                      if (uVar6 != 0) {
                        piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == iVar5) {
                            puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xd0);
                            goto LAB_01e460f8;
                          }
                          uVar6 = uVar6 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar6 != 0);
                      }
                      puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,2);
LAB_01e460f8:
                      iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
                      if (iVar1 != 0xc) goto LAB_01e45e10;
                      iVar1 = *param_1;
                      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                      if (uVar6 != 0) {
                        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == *piVar10) {
                            puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
                            goto LAB_01e461c8;
                          }
                          uVar6 = uVar6 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar6 != 0);
                      }
                      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xe);
LAB_01e461c8:
                      uVar3 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
                      iVar1 = *param_1;
                      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                      if (uVar6 != 0) {
                        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == *piVar10) {
                            puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
                            goto LAB_01e46298;
                          }
                          uVar6 = uVar6 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar6 != 0);
                      }
                      puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,0xe);
LAB_01e46298:
                      uVar4 = (*(code *)*puVar2)(param_1,0xe,puVar2[1]);
                      uVar3 = func_0x02303870(uVar3,uVar4,0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *param_2 = uVar3;
LAB_01e45e10:
  uVar3 = func_0x01e46300(*param_2);
  *param_2 = uVar3;
  uVar6 = func_0x01489db8(uVar3,0);
  return uVar6 ^ 1;
}



// ===== FAT.IOrderData$$ApplyV2SuffixIfNeeded RVA 0x1e36300 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e46300(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01e463f0 + 0x1e46314);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e463f4 + 0x1e46328));
    func_0x01384978(*(undefined4 *)(_UNK_01e463f8 + 0x1e46334));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01489db8(param_1,0);
  iVar3 = param_1;
  if ((iVar1 == 0) && (iVar1 = func_0x01f2a218(0), iVar1 != 0)) {
    if (param_1 == 0) {
      func_0x01384bf0();
      iVar1 = func_0x02451dcc(0,**(undefined4 **)(_UNK_01e463fc + 0x1e463ac),0);
      iVar3 = 0;
      if (iVar1 != 0) {
        func_0x01384bf0();
        goto LAB_01e463c0;
      }
    }
    else {
      iVar1 = func_0x02451dcc(param_1,**(undefined4 **)(_UNK_01e46400 + 0x1e46378),0);
      if (iVar1 != 0) {
LAB_01e463c0:
        uVar2 = func_0x024512e4(param_1,0,*(int *)(param_1 + 8) + -7,0);
        iVar3 = (*(code *)&SUB_046634e0)(uVar2,**(undefined4 **)(_UNK_01e46404 + 0x1e463e8),0);
        return iVar3;
      }
    }
  }
  return iVar3;
}



// ===== FAT.IOrderData$$TryGetRoleSpineRes RVA 0x1e36408 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e46408(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01e464d8 + 0x1e46420);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e464dc + 0x1e46434));
    *pcVar6 = '\x01';
  }
  *param_2 = 0;
  iVar1 = *param_1;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01e464e0 + 0x1e46454)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x2e8);
        goto LAB_01e4649c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e464e0 + 0x1e46454),0x45);
LAB_01e4649c:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 == 0) {
    uVar3 = *param_2;
  }
  else {
    uVar3 = func_0x02a67d78(0);
    *param_2 = uVar3;
  }
  uVar4 = func_0x01489db8(uVar3,0);
  return uVar4 ^ 1;
}



// ===== FAT.IOrderData$$TryGetExtraRewardMiniRes RVA 0x1e364e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e464e4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  
  pcVar8 = (char *)(_UNK_01e46618 + 0x1e464fc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e4661c + 0x1e46510));
    *pcVar8 = '\x01';
  }
  iVar1 = *param_1;
  piVar9 = *(int **)(_UNK_01e46620 + 0x1e46528);
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar5 = *piVar9;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar5) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x130);
        goto LAB_01e46570;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e46570:
  uVar3 = (*(code *)*puVar2)(param_1,0x11,puVar2[1]);
  iVar1 = *param_1;
  iVar5 = *piVar9;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar5) {
        puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0x130);
        goto LAB_01e465d8;
      }
      uVar6 = uVar6 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e465d8:
  uVar4 = (*(code *)*puVar2)(param_1,0x12,puVar2[1]);
  uVar3 = func_0x02acb26c(uVar3,uVar4,0);
  *param_2 = uVar3;
  uVar3 = FUN_01e46300();
  *param_2 = uVar3;
  uVar6 = func_0x01489db8(uVar3,0);
  return uVar6 ^ 1;
}



// ===== FAT.IOrderData$$TryGetOrderLikeRes RVA 0x1e36624 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e46624(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int iStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar7 = (char *)(_UNK_01e46ac4 + 0x1e46640);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e46ac8 + 0x1e46654));
    func_0x01384978(*(undefined4 *)(_UNK_01e46acc + 0x1e46660));
    func_0x01384978(*(undefined4 *)(_UNK_01e46ad0 + 0x1e4666c));
    func_0x01384978(*(undefined4 *)(_UNK_01e46ad4 + 0x1e46678));
    func_0x01384978(*(undefined4 *)(_UNK_01e46ad8 + 0x1e46684));
    func_0x01384978(*(undefined4 *)(_UNK_01e46adc + 0x1e46690));
    *pcVar7 = '\x01';
  }
  piStack_24 = (int *)0x0;
  uStack_28 = 0;
  iStack_2c = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02b3c518(iVar1,0x2f,&piStack_24,0);
  piVar10 = piStack_24;
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar1 = func_0x02b3c518(iVar1,0x4a,&iStack_2c,0);
    if (iVar1 != 0) {
      iVar2 = func_0x01f2a218(0);
      iVar1 = iStack_2c;
      if (iVar2 == 0) {
        iVar1 = *param_1;
        piVar10 = *(int **)(_UNK_01e46af8 + 0x1e4691c);
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        iVar2 = *piVar10;
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar8[-1] == iVar2) {
              puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x130);
              goto LAB_01e469dc;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(param_1,iVar2,0xe);
LAB_01e469dc:
        uVar4 = (*(code *)*puVar3)(param_1,0x17,puVar3[1]);
        iVar1 = *param_1;
        iVar2 = *piVar10;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar2) {
              puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0x130);
              goto LAB_01e46a70;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(param_1,iVar2,0xe);
LAB_01e46a70:
        uVar9 = (*(code *)*puVar3)(param_1,0x18,puVar3[1]);
      }
      else {
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        uVar4 = func_0x02b449f8(iVar1,0);
        if (*(int *)(**(int **)(_UNK_01e46aec + 0x1e46848) + 0x74) == 0) {
          func_0x01384ab4();
        }
        piVar10 = (int *)0x0;
        if (param_1 != (int *)0x0) {
          uVar6 = (uint)*(byte *)(**(int **)(_UNK_01e46af0 + 0x1e4686c) + 0xb8);
          if ((uVar6 <= *(byte *)(*param_1 + 0xb8)) &&
             (piVar10 = param_1,
             *(int *)(*(int *)(*param_1 + 100) + uVar6 * 4 + -4) !=
             **(int **)(_UNK_01e46af0 + 0x1e4686c))) {
            piVar10 = (int *)0x0;
          }
        }
        iVar1 = FUN_01e41d38(piVar10,uVar4);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *param_1;
        piVar10 = *(int **)(_UNK_01e46af4 + 0x1e468c4);
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        uVar4 = *(undefined4 *)(iVar1 + 8);
        iVar5 = *piVar10;
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar8[-1] == iVar5) {
              puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0x130);
              goto LAB_01e46964;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e46964:
        uVar4 = (*(code *)*puVar3)(param_1,uVar4,puVar3[1]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *param_1;
        iVar5 = *piVar10;
        uVar9 = *(undefined4 *)(iVar1 + 0xc);
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar5) {
              puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0x130);
              goto LAB_01e46a44;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e46a44:
        uVar9 = (*(code *)*puVar3)(param_1,uVar9,puVar3[1]);
      }
      uVar4 = func_0x02ac20ec(uVar4,uVar9,0);
      *param_2 = uVar4;
      goto LAB_01e46a9c;
    }
  }
  else {
    piVar8 = *(int **)(_UNK_01e46ae0 + 0x1e466f8);
    if (piStack_24 == (int *)0x0) {
LAB_01e46734:
      func_0x01384bf0();
    }
    else {
      iVar1 = *piVar8;
      uVar6 = (uint)*(byte *)(iVar1 + 0xb8);
      if ((*(byte *)(*piStack_24 + 0xb8) < uVar6) ||
         (*(int *)(*(int *)(*piStack_24 + 100) + uVar6 * 4 + -4) != iVar1)) {
        func_0x01384fb4(piStack_24);
        goto LAB_01e46734;
      }
    }
    iVar1 = *piVar8;
    uVar6 = (uint)*(byte *)(iVar1 + 0xb8);
    if ((*(byte *)(*piVar10 + 0xb8) < uVar6) ||
       (*(int *)(*(int *)(*piVar10 + 100) + uVar6 * 4 + -4) != iVar1)) {
      func_0x01384fb4(piVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = piVar10[0x15];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03470a60(iVar1,**(undefined4 **)(_UNK_01e46ae8 + 0x1e467b0),&uStack_28,
                    **(undefined4 **)(_UNK_01e46ae4 + 0x1e467a4));
    uVar4 = uStack_28;
  }
  *param_2 = uVar4;
LAB_01e46a9c:
  uVar4 = FUN_01e46300(uVar4);
  *param_2 = uVar4;
  uVar6 = func_0x01489db8(uVar4,0);
  return uVar6 ^ 1;
}



// ===== FAT.IOrderData$$TryGetOrderRateRes RVA 0x1e36afc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e46afc(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piStack_24;
  
  pcVar8 = (char *)(_UNK_01e46e94 + 0x1e46b18);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e46e98 + 0x1e46b2c));
    func_0x01384978(*(undefined4 *)(_UNK_01e46e9c + 0x1e46b38));
    func_0x01384978(*(undefined4 *)(_UNK_01e46ea0 + 0x1e46b44));
    func_0x01384978(*(undefined4 *)(_UNK_01e46ea4 + 0x1e46b50));
    *pcVar8 = '\x01';
  }
  piStack_24 = (int *)0x0;
  iVar1 = func_0x01f2a218(0);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    piVar2 = *(int **)(_UNK_01e46eb8 + 0x1e46cf0);
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar3 = *piVar2;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar3) {
          puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x130);
          goto LAB_01e46d38;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_1,iVar3,0xe);
LAB_01e46d38:
    uVar10 = (*(code *)*puVar4)(param_1,0x1b,puVar4[1]);
    iVar1 = *param_1;
    iVar3 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar2[-1] == iVar3) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0x130);
          goto LAB_01e46da0;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_1,iVar3,0xe);
LAB_01e46da0:
    uVar9 = (*(code *)*puVar4)(param_1,0x1c,puVar4[1]);
    uVar10 = func_0x02601298(uVar10,uVar9,0);
    goto LAB_01e46e7c;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 0;
  iVar1 = func_0x02b3c518(iVar1,0x30,&piStack_24,0);
  uVar10 = 0;
  if (iVar1 != 0) {
    if (piStack_24 == (int *)0x0) {
LAB_01e46c00:
      func_0x01384bf0();
      piVar2 = (int *)0x0;
    }
    else {
      uVar6 = (uint)*(byte *)(**(int **)(_UNK_01e46ea8 + 0x1e46bd4) + 0xb8);
      if ((*(byte *)(*piStack_24 + 0xb8) < uVar6) ||
         (piVar2 = piStack_24,
         *(int *)(*(int *)(*piStack_24 + 100) + uVar6 * 4 + -4) !=
         **(int **)(_UNK_01e46ea8 + 0x1e46bd4))) {
        func_0x01384fb4();
        goto LAB_01e46c00;
      }
    }
    uVar10 = func_0x02b449f8(piVar2,0);
    if (*(int *)(**(int **)(_UNK_01e46eac + 0x1e46c24) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar2 = (int *)0x0;
    if (param_1 != (int *)0x0) {
      uVar6 = (uint)*(byte *)(**(int **)(_UNK_01e46eb0 + 0x1e46c48) + 0xb8);
      if ((uVar6 <= *(byte *)(*param_1 + 0xb8)) &&
         (piVar2 = param_1,
         *(int *)(*(int *)(*param_1 + 100) + uVar6 * 4 + -4) !=
         **(int **)(_UNK_01e46eb0 + 0x1e46c48))) {
        piVar2 = (int *)0x0;
      }
    }
    iVar1 = FUN_01e41d38(piVar2,uVar10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *param_1;
    piVar2 = *(int **)(_UNK_01e46eb4 + 0x1e46ca0);
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    uVar10 = *(undefined4 *)(iVar1 + 8);
    iVar5 = *piVar2;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar5) {
          puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0x130);
          goto LAB_01e46dd4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e46dd4:
    uVar10 = (*(code *)*puVar4)(param_1,uVar10,puVar4[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *param_1;
    iVar5 = *piVar2;
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar2[-1] == iVar5) {
          puVar4 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0x130);
          goto LAB_01e46e4c;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_1,iVar5,0xe);
LAB_01e46e4c:
    uVar9 = (*(code *)*puVar4)(param_1,uVar9,puVar4[1]);
  }
  uVar10 = func_0x02601298(uVar10,uVar9,0);
  *param_2 = uVar10;
  uVar10 = FUN_01e46300();
LAB_01e46e7c:
  *param_2 = uVar10;
  uVar6 = func_0x01489db8(uVar10,0);
  return uVar6 ^ 1;
}



// ===== FAT.IOrderData$$TryGetOrderBonusRes RVA 0x1e36ebc =====

uint FUN_01e46ebc(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = func_0x025c368c(0);
  *param_2 = uVar1;
  uVar1 = FUN_01e46300();
  *param_2 = uVar1;
  uVar2 = func_0x01489db8(uVar1,0);
  return uVar2 ^ 1;
}



// ===== FAT.IOrderData$$TryGetClawOrderRes RVA 0x1e36ee8 =====

uint FUN_01e46ee8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = func_0x028958a4(0);
  *param_2 = uVar1;
  uVar1 = FUN_01e46300();
  *param_2 = uVar1;
  uVar2 = func_0x01489db8(uVar1,0);
  return uVar2 ^ 1;
}



// ===== FAT.IOrderData$$TryGetMysteryBagOrderRes RVA 0x1e36f14 =====

uint FUN_01e46f14(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = func_0x025baf04(0);
  *param_2 = uVar1;
  uVar1 = FUN_01e46300();
  *param_2 = uVar1;
  uVar2 = func_0x01489db8(uVar1,0);
  return uVar2 ^ 1;
}



// ===== FAT.IOrderData$$TryGetFoodVanOrderRes RVA 0x1e36f40 =====

uint FUN_01e46f40(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = func_0x029390cc(0);
  *param_2 = uVar1;
  uVar1 = FUN_01e46300();
  *param_2 = uVar1;
  uVar2 = func_0x01489db8(uVar1,0);
  return uVar2 ^ 1;
}



// ===== FAT.IOrderData$$TryGetMultiOrderRes RVA 0x1e36f6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e46f6c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01e47030 + 0x1e46f84);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e47034 + 0x1e46f98));
    *pcVar6 = '\x01';
  }
  iVar1 = *param_1;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01e47038 + 0x1e46fb0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x130);
        goto LAB_01e46ff8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e47038 + 0x1e46fb0),0xe);
LAB_01e46ff8:
  uVar3 = (*(code *)*puVar2)(param_1,0x4a,puVar2[1]);
  uVar3 = func_0x0298a924(uVar3,0);
  *param_2 = uVar3;
  uVar3 = FUN_01e46300();
  *param_2 = uVar3;
  uVar4 = func_0x01489db8(uVar3,0);
  return uVar4 ^ 1;
}



// ===== FAT.IOrderData$$TryGetPiggyOrderRes RVA 0x1e3703c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e4703c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01e470ac + 0x1e47050);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e470b0 + 0x1e47064));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01e470b4 + 0x1e47078) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar1 = func_0x02649e5c(0);
  *param_2 = uVar1;
  uVar1 = FUN_01e46300();
  *param_2 = uVar1;
  uVar2 = func_0x01489db8(uVar1,0);
  return uVar2 ^ 1;
}



// ===== FAT.IOrderData$$TryGetColorOrderRes RVA 0x1e370b8 =====

uint FUN_01e470b8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = func_0x028b30a0(0);
  *param_2 = uVar1;
  uVar1 = FUN_01e46300();
  *param_2 = uVar1;
  uVar2 = func_0x01489db8(uVar1,0);
  return uVar2 ^ 1;
}



// ===== FAT.IOrderData$$TryGetLimitMergeOrderRes RVA 0x1e370e4 =====

uint FUN_01e470e4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = func_0x02b6a180(0);
  *param_2 = uVar1;
  uVar1 = FUN_01e46300();
  *param_2 = uVar1;
  uVar2 = func_0x01489db8(uVar1,0);
  return uVar2 ^ 1;
}



// ===== FAT.IOrderData$$TryGetCDOrderRes RVA 0x1e37110 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e47110(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01e47180 + 0x1e47124);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e47184 + 0x1e47138));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01e47188 + 0x1e4714c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar1 = func_0x0287c2f0(0);
  *param_2 = uVar1;
  uVar1 = FUN_01e46300();
  *param_2 = uVar1;
  uVar2 = func_0x01489db8(uVar1,0);
  return uVar2 ^ 1;
}



// ===== FAT.IOrderData$$TryGetThiefOrderRes RVA 0x1e3718c =====

uint FUN_01e4718c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = func_0x02a67b58(0);
  *param_2 = uVar1;
  uVar1 = FUN_01e46300();
  *param_2 = uVar1;
  uVar2 = func_0x01489db8(uVar1,0);
  return uVar2 ^ 1;
}



// ===== FAT.IOrderData$$TryGetSpinOrderRes RVA 0x1e371b8 =====

uint FUN_01e471b8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = func_0x02a4a920(0);
  *param_2 = uVar1;
  uVar1 = FUN_01e46300();
  *param_2 = uVar1;
  uVar2 = func_0x01489db8(uVar1,0);
  return uVar2 ^ 1;
}



/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemAutoSourceComponent$$get_outputMilli RVA 0x210be60 =====

uint FUN_0211be60(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  undefined4 uVar5;
  int unaff_r7;
  int unaff_r8;
  int unaff_lr;
  int *piVar6;
  int iStack_20;
  uint uStack_1c;
  
  piVar6 = (int *)&stack0xfffffff0;
  iVar1 = func_0x0229f06c(0x5e81,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e81,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_0217493c:
    piVar6[3] = unaff_lr;
    piVar6[2] = unaff_r8;
    piVar6[1] = unaff_r7;
    *piVar6 = unaff_r6;
    piVar6[-1] = unaff_r5;
    piVar6[-2] = unaff_r4;
    piVar6[-8] = 0;
    piVar6[-7] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piVar6[-6] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piVar6[-5] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piVar6[-4] = 0;
    func_0x0245494c(piVar6 + -0xe,0,0);
    iVar3 = *(int *)(iVar1 + 0x10);
    piVar6[-8] = piVar6[-0xe];
    piVar6[-7] = piVar6[-0xd];
    piVar6[-6] = piVar6[-0xc];
    piVar6[-5] = piVar6[-0xb];
    piVar6[-4] = piVar6[-10];
    if (iVar3 != 0) {
      func_0x01485278(piVar6 + -8,iVar3,0);
    }
    func_0x01485278(piVar6 + -8,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    piVar6[-0x10] = 0;
    piVar6[-0xf] = 0;
    func_0x0245495c(iVar3,uVar5,piVar6 + -8,uVar4);
    uVar2 = func_0x0245498c(piVar6 + -8,0,0);
    return uVar2;
  }
  uVar2 = *(uint *)(param_1 + 0x44);
  if (*(char *)(param_1 + 0x3c) != '\0') {
    iVar3 = *(int *)(param_1 + 0x38);
    iVar1 = iVar3;
    if (iVar3 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_1 + 0x38);
      if (iVar1 == 0) {
        iVar3 = func_0x01384bf0();
        piVar6 = &iStack_20;
        iStack_20 = param_1;
        uStack_1c = uVar2;
        iVar1 = func_0x0229f06c(0x1477,0);
        if (iVar1 == 0) {
          return *(uint *)(iVar3 + 0x40);
        }
        iVar1 = func_0x0229f13c(0x1477,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        unaff_lr = 0x211bf04;
        unaff_r6 = 0;
        param_1 = iVar3;
        unaff_r4 = iStack_20;
        unaff_r5 = uStack_1c;
        goto SUB_0217493c;
      }
    }
    uVar2 = (*(int *)(iVar3 + 0x30) - *(int *)(iVar1 + 0x20)) * -1000 + uVar2;
    uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$get_itemCount RVA 0x210bf04 =====

undefined4 FUN_0211bf04(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1477,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1477,0);
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
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.Merge.ItemAutoSourceComponent$$get_isOutputing RVA 0x210bf58 =====

uint FUN_0211bf58(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  iVar1 = func_0x0229f06c(0x5e7f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e7f,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar4 = *(int *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  return (uint)(iVar1 < *(int *)(iVar4 + 0x28));
}



// ===== FAT.Merge.ItemAutoSourceComponent$$get_outputWholeMilli RVA 0x210bfcc =====

void FUN_0211bfcc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e80,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e80,0);
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
    func_0x0245499c(&uStack_30,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    func_0x01384bf0();
  }
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$get_outputCountToDead RVA 0x210c04c =====

undefined4 FUN_0211c04c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9d14,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d14,0);
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
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.Merge.ItemAutoSourceComponent$$get_config RVA 0x210c0a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0211c0a0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9d13,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d13,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02280194 + 0x22800b4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02280198 + 0x22800c8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0228019c + 0x2280184));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x38);
}



// ===== FAT.Merge.ItemAutoSourceComponent$$get_isDead RVA 0x210c0f4 =====

uint FUN_0211c0f4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  iVar1 = func_0x0229f06c(0x9e0e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e0e,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = FUN_0211c0a0(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0x14)) {
    iVar4 = *(int *)(param_1 + 0x48);
    iVar1 = FUN_0211c0a0(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    return (uint)(*(int *)(iVar1 + 0x14) <= iVar4);
  }
  return 0;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$get_mAllowCharging RVA 0x210c19c =====

uint FUN_0211c19c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  iVar1 = func_0x0229f06c(0xb354,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb354,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x25) == '\0') {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x25) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)(*(int *)(param_1 + 0x40) == 0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$FAT.Merge.IEffectReceiver.WillReceiveEffect RVA 0x210c238 =====

uint FUN_0211c238(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xb355,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb355,0);
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
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return (uint)(param_2 != 0 && 0 < *(int *)(iVar1 + 0x30));
}



// ===== FAT.Merge.ItemAutoSourceComponent$$Validate RVA 0x210c2bc =====

undefined4 FUN_0211c2bc(int param_1)

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
  iVar1 = func_0x0229f06c(0xb356,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb356,0);
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
  if ((param_1 != 0) && (uVar3 = 0, *(int *)(param_1 + 8) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$OnSerialize RVA 0x210c328 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211c328(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_0211c4f4 + 0x211c340);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211c4f8 + 0x211c354));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb357,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb357,0);
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
  func_0x02123514(param_1,param_2,0);
  iVar1 = func_0x02123568(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02116f08(iVar1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02140d24(iVar1,0);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0211c4fc + 0x211c404));
  func_0x0179e80c(iVar1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  *(int *)(param_2 + 0x34) = iVar1;
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar1 = *(int *)(param_2 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    uRam00000010 = 0;
    uRam00000014 = 0;
    if (iVar1 != 0) goto LAB_0211c464;
    func_0x01384bf0();
    iVar1 = *(int *)(param_2 + 0x34);
    uRam00000018 = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_2 + 0x34);
      uRam0000000c = uVar5;
      if (iVar1 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0211c46c;
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
LAB_0211c464:
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar5;
LAB_0211c46c:
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x48);
  iVar3 = func_0x021235bc(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0x24) = iVar3 + 1;
  iVar1 = *(int *)(param_2 + 0x34);
  uVar5 = func_0x02123628(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x20) = uVar5;
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$OnDeserialize RVA 0x210c500 =====

void FUN_0211c500(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0xb35a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb35a,0);
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
  func_0x021237d4(param_1,param_2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x18);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    uVar5 = *(undefined4 *)(iVar1 + 0x20);
    iVar3 = *(int *)(iVar1 + 0x24);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    *(undefined4 *)(param_1 + 0x48) = uVar4;
    func_0x02123828(param_1,uVar5,iVar3 + -1,0);
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$ConsumeNextItem RVA 0x210c5b8 =====

undefined4 FUN_0211c5b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  uVar2 = 0;
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9e0d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0211c6c8(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x40) + -1;
      *(int *)(param_1 + 0x40) = iVar1;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      if ((iVar1 == 0) && (iVar1 = FUN_0211c0f4(param_1), iVar1 == 0)) {
        iVar1 = func_0x02123568(param_1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_02116f08(iVar1);
        uVar2 = func_0x02123568(param_1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02148ef8(iVar1,uVar2,0x11,0);
      }
      uVar2 = func_0x02124444(param_1,&uStack_14,0,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e0d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217493c(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$IsNextItemReady RVA 0x210c6c8 =====

undefined4 FUN_0211c6c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e0c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e0c,0);
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
  uVar4 = 0;
  iVar1 = func_0x02123568(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02116ae0(iVar1);
  if ((iVar1 != 0) && (uVar4 = 0, 0 < *(int *)(param_1 + 0x40))) {
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$CalculateSpeedOutputCost RVA 0x210c75c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211c75c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
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
  
  pcVar3 = (char *)(_UNK_0211c850 + 0x211c774);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211c854 + 0x211c788));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb35c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb35c,0);
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
    func_0x0245498c(&uStack_30,0,0);
    return;
  }
  iVar4 = *(int *)(param_1 + 0x38);
  iVar1 = iVar4;
  if (iVar4 == 0) {
    func_0x01384bf0();
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar5 = *(int *)(param_1 + 0x44);
  iVar4 = *(int *)(iVar4 + 0x30) * 1000;
  uVar6 = *(undefined4 *)(iVar1 + 0x4c);
  if (*(int *)(**(int **)(_UNK_0211c858 + 0x211c80c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_18 = 0;
  func_0x028d41ac(0,uVar6,iVar4 - iVar5,iVar4);
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$SpeedOutput RVA 0x210c85c =====

undefined4 FUN_0211c85c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0xb35d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb35d,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar3,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_0211bf58(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(int *)(iVar1 + 0x30) * 1000 - *(int *)(param_1 + 0x44);
    func_0x0212542c(param_1,uVar2 & ~((int)uVar2 >> 0x1f),0);
    iVar1 = func_0x02123568(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02116f08(iVar1);
    uVar4 = func_0x02123568(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02148ef8(iVar1,uVar4,0,0);
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$GetToastTypeForItem RVA 0x210c954 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0211c954(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_0211ca2c + 0x211c970);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211ca30 + 0x211c984));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9e0f,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0211c0a0(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0345efbc(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_0211ca34 + 0x211ca18));
  }
  else {
    iVar1 = func_0x0229f13c(0x9e0f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x022866c4(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$StartInstantOutput RVA 0x210ca38 =====

void FUN_0211ca38(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xb35e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb35e,0);
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
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_2;
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$OnPostMerge RVA 0x210ca9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211ca9c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_0211cc5c + 0x211cabc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211cc60 + 0x211cad0));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0xb35f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb35f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar5 = 0;
    iVar1 = FUN_02116a38(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
      goto LAB_0211cb6c;
    }
  }
  else {
    iVar1 = FUN_02116a38(param_2);
    iVar5 = 0;
    if (iVar1 == 0) {
LAB_0211cb6c:
      iVar4 = func_0x02feb690(param_2,&iStack_1c,1,**(undefined4 **)(_UNK_0211cc64 + 0x211cb80));
      iVar1 = iStack_1c;
      iVar5 = 0;
      if (iVar4 != 0) {
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        iVar5 = FUN_0211bf04(iVar1);
      }
    }
  }
  if (param_3 == 0) {
    func_0x01384bf0();
    iVar4 = 0;
    iVar1 = FUN_02116a38(0);
    if (iVar1 != 0) goto LAB_0211cc30;
    func_0x01384bf0();
  }
  else {
    iVar1 = FUN_02116a38(param_3);
    iVar4 = 0;
    if (iVar1 != 0) goto LAB_0211cc30;
  }
  iVar2 = func_0x02feb690(param_3,&iStack_1c,1,**(undefined4 **)(_UNK_0211cc68 + 0x211cc00));
  iVar1 = iStack_1c;
  iVar4 = 0;
  if (iVar2 != 0) {
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    iVar4 = FUN_0211bf04(iVar1);
  }
LAB_0211cc30:
  if (*(int *)(param_1 + 0x40) < iVar4 + iVar5) {
    *(int *)(param_1 + 0x40) = iVar4 + iVar5;
  }
  func_0x02125ffc(param_1,param_2,param_3,0);
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$OnPostSpawn RVA 0x210cc6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211cc6c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_0211cd6c + 0x211cc88);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211cd70 + 0x211cc9c));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0xb360,0);
  if (iVar1 == 0) {
    func_0x02127978(param_1,param_2,0);
    if ((((param_2 != 0) && (*(int *)(param_2 + 0x14) == 0xc)) && (*(int *)(param_2 + 0xc) != 0)) &&
       (iVar2 = func_0x02feb690(*(int *)(param_2 + 0xc),&iStack_14,0,
                                **(undefined4 **)(_UNK_0211cd74 + 0x211cd34)), iVar1 = iStack_14,
       iVar2 != 0)) {
      iVar2 = *(int *)(param_1 + 0x40);
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      *(int *)(param_1 + 0x40) = *(int *)(iVar1 + 0x40) + iVar2;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb360,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$OnPostAttach RVA 0x210cd78 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211cd78(int param_1)

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
  
  pcVar7 = (char *)(_UNK_0211cf0c + 0x211cd8c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211cf10 + 0x211cda0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb361,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb361,0);
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
    return;
  }
  func_0x021262e0(param_1,0);
  piVar2 = (int *)func_0x021566f4(0);
  iVar1 = func_0x02123568(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = FUN_0210e2d4(iVar1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0211cf14 + 0x211ce48)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_0211ce90;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0211cf14 + 0x211ce48),10);
LAB_0211ce90:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(int *)(param_1 + 0x38) = iVar8;
  iVar1 = iVar8;
  if (iVar8 == 0) {
    func_0x01384bf0();
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar4 = *(int *)(iVar8 + 0x30) - *(int *)(iVar1 + 0x20);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(uint *)(param_1 + 0x44) = (uVar4 & ~((int)uVar4 >> 0x1f)) * 1000;
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$OnInitOutputSet RVA 0x210cf18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211cf18(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  undefined4 unaff_r5;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
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
  
  iVar1 = func_0x0229f06c(0xb36a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb36a,0);
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
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  iVar1 = func_0x02123568(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_0210e2d4(iVar1);
  pcVar7 = (char *)(_UNK_021687f0 + 0x21685f0);
  uStack_24 = unaff_r4;
  uStack_20 = unaff_r5;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021687f4 + 0x2168604),param_2,0);
    func_0x01384978(*(undefined4 *)(_UNK_021687f8 + 0x2168610));
    func_0x01384978(*(undefined4 *)(_UNK_021687fc + 0x216861c));
    func_0x01384978(*(undefined4 *)(_UNK_02168800 + 0x2168628));
    func_0x01384978(*(undefined4 *)(_UNK_02168804 + 0x2168634));
    *pcVar7 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x2ebf,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0x2ebf,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_20;
    uStack_20 = uStack_24;
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
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01485238(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar8 + 8);
    uVar10 = *(undefined4 *)(iVar8 + 0xc);
    iVar1 = *(int *)(iVar8 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  piVar2 = (int *)func_0x021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02168808 + 0x21686ac)) {
        puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0x110);
        goto LAB_021686f4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02168808 + 0x21686ac),10);
LAB_021686f4:
  iVar8 = (*(code *)*puVar3)(piVar2,iVar1,puVar3[1]);
  if (iVar8 != 0) {
    pcVar7 = *(char **)(iVar8 + 8);
    iVar1 = iVar8;
  }
  if (iVar8 != 0 && pcVar7 != (char *)0x0) {
    iVar8 = 0;
    puVar3 = *(undefined4 **)(_UNK_0216880c + 0x2168734);
    puVar11 = *(undefined4 **)(_UNK_02168810 + 0x216873c);
    puVar12 = *(undefined4 **)(_UNK_02168814 + 0x2168744);
    while( true ) {
      if (pcVar7 == (char *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(pcVar7 + 0x34);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar9 + 0xc) <= iVar8) break;
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x34);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar10 = func_0x0364c9b8(iVar9,iVar8,*puVar3);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x03003b84(*(undefined4 *)(iVar9 + 0x44),iVar8,1,*puVar11);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d7c(param_2,uVar10,uVar6,*puVar12);
      pcVar7 = *(char **)(iVar1 + 8);
      iVar8 = iVar8 + 1;
    }
  }
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$OnInitRandomList RVA 0x210cfa0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211cfa0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_0211d27c + 0x211cfbc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211d280 + 0x211cfd0));
    func_0x01384978(*(undefined4 *)(_UNK_0211d284 + 0x211cfdc));
    func_0x01384978(*(undefined4 *)(_UNK_0211d288 + 0x211cfe8));
    func_0x01384978(*(undefined4 *)(_UNK_0211d28c + 0x211cff4));
    func_0x01384978(*(undefined4 *)(_UNK_0211d290 + 0x211d000));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb36b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb36b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
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
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar6,0,0);
    return;
  }
  iStack_2c = param_2;
  piVar2 = (int *)func_0x021566f4(0);
  iVar1 = func_0x02123568(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar11 = FUN_0210e2d4(iVar1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0211d294 + 0x211d0a8)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_0211d0f0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0211d294 + 0x211d0a8),10);
LAB_0211d0f0:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar11,puVar3[1]);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 8);
  }
  if (iVar1 != 0 && piVar2 != (int *)0x0) {
    iVar10 = 0;
    iVar1 = 1;
    puVar3 = *(undefined4 **)(_UNK_0211d298 + 0x211d130);
    while( true ) {
      iVar8 = piVar2[0xe];
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar10) break;
      iStack_28 = iVar1;
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0211d29c + 0x211d158));
      func_0x0214337c(iVar1,0);
      iVar8 = piVar2[0xe];
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar11 = func_0x0364c9b8(iVar8,iVar10,*puVar3);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar8 = piVar2[0xf];
      *(undefined4 *)(iVar1 + 8) = uVar11;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar9 = iStack_28;
      uVar11 = func_0x0364c9b8(iVar8,iStack_28 + -1,*puVar3);
      iVar8 = piVar2[0xf];
      *(undefined4 *)(iVar1 + 0xc) = uVar11;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar11 = func_0x0364c9b8(iVar8,iVar9,*puVar3);
      iVar8 = iStack_2c;
      *(undefined4 *)(iVar1 + 0x10) = uVar11;
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar8 + 8);
      uVar4 = *(uint *)(iVar8 + 0xc);
      piVar5 = *(int **)(_UNK_0211d2a0 + 0x211d220);
      *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
      iVar12 = *piVar5;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (uVar4 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar8 + 0xc) = uVar4 + 1;
        *(int *)(iVar9 + uVar4 * 4 + 0x10) = iVar1;
      }
      else {
        func_0x0328f170(iVar8,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38)
                       );
      }
      iVar10 = iVar10 + 1;
      iVar1 = iStack_28 + 2;
    }
  }
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$OnUpdateInactive RVA 0x210d2a4 =====

/* WARNING: Removing unreachable block (ram,0x0211d4a8) */
/* WARNING: Removing unreachable block (ram,0x0211d4b0) */
/* WARNING: Removing unreachable block (ram,0x0211d4c8) */
/* WARNING: Removing unreachable block (ram,0x0211d4cc) */
/* WARNING: Removing unreachable block (ram,0x0211d4dc) */
/* WARNING: Removing unreachable block (ram,0x0211d4f4) */
/* WARNING: Removing unreachable block (ram,0x0211d4f8) */
/* WARNING: Removing unreachable block (ram,0x0211d51c) */
/* WARNING: Removing unreachable block (ram,0x0211d520) */
/* WARNING: Removing unreachable block (ram,0x0211d544) */
/* WARNING: Removing unreachable block (ram,0x0211d554) */

void FUN_0211d2a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  iVar1 = func_0x0229f06c(0xb36c,0);
  if (iVar1 == 0) {
    func_0x021265dc(param_1,param_2,0);
    uStack_24 = 0;
    iVar1 = func_0x0229f06c(0xb36d,0);
    if (iVar1 == 0) {
      iVar5 = *(int *)(param_1 + 0x38);
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if ((iVar1 < *(int *)(iVar5 + 0x28)) && (iVar1 = FUN_0211c19c(param_1), iVar1 != 0)) {
        iVar1 = *(int *)(param_1 + 0x38);
        param_2 = *(int *)(param_1 + 0x44) + param_2;
        *(int *)(param_1 + 0x44) = param_2;
        if (iVar1 == 0) {
          func_0x01384bf0();
          param_2 = *(int *)(param_1 + 0x44);
        }
        iVar1 = *(int *)(iVar1 + 0x30) * 1000;
        if (iVar1 <= param_2) {
          iVar4 = *(int *)(param_1 + 0x38);
          iVar7 = *(int *)(param_1 + 0x40);
          iVar5 = iVar4;
          if (iVar4 == 0) {
            func_0x01384bf0();
            iVar5 = *(int *)(param_1 + 0x38);
          }
          iVar2 = func_0x01457ae8(param_2,iVar1);
          iVar7 = iVar2 * *(int *)(iVar4 + 0x2c) + iVar7;
          *(int *)(param_1 + 0x40) = iVar7;
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar5 + 0x28) < iVar7) {
            iVar5 = *(int *)(param_1 + 0x38);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar5 + 0x28);
          }
          func_0x01458344(*(undefined4 *)(param_1 + 0x44),iVar1);
          *(undefined4 *)(param_1 + 0x44) = extraout_r1;
        }
      }
      iVar1 = func_0x02123568(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_0210cd28(iVar1);
      if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x40), 0 < iVar1)) {
        *(undefined1 *)(param_1 + 0x3c) = 0;
        iVar5 = *(int *)(param_1 + 0x38);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar5 + 0x28) <= iVar1) {
          iVar1 = *(int *)(param_1 + 0x38);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar1 + 0x28);
          *(undefined4 *)(param_1 + 0x44) = 0;
        }
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xb36d,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_28 = 0;
      func_0x0217f950(iVar1,param_1,param_2,0);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xb36c,0);
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$_UpdateRecharge RVA 0x210d31c =====

void FUN_0211d31c(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_24;
  
  iStack_24 = 0;
  iVar2 = func_0x0229f06c(0xb36d,0);
  if (iVar2 == 0) {
    iVar6 = *(int *)(param_1 + 0x38);
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if ((iVar2 < *(int *)(iVar6 + 0x28)) && (iVar2 = FUN_0211c19c(param_1), iVar2 != 0)) {
      iVar2 = *(int *)(param_1 + 0x38);
      param_2 = *(int *)(param_1 + 0x44) + param_2;
      *(int *)(param_1 + 0x44) = param_2;
      if (iVar2 == 0) {
        func_0x01384bf0();
        param_2 = *(int *)(param_1 + 0x44);
      }
      iVar2 = *(int *)(iVar2 + 0x30) * 1000;
      if (iVar2 <= param_2) {
        iVar5 = *(int *)(param_1 + 0x38);
        iVar7 = *(int *)(param_1 + 0x40);
        iVar6 = iVar5;
        if (iVar5 == 0) {
          func_0x01384bf0();
          iVar6 = *(int *)(param_1 + 0x38);
        }
        iVar3 = func_0x01457ae8(param_2,iVar2);
        iVar7 = iVar3 * *(int *)(iVar5 + 0x2c) + iVar7;
        *(int *)(param_1 + 0x40) = iVar7;
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0x28) < iVar7) {
          iVar6 = *(int *)(param_1 + 0x38);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar6 + 0x28);
        }
        func_0x01458344(*(undefined4 *)(param_1 + 0x44),iVar2);
        *(undefined4 *)(param_1 + 0x44) = extraout_r1;
      }
    }
    iVar2 = func_0x02123568(param_1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_0210cd28(iVar2);
    if ((iVar2 != 0) && (iVar2 = *(int *)(param_1 + 0x40), 0 < iVar2)) {
      *(undefined1 *)(param_1 + 0x3c) = 0;
      if (param_3 != 0) {
        iVar6 = 1;
        while( true ) {
          iVar5 = func_0x02123568(param_1,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = FUN_02116a8c(iVar5);
          if (iVar5 != 0) break;
          iVar5 = func_0x02123568(param_1,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = FUN_0210cd28(iVar5);
          uVar4 = func_0x02123568(param_1,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          FUN_020e5a54(iVar5,uVar4,&iStack_24,1,0);
          if ((iStack_24 != 0) || (bVar1 = iVar2 <= iVar6, iVar6 = iVar6 + 1, bVar1)) break;
        }
        iVar2 = *(int *)(param_1 + 0x40);
      }
      iVar6 = *(int *)(param_1 + 0x38);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar6 + 0x28) <= iVar2) {
        iVar2 = *(int *)(param_1 + 0x38);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x28);
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb36d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f950(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$OnUpdate RVA 0x210d59c =====

void FUN_0211d59c(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
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
  int aiStack_24 [4];
  
  iVar2 = func_0x0229f06c(0xb36e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb36e,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  iVar2 = func_0x02126964(param_1,0);
  if (iVar2 != 0) {
    return;
  }
  func_0x02126b58(param_1,param_2,0);
  iVar5 = func_0x021621f0(param_1,param_2,0);
  aiStack_24[0] = 0;
  iVar2 = func_0x0229f06c(0xb36d,0);
  if (iVar2 == 0) {
    iVar7 = *(int *)(param_1 + 0x38);
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    if ((iVar2 < *(int *)(iVar7 + 0x28)) && (iVar2 = FUN_0211c19c(param_1), iVar2 != 0)) {
      iVar2 = *(int *)(param_1 + 0x38);
      iVar5 = *(int *)(param_1 + 0x44) + iVar5;
      *(int *)(param_1 + 0x44) = iVar5;
      if (iVar2 == 0) {
        func_0x01384bf0();
        iVar5 = *(int *)(param_1 + 0x44);
      }
      iVar2 = *(int *)(iVar2 + 0x30) * 1000;
      if (iVar2 <= iVar5) {
        iVar4 = *(int *)(param_1 + 0x38);
        iVar8 = *(int *)(param_1 + 0x40);
        iVar7 = iVar4;
        if (iVar4 == 0) {
          func_0x01384bf0();
          iVar7 = *(int *)(param_1 + 0x38);
        }
        iVar5 = func_0x01457ae8(iVar5,iVar2);
        iVar8 = iVar5 * *(int *)(iVar4 + 0x2c) + iVar8;
        *(int *)(param_1 + 0x40) = iVar8;
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar7 + 0x28) < iVar8) {
          iVar5 = *(int *)(param_1 + 0x38);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar5 + 0x28);
        }
        func_0x01458344(*(undefined4 *)(param_1 + 0x44),iVar2);
        *(undefined4 *)(param_1 + 0x44) = extraout_r1;
      }
    }
    iVar2 = func_0x02123568(param_1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_0210cd28(iVar2);
    if ((iVar2 != 0) && (iVar2 = *(int *)(param_1 + 0x40), 0 < iVar2)) {
      *(undefined1 *)(param_1 + 0x3c) = 0;
      iVar5 = 1;
      while( true ) {
        iVar7 = func_0x02123568(param_1,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = FUN_02116a8c(iVar7);
        if (iVar7 != 0) break;
        iVar7 = func_0x02123568(param_1,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = FUN_0210cd28(iVar7);
        uVar6 = func_0x02123568(param_1,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_28 = 0;
        FUN_020e5a54(iVar7,uVar6,aiStack_24,1);
        if ((aiStack_24[0] != 0) || (bVar1 = iVar2 <= iVar5, iVar5 = iVar5 + 1, bVar1)) break;
      }
      iVar5 = *(int *)(param_1 + 0x40);
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0x28) <= iVar5) {
        iVar2 = *(int *)(param_1 + 0x38);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x28);
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb36d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x0217f950(iVar2,param_1,iVar5,1);
  }
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$.ctor RVA 0x210d638 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211d638(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02127260 + 0x2127120);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02127264 + 0x2127134),0);
    func_0x01384978(*(undefined4 *)(_UNK_02127268 + 0x2127140));
    func_0x01384978(*(undefined4 *)(_UNK_0212726c + 0x212714c));
    func_0x01384978(*(undefined4 *)(_UNK_02127270 + 0x2127158));
    func_0x01384978(*(undefined4 *)(_UNK_02127274 + 0x2127164));
    func_0x01384978(*(undefined4 *)(_UNK_02127278 + 0x2127170));
    func_0x01384978(*(undefined4 *)(_UNK_0212727c + 0x212717c));
    func_0x01384978(*(undefined4 *)(_UNK_02127280 + 0x2127188));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02127284 + 0x212719c));
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_02127288 + 0x21271b0));
  puVar2 = *(undefined4 **)(_UNK_0212728c + 0x21271c4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_02127290 + 0x21271dc));
  puVar2 = *(undefined4 **)(_UNK_02127294 + 0x21271f0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_02127298 + 0x2127208));
  puVar2 = *(undefined4 **)(_UNK_0212729c + 0x212721c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_021272a0 + 0x2127234));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$<>iFixBaseProxy_OnSerialize RVA 0x210d640 =====

void FUN_0211d640(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c7d,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5c7d,0);
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



// ===== FAT.Merge.ItemAutoSourceComponent$$<>iFixBaseProxy_OnDeserialize RVA 0x210d648 =====

void FUN_0211d648(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c62,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5c62,0);
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



// ===== FAT.Merge.ItemAutoSourceComponent$$<>iFixBaseProxy_OnPostMerge RVA 0x210d650 =====

void FUN_0211d650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9ea5,0,param_3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ea5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$<>iFixBaseProxy_OnPostSpawn RVA 0x210d658 =====

void FUN_0211d658(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x2a4,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x2a4,0);
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



// ===== FAT.Merge.ItemAutoSourceComponent$$<>iFixBaseProxy_OnPostAttach RVA 0x210d660 =====

/* WARNING: Possible PIC construction at 0x02135cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02135cf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211d660(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_r4;
  int unaff_r5;
  char *pcVar8;
  undefined4 unaff_r6;
  undefined4 uVar9;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [4];
  
  pcVar8 = (char *)(_UNK_02126554 + 0x21262f4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02126558 + 0x2126308),0);
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb362,0);
  if (iVar1 == 0) {
    func_0x02127894(param_1);
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = func_0x02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = FUN_0210e2d4(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    piVar10 = *(int **)(_UNK_0212655c + 0x21263ac);
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x128);
          goto LAB_021263f4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0xd);
LAB_021263f4:
    iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
    param_1[7] = iVar1;
    param_1[8] = 0;
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = func_0x02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = FUN_0210e2d4(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x118);
          goto LAB_021264a4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0xb);
LAB_021264a4:
    iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
    if (iVar1 != 0) {
      piVar2 = (int *)func_0x021566f4(0);
      uVar9 = *(undefined4 *)(iVar1 + 0x10);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x120);
            goto LAB_02126530;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0xc);
LAB_02126530:
      iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
      param_1[8] = iVar1;
    }
    pcVar8 = (char *)(_UNK_02136170 + 0x2135bfc);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02136174 + 0x2135c10));
      func_0x01384978(*(undefined4 *)(_UNK_02136178 + 0x2135c1c));
      func_0x01384978(*(undefined4 *)(_UNK_0213617c + 0x2135c28));
      func_0x01384978(*(undefined4 *)(_UNK_02136180 + 0x2135c34));
      func_0x01384978(*(undefined4 *)(_UNK_02136184 + 0x2135c40));
      func_0x01384978(*(undefined4 *)(_UNK_02136188 + 0x2135c4c));
      func_0x01384978(*(undefined4 *)(_UNK_0213618c + 0x2135c58));
      func_0x01384978(*(undefined4 *)(_UNK_02136190 + 0x2135c64));
      func_0x01384978(*(undefined4 *)(_UNK_02136194 + 0x2135c70));
      func_0x01384978(*(undefined4 *)(_UNK_02136198 + 0x2135c7c));
      func_0x01384978(*(undefined4 *)(_UNK_0213619c + 0x2135c88));
      func_0x01384978(*(undefined4 *)(_UNK_021361a0 + 0x2135c94));
      *pcVar8 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    aiStack_28[0] = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    iVar1 = func_0x0229f06c(0xb363,0);
    if (iVar1 == 0) {
      iVar1 = param_1[4];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_021361a4 + 0x2135d18));
      (**(code **)(*param_1 + 0x140))(param_1,param_1[4],*(undefined4 *)(*param_1 + 0x144));
      uVar9 = func_0x02450044(param_1,0);
      uVar7 = **(undefined4 **)(_UNK_021361ac + 0x2135d60);
      if (*(int *)(**(int **)(_UNK_021361a8 + 0x2135d54) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar7 = func_0x0244ff60(uVar7,0);
      iVar1 = func_0x02450a48(uVar9,uVar7,0);
      if (iVar1 != 0) {
        iVar1 = func_0x02123568(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_02116f08(iVar1,0);
        iVar4 = func_0x02123568(param_1);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar9 = FUN_0210e2d4(iVar4,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02142c70(iVar1,uVar9,2,0);
        param_1[0xc] = iVar1;
      }
      piVar2 = *(int **)(_UNK_021361b0 + 0x2135e14);
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar2;
      }
      iVar1 = **(int **)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_50,iVar1,aiStack_28,**(undefined4 **)(_UNK_021361b4 + 0x2135e54));
      uStack_2c = uStack_4c;
      uStack_30 = uStack_50;
      (**(code **)(*param_1 + 0x160))(param_1,aiStack_28[0],*(undefined4 *)(*param_1 + 0x164));
      iVar1 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_021361b8 + 0x2135ea8));
        func_0x02143214(iVar4,**(undefined4 **)(_UNK_021361bc + 0x2135ebc),0);
        iVar1 = aiStack_28[0];
        param_1[0xb] = iVar4;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02143384(iVar4,iVar1,0);
      }
      func_0x028c98a0(&uStack_30,0);
      (**(code **)(*param_1 + 0x148))(param_1,param_1[5],*(undefined4 *)(*param_1 + 0x14c));
      iVar1 = param_1[10];
      param_1[6] = 0;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar11 = *(undefined4 **)(_UNK_021361c0 + 0x2135f3c);
      func_0x0328fe1c(&uStack_50,iVar1,*puVar11);
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      iStack_34 = iStack_44;
      puVar3 = *(undefined4 **)(_UNK_021361c4 + 0x2135f58);
      while (iVar4 = func_0x03f5f428(&uStack_40,*puVar3), iVar1 = iStack_34, iVar4 != 0) {
        if (iStack_34 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      func_0x03f5f424(&uStack_40,**(undefined4 **)(_UNK_021361c8 + 0x2135f8c));
      iVar1 = param_1[10];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_50,iVar1,*puVar11);
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      iStack_34 = iStack_44;
      while (iVar1 = func_0x03f5f428(&uStack_40,*puVar3), iVar1 != 0) {
        func_0x021361e0(param_1,iStack_34);
      }
      func_0x03f5f424(&uStack_40,**(undefined4 **)(_UNK_021361d4 + 0x2135fec));
      return;
    }
    iVar1 = func_0x0229f13c(0xb363,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2135cf8;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_50;
  }
  else {
    iVar1 = func_0x0229f13c(0xb362,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int **)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar4 = *(int *)(iVar1 + 0x10);
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
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
  return;
}



// ===== FAT.Merge.ItemAutoSourceComponent$$<>iFixBaseProxy_OnInitRandomList RVA 0x210d668 =====

void FUN_0211d668(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb364,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb364,0);
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



// ===== FAT.Merge.ItemAutoSourceComponent$$<>iFixBaseProxy_OnUpdateInactive RVA 0x210d670 =====

void FUN_0211d670(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5e5e,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5e5e,0);
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



// ===== FAT.Merge.ItemAutoSourceComponent$$<>iFixBaseProxy_OnUpdate RVA 0x210d678 =====

void FUN_0211d678(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5e59,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5e59,0);
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



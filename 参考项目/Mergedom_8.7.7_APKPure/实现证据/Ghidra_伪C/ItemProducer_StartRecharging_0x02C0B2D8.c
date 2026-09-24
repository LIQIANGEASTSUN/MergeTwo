
void Recovered_ItemProducer_StartRecharging_0x02C0B2D8(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uStack_28;
  
  puVar3 = PTR_DAT_063f2158;
  if ((bRam0000000006812bdb & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f2158);
    func_0x02ad6de0(PTR_DAT_063f0f18);
    bRam0000000006812bdb = 1;
  }
  lVar4 = *(long *)puVar3;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 0x34) = 1;
  iVar1 = *(int *)(lVar4 + 0xe4);
  if (param_2 == 0) {
    if (iVar1 == 0) {
      func_0x02ad6f5c();
    }
    uVar5 = func_0x051ebd84(0);
  }
  else {
    if (iVar1 == 0) {
      func_0x02ad6f5c();
    }
    uStack_28 = func_0x051ebd84(0);
    uVar5 = func_0x051eac34((double)-param_2,&uStack_28,0);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  puVar2 = PTR_DAT_063f0f18;
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_02d0b42c;
  iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 0x2c);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    func_0x02ad6f5c();
  }
  uVar5 = func_0x051eac34((double)iVar1,(undefined8 *)(param_1 + 0x48),0);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  func_0x02d0b1a4(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    func_0x02ad6f5c();
  }
  uVar6 = func_0x05c4a644(uVar5,0);
  if (((uVar6 & 1) != 0) && (*(int *)(param_1 + 0x30) == 0)) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_02d0b42c;
    func_0x02d0c570(0);
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_02d0b42c;
    func_0x02d0b1e4(*(long *)(param_1 + 0x58),1);
  }
  plVar7 = *(long **)(param_1 + 0x68);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
    return;
  }
LAB_02d0b42c:
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}


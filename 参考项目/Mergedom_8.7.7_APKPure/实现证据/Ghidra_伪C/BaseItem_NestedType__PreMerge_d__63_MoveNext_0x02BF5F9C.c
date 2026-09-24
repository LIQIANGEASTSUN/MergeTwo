
void Recovered_BaseItem_NestedType__PreMerge_d__63_MoveNext_0x02BF5F9C(undefined4 *param_1)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((bRam0000000006812b2c & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f9e90);
    bRam0000000006812b2c = 1;
  }
  puVar1 = PTR_DAT_063f9e90;
  if (*(char *)(param_1 + 6) != '\0') {
    uVar8 = *(undefined8 *)(param_1 + 8);
    lVar3 = *(long *)PTR_DAT_063f9e90;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      func_0x02ad6f5c();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      NullReferenceThrowHelper();
    }
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar8,0,*(undefined8 *)(lVar3 + 0x28))
    ;
  }
  cVar2 = cRam000000000681249e;
  *param_1 = 0xfffffffe;
  if (cVar2 == '\0') {
    func_0x02ad6de0(PTR_DAT_063f3cd8);
    cRam000000000681249e = '\x01';
  }
  plVar7 = *(long **)(param_1 + 2);
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_063f3cd8) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_02cf60a8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)func_0x02b0e364(plVar7,*(long *)PTR_DAT_063f3cd8,2);
LAB_02cf60a8:
                    /* WARNING: Could not recover jumptable at 0x02cf60b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar7,puVar4[1]);
  return;
}


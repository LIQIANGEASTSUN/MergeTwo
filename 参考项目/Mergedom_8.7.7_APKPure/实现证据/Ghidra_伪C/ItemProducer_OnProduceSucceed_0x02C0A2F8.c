
void Recovered_ItemProducer_OnProduceSucceed_0x02C0A2F8(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((bRam0000000006812bd9 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f0dd0);
    func_0x02ad6de0(PTR_DAT_063fbcc8);
    func_0x02ad6de0(PTR_DAT_063f4ed8);
    func_0x02ad6de0(PTR_DAT_063fa980);
    func_0x02ad6de0(PTR_DAT_063fa988);
    func_0x02ad6de0(PTR_DAT_063fd028);
    func_0x02ad6de0(PTR_DAT_063fd030);
    bRam0000000006812bd9 = 1;
  }
  iVar4 = (int)param_1[6];
  if (iVar4 < 1) {
    uVar1 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063f4ed8);
    func_0x02c2ff18(uVar1,*(undefined8 *)PTR_DAT_063fd030,0,0);
    if (*(int *)(*(long *)PTR_DAT_063f0dd0 + 0xe4) == 0) {
      func_0x02ad6f5c();
    }
    func_0x05bfc970(uVar1,0);
    iVar4 = (int)param_1[6];
  }
  *(uint *)(param_1 + 6) = iVar4 - 1U & ((int)(iVar4 - 1U) >> 0x1f ^ 0xffffffffU);
  func_0x02d0afa0(param_1);
  uVar2 = func_0x02d0aea8(param_1);
  if ((uVar2 & 1) == 0) {
    if ((int)param_1[6] == 0) {
      func_0x02d0bc1c(param_1);
    }
  }
  else {
    if (param_1[8] == 0) goto LAB_02d0a5e4;
    if (((int)param_1[6] < *(int *)(param_1[8] + 0x1c)) && (*(char *)((long)param_1 + 0x34) == '\0')
       ) {
      Recovered_ItemProducer_StartRecharging_0x02C0B2D8(param_1,0);
    }
  }
  if (*(char *)((long)param_1 + 0xba) == '\0') {
    uVar2 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if ((uVar2 & 1) != 0) {
      lVar6 = param_1[0x11];
      if (lVar6 == 0) goto LAB_02d0a5e4;
      if (*(char *)(lVar6 + 0x10) == '\0') {
        plVar8 = (long *)param_1[0x10];
        if (plVar8 != (long *)0x0) {
          lVar5 = *plVar8;
          uVar1 = *(undefined8 *)(lVar6 + 0x68);
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_063fbcc8) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
                goto LAB_02d0a570;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)func_0x02b0e364(plVar8,*(long *)PTR_DAT_063fbcc8,9);
LAB_02d0a570:
                    /* WARNING: Could not recover jumptable at 0x02d0a58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(plVar8,1,uVar1,puVar3[1]);
          return;
        }
        goto LAB_02d0a5e4;
      }
    }
    if (*(char *)((long)param_1 + 0xba) == '\0') {
      uVar2 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      if ((uVar2 & 1) != 0) {
        if (param_1[0x13] != 0) {
          func_0x037230d4(param_1[0x13],0xffffffff00000000,*(undefined8 *)PTR_DAT_063fa980);
          if ((param_1[0x11] != 0) && (plVar8 = (long *)param_1[0x10], plVar8 != (long *)0x0)) {
            lVar6 = *plVar8;
            uVar1 = *(undefined8 *)(param_1[0x11] + 0x68);
            uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
            uVar9 = *(undefined8 *)PTR_DAT_063fd028;
            if (uVar2 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_063fbcc8) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
                  goto LAB_02d0a5a0;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)func_0x02b0e364(plVar8,*(long *)PTR_DAT_063fbcc8,0xd);
LAB_02d0a5a0:
            (*(code *)*puVar3)(plVar8,1,uVar1,uVar9,1,puVar3[1]);
            if (param_1[0x13] != 0) {
              func_0x0372398c(param_1[0x13],1,*(undefined8 *)PTR_DAT_063fa988);
              return;
            }
          }
        }
LAB_02d0a5e4:
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
    }
  }
  return;
}


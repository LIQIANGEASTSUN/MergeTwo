/* Ghidra 12.1.2 native pseudocode; RVA 0x64EB93C; MergeEngine.ECS.Systems.State.Board.Event.EventFreeVouchersStateSystem.LoadState; status ok */


/* WARNING: Removing unreachable block (ram,0x065ebb24) */

ulong MergeEngine_ECS_Systems_State_Board_Event_EventFreeVouchersStateSystem__LoadState
                (ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  
  puVar11 = (undefined8 *)0x7e27000;
  uVar5 = param_1;
  if ((bRam0000000007e27058 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077fba48);
    func_0x03280a18(PTR_DAT_077efca0);
    func_0x03280a18(PTR_DAT_077fba50);
    func_0x03280a18(PTR_DAT_077efca8);
    func_0x03280a18(PTR_DAT_077fba58);
    func_0x03280a18(PTR_DAT_077efcb0);
    func_0x03280a18(PTR_DAT_077fba60);
    func_0x03280a18(PTR_DAT_077efcc0);
    func_0x03280a18(PTR_DAT_0774e5d8);
    uVar5 = func_0x03280a18(PTR_DAT_077fba68);
    bRam0000000007e27058 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (param_2 != 0) {
    lVar10 = 0;
    uVar5 = func_0x055ea870(*(undefined8 *)(param_2 + 0x20),
                            **(undefined8 **)(*(long *)PTR_DAT_0774e5d8 + 0xb8));
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_065ebbb8;
      lVar6 = func_0x06481980(*(long *)(param_1 + 0x50),0);
      if (lVar6 == 0) goto LAB_065ebbb8;
      func_0x04145068(&uStack_a8,lVar6,*(undefined8 *)PTR_DAT_077efcc0);
      puVar4 = PTR_DAT_077fba68;
      puVar3 = PTR_DAT_077fba60;
      puVar2 = PTR_DAT_077fba50;
      puVar11 = (undefined8 *)PTR_DAT_077fba48;
      puVar1 = PTR_DAT_077efca8;
      uStack_68 = uStack_a0;
      uStack_70 = uStack_a8;
      uStack_60 = uStack_98;
      while (uVar5 = func_0x051159b4(&uStack_70,*(undefined8 *)puVar1), param_1 = uStack_60,
            (uVar5 & 1) != 0) {
        if (uStack_60 == 0) goto LAB_065ebba8;
        uVar7 = func_0x06472e74(uStack_60,0);
        lVar10 = 0;
        uVar5 = func_0x055f7004(uVar7,*(undefined8 *)(param_2 + 0x20));
        if ((uVar5 & 1) == 0) {
          if (*(long *)(param_2 + 0x18) == 0) goto LAB_065ebbac;
          func_0x04145068(&uStack_a8,*(long *)(param_2 + 0x18),*(undefined8 *)puVar3);
          uStack_88 = uStack_a0;
          uStack_90 = uStack_a8;
          uStack_80 = uStack_98;
          while (uVar8 = func_0x051159b4(&uStack_90,*(undefined8 *)puVar2), uVar5 = uStack_80,
                (uVar8 & 1) != 0) {
            if (uStack_80 == 0) {
              auVar12 = func_0x03280cac();
              while( true ) {
                func_0x051159b0(&uStack_90,*puVar11);
                if (param_1 == 0) break;
                func_0x03280ca4(param_1);
LAB_065ebba8:
                func_0x03280cac();
LAB_065ebbac:
                func_0x03280cac();
                func_0x03280ca4(param_1);
LAB_065ebbb8:
                auVar12 = func_0x03280cac();
              }
              if (auVar12._8_4_ == 1) {
                plVar9 = (long *)func_0x072ce910(auVar12._0_8_);
                lVar6 = *plVar9;
                func_0x072ce920();
                uVar5 = func_0x051159b0(&uStack_70,*(undefined8 *)PTR_DAT_077efca0);
                if (lVar6 == 0) {
                  return uVar5;
                }
                func_0x03280ca4(lVar6);
              }
              func_0x051159b0(&uStack_70,*(undefined8 *)PTR_DAT_077efca0);
              func_0x03365958(auVar12._0_8_);
              func_0x03280ca4(0);
              auVar13 = func_0x02f09514();
              if (lVar10 != 0) {
                *(int *)(lVar10 + 0x58) = auVar13._8_4_;
                return auVar13._0_8_;
              }
              uVar5 = func_0x03280cac();
              puVar1 = PTR_DAT_077fbb08;
              if ((bRam0000000007e27059 & 1) == 0) {
                func_0x03280a18(PTR_DAT_077fbb08);
                bRam0000000007e27059 = 1;
              }
              uVar7 = *(undefined8 *)puVar1;
              return uVar5;
            }
            lVar10 = 0;
            uVar8 = func_0x055ea870(*(undefined8 *)(uStack_80 + 0x10),*(undefined8 *)puVar4);
            if ((uVar8 & 1) != 0) {
              *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(uVar5 + 0x18);
            }
          }
          func_0x051159b0(&uStack_90,*puVar11);
        }
      }
      uVar5 = func_0x051159b0(&uStack_70,*(undefined8 *)PTR_DAT_077efca0);
    }
  }
  return uVar5;
}


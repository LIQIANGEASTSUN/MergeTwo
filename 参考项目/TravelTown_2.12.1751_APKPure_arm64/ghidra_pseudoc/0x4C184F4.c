/* Ghidra 12.1.2 native pseudocode; RVA 0x4C184F4; MergeEngine.ECS.Systems.State.Board.BoardInventoryStateSystem<TState>.ProcessItems; status ok */


void MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem_TState___ProcessItems
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x26;
  undefined1 auVar14 [12];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000007e1af02 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a928);
    func_0x03280a18(PTR_DAT_077803b8);
    func_0x03280a18(PTR_DAT_077803c0);
    func_0x03280a18(PTR_DAT_077803c8);
    func_0x03280a18(PTR_DAT_077803d0);
    func_0x03280a18(PTR_DAT_07780368);
    func_0x03280a18(PTR_DAT_077803d8);
    func_0x03280a18(PTR_DAT_07780370);
    func_0x03280a18(PTR_DAT_07780378);
    bRam0000000007e1af02 = 1;
  }
  puVar2 = PTR_DAT_07780378;
  puVar1 = PTR_DAT_07780368;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  lStack_88 = 0;
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x054974a4(param_1,param_3,*(undefined8 *)(param_2 + 0x28),
                    *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30));
    uVar6 = func_0x03eb68fc(param_1,*(undefined8 *)puVar2);
    func_0x03bf70e8(param_1,uVar6,param_2,
                    *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38));
    lVar12 = *(long *)(param_1 + 0x28);
    uVar6 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x060f34dc(uVar6,0);
    if (lVar12 != 0) {
      func_0x03ea4d6c(lVar12,uVar6,*(undefined8 *)PTR_DAT_07780370);
      puVar4 = PTR_DAT_077803d0;
      puVar3 = PTR_DAT_077803c0;
      puVar2 = PTR_DAT_077803b8;
      puVar1 = PTR_DAT_0777a928;
      if (*(long *)(param_2 + 0x28) != 0) {
        func_0x04145068(&uStack_a0,*(long *)(param_2 + 0x28),*(undefined8 *)PTR_DAT_077803d8);
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_70 = lStack_90;
        while( true ) {
          uVar7 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar3);
          lVar12 = lStack_70;
          if ((uVar7 & 1) == 0) {
            func_0x051159b0(&uStack_80,*(undefined8 *)puVar2);
            return;
          }
          uVar6 = func_0x06a13cfc(0,0,0,0);
          uVar7 = func_0x05497634(param_1,param_3,lVar12,uVar6,&lStack_88,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40));
          if (lStack_88 == 0) break;
          uVar6 = func_0x03d20d84(lStack_88,*(undefined8 *)puVar1);
          if (lVar12 == 0) goto LAB_04d187c8;
          func_0x03bf70e8(param_1,uVar6,*(undefined8 *)(lVar12 + 0xa8),
                          *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48));
          lVar5 = lStack_88;
          plVar13 = *(long **)(param_1 + 0x58);
          if (plVar13 == (long *)0x0) {
            func_0x03280cac();
            break;
          }
          lVar9 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_04d18760;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar4,0);
LAB_04d18760:
          (*(code *)*puVar8)(plVar13,lVar5,lVar12,puVar8[1]);
          if ((uVar7 & 1) == 0) {
            func_0x054973f4(param_1,lStack_88,
                            *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58));
          }
        }
        func_0x03280cac();
LAB_04d187c8:
        func_0x03280cac();
        unaff_x26 = (undefined8 *)puVar2;
      }
    }
  }
  auVar14 = func_0x03280cac();
  if (auVar14._8_4_ == 1) {
    plVar13 = (long *)func_0x072ce910(auVar14._0_8_);
    lVar12 = *plVar13;
    func_0x072ce920();
    func_0x051159b0(&uStack_80,*unaff_x26);
    if (lVar12 == 0) {
      return;
    }
    func_0x03280ca4(lVar12);
  }
  func_0x051159b0(&uStack_80,*unaff_x26);
  func_0x03365958(auVar14._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  return;
}


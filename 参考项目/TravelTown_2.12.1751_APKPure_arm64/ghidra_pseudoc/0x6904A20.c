/* Ghidra 12.1.2 native pseudocode; RVA 0x6904A20; MergeEngine.ECS.Components.Board.BoardQueueComponent.CountById; status ok */


/* WARNING: Removing unreachable block (ram,0x06a04c18) */
/* WARNING: Removing unreachable block (ram,0x06a04c2c) */
/* WARNING: Removing unreachable block (ram,0x06a04c4c) */
/* WARNING: Removing unreachable block (ram,0x06a04c54) */

ulong MergeEngine_ECS_Components_Board_BoardQueueComponent__CountById
                (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  uVar11 = 0x7e29000;
  if ((bRam0000000007e2991f & 1) == 0) {
    func_0x03280a18(PTR_DAT_078269f0);
    func_0x03280a18(PTR_DAT_078269f8);
    func_0x03280a18(PTR_DAT_07826a00);
    func_0x03280a18(PTR_DAT_07826a08);
    bRam0000000007e2991f = 1;
  }
  puVar6 = PTR_DAT_07826a08;
  puVar5 = PTR_DAT_078269f8;
  puVar4 = PTR_DAT_078269f0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x054f0ca8(&uStack_a8,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_07826a08);
    uVar11 = 0;
    uStack_78 = uStack_a0;
    uStack_80 = uStack_a8;
    lStack_68 = lStack_90;
    uStack_70 = uStack_98;
    uStack_60 = uStack_88;
    while (uVar8 = func_0x0511576c(&uStack_80,*(undefined8 *)puVar5),
          unaff_x24 = (undefined8 *)puVar4, (uVar8 & 1) != 0) {
      if (lStack_68 == 0) {
        func_0x03280cac();
        goto LAB_06a04ba8;
      }
      uVar9 = func_0x0677d01c(lStack_68,0);
      uVar7 = func_0x055ea870(uVar9,param_2,0);
      uVar11 = (ulong)((int)uVar11 + (uVar7 & 1));
    }
    func_0x05115908(&uStack_80,*(undefined8 *)puVar4);
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x054f0ca8(&uStack_a8,*(long *)(param_1 + 0x30),*(undefined8 *)puVar6);
      uStack_78 = uStack_a0;
      uStack_80 = uStack_a8;
      lStack_68 = lStack_90;
      uStack_70 = uStack_98;
      uStack_60 = uStack_88;
      while( true ) {
        uVar8 = func_0x0511576c(&uStack_80,*(undefined8 *)puVar5);
        if ((uVar8 & 1) == 0) {
          func_0x05115908(&uStack_80,*(undefined8 *)puVar4);
          return uVar11;
        }
        if (lStack_68 == 0) break;
        uVar9 = func_0x0677d01c(lStack_68,0);
        uVar7 = func_0x055ea870(uVar9,param_2,0);
        uVar11 = (ulong)((int)uVar11 + (uVar7 & 1));
      }
LAB_06a04ba8:
      func_0x03280cac();
    }
  }
  auVar13 = func_0x03280cac();
  if (auVar13._8_4_ == 1) {
    plVar10 = (long *)func_0x072ce910(auVar13._0_8_);
    lVar12 = *plVar10;
    func_0x072ce920();
    func_0x05115908(&uStack_80,*unaff_x24);
    if (lVar12 == 0) {
      return uVar11;
    }
    func_0x03280ca4(lVar12);
  }
  func_0x05115908(&uStack_80,*unaff_x24);
  func_0x03365958(auVar13._0_8_);
  func_0x03280ca4(unaff_x23);
  auVar14 = func_0x02f09514();
  if ((bRam0000000007e29924 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07757c48);
    bRam0000000007e29924 = 1;
  }
  lVar12 = *(long *)(auVar14._0_8_ + 0x40);
  if (lVar12 != 0) {
    uVar7 = func_0x053c0534(lVar12,auVar14._8_8_,*(undefined8 *)PTR_DAT_07757c48);
    return (ulong)(~uVar7 & 1);
  }
  func_0x03280cac();
  puVar4 = PTR_DAT_078269d0;
  if ((bRam0000000007e29925 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078269d0);
    bRam0000000007e29925 = 1;
  }
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x057da5fc(uVar9,0);
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar9;
  uVar11 = *(ulong *)(*(long *)puVar4 + 0xb8);
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)((uVar11 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (uVar11 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return uVar11;
}


/* Ghidra 12.1.2 native pseudocode; RVA 0x6904140; MergeEngine.ECS.Components.Board.BoardQueueComponent.Dequeue; status ok */


/* WARNING: Possible PIC construction at 0x06a04194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a04384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06a04198) */
/* WARNING: Removing unreachable block (ram,0x06a0419c) */
/* WARNING: Removing unreachable block (ram,0x06a041a8) */
/* WARNING: Removing unreachable block (ram,0x06a041c4) */
/* WARNING: Removing unreachable block (ram,0x06a041f8) */
/* WARNING: Removing unreachable block (ram,0x06a041cc) */
/* WARNING: Removing unreachable block (ram,0x06a041ec) */
/* WARNING: Removing unreachable block (ram,0x06a04388) */
/* WARNING: Removing unreachable block (ram,0x06a0438c) */
/* WARNING: Removing unreachable block (ram,0x06a04390) */

undefined8 MergeEngine_ECS_Components_Board_BoardQueueComponent__Dequeue(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *unaff_x21;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000007e29918 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07752c80);
    func_0x03280a18(PTR_DAT_078269a0);
    func_0x03280a18(PTR_DAT_07826980);
    func_0x03280a18(PTR_DAT_078269a8);
    bRam0000000007e29918 = 1;
  }
  uVar6 = 0x6a04198;
  puVar2 = &stack0xffffffffffffffe0;
  do {
    *(undefined8 *)(puVar2 + -0x20) = uVar6;
    *(undefined8 *)(puVar2 + -0x10) = 0x7e29000;
    *(long *)(puVar2 + -8) = param_1;
    if ((bRam0000000007e29920 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07826908);
      func_0x03280a18(PTR_DAT_07826998);
      func_0x03280a18(PTR_DAT_078269b0);
      bRam0000000007e29920 = 1;
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 != 0) {
      if (0 < *(int *)(lVar5 + 0x18)) {
        return *(undefined8 *)(lVar5 + 0x10);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) < 1) {
          return 0;
        }
        uVar6 = *(undefined8 *)PTR_DAT_078269b0;
        if (*(long *)(lVar5 + 0x10) == 0) {
          return 0;
        }
        return *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x20);
      }
    }
    auVar7 = func_0x03280cac();
    lVar4 = auVar7._8_8_;
    lVar5 = auVar7._0_8_;
    *(undefined8 *)(puVar2 + -0x40) = 0x6a0429c;
    *(undefined **)(puVar2 + -0x38) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x30) = 0x7e29000;
    *(long *)(puVar2 + -0x28) = param_1;
    if ((bRam0000000007e29919 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07752c80);
      func_0x03280a18(PTR_DAT_078269b8);
      bRam0000000007e29919 = 1;
    }
    puVar1 = PTR_DAT_078269b8;
    unaff_x21 = (undefined *)0x7e29000;
    if (*(long *)(lVar5 + 0x28) != 0) {
      uVar3 = func_0x054f0d40(*(long *)(lVar5 + 0x28),lVar4,*(undefined8 *)PTR_DAT_078269b8);
      unaff_x21 = puVar1;
      if ((uVar3 & 1) == 0) {
        if (*(long *)(lVar5 + 0x30) == 0) goto LAB_06a04350;
        uVar3 = func_0x054f0d40(*(long *)(lVar5 + 0x30),lVar4,*(undefined8 *)puVar1);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
      }
      if ((lVar4 != 0) && (*(long *)(lVar5 + 0x38) != 0)) {
        func_0x053c1024(*(long *)(lVar5 + 0x38),*(undefined8 *)(lVar4 + 0x20),
                        *(undefined8 *)PTR_DAT_07752c80);
        func_0x06a03fd0(lVar5);
        return 1;
      }
    }
LAB_06a04350:
    param_1 = func_0x03280cac();
    *(undefined8 *)(puVar2 + -0x60) = 0x6a04354;
    *(long *)(puVar2 + -0x50) = lVar4;
    *(long *)(puVar2 + -0x48) = lVar5;
    if ((bRam0000000007e2991a & 1) == 0) {
      func_0x03280a18(PTR_DAT_07826980);
      bRam0000000007e2991a = 1;
    }
    uVar6 = 0x6a04388;
    puVar2 = puVar2 + -0x60;
  } while( true );
}


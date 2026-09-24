/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD41F4; Merger.MergeBoard.PowerBoost.Commands.MergeBoardPowerBoostedItemSelectedCommand.Execute; status ok */


/* WARNING: Possible PIC construction at 0x06bd4558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06bd4630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a52d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06bd4634) */
/* WARNING: Removing unreachable block (ram,0x06bd4638) */
/* WARNING: Removing unreachable block (ram,0x06bd4654) */
/* WARNING: Removing unreachable block (ram,0x06bd465c) */
/* WARNING: Removing unreachable block (ram,0x06bd4684) */
/* WARNING: Removing unreachable block (ram,0x06bd4668) */
/* WARNING: Removing unreachable block (ram,0x06bd4674) */
/* WARNING: Removing unreachable block (ram,0x06bd4694) */
/* WARNING: Removing unreachable block (ram,0x06bd455c) */
/* WARNING: Removing unreachable block (ram,0x06bd4560) */
/* WARNING: Removing unreachable block (ram,0x06bd4594) */
/* WARNING: Removing unreachable block (ram,0x06bd459c) */
/* WARNING: Removing unreachable block (ram,0x06bd45b4) */
/* WARNING: Removing unreachable block (ram,0x06bd45c8) */
/* WARNING: Removing unreachable block (ram,0x06bd45d0) */
/* WARNING: Removing unreachable block (ram,0x06bd45f8) */
/* WARNING: Removing unreachable block (ram,0x06bd45dc) */
/* WARNING: Removing unreachable block (ram,0x06bd45e8) */
/* WARNING: Removing unreachable block (ram,0x06bd4608) */
/* WARNING: Removing unreachable block (ram,0x06a52d70) */

void Merger_MergeBoard_PowerBoost_Commands_MergeBoardPowerBoostedItemSelectedCommand__Execute
               (long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined8 auStack_68 [6];
  undefined4 uStack_34;
  
  if ((bRam0000000007e2aabd & 1) == 0) {
    func_0x03280a18(PTR_DAT_078342f8);
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_0776e5b8);
    func_0x03280a18(PTR_DAT_0777a590);
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_07833ed0);
    func_0x03280a18(PTR_DAT_07834300);
    func_0x03280a18(PTR_DAT_07834308);
    func_0x03280a18(PTR_DAT_07834310);
    func_0x03280a18(PTR_DAT_07772600);
    bRam0000000007e2aabd = 1;
  }
  puVar4 = PTR_DAT_0777a590;
  uStack_34 = 0;
  plVar13 = *(long **)(param_1 + 0x40);
  if (plVar13 == (long *)0x0) {
LAB_06bd46c4:
    func_0x03280cac();
LAB_06bd46c8:
    uVar9 = func_0x03280cd0();
    func_0x03280b7c(uVar9,0);
  }
  else {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777a590) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06bd42f8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0777a590,0);
LAB_06bd42f8:
    uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      return;
    }
    if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) goto LAB_06bd46c4;
    func_0x03d1b250(auStack_68,*(long *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_0777a488);
    plVar13 = *(long **)(param_1 + 0x40);
    if (plVar13 == (long *)0x0) goto LAB_06bd46c4;
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
          goto LAB_06bd4384;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar4,5);
LAB_06bd4384:
    uVar11 = (*(code *)*puVar7)(plVar13,auStack_68[0],puVar7[1]);
    if ((uVar11 & 1) == 0) {
      return;
    }
    plVar13 = *(long **)(param_1 + 0x30);
    if (plVar13 == (long *)0x0) goto LAB_06bd46c4;
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07833ed0) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_06bd43f8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07833ed0,3);
LAB_06bd43f8:
    uVar11 = (*(code *)*puVar7)(plVar13,&uStack_34,puVar7[1]);
    puVar4 = PTR_DAT_07833e20;
    if ((uVar11 & 1) == 0) {
      return;
    }
    plVar13 = *(long **)(param_1 + 0x38);
    if (plVar13 == (long *)0x0) goto LAB_06bd46c4;
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07833e20) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x11) * 0x10 + 0x138);
          goto LAB_06bd446c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07833e20,0x11);
LAB_06bd446c:
    uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    uVar5 = uStack_34;
    if ((uVar11 & 1) != 0) {
      return;
    }
    plVar13 = *(long **)(param_1 + 0x38);
    if (plVar13 == (long *)0x0) goto LAB_06bd46c4;
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
          goto LAB_06bd44d8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar4,0xc);
LAB_06bd44d8:
    uVar6 = (*(code *)*puVar7)(plVar13,uVar5,puVar7[1]);
    lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07834310);
    func_0x057da5fc(lVar10,0);
    *(undefined4 *)(lVar10 + 0x10) = uVar5;
    *(undefined4 *)(lVar10 + 0x14) = uVar6;
    plVar13 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_07834308,1);
    if (plVar13 == (long *)0x0) goto LAB_06bd46c4;
    lVar8 = func_0x03280b90(lVar10,*(undefined8 *)(*plVar13 + 0x40));
    if (lVar8 == 0) goto LAB_06bd46c8;
    if ((int)plVar13[3] != 0) {
      plVar13 = plVar13 + 4;
      *plVar13 = lVar10;
      goto SUB_032809c4;
    }
  }
  auVar14 = func_0x03280cb4();
  puVar4 = PTR_DAT_0776fc60;
  if ((bRam0000000007e2aac3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776fc60);
    bRam0000000007e2aac3 = 1;
  }
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar10 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x368);
  func_0x06a504ec(auVar14._0_8_,lVar10,auVar14._8_8_,0x19,0);
  plVar13 = (long *)(auVar14._0_8_ + 0x40);
  *plVar13 = lVar10;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar13 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


slint::include_modules!();

const TAXPER: f64 = 0.30;
const OWNERPER: f64 = 0.55;
const PROFITPER: f64 = 0.05;
const OPEXPER: f64 = 0.10;

fn main() -> Result<(), slint::PlatformError> {
    let ui = AppWindow::new()?;
    let ui_handle = ui.as_weak();

    ui.on_tax_calc(move |string| {
        let num: f64 = string.trim().parse().unwrap();

        let tax: f64 = num * TAXPER;
        let owner: f64 = num * OWNERPER;
        let profit: f64 = num * PROFITPER;
        let oper: f64 = num * OPEXPER;

        let result = format!("TAX: {:.2}\nOWNER: {:.2}\nPROFIT: {:.2}\nOPEX: {:.2}", tax, owner, profit, oper);
        ui_handle.upgrade().unwrap().set_results(result.into());
    });

    ui.run()
}
